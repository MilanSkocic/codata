# Introduction

Python wrapper around the
[Fortran codata library](https://milanskocic.github.io/codata-docs/index.html).
The Fortran library does not need to be installed, the python wrapper embeds all needed fortran dependencies
for Windows and MacOS.
On linux, you might have to install `libgfortran` if it is not distributed with your linux distribution. 

# Installation

In a terminal, enter:

```python
pip install pycodata
```

# Usage

The latest values (2022) do not have the year as a suffix in their name. Older values can be used and they feature the year as a suffix in their name.

The latest values are available at the top level and older values are available in dedicated modules.

```python
import pycodata

print("########## VERSION ##########")
print(f"version = {pycodata.__version__}")

print("########## constants ##########")
print(f"c =", pycodata.SPEED_OF_LIGHT_IN_VACUUM["value"])

print("########## UNCERTAINTY ##########")
print(f"u(c) = ", pycodata.SPEED_OF_LIGHT_IN_VACUUM["uncertainty"])

print("########## OLDER VALUES ##########")
print(f"Mu_2022 = ", pycodata.MOLAR_MASS_CONSTANT["value"])
print(f"Mu_2018 = ", pycodata.constants_2018.MOLAR_MASS_CONSTANT_2018["value"])
print(f"Mu_2014 = ", pycodata.constants_2014.MOLAR_MASS_CONSTANT_2014["value"])
print(f"Mu_2010 = ", pycodata.constants_2010.MOLAR_MASS_CONSTANT_2010["value"])
```

# License

MIT
