r"""Setup."""
import platform
from setuptools import setup, Extension

name = "codata"
libraries = None
library_dirs = None
runtime_library_dirs = None
extra_objects = None
ext = [".so"]


if platform.system() == "Linux":
    libraries = [name]
    library_dirs = [f"./src/py{name:s}"]
    runtime_library_dirs = ["$ORIGIN"]
    ext = [".so"]
if platform.system() == "Windows":
    extra_objects = [f"./src/py{name:s}/lib{name:s}.dll.a"]
    ext = [".dll", ".dll.a"]
if platform.system() == "Darwin":
    libraries = [name]
    library_dirs = [f"./src/py{name:s}"]
    runtime_library_dirs = ["@loader_path"]
    ext = [".dylib"]

version = None
with open("./VERSION", "r") as f:
    version = f.read().strip()

if __name__ == "__main__":

    mod_constants_2022 = Extension(name="pycodata.constants_2022",
                        sources=["./src/pycodata/_codata_constants_2022.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2018 = Extension(name="pycodata.constants_2018",
                        sources=["./src/pycodata/_codata_constants_2018.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2014 = Extension(name="pycodata.constants_2014",
                        sources=["./src/pycodata/_codata_constants_2014.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2010 = Extension(name="pycodata.constants_2010",
                        sources=["./src/pycodata/_codata_constants_2010.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_version = Extension(name="pycodata.version",
                        sources=["./src/pycodata/_codata_version.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    setup(version=version,
         ext_modules=[mod_constants_2022, mod_constants_2018, mod_constants_2014, mod_constants_2010, mod_version]
         )

