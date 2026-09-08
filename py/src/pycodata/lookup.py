# SPDX-License-Identifier: MIT
"""Runtime lookup: select a constant by adjustment and quantity key."""
import math

from .quantity import Quantity, CODATA_Q_COUNT
from . import constants_2010
from . import constants_2014
from . import constants_2018
from . import constants_2022

__all__ = ["CODATA_DATASETS", "CODATA_LATEST", "get", "defined",
           "value", "uncertainty", "unit", "quantity_name",
           "quantity_from_name"]

CODATA_2010 = 2010
CODATA_2014 = 2014
CODATA_2018 = 2018
CODATA_2022 = 2022
CODATA_LATEST = CODATA_2022
CODATA_DATASETS = (CODATA_2010, CODATA_2014, CODATA_2018, CODATA_2022, )

_MODULES = {CODATA_2010: constants_2010, CODATA_2014: constants_2014, CODATA_2018: constants_2018, CODATA_2022: constants_2022, }


def get(ds, q):
    r"""Constant for a quantity in an adjustment, or None if absent."""
    module = _MODULES.get(int(ds))
    if module is None:
        return None
    try:
        name = Quantity(q).name
    except ValueError:
        return None
    return getattr(module, "{:s}_{:d}".format(name, int(ds)), None)


def defined(ds, q):
    r"""Whether the quantity is present in that adjustment."""
    return get(ds, q) is not None


def value(ds, q):
    r"""Value, or NaN if the quantity is absent from that adjustment.

    Never 0.0: a plausible-looking wrong number is the worst failure mode.
    """
    c = get(ds, q)
    return math.nan if c is None else c["value"]


def uncertainty(ds, q):
    r"""Uncertainty, or NaN if the quantity is absent."""
    c = get(ds, q)
    return math.nan if c is None else c["uncertainty"]


def unit(ds, q):
    r"""Unit, or None if the quantity is absent from that adjustment."""
    c = get(ds, q)
    return None if c is None else c["unit"]


def quantity_name(q):
    r"""Canonical key name of a quantity, or None."""
    try:
        return Quantity(q).name
    except ValueError:
        return None


def quantity_from_name(name):
    r"""Quantity with this key name, accepting renamed spellings too."""
    return getattr(Quantity, name, None)
