
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

API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION The latest codata constants were integrated in the [stdlib](https://github.com/fortran-lang/stdlib/releases/tag/v0.7.0). The constants are implemented as derived type which carries the name, the value, the uncertainty and the unit. This library will be complementary to the constants defined in the stdlib by providing older values for the constants.

API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION If you only need sources for the codata constants that you can integrate directly in your sources you may be interested by https://github.com/vmagnin/fundamental_constants.

**Extra:**

API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION Pure python code is provided in the `py` folder. See `py/README.md`.
API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION Pure C code is provided in the `C` folder. See `C/README.md`


# Dependencies

```
gfortran>=10
fpm>=0.7
stdlib>=0.5
fypp>=3.0
```


# Installation

A Makefile is provided, which uses [fpm](https://fpm.fortran-lang.org), for building the library.

API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION On windows, [msys2](https://www.msys2.org) needs to be installed.
Add the msys2 binary (usually C:\msys64\usr\bin) to the path in order to be able to use make.
API-doc API-doc-FORD-file.md build C CHANGELOG.md configure.sh data doc docs example fpm.toml include LICENSE Makefile media py README.md README_TEMPLATE.txt REFERENCES.bib scripts src stdlib test VERSION On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

Build: the configuration file will set all the environment variables necessary for the compilation

```
chmod +x configure.sh
. ./configure.sh
make
```

Run tests

```
make test
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
```Fortran
program example_in_f
use iso_fortran_env
use codata
implicit none

print '(A)', '########## EXAMPLE IN FORTRAN ##########'

print '(A)', '########## VERSION ##########'
print *, "version = ", version

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
