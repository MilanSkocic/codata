"""Python wrapper of the (Modern Fortran) codata library."""
import platform
import os
import pathlib

intel_redist_32 = pathlib.Path("C:\\Program Files (x86)\\Common Files\\Intel\\Shared Libraries\\redist\\ia32_win\\compiler")
intel_redist_64 = pathlib.Path("C:\\Program Files (x86)\\Common Files\\Intel\\Shared Libraries\\redist\\intel64_win\\compiler")
arch = None

if platform.system() == "Windows":
    arch = platform.architecture()[0]
    if arch == "64bit":
        if intel_redist_64.exists():
            os.add_dll_directory(intel_redist_64)
        else:
            print("ERROR: Intel Fortran Redistributable intel64_win was not found.")
    elif arch == "32bit":
        if intel_redist_32.exists():
            os.add_dll_directory(intel_redist_32)
        else:
            print("ERROR: Intel Fortran Redistributable ia32_win was not found.")
    else:
        print(f"Error: Architecture was not properly detected:  arch={arch:s}")
        print("Error: dll dependencies cannot be loaded.")

from .version import *
from ._codata import *