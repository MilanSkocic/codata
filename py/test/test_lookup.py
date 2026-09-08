r"""Tests for the quantity key, the runtime lookup, and the aliases.

The point of these tests is that the two ways of reaching a constant -- the
named symbols and the runtime lookup -- come from the same data and must never
disagree.
"""
import math

import pycodata
from pycodata import Quantity


def test_year_suffixed_aliases():
    r"""The latest adjustment is reachable under both spellings."""
    assert pycodata.BOHR_RADIUS is pycodata.BOHR_RADIUS_2022
    assert pycodata.PLANCK_CONSTANT["value"] == pycodata.PLANCK_CONSTANT_2022["value"]


def test_renamed_quantity_aliases():
    r"""A renamed quantity is reachable under both spellings, in every adjustment."""
    assert pycodata.ELECTRIC_CONSTANT_2014 == pycodata.VACUUM_ELECTRIC_PERMITTIVITY_2014
    assert pycodata.ELECTRIC_CONSTANT_2018 == pycodata.VACUUM_ELECTRIC_PERMITTIVITY_2018
    assert pycodata.PLANCK_CONSTANT_OVER_2_PI_2022 == pycodata.REDUCED_PLANCK_CONSTANT_2022


def test_adjustments_stay_distinct():
    r"""Aliasing must not collapse the adjustments onto each other."""
    assert pycodata.ELECTRIC_CONSTANT_2014["value"] != pycodata.ELECTRIC_CONSTANT_2018["value"]
    assert pycodata.BOHR_RADIUS_2010["value"] != pycodata.BOHR_RADIUS_2022["value"]


def test_quantity_key_aliases():
    r"""Renamed spellings share one quantity key."""
    assert Quantity.ELECTRIC_CONSTANT is Quantity.VACUUM_ELECTRIC_PERMITTIVITY
    assert Quantity.PLANCK_CONSTANT_OVER_2_PI is Quantity.REDUCED_PLANCK_CONSTANT


def test_lookup_matches_named_symbols():
    r"""The runtime accessor returns exactly what the named symbol holds."""
    for ds in pycodata.CODATA_DATASETS:
        named = getattr(pycodata, "BOHR_RADIUS_{:d}".format(ds))
        assert pycodata.get(ds, Quantity.BOHR_RADIUS) == named
        assert pycodata.value(ds, Quantity.BOHR_RADIUS) == named["value"]
        assert pycodata.uncertainty(ds, Quantity.BOHR_RADIUS) == named["uncertainty"]
        assert pycodata.unit(ds, Quantity.BOHR_RADIUS) == named["unit"]
    assert pycodata.value(pycodata.CODATA_LATEST, Quantity.BOHR_RADIUS) == pycodata.BOHR_RADIUS["value"]
    # reached through the older spelling of a renamed quantity
    assert pycodata.value(2014, Quantity.ELECTRIC_CONSTANT) == pycodata.ELECTRIC_CONSTANT_2014["value"]


def test_lookup_covers_every_constant():
    r"""Each adjustment resolves exactly as many quantities as it has constants."""
    expected = {2010: 335, 2014: 335, 2018: 354, 2022: 355}
    for ds in pycodata.CODATA_DATASETS:
        n = sum(1 for q in range(pycodata.CODATA_Q_COUNT) if pycodata.defined(ds, q))
        assert n == expected[ds]


def test_absent_quantity_is_undefined():
    r"""An absent quantity yields NaN, never a plausible-looking zero."""
    assert not pycodata.defined(2010, Quantity.HELION_SHIELDING_SHIFT)
    assert pycodata.defined(2018, Quantity.HELION_SHIELDING_SHIFT)
    assert pycodata.get(2010, Quantity.HELION_SHIELDING_SHIFT) is None
    assert math.isnan(pycodata.value(2010, Quantity.HELION_SHIELDING_SHIFT))
    assert math.isnan(pycodata.uncertainty(2010, Quantity.HELION_SHIELDING_SHIFT))
    assert pycodata.unit(2010, Quantity.HELION_SHIELDING_SHIFT) is None
    assert math.isnan(pycodata.value(9999, Quantity.BOHR_RADIUS))


def test_quantity_names_round_trip():
    r"""Every quantity key round trips through its name."""
    for q in range(pycodata.CODATA_Q_COUNT):
        assert pycodata.quantity_from_name(pycodata.quantity_name(q)) == q
    assert pycodata.quantity_from_name("ELECTRIC_CONSTANT") is Quantity.VACUUM_ELECTRIC_PERMITTIVITY
    assert pycodata.quantity_from_name("NO_SUCH_QUANTITY") is None
    assert pycodata.quantity_name(Quantity.BOHR_RADIUS) == "BOHR_RADIUS"


def test_datasets():
    r"""The adjustments are listed oldest first, and CODATA_LATEST is the last."""
    assert list(pycodata.CODATA_DATASETS) == sorted(pycodata.CODATA_DATASETS)
    assert pycodata.CODATA_DATASETS[-1] == pycodata.CODATA_LATEST
