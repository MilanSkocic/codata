r"""Generate the Python modules."""
import argparse


def run(fpath_ast: str, fpath_code: str)->None:
    fast = open(fpath_ast, "r")
    fcode = open(fpath_code, "w")

    for line in fast:
        new_line = line.replace("codata__constants_type", "stdlib_codata_type")
        new_line = new_line.replace("use iso_fortran_env, only: dp=>real64, int32", "use stdlib_kinds, only: dp, int32")
        new_line = new_line.replace("codata__constants_2022", "stdlib_codata")
        fcode.write(new_line)

    fast.close()
    fcode.close()


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='genstdlib', description='Generate source code for stdlib.')
    parser.add_argument("ast", help="File path to the Toml file for ast input.")
    parser.add_argument("code", help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.ast, args.code)
