.. |cidev| image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=dev
.. |cimain| image:: https://github.com/MilanSkocic/codata/actions/workflows/ci.yml/badge.svg?branch=main

dev |cidev| / main |cimain|

Introduction
==============

.. image:: ./media/logo-codata.png
    :width: 200

.. readme_inclusion_start

`codata` is a Fortran library providing the lastest codata constants (2018) and 
older values (2014 and 2010).
It also  provides a API for the C language.
The raw codata are taken from http://physics.nist.gov/constants. 

.. readme_inclusion_end

To use `codata` within your `fpm <https://github.com/fortran-lang/fpm>`_ project,
add the following to your `fpm.toml` file:

.. code-block::

    [dependencies]
    codata = { git="https://github.com/MilanSkocic/codata.git" }

**Website**: https://milanskocic.github.io/codata/

Installation
================

See the file ``INSTALL.rst``. 


Dependencies
================

See the file ``REQUIREMENTS.txt``.


License information

See the file ``LICENSE.txt``.
