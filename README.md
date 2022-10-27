# Introduction

Simple program for generating codata for C, Fortran.

The raw codata from http://physics.nist.gov/constants are converted into
C and Fortran code. The generator generates:
 * an module for Fortran
 * and header and source files for C

The generated files are then compiled into shared and static libraries:
 * libccodata for C
 * libfcodata for Fortran

The libraries for C and Fortran can be installed in order to be included in programs.

The compilation was tested on Linux (Debian 10) and MacOS.


# Installation

See the file `INSTALL`. 


# Dependencies

See the file `REQUIREMENTS`.


# License information

See the file `LICENSE` for information on the history of this
software, terms & conditions for usage, and a DISCLAIMER OF ALL
WARRANTIES.

