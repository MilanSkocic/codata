# Introduction

`codata` is a  Fortran library providing the standard and abridged atomic weights, 
the isotopic abundance and the isotopes' standard atomic weights.
The data are taken from http://ciaaw.org. 
C API allows usage from C, or can be used as a basis for other wrappers.
Python wrapper allows easy usage from Python.

The names are quite long and can be aliased with shorter names.

To use `codata` within your [fpm](https://github.com/fortran-lang/fpm) project,
add the following to your `fpm.toml` file:

```
    [dependencies]
    codata = { git="https://github.com/MilanSkocic/codata.git" }
```

**Notes**: 

* The latest codata constants were integrated in the [stdlib](https://github.com/fortran-lang/stdlib/releases/tag/v0.7.0). The constants are implemented as derived type which carries the name, the value, the uncertainty and the unit. This library will be complementary to the constants defined in the stdlib by providing older values for the constants. 

* If you only need sources for the codata constants that you can integrate directly in your sources you may be interested by https://github.com/vmagnin/fundamental_constants. 


# Dependencies

```
gfortran>=10
fpm>=0.7
stdlib>=0.5
fypp>=3.0
```


# Installation

A Makefile is provided, which uses [fpm](https://fpm.fortran-lang.org), for building the library.

* On windows, [msys2](https://www.msys2.org) needs to be installed. 
  Add the msys2 binary (usually C:\\msys64\\usr\\bin) to the path in order to be able to use make.
* On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

Build: the configuration file will set all the environment variables necessary for the compilation

```
    chmod +x configure.sh
    . ./configure.sh
    make
    make install
    make uninstall
```


# License

MIT


```
MIT License

Copyright (c) Milan Skocic

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
```


# Examples
## Fortran
```Fortran
program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print '(A)', '########## EXAMPLE IN FORTRAN ##########'
    
    print '(A)', '# VERSION'
    print *, "version = ", get_version()
    
    print '(A)', '# CONSTANTS'
    print *, "c = ",  SPEED_OF_LIGHT_IN_VACUUM%value
    
    print '(A)', '# UNCERTAINTY'
    print *, "u(c) = ", SPEED_OF_LIGHT_IN_VACUUM%uncertainty

    print '(A)', '# OLDER VALUES'
    print '(A, F23.16)', "Mu_2022(latest) = ", MOLAR_MASS_CONSTANT%value
    print '(A, F23.16)', "Mu_2018 = ", MOLAR_MASS_CONSTANT_2018%value
    print '(A, F23.16)', "Mu_2014 = ",  MOLAR_MASS_CONSTANT_2014%value
    print '(A, F23.16)', "Mu_2010 = ",  MOLAR_MASS_CONSTANT_2010%value


end program
```
## C
```C
#include <stdio.h>
#include "codata.h"

int main(void){
    
    printf("########## EXAMPLE IN C ##########\n");

    printf("%s\n","# VERSION");
    printf("version = %s\n", codata_get_version());
    
    printf("%s\n","# CONSTANTS");
    printf("c = %f\n", SPEED_OF_LIGHT_IN_VACUUM.value);
    
    printf("%s\n","# UNCERTAINTY");
    printf("u(c) = %f\n", SPEED_OF_LIGHT_IN_VACUUM.uncertainty);
    
    printf("%s\n","# OLDER VALUES");
    printf("Mu_2022(latest) = %23.16f\n", MOLAR_MASS_CONSTANT.value);
    printf("Mu_2018 = %23.16f\n", MOLAR_MASS_CONSTANT_2018.value);
    printf("Mu_2014 = %23.16f\n", MOLAR_MASS_CONSTANT_2014.value);
    printf("Mu_2010 = %23.16f\n", MOLAR_MASS_CONSTANT_2010.value);

    return 0;
}
```
## Python
```Python
r"""Example in python."""
import sys
sys.path.insert(0, "../src/")
import pycodata

print("########## EXAMPLE IN PYTHON ##########")
print("# VERSION")
print(f"version = {pycodata.__version__}")

print("# Constants")
print(f"c =", pycodata.SPEED_OF_LIGHT_IN_VACUUM["value"])

print("# UNCERTAINTY")
print(f"u(c) = ", pycodata.SPEED_OF_LIGHT_IN_VACUUM["uncertainty"])

print("# OLDER VALUES")
print(f"Mu_2022 = ", pycodata.MOLAR_MASS_CONSTANT["value"])
print(f"Mu_2018 = ", pycodata.codata_constants_2018.MOLAR_MASS_CONSTANT_2018["value"])
print(f"Mu_2014 = ", pycodata.codata_constants_2014.MOLAR_MASS_CONSTANT_2014["value"])
print(f"Mu_2010 = ", pycodata.codata_constants_2010.MOLAR_MASS_CONSTANT_2010["value"])
```


# References
Mohr, P. J., B. N. Taylor, and D. B. Newell. 2012. “CODATA recommended
values of the fundamental physical constants: 2010.” *Review of Modern
Physics*, 84.

Mohr, P. J., B. N. Taylor, and D. B. Newell. 2016. “CODATA recommended
values of the fundamental physical constants: 2014.” *Journal of
Physical and Chemical Reference Data*, 45.

Mohr, P. J., B. N. Taylor, and D. B. Newell. 2021. “CODATA recommended
values of the fundamental physical constants: 2018.” *Review of Modern
Physics*, 93.


# Changelog
## 2.1.1

* No code change.
* Code refractoring and cleaning
* Update CI/CD workflows.

[Full changelog](https://github.com/MilanSkocic/codata/releases)


## 2.1.0

* Roll back to C API in Fortran code: easier maintenance.
* Roll back to compiled C extension for python: easier maintenance.

Full changelog available at [github](https://github.com/milanskocic/codata/releases)


## 2.0.1

* Fix bug in version for Fortran code.

Full changelog available at [github](https://github.com/milanskocic/codata/releases)


## 2.0.0

* Drop compiled extensions for Python.
* Pure Python code for constants auto-generated as it is the case for the Fortran code.
* Pure C code for constants auto-generated as it is the case for the Fortran code.
* API break:
    * No more C API in the Fortran code. 
    * Use the pure C code to build a C library.

Full changelog available at [github](https://github.com/milanskocic/codata/releases)

## 1.2.2

* Fix conflict that could occur with C API modules. Add prefix in module names.
* Cleanup and refractoring.
* Documentation update.


## 1.2.1

* Refractoring
* Merge back C API and python wrapper.

Full changelog available at [github](https://github.com/milanskocic/codata/releases)


## 1.2.0

* Refractoring
* Documentation update.

Full changelog available at [github](https://github.com/milanskocic/codata/releases)


## 1.1.0

* C API and Python wrapper moved to their own repositories.
    * [C wrapper](https://github.com/MilanSkocic/codata-capi)
    * [Python wrapper](https://github.com/MilanSkocic/codata-py)
* API break: C API is no more provided by default. Use the optional C wrapper.
* Code cleanup
* Documentation update

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)


## 1.0.0

* Add codata values for 2010, 2014 and 2018.
* Code refractoring and code cleaning.
* Documentation update and switch to only FORD documentation.
* Rewrite code generators in python.
* Generate source code for stdlib.
* API break: constants are defined as DT like in stdlib.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.10.0 

* Remove remove generation of the version module.
* Add tests using the test-drive framework.
* Explicit parameter constants for Fortran and protected constants for C API.
* Minor fixes in documentation.
* Code cleanup.
* Merge of all code for autogeneration in one file.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.9.0

* No API changes.
* Automatic generation of the version module.
* Generic Makefiles for automatic the building process of the library and the pywrapper.
* Add targets: build, build_debug, test, test_debug.
* Minor fixes in documentation.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.8.2

* No API changes.
* Improve Makefile for generating the source code at each compilation.
* Source generator rewritten in Fortran. 
* Switch to pyproject.toml for the Python wrapper.
* Minor fixes in documentation.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.8.1

* Use shared library in python wrapper.
* Minor fixes in documentation.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.8.0

* Back to the approach with a library.
* Compatible with fpm.
* Configuration file for setting all the environmental variables.
* Global makefile for building a static library (through fpm) and a shared library.
* Automatic copy of the necessary sources for the python wrapper.
* Python wrapper built with the static library
   * no dependency on a shared library.
   * sources and static library embeded in the python wrapper.
* FORD for documenting the Fortran code.
* Integration of the FORD documentation into the main documentation with sphinx.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.7.1

* Minor fixes in generator code
* Add automatic copy of c sources for the python wrapper.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.7.0

* Migrate documentation from doxygen to sphinx+breathe.
* Add YEAR constant indicating the year of the codata constants.
* Refractoring

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.6.0

* Created documentation.
* Fixed missing uncertainties for Cpython.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.5.0

* Changed the complete approach by not generating a library but only source files for different languages.
* Available languages: Fortran, C, python, CPython

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.4.0

* Bring back pywrapper in the codata repository to sync versions.
* Improvements of the documentation.

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.3.0

* Only last codata constants. 

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.2.1

* Integration of Intel Fortran compiler and MSVC in cmake scripts.
* Add specifications and instructions for compiling on Windows 

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.2.0

* Bug fixes for the codata 2010.
* Bug fixes in the tests linked to the codata 2010.
* Add python wrapper for the number of constants method. 

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).



## 0.1.0

Implementation of:

* the parser of the codata raw data
* the generator of the Fortran modules
* the C API and C header
* the python wrapper (will be moved to its repository next release).

Full changelog available at [github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

