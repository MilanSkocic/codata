![cidev](image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=dev)

![cimain](image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=main)



# Introduction

![logo](media/png/logo-codata.png)

`codata` is a Fortran library providing the latest codata constants (2022) and 
older values (2018, 2014 and 2010).
It also provides an API for the C language and a python wrapper.
The raw codata are taken from http://physics.nist.gov/constants.

The constants (values and uncertainties) are implemented as double precision parameters for Fortran and
as double precision protected variables for the C API. The units are given in the documentation.

**Warning**: The release 1.0 will intoduce an API break where the constants will be implemented as derived type like a the [stdlib](https://github.com/fortran-lang/stdlib/pull/800). See notes below.

The names are quite long and you can alias them for shorter names:

```Fortran
   use codata, only: c=>SPEED_OF_LIGHT_IN_VACUUM
```

To use `codata` within your [fpm](https://github.com/fortran-lang/fpm) project,
add the following to your `fpm.toml` file:

```
    [dependencies]
    codata = { git="https://github.com/MilanSkocic/codata.git" }
```

**Notes**: 

* The latest codata constants will be soon integrated in the `stdlib <https://github.com/fortran-lang/stdlib/pull/800>`_. The constants are implemented as derived type which carries the name, the value, the uncertainty and the unit.

* The `stdlib` folder is dedicated to the generation of the sources that will feed the `stdlib <https://github.com/fortran-lang/stdlib>`_.

* If you only need sources for the codata constants that you can integrate directly in your sources you may be interested by https://github.com/vmagnin/fundamental_constants. 



# Dependencies

```
gcc>=10
gfortran>=10
fpm>=0.7
```


# Installation

A Makefile is provided, which uses [fpm](https://fpm.fortran-lang.org), for building the library.

On windows, [msys2](https://www.msys2.org) needs to be installed. The MSVC compiler is only necessary
for compiling the python wrapper. 
Add the msys2 binary (usually C:\\msys64\\usr\\bin) to the path in order to be able to use make.

On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

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

If building the python wrapper is needed:

```
    cd pywrapper
    chmod +x configure.sh
    . ./configure.sh
    make
```



# License information

GPL-3.0-or-later
