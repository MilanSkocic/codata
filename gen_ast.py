r"""Generate language independant representation of Codata constants."""
import argparse
import tomlkit


NAMES_LENGTH = 60 
VALUES_LENGTH = 25
UNCERTAINTIES_LENGTH = 25
UNITS_LENGTH = 25


def get_year(fpath: str)->str:
    return fpath.split("/")[-1].split("_")[1].split(".")[0]

def get_skiprows(fpath: str)->int:
    with open(fpath, "r") as f:
        k = 0
        for line in f:
            if line.startswith("-"):
                break
            else:
                k += 1

    return k+1

def get_n(fpath: str)->int:
    with open(fpath, "r") as f:
        for line in f:
            if line.startswith("-"):
                break
        
        k = 0
        for line in f:
            k += 1

    return k+1


def format_name(line: str)->str:
    i = 0
    j = NAMES_LENGTH
    return line[i:j].rstrip()

def format_variable(name: str)->str:
    variable = name.replace(" ", "_").replace(".","").replace(",","")
    variable = variable.replace("-","_").replace("(","").replace(")","")
    variable = variable.replace("/","_")
    variable = variable.replace("{220}_","").upper()
    return variable

def format_value(line: str)->str:
    i = NAMES_LENGTH
    j = i + VALUES_LENGTH
    v = line[i:j].replace(" ","").replace("...","").rstrip()
    return v

def format_uncertainty(line: str)->str:
    i = NAMES_LENGTH + VALUES_LENGTH
    j = i + UNCERTAINTIES_LENGTH
    v = line[i:j].replace(" ", "").replace("(exact)", "0.0").rstrip()
    return v

def format_unit(line: str)->str:
    i = NAMES_LENGTH + VALUES_LENGTH + UNCERTAINTIES_LENGTH
    j = i + UNITS_LENGTH
    unit = line[i:j].rstrip()
    return unit

def run(fpath_raw: str, fpath_ast:str)->None:
    year = get_year(fpath_raw)
    skiprows = get_skiprows(fpath_raw)
    
    toml = tomlkit.document()
    
    k = 0
    fpath = fpath_raw
    with open(fpath, "r") as f:
        for line in f:
            if k >=skiprows :
                line = line.replace("\n", "")
                
                name = format_name(line)
                value = format_value(line)
                uncertainty = format_uncertainty(line)
                unit = format_unit(line)
                variable = format_variable(name)

                toml.update({variable: {"name": name, 
                                        "year": year, 
                                        "value": value,
                                        "uncertainty": uncertainty,
                                        "unit": unit}})
            k += 1

    fpath = fpath_ast
    with open(fpath, "w") as f:
        f.write(tomlkit.dumps(toml))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='genast', description='Generate toml files from raw codata data.')
    parser.add_argument("raw", help="File path to the raw data from http://physics.nist.gov/constants.")
    parser.add_argument("ast", help="File path to the toml file for the ast output.")
    args = parser.parse_args() 

    run(args.raw, args.ast)
