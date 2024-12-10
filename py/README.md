
# Introduction

Python wrapper around the
[Fortran codata library](https://milanskocic.github.io/codata/ ).
The Fortran library does not need to be installed, the python wrapper embeds all needed fortran dependencies
for Windows and MacOS.
On linux, you might have to install `libgfortran` if it is not distributed by default with your linux distribution. 

# Installation

In a terminal, enter:

```python
pip install pycodata
```

# License

MIT


# Usage

The latest values (2022) do not have the year as a suffix in their name. Older values can be used and they feature the year as a suffix in their name.

The latest values are available at the top level and older values are available in dedicated modules.

[Example in python](https://milanskocic.github.io/codata/page/examples.html#python).
