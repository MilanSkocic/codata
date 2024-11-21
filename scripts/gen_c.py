r"""Generate sources for C."""
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
    f.write("#include \"codata_constants_type.h\"" + newline)
    f.write(f"#include \"codata_constants{suffix}.h\"" + newline)
    f.write(newline)

def write_year(f, year):
    suffix = get_suffix(year)
    f.write(f"const int YEAR{suffix:s} = {year:s}; /** Year of release */" + newline)
    f.write(newline)

def write_constant(f, var, name, value, uncertainty, unit, year, count):
    suffix = get_suffix(year)
    
    f.write(f"const struct codata_constant_type {var:s}{suffix:s} = " + "{" + newline)
    f.write(f"\"{name:s}\"," + newline)
    f.write(f"{value:s}," + newline)
    f.write(f"{uncertainty:s}," + newline)
    f.write(f"\"{unit:s}\"" + newline)
    f.write("};" + f"/** {name} */" + newline)
    f.write(newline)


def write_module_end(f, year):
    # suffix = "_" + year 
    # f.write("end module codata__capi_constants" + suffix)
    pass


def run(fpath_ast: str, fpath_code: str)->None:
    
    year = get_year(fpath_ast)
    
    fcode = open(fpath_code, "w")
    fast = open(fpath_ast, "r")

    write_module_start(fcode, year)
    write_year(fcode, year)

    ast = tomlkit.load(fast)
    for i, var in enumerate(ast.keys()):
        name = ast[var]["name"]
        value = ast[var]["value"]
        uncertainty = ast[var]["uncertainty"]
        unit = ast[var]["unit"]
        
        write_constant(fcode, var, name, value, uncertainty, unit, year, i)
    
    write_module_end(fcode, year)

    fast.close()
    fcode.close()
    
    f = open("VERSION", "r")
    version = f.read().strip()
    f.close()
    f = open("./src/codata_version.c", "w")
    f.write("#include \"codata_version.h\"" + newline)
    f.write(f"const char version[32] = \"{version:s}\";" + newline)
    f.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='genc', description='Generate source code.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
