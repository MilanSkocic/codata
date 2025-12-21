# Introduction

`codata` is a Fortran library providing the fundamental physical
constants according to
[CODATA](https://www.nist.gov/programs-projects/codata-values-fundamental-physical-constants).
[@mohr2012-1; @mohr2016-1; @mohr2021-1; @mohr2024-2; @mohr2025-1]. A C
API allows usage from C, or can be used as a basis for other wrappers.
Python wrapper allows easy usage from Python.

The latest codata constants were released in 2022 by the
[NIST](https://pml.nist.gov/cuu/Constants/). All values for the codata
constants are provided as double precision reals in a derived type
`codata_constant_type`. The names are quite long and can be aliased with
shorter names. A module level interface to_real is available for getting
the constant value or uncertainty of a constant.

To use `codata` within your [fpm](https://github.com/fortran-lang/fpm)
project, add the following to your `fpm.toml` file:

            [dependencies]
            codata = { git="https://github.com/MilanSkocic/codata.git" }

**Notes**:

-   The latest codata constants were integrated in the
    [stdlib](https://github.com/fortran-lang/stdlib/releases/tag/v0.7.0).
    The constants are implemented as derived type which carries the
    name, the value, the uncertainty and the unit. This library will be
    complementary to the constants defined in the stdlib by providing
    older values for the constants.

-   If you only need sources for the codata constants that you can
    integrate directly in your sources you may be interested by
    https://github.com/vmagnin/fundamental_constants.

# Dependencies

            gfortran>=10
            fpm>=0.8
            stdlib>=0.5
            fypp>=3.0

# Installation

A Makefile is provided, which uses [fpm](https://fpm.fortran-lang.org),
for building the library.

-   On windows, [msys2](https://www.msys2.org) needs to be installed.
    Add the msys2 binary (usually C:\\msys64\\usr\\bin) to the path in
    order to be able to use make.

-   On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain
    needs to be installed.

Build: the configuration file will set all the environment variables
necessary for the compilation

            chmod +x configure.sh
            ./configure.sh
            make
            make install
            make uninstall

# License

MIT
