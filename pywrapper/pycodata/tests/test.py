import unittest
from ..constants import *

class TestYear(unittest.TestCase):
    r"""Test pyiawps library."""
    def test_year(self):
        value = YEAR
        reference = 2018
        self.assertEqual(value, reference)
        
class TestConstants(unittest.TestCase):
    r""""""
    def test_ALPHA_MASS_CONSTANT(self):
        value = ATOMIC_MASS_CONSTANT
        reference = 1.66053906660e-27
        self.assertEqual(value, reference)
    
    def test_SPEED_OF_LIGHT(self):
        value = SPEED_OF_LIGHT_IN_VACUUM
        reference = 299792458.0
        self.assertEqual(value, reference)

