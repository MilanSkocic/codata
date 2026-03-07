NAME
----

**get_version** - get the version of the library

LIBRARY
-------

codata (**-libcodata, -lcodata)**

SYNOPSIS
--------

::

     character(len=:), pointer get_version()
     char* codata_get_version(void);

DESCRIPTION
-----------

Returns the version of the library. For use from Python, the version is
retrieved using the module attribute \__version\_\_.

EXAMPLE
-------

Example in Fortran

::

           use codata
           print *, "version = ", get_version()

Example in C

::

           #include "codata.h"
           printf("version = %s, codata_get_version());

Example in Python

::

           import pycodata
           print(f"version = {pycodata.__version__}")

SEE ALSO
--------

**codata(3)**
