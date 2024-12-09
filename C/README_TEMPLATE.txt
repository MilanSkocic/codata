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
  Add the msys2 binary (usually C:\\msys64\\usr\\bin) to the path in order to be able to use make.
* On Darwin, the [gcc](https://formulae.brew.sh/formula/gcc) toolchain needs to be installed.

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


