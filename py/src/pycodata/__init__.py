#=======================================================================
# MODULE: __INIT__
#=======================================================================
"""Codata constants.

Every adjustment is available under year-suffixed names. The latest values are
additionally available without the year as a suffix, as an alias meaning
"current". Quantities that NIST renamed between adjustments are available under
both spellings in every adjustment.
The names of constants are the same as the one defined in Fortran and C.

All constants are available at the top level of the module.
Quantity is a stable key for a quantity, valid across adjustments, and
value(ds, q) selects a constant at run time.
"""
import platform
import subprocess
import sys
from pathlib import Path

from .version import __version__
from .quantity import Quantity, CODATA_Q_COUNT
from .lookup import (CODATA_DATASETS, CODATA_LATEST, get, defined, value,
                     uncertainty, unit, quantity_name, quantity_from_name)
from .constants_2022 import *
from .constants_2018 import *
from .constants_2014 import *
from .constants_2010 import *


def main():
    binary = Path(__file__).parent / platform.system().lower() / "bin" / "codata"
    if platform.system() == "Windows":
        binary = binary.with_suffix(".exe")

    res = subprocess.run([binary] + sys.argv[1:])
    sys.exit(res.returncode)
