#!/usr/bin/env python
r"""Generate CPython sources."""
import argparse
import pathlib
import tomlkit

newline = "\n"

def get_year(fpath: str)->str:
    return fpath.split("/")[-1].split("_")[2].split(".")[0]

def get_latest_year(fpath: str)->str:
    r"""Latest available adjustment, derived the same way as common:gly()."""
    d = pathlib.Path(fpath).parent
    years = [get_year(str(p)) for p in d.glob("codata_constants_*.toml")]
    return max(years, key=int)

def get_renames(fpath: str)->dict:
    r"""Reviewed map of quantities NIST renamed between adjustments.

    Each vintage carries exactly one name of a renamed pair; the other is
    emitted as an alias, so that code written against either spelling works
    against every adjustment.
    """
    aliases = {}
    p = pathlib.Path(fpath).parent.parent / "renames.tsv"
    with open(p, "r") as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            old, new = line.split("\t")[:2]
            aliases[old] = new
            aliases[new] = old
    return aliases

def get_suffix(year, latest_year):
    if year == latest_year:
        suffix = ""
    else:
        suffix = "_" + year

    return suffix

def write_module_start(f, year):
    suffix = "_" + year
    f.write("/* SPDX-License-Identifier: MIT */" + newline)
    f.write(newline)
    f.write("//"+"="*70+newline)
    f.write(f"// MODULE: codata{suffix:s}"+newline)
    f.write("//"+"="*70+newline)
    f.write("#define PY_SSIZE_T_CLEAN" + newline)
    f.write("#include <Python.h>" + newline)
    f.write(f"#include \"codata.h\"" + newline)
    f.write(newline)
    f.write(f"PyDoc_STRVAR(module_docstring, \"C extension for constants {year:s}.\");" + newline)
    f.write(newline)
    f.write("static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};" + newline)
    f.write(newline)
    f.write(f"static struct PyModuleDef constants{suffix:s} " + "= {PyModuleDef_HEAD_INIT, \"constants" + f"{suffix:s}" + "\", module_docstring, -1, myMethods};" + newline)

    f.write(f"PyMODINIT_FUNC PyInit_constants{suffix:s}(void)" + "{" + newline)
    f.write("    PyObject *m;" + newline)
    f.write("    PyObject *d;" + newline)
    #f.write("    PyObject *v;" + newline)
    f.write("    PyObject *constant;" + newline)
    f.write(f"    m = PyModule_Create(&constants{suffix:s});" + newline)
    f.write("    d = PyModule_GetDict(m);" + newline)
    f.write(newline)

def write_year(f, year, latest_year):
    suffix = get_suffix(year, latest_year)

    f.write(f"    v = PyLong_FromLong(YEAR{suffix:s});" + newline)
    f.write(f"    PyDict_SetItemString(d, \"YEAR{suffix:s}\", v);" + newline)
    f.write("    Py_DECREF(v);" + newline)
    f.write(newline)

def write_constant(f, var, name, value, uncertainty, unit, year, latest_year, aliases):
    suffix = get_suffix(year, latest_year)
    
    f.write("    constant = Py_BuildValue(\"{s:s, s:d, s:d, s:s}\"," + newline)
    f.write(f"    \"name\", {var:s}{suffix:s}.name," + newline)
    f.write(f"    \"value\", {var:s}{suffix:s}.value," + newline)
    f.write(f"    \"uncertainty\", {var:s}{suffix:s}.uncertainty," + newline)
    f.write(f"    \"unit\", {var:s}{suffix:s}.unit" + newline)
    f.write("    );" + newline)
    f.write("    PyDict_SetItemString(d, \"" + f"{var:s}{suffix:s}" + "\", constant);" + newline)
    # The latest adjustment carries no suffix, so also expose it under its
    # year-suffixed name; a caller can then pin to it before the next
    # adjustment is released.
    if suffix == "":
        f.write("    PyDict_SetItemString(d, \"" + f"{var:s}_{year:s}" + "\", constant);" + newline)
    alias = aliases.get(var)
    if alias is not None:
        f.write("    PyDict_SetItemString(d, \"" + f"{alias:s}_{year:s}" + "\", constant);" + newline)
        if suffix == "":
            f.write("    PyDict_SetItemString(d, \"" + f"{alias:s}" + "\", constant);" + newline)
    f.write("    Py_DECREF(constant);" + newline)

    f.write(newline)

def write_module_end(f, year):
    f.write("    return m;" + newline)
    f.write("}")


def run(fpath_ast: str, fpath_code: str)->None:
    
    year = get_year(fpath_ast)
    latest_year = get_latest_year(fpath_ast)
    aliases = get_renames(fpath_ast)
    
    fcode = open(fpath_code, "w")
    fast = open(fpath_ast, "r")

    write_module_start(fcode, year)
    #write_year(fcode, year)

    ast = tomlkit.load(fast)
    for var in ast.keys():
        name = ast[var]["name"]
        value = ast[var]["value"]
        uncertainty = ast[var]["uncertainty"]
        unit = ast[var]["unit"]
        write_constant(fcode, var, name, value, uncertainty, unit, year, latest_year, aliases)
    
    write_module_end(fcode, year)

    fast.close()
    fcode.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='gencpython', description='Generate cpython sources.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
