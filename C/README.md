
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

A Makefile is provided, which uses [fpm](https://fpm.fortran-lang.org), for building the library.

API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION On windows, [msys2](https://www.msys2.org) needs to be installed.
Add the msys2 binary (usually C:\msys64\usr\bin) to the path in order to be able to use make.
API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

Build: the configuration file will set all the environment variables necessary for the compilation

```
. ../configure.sh
make
```


Install

```
make install
```

Uninstall

```
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
