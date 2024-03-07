r"""setup"""
import platform
from setuptools import setup, Extension

libraries = None
library_dirs = None
runtime_library_dirs = None
extra_objects = None

if platform.system() == "Linux":
    libraries = ["codata"]
    library_dirs = ["./src/pycodata"]
    runtime_library_dirs = ["$ORIGIN"]
if platform.system() == "Windows":
    extra_objects = ["./src/pycodata/libcodata.dll.a"]
if platform.system() == "Darwin":
    libraries = ["codata"]
    library_dirs = ["./src/pycodata"]
    runtime_library_dirs = ["@loader_path"]

if __name__ == "__main__":

    mod_constants_latest = Extension(name="pycodata.constants_latest",
                        sources=["./src/pycodata/cpy_codata_constants_latest.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2018 = Extension(name="pycodata.constants_2018",
                        sources=["./src/pycodata/cpy_codata_constants_2018.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2014 = Extension(name="pycodata.constants_2014",
                        sources=["./src/pycodata/cpy_codata_constants_2014.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_constants_2010 = Extension(name="pycodata.constants_2010",
                        sources=["./src/pycodata/cpy_codata_constants_2010.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    mod_version = Extension(name="pycodata.version",
                        sources=["./src/pycodata/cpy_codata_version.c"],
                        libraries=libraries,
                        library_dirs=library_dirs,
                        runtime_library_dirs=runtime_library_dirs,
                        extra_objects=extra_objects)
    setup(ext_modules=[mod_constants_latest, mod_constants_2018, mod_constants_2014, mod_constants_2010, mod_version])

