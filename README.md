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
```Fortan
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
