import unittest
from ..codata import *

class TestLib(unittest.TestCase):
    r"""Test pyiawps library."""
    def test_value(self):
        value = ALPHA_PARTICLE_MASS
        reference = 6.6446573357e-27 
        self.assertEqual(value, reference)

    def test_year(self):
        value = YEAR
        reference = 2018
        self.assertEqual(value, reference)
