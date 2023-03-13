# Introduction

`codata` is a Fortran library providing the lastest codata constants.
It also provides a API for the C language. 
The raw codata from http://physics.nist.gov/constants are parsed line by line
where the columns name, value, uncertainty and unit are formatted to be conform to Fortran double precision.
The formatted (as strings) names, values, uncertainties and units are then inserted in a 
derived type in the generated Fortran module. The latter are then inserted into an array.

The generated Fortran module is then compiled (f2008+) into a shared and a static library `libcodata` with the Fortran and C headers. 
The static and shared libraries can be installed in order to be included in Fortran or C programs.

The compilation was tested on Linux (Debian), MacOS and Windows.

The sources are available are available on [github](https://github.com/MilanSkocic/codata).
The online documentation is available [here](https://milanskocic.github.io/codata/index.html).


# Installation

See the file `INSTALL`. 


# Dependencies

See the file `REQUIREMENTS`.


# License information

See the file `LICENSE`.
