r"""Generate Python sources."""
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

    f.write(f"\"\"\"Codata constants {year:s}.\"\"\"" + newline)
    f.write(newline)

def write_year(f, year):
    suffix = get_suffix(year)
    f.write(f"YEAR{suffix:s} = {year:s}" + newline)
    f.write(newline)


def write_constant(f, var, name, value, uncertainty, unit, year):
    suffix = get_suffix(year)

    f.write(f"{var:s}{suffix:s}" + "={" + newline)
    f.write(f"\"name\": \"{name:s}\"," + newline)
    f.write(f"\"value\": {value:s}," + newline)
    f.write(f"\"uncertainty\": {uncertainty:s}," + newline)
    f.write(f"\"unit\": \"{unit:s}\"" + newline)
    f.write("}")

    f.write(newline)

def write_module_end(f, year):
    pass

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

def write_version()->None:
    
    version = None
    with open("VERSION", "r") as f:
        version = f.read().strip()

    fobj = open('./src/pycodata/version.py', "w")
    fobj.write("\"\"\"Version\"\"\"" + newline)
    fobj.write(f"__version__ = \"{version:s}\"")
    fobj.close


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='genpython', description='Generate python sources.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
    write_version()
