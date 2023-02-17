import os
from setuptools import setup, find_packages, Extension
import configparser
import importlib

# Import only version.py file for extracting the version
spec = importlib.util.spec_from_file_location('version', './pycodata/version.py')
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

def read(fname):
    return open(os.path.join(os.path.dirname(__file__), fname), 'r', encoding='utf-8').read()

cfg = configparser.ConfigParser()
cfg.read("site.cfg")

codata_include_dirs = cfg["CODATA"]["include_dirs"]
codata_library_dirs = cfg["CODATA"]["library_dirs"]
codata_libraries = cfg["CODATA"]["libraries"]

mod_ext = Extension(name="pycodata._codata",
                                         sources=["./pycodata/_codata.c"],
                                         libraries=[codata_libraries],
                                         library_dirs=[codata_library_dirs],
                                         include_dirs=[codata_include_dirs])
setup(name=mod.__package_name__,
      version=mod.__version__,
      maintainer=mod.__maintainer__,
      maintainer_email=mod.__maintainer_email__,
      author=mod.__author__,
      author_email=mod.__author_email__,
      description=mod.__package_name__,
      long_description=read('README.rst'),
      url='https://milanskocic.github.io/mod/index.html',
      download_url='https://github.com/MilanSkocic/mod/',
      packages=find_packages(),
      include_package_data=True,
      python_requires='>=3.7',
      install_requires=read('./requirements.txt').split('\n'),
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