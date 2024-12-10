
# Introduction

`codata` is a Fortran library providing the latest codata constants (2022) and
older values (2018, 2014 and 2010).
The raw codata are taken from http://physics.nist.gov/constants.
The constants (values and uncertainties) are implemented as double precision reals.

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

**Extra:**

* Pure python code is provided in the `py` folder. See `py/README.md`.
* Pure C code is provided in the `C` folder. See `C/README.md`


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
Add the msys2 binary (usually C:\msys64\usr\bin) to the path in order to be able to use make.
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


# Usage


```Fortran
program example_in_f
use iso_fortran_env
use codata
implicit none

print '(A)', '########## EXAMPLE IN FORTRAN ##########'

print '(A)', '########## VERSION ##########'
print *, "version = ", get_version()

print '(A)', '########## CONSTANTS ##########'
print *, "c = ", SPEED_OF_LIGHT_IN_VACUUM%value

print '(A)', '########## UNCERTAINTY ##########'
print *, "u(c) = ", SPEED_OF_LIGHT_IN_VACUUM%uncertainty

print '(A)', '########## OLDER VALUES ##########'
print '(A, F23.16)', "Mu_2022(latest) = ", MOLAR_MASS_CONSTANT%value
print '(A, F23.16)', "Mu_2018 = ", MOLAR_MASS_CONSTANT_2018%value
print '(A, F23.16)', "Mu_2014 = ", MOLAR_MASS_CONSTANT_2014%value
print '(A, F23.16)', "Mu_2010 = ", MOLAR_MASS_CONSTANT_2010%value


end program
```
```C
#include <stdio.h>
#include "codata.h"

int main(void){

printf("########## EXAMPLE IN C ##########n");

printf("%sn","########## VERSION ##########");
printf("version = %sn", codata_get_version());

printf("%sn","########## CONSTANTS ##########");
printf("c = %fn", SPEED_OF_LIGHT_IN_VACUUM.value);

printf("%sn","########## UNCERTAINTY ##########");
printf("u(c) = %fn", SPEED_OF_LIGHT_IN_VACUUM.uncertainty);

printf("%sn","########## OLDER VALUES ##########");
printf("Mu_2022(latest) = %23.16fn", MOLAR_MASS_CONSTANT.value);
printf("Mu_2018 = %23.16fn", MOLAR_MASS_CONSTANT_2018.value);
printf("Mu_2014 = %23.16fn", MOLAR_MASS_CONSTANT_2014.value);
printf("Mu_2010 = %23.16fn", MOLAR_MASS_CONSTANT_2010.value);

return 0;
}
```
```Python
r"""Example in python."""
import sys
sys.path.insert(0, "../src/")
import pycodata

print("########## VERSION ##########")
print(f"version = {pycodata.__version__}")

print("########## constants ##########")
print(f"c =", pycodata.SPEED_OF_LIGHT_IN_VACUUM["value"])

print("########## UNCERTAINTY ##########")
print(f"u(c) = ", pycodata.SPEED_OF_LIGHT_IN_VACUUM["uncertainty"])

print("########## OLDER VALUES ##########")
print(f"Mu_2022 = ", pycodata.MOLAR_MASS_CONSTANT["value"])
print(f"Mu_2018 = ", pycodata.codata_constants_2018.MOLAR_MASS_CONSTANT_2018["value"])
print(f"Mu_2014 = ", pycodata.codata_constants_2014.MOLAR_MASS_CONSTANT_2014["value"])
print(f"Mu_2010 = ", pycodata.codata_constants_2010.MOLAR_MASS_CONSTANT_2010["value"])
```
