r"""Generate CPython sources."""
import argparse
import tomlkit

newline = "\n"
latest_year = "2022"

def get_year(fpath: str)->str:
    return fpath.split("/")[-1].split("_")[2].split(".")[0]

def get_suffix(year):
    if year == latest_year:
        suffix = ""
    else:
        suffix = "_" + year

    return suffix

def write_module_start(f, year):
    suffix = "_" + year

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
    f.write("    PyObject *v;" + newline)
    f.write("    PyObject *constant;" + newline)
    f.write(f"    m = PyModule_Create(&constants{suffix:s});" + newline)
    f.write("    d = PyModule_GetDict(m);" + newline)
    f.write(newline)

def write_year(f, year):
    suffix = get_suffix(year)

    f.write(f"    v = PyLong_FromLong(YEAR{suffix:s});" + newline)
    f.write(f"    PyDict_SetItemString(d, \"YEAR{suffix:s}\", v);" + newline)
    f.write("    Py_INCREF(v);" + newline)
    f.write(newline)

def write_constant(f, var, name, value, uncertainty, unit, year):
    suffix = get_suffix(year)
    
    f.write("    constant = Py_BuildValue(\"{s:s, s:d, s:d, s:s}\"," + newline)
    f.write(f"    \"name\", {var:s}{suffix:s}.name," + newline)
    f.write(f"    \"value\", {var:s}{suffix:s}.value," + newline)
    f.write(f"    \"uncertainty\", {var:s}{suffix:s}.uncertainty," + newline)
    f.write(f"    \"unit\", {var:s}{suffix:s}.unit" + newline)
    f.write("    );" + newline)
    f.write("    PyDict_SetItemString(d, \"" + f"{var:s}{suffix:s}" + "\", constant);" + newline)
    f.write("    Py_INCREF(constant);" + newline)

    f.write(newline)

def write_module_end(f, year):
    f.write("    return m;" + newline)
    f.write("}")


def run(fpath_ast: str, fpath_code: str)->None:
    
    year = get_year(fpath_ast)
    
    fcode = open(fpath_code, "w")
    fast = open(fpath_ast, "r")

    write_module_start(fcode, year)
    write_year(fcode, year)

    ast = tomlkit.load(fast)
    for var in ast.keys():
        name = ast[var]["name"]
        value = ast[var]["value"]
        uncertainty = ast[var]["uncertainty"]
        unit = ast[var]["unit"]
        write_constant(fcode, var, name, value, uncertainty, unit, year)
    
    write_module_end(fcode, year)

    fast.close()
    fcode.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='gencpython', description='Generate cpython sources.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
