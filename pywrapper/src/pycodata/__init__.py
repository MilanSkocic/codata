"""Python module containing the codata constants.

All latest constants as declared available at the top level of the module.
Modules for specific years are also available in dedicated modules.
"""
from .version import __version__
from .constants_latest import *
from . import constants_latest
from . import constants_2018
from . import constants_2014
from . import constants_2010
