import unittest

import pycodata
import math

class TestLib(unittest.TestCase):
    r"""Test pyiawps library."""
    def test_value(self):
        name = "alpha particle mass"
        value = pycodata.get_value(name)
        reference = 6.6446573357e-27 
        self.assertEqual(value, reference)

    def test_not_found(self):
        name = "alpha particle masss"
        value = pycodata.get_value(name)
        self.assertTrue(math.isnan(value))
