r"""setup"""
import platform
from setuptools import setup, Extension

libraries = None
library_dirs = None
runtime_library_dirs = None
extra_objects = None

if platform.system() == "Linux":
    libraries = ["codata"]
    library_dirs = ["./pycodata"]
    runtime_library_dirs = ["$ORIGIN"]
if platform.system() == "Windows":
    extra_objects = ["./pycodata/libcodata.dll.a"]
if platform.system() == "Darwin":
    libraries = ["codata"]
    library_dirs = ["./pycodata"]
    runtime_library_dirs = ["@loader_path"]

if __name__ == "__main__":

    mod_ext = Extension(name="pycodata.constants",
                        sources=["./pycodata/cpy_codata_constants.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    setup(ext_modules=[mod_ext])

