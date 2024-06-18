r"""Concatenate all constants prototypes."""
import argparse

newline = "\n"

def write_module_start(f):
    ftpl = open("codata.h.start", "r")
    f.write( ftpl.read() )
    ftpl.close()
    
def write_module_end(f):
    ftpl = open("codata.h.end", "r")
    f.write( ftpl.read() )
    ftpl.close()

def run(headers, output):

    fout = open(output, "w")

    write_module_start(fout)
    
    for file in headers:
        f = open(file, "r")
        prototypes = f.read()
        fout.write(prototypes)
        fout.write("\n")
        f.close()
    
    write_module_end(fout)

    fout.close()

if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='genheader', description='Generate main C header.')
    parser.add_argument("headers", nargs="+", help="Headers to be concatenated.")
    parser.add_argument("-o", "--output", default="header.h", type=str, help="File path to the source file for output.")
    args = parser.parse_args() 

    run(args.headers, args.output)
