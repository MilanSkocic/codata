import unittest
import pycodata

class TestLib(unittest.TestCase):
    r"""Test pyiawps library."""
    def test_value(self):
        value = pycodata.ALPHA_PARTICLE_MASS
        reference = 6.6446573357e-27 
        self.assertEqual(value, reference)
