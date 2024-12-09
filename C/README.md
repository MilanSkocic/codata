
# Introduction

`codata` is a C library providing the latest codata constants (2022) and
older values (2018, 2014 and 2010).
The raw codata are taken from http://physics.nist.gov/constants.
The constants (values and uncertainties) are implemented as double precision reals.


# Dependencies

```
gcc>=10
```


# Installation

A Makefile is provided for building the library.

* On windows, [msys2](https://www.msys2.org) needs to be installed.
Add the msys2 binary (usually C:\msys64\usr\bin) to the path in order to be able to use make.
* On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

Build: the configuration file will set all the environment variables necessary for the compilation

```
cd ..
. configure.sh
cd C
make
make install
make uninstall
```


# License

MIT


# Usage


```C
#include <stdio.h>
#include "codata.h"

int main(void){

printf("########## EXAMPLE IN C ##########n");

printf("%sn","########## VERSION ##########");
printf("version = %sn", version);

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
