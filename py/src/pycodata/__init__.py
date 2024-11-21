"""Codata constants.
 
The latest values (2022) do not have the year as a suffix in their name.
Older values can be used and they feature the year as a suffix in their name.

The latest values are available at the top level and 
older values are available in dedicated modules.
"""
from .version import __version__
from .codata_constants_2022 import *
from . import codata_constants_2022
from . import codata_constants_2018
from . import codata_constants_2014
from . import codata_constants_2010
