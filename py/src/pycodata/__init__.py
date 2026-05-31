"""Codata constants.
 
The latest values (2022) do not have the year as a suffix in their name.
Older values can be used and they feature the year as a suffix in their name.
The names of constants are the same as the one defined in Fortran and C.

All constants are available at the top level of the module. 
"""
import platform
import subprocess
import sys
from pathlib import Path

from .version import __version__
from .constants_2022 import *
from .constants_2018 import *
from .constants_2014 import *
from .constants_2010 import *


def main():
    binary = Path(__file__).parent / platform.system().lower() / "bin" / "codata"
    if platform.system() == "Windows":
        binary = binary.with_suffix(".exe")

    res = subprocess.run([binary] + sys.argv[1:])
    sys.exit(res.returncode)
