.. |cidev| image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=dev
.. |cimain| image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=main

dev |cidev| / main |cimain|

Introduction
==============

.. image:: ./media/png/logo-codata.png
    :width: 200

.. readme_inclusion_start

`codata` is a Fortran library providing the latest codata constants (2022) and 
older values (2018, 2014 and 2010).
It also provides an API for the C language and a python wrapper.
The raw codata are taken from http://physics.nist.gov/constants.

The constants (values and uncertainties) are implemented as double precision parameters for Fortran and
as double precision protected variables for the C API. The units are given in the documentation.

**Warning**: The release 1.0 will intoduce an API break where the constants will be implemented as derived type like a the `stdlib <https://github.com/fortran-lang/stdlib/pull/800>`_ (see notes below).

The names are quite long and you can alias them for shorter names:

.. code-block:: Fortran

   use codata, only: c=>SPEED_OF_LIGHT_IN_VACUUM

.. readme_inclusion_end

To use `codata` within your `fpm <https://github.com/fortran-lang/fpm>`_ project,
add the following to your `fpm.toml` file:

.. code-block::

    [dependencies]
    codata = { git="https://github.com/MilanSkocic/codata.git" }

**Website**: https://milanskocic.github.io/codata/

**Notes**: 

* The latest codata constants will be soon integrated in the `stdlib <https://github.com/fortran-lang/stdlib/pull/800>`_. The constants are implemented as derived type which carries the name, the value, the uncertainty and the unit.

* The `stdlib` folder is dedicated to the generation of the sources that will feed the `stdlib <https://github.com/fortran-lang>_`.

* If you only need sources for the codata constants that you can integrate directly in your sources you may be interested by https://github.com/vmagnin/fundamental_constants. 

Installation
================

See the file ``INSTALL.rst``. 


Dependencies
================

See the file ``REQUIREMENTS.txt``.


License information

See the file ``LICENSE.txt``.
