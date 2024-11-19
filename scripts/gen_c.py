r"""Generate sources for C."""
import argparse
import tomlkit

newline = "\n"
latest_year = "2022"
cname_len = 65
cunit_len = 33

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
    f.write("module codata__capi_constants" + suffix + newline)
    f.write("    !! Codata Constants - C API Autogenerated"+newline)
    f.write("    use iso_c_binding, only: c_null_char, c_int" + newline)
    f.write("    use codata__constants" + suffix + newline)
    f.write("    use codata__capi_constants_type" + newline)
    f.write("    private"+newline)
    f.write(newline)

def write_year(f, year):
    suffix = get_suffix(year)
    f.write(f"integer(c_int), protected, public, bind(C, name=\"YEAR{suffix}\") :: capi_YEAR{suffix:s} = YEAR{suffix:s} !capi" + newline)
    f.write(newline)

def write_constant(f, var, name, value, uncertainty, unit, year, count):
    suffix = get_suffix(year)
    
    ctag = "!capi"

    # NAMES
    name_list = list(map(lambda s: '"' + s + '"', name))
    cname = ['\" \"'] * cname_len
    cname[0:len(name)] = name_list[:]
    cname[len(name)] = "c_null_char"
    
    indexes = (0, 10, 20, 30, 40, 50)
    cnames = []
    for i in range(0, len(indexes)-1):
        cnames.append(", ".join(cname[indexes[i]: indexes[i+1]]))
    cnames.append(", ".join(cname[indexes[-1]:]))
    
    f.write(f"type(capi_constant_type), protected, public, bind(C, name=\"{var:s}{suffix}\") ::&" + ctag + newline)
    f.write(f"capi_{count:d}{suffix} = capi_constant_type([ &" + ctag + newline)

    # last not comma at the end
    for _cname in cnames[:-1]:
        f.write(f"{_cname:s}, &" + ctag + newline)
    _cname = cnames[-1]
    f.write(f"{_cname:s} &" + ctag + newline)

    # VALUES AND UNCERTAINTY
    f.write("], &" + ctag + newline)
    f.write(f"{var:s}{suffix}%value, &" + ctag + newline)
    f.write(f"{var:s}{suffix}%uncertainty, &" + ctag + newline)
   
    
    # UNITS
    unit_list = list(map(lambda s: '"' + s + '"', unit))
    cname = ['\" \"'] * cunit_len
    cname[0:len(unit)] = unit_list[:]
    cname[len(unit)] = "c_null_char"
    
    indexes = (0, 10, 20)
    cnames = []
    for i in range(0, len(indexes)-1):
        cnames.append(", ".join(cname[indexes[i]: indexes[i+1]]))
    cnames.append(", ".join(cname[indexes[-1]:]))
    
    # last not comma at the end
    f.write("[ &" + ctag + newline)
    for _cname in cnames[:-1]:
        f.write(f"{_cname:s}, &" + ctag + newline)
    _cname = cnames[-1]
    f.write(f"{_cname:s} &" + ctag + newline)
    f.write("])" + ctag + newline)


    f.write(newline)

def write_module_end(f, year):
    suffix = "_" + year 
    f.write("end module codata__capi_constants" + suffix)


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


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='gensrc', description='Generate source code.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
