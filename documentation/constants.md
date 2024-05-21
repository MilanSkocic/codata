---
title: Codata constants
---

The modules: 

* [[codata__constants_2022(module)]] 
* [[codata__constants_2018(module)]] 
* [[codata__constants_2014(module)]] 
* [[codata__constants_2010(module)]] 

are automatically generated with a simple parser written in Python.

The latest codata constants were released in 2022 by the [NIST](http://physics.nist.gov/constants)
All values for the codata constants are provided as double precision reals. 
The names are quite long and can be aliased with shorter names.

The derived type [[codata__constants_type(module):codata_constant_type(type)]] defines:

* 4 members:

    * `name` (string)
    * `value` (double precision real)
    * `uncertainty` (double precision real)
    * `unit` (string)

* 2 type-bound procedures:

    * `print` for print the values of the constant members.
    * `to_real` for getting the value or the uncertainty to the desired precision.

A module level interface [[codata__constants_type(module):to_real(interface)]] is 
available for getting the constant value or uncertainty of a constant. 

The CAPI provides only the 4 members and the type-bound procedures are not available.




## `to_real` - Get the constant value or uncertainty.

### Description

Convert a [[codata__constants_type(module):codata_constant_type(type)]] to a real. 
**Warning**: Some constants cannot be converted to simple precision reals due to the values of the exponents.

### Syntax

`r = ` [[codata__constants_type:to_real(interface)]] `(c, mold [, uncertainty])`

### Arguments

`c`: argument has `intent(in) ` and shall be of type [[codata__constants_type:codata_constant_type(type)]].

`mold`: argument has `intent(in)` and shall be of `real` type. 
**Note**: The type of the `mold` argument defines the type of the result.

`uncertainty` (optional): argument has `intent(in)` and shall be of `logical` type. 
It specifies if the uncertainty needs to be returned instead of the value. Default to `.false.`.

### Return value

Returns a scalar of `real` type which is either the value or the uncertainty of a codata constant.






## Example

```fortran
{!example/constants/example_constants.f90!}
```
### Fortran

```fortran
{!./example/example_in_f.f90!}
```

### C

```C
{!./example/example_in_c.c!}
```

### Python

```python
{!./example/example_in_c.c!}
```
