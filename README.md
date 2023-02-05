# Introduction

`codata` is a (Modern) Fortran library providing the codata constants 2010, 2014 and 2018.
It also provides a API for the C language. 
The raw codata from http://physics.nist.gov/constants are converted into an Fortran module. 
The generated Fortran module is then compiled (f2008+) into a shared and a static library `libcodata` with the Fortran and C headers.
The static and shared libraries can be installed in order to be included in Fortran or C programs.

The compilation was tested on Linux (Debian), MacOS, Windows (MSYS2).

The sources are available are available on [github](https://github.com/MilanSkocic/codata).
The online documentation is available [here](https://milanskocic.github.io/codata/index.html).


# Installation

See the file `INSTALL`. 


# Dependencies

See the file `REQUIREMENTS`.


# License information

See the file `LICENSE` for information on the history of this
software, terms & conditions for usage, and a DISCLAIMER OF ALL
WARRANTIES.

