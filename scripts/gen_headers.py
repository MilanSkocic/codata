r"""Generate C headers."""
import argparse
import tomlkit

newline = "\n"
latest_year = "2022"

def get_year(fpath: str)->str:
    return fpath.split("/")[-1].split("_")[1].split(".")[0]

def get_suffix(year):
    if year == latest_year:
        suffix = ""
    else:
        suffix = "_" + year

    return suffix

def write_module_start(f, year):
    suffix = "_" + year
    f.write(f"#ifndef CODATA_CONSTANTS{suffix:s}_H" + newline)
    f.write(f"#define CODATA_CONSTANTS{suffix:s}_H" + newline)
    f.write("#if _MSC_VER" + newline)
    f.write("#define ADD_IMPORT __declspec(dllimport)" + newline)
    f.write("#else" + newline)
    f.write("#define ADD_IMPORT" + newline)
    f.write("#endif" + newline)
    f.write("#include \"codata_constants_type.h\"" + newline)
    f.write(newline)

def write_year(f, year):
    suffix = get_suffix(year)
    f.write(f"ADD_IMPORT extern const int YEAR{suffix:s};" + newline)

def write_constant(f, var, name, value, uncertainty, unit, year):
    suffix = get_suffix(year)
    f.write(f"ADD_IMPORT extern const struct codata_constant_type {var:s}{suffix:s};")
    f.write(newline)

def write_module_end(f, year):
    f.write("#endif")


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
    
    f = open("../VERSION", "r")
    version = f.read().strip()
    f.close()
    f = open("codata_version.h", "w")
    f.write("#ifndef CODATA_VERSION_H" + newline)
    f.write("#define CODATA_VERSION_H" + newline)
    f.write(f"extern const char *version;" + newline)
    f.write("#endif" + newline)
    f.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='gencheaders', description='Generate C headers.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
