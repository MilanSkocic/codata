![logo](media/logo-codata.png)


# Introduction

`codata` is a Fortran library providing the latest codata constants (2022) and 
older values (2018, 2014 and 2010).
It also provides an API for the C language and a [python wrapper](https://pypi.org/project/pycodata).
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

* The latest codata constants will be soon integrated in the [stdlib](https://github.com/fortran-lang/stdlib/pull/800). The constants are implemented as derived type which carries the name, the value, the uncertainty and the unit. This library will be complementary to the constants defined in the stdlib by providing older values for the constants.  

* If you only need sources for the codata constants that you can integrate directly in your sources you may be interested by https://github.com/vmagnin/fundamental_constants. 



# Dependencies

```
gcc>=10
gfortran>=10
fpm>=0.7
fypp
stdlib>=0.5
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



# License

GPL-3.0-or-later
