---
title: APIs
---

![Codata](../media/logo.png)

Fundamental physical constants for Modern Fortran.

# Fortran API

The modules: 

* [[codata__constants_2022(module)]] 
* [[codata__constants_2018(module)]] 
* [[codata__constants_2014(module)]] 
* [[codata__constants_2010(module)]] 

are automatically generated with a simple parser written in Python.

The latest codata constants were released in 2022 by the [NIST](http://physics.nist.gov/constants).
All values for the codata constants are provided as double precision reals in a derived type
[[codata__constants_type(module):codata_constant_type(type)]].
The names are quite long and can be aliased with shorter names.
A module level interface [[codata__constants_type(module):to_real(interface)]] is 
available for getting the constant value or uncertainty of a constant. 

```fortran
{!example/example.f90!}
```

# C API

The prototypes of the C API are defined as shown below.

```c
{!include/codata.h!}

```

```C
{!example/example.c!}
```

# Python wrapper

The latest values are available at the top level and the 
older values are available in dedicated modules.

```python
{!example/example.py!}
```
