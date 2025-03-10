.. fspx documentation master file, created by
   sphinx-quickstart on Mon Oct  7 14:09:33 2024.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

CODATA
======

.. toctree::
   :maxdepth: 1
   :hidden:

   getting_started/index
   api/index
   references/index.rst

.. image:: ../../../media/logo.png
  :width: 400
  :alt: Alternative text
   
Fundamental physical constants for Modern Fortran according to
`CODATA <https://pml.nist.gov/cuu/Constants/>`_.


The latest codata constants were released in 2022 by the `NIST <https://pml.nist.gov/cuu/Constants/>`_.
All values for the codata constants are provided as double precision reals in a derived type
`codata_constant_type`.
The names are quite long and can be aliased with shorter names.
A module level interface `to_real` is 
available for getting the constant value or uncertainty of a constant. 