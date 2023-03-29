import os
from setuptools import setup, find_packages, Extension
import configparser
import importlib
import pathlib
import platform

# Import only version.py file for extracting the version
spec = importlib.util.spec_from_file_location('version', './pycodata/version.py')
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

def get_custom_cfg(fpath):
    cfg = configparser.RawConfigParser()
    if fpath.exists():
        print(f"{fpath.name} was found.")
        cfg.read(fpath)
    else:
        print(f"{fpath.name} was not found.")

    return cfg

def set_extensions():
    if platform.system() == "Windows":
        prefix = ""
        ext_shared = ".dll"
        ext_static = ".lib"
    elif platform.system() == "Darwin":
        prefix = "lib"
        ext_shared = ".dylib"
        ext_static = ".a"
    else:
        prefix = "lib"
        ext_shared = ".so"
        ext_static = ".a"
    return prefix, ext_shared, ext_static

def get_default_dirs(dir_name):
    dirs = []
    for root in all_roots:
        dirs.append(root + f"/{dir_name}")
    
    return ",".join(dirs)

def search_headers(include_dirs, libraries):
    found = 0
    for library in libraries:
        print(f"Looking for {library}.h...")
        for dir in include_dirs:
            fdir = pathlib.Path(dir)
            if fdir.exists():
                fpath = fdir / f"{library}.h"
                print(f"\t{fpath}...{fpath.exists()}")
                if fpath.exists():
                    found += 1

    return found
                
def search_libraries(lib_dirs, libraries, static=False):
    found = 0
    prefix, ext_shared, ext_static = set_extensions()
    if static:
        ext = ext_static
    else:
        ext = ext_shared
    for library in libraries:
        print(f"Looking for {library}{ext}...")
        for dir in lib_dirs:
            fdir = pathlib.Path(dir)
            if fdir.exists():
                fpath = fdir / (prefix+f"{library}"+ext)
                print(f"\t{fpath}...{fpath.exists()}")
                if fpath.exists():
                    found += 1

    return found

# default roots for library dirs
unix_roots = ["/usr", "/usr/local"]
win_roots = ["C:/Program Files/codata"]
user_roots = [os.path.expanduser("~")+"/codata", os.path.expanduser("~")+"/.local"]
all_roots = unix_roots + win_roots + user_roots

default_include_dirs = get_default_dirs("include")
default_lib_dirs = get_default_dirs("lib")


# Set dirs for codata library
cfg_dict = {"CODATA": {"libraries": "codata",
                       "include_dirs": default_include_dirs,
                       "library_dirs": default_lib_dirs}}

cfg = configparser.RawConfigParser()
cfg.read_dict(cfg_dict)
cfg_user = get_custom_cfg(pathlib.Path("site.cfg"))
cfg_package = get_custom_cfg(pathlib.Path(os.path.expanduser("~")) / "pycodata-site.cfg")
cfg.update(cfg_user)
cfg.update(cfg_package)

codata_include_dirs = cfg["CODATA"]["include_dirs"].split(",")
codata_library_dirs = cfg["CODATA"]["library_dirs"].split(",")
codata_libraries = cfg["CODATA"]["libraries"].split(",")



if __name__ == "__main__":

    found_headers = search_headers(codata_include_dirs, codata_libraries)
    found_shared = search_libraries(codata_library_dirs, codata_libraries, static=False)
    found_static = search_libraries(codata_library_dirs, codata_libraries, static=True)

    mod_ext = Extension(name="pycodata._codata",
                                         sources=["./pycodata/_codata.c"],
                                         libraries=codata_libraries,
                                         library_dirs=codata_library_dirs,
                                         include_dirs=codata_include_dirs)
    setup(name=mod.__package_name__,
        version=mod.__version__,
        maintainer=mod.__maintainer__,
        maintainer_email=mod.__maintainer_email__,
        author=mod.__author__,
        author_email=mod.__author_email__,
        description=mod.__package_name__,
        long_description=pathlib.Path("README.rst").read_text(encoding="utf-8"),
        long_description_content_type="text/x-rst",
        url='https://milanskocic.github.io/pycodata/index.html',
        download_url='https://github.com/MilanSkocic/pycodata',
        packages=find_packages(),
        include_package_data=True,
        python_requires='>=3.7',
        install_requires=pathlib.Path("requirements.txt").read_text(encoding="utf-8").split('\n'),
        classifiers=["Development Status :: 4 - Beta",
                    "Intended Audience :: Science/Research",
                    "License :: OSI Approved :: GNU General Public License v3 (GPLv3)",
                    "Programming Language :: Python",
                    "Programming Language :: Python :: 3 :: Only",
                    "Programming Language :: Python :: 3.7",
                    "Programming Language :: Python :: 3.8",
                    "Programming Language :: Python :: 3.9",
                    "Programming Language :: Python :: 3.10",
                    "Programming Language :: Python :: 3.11",
                    "Topic :: Scientific/Engineering",
                    "Operating System :: OS Independent"],
            ext_modules=[mod_ext]
        )


# pypi
# >>> python setup.py sdist bdist_wheel
# >>> python -m twine upload dist/*
# >>> python -m twine upload --repository testpypi dist/*