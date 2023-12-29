import unittest
from ..constants import *

class TestYear(unittest.TestCase):
    r"""Test year."""
    def test_year(self):
        value = YEAR
        expected = 2018
        self.assertEqual(value, expected)
        
class TestConstants(unittest.TestCase):
    r"""Test constant values."""
    def test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(self):
        value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO
        expected = 7294.29954142
        self.assertEqual(value, expected)
    
    def test_ALPHA_PARTICLE_MASS(self):
        value = ALPHA_PARTICLE_MASS
        expected = 6.6446573357e-27
        self.assertEqual(value, expected)

    def test_ATOMIC_MASS_CONSTANT(self):
        value = ATOMIC_MASS_CONSTANT
        expected = 1.66053906660e-27
        self.assertEqual(value, expected)
    
    def test_AVOGADRO_CONSTANT(self):
        value = AVOGADRO_CONSTANT
        expected =  6.02214076e23
        self.assertEqual(value, expected)

    def test_BOLTZMANN_CONSTANT(self):
        value = BOLTZMANN_CONSTANT
        expected =  1.380649e-23
        self.assertEqual(value, expected)
    
    def test_ELECTRON_VOLT(self):
        value = ELECTRON_VOLT
        expected = 1.602176634e-19
        self.assertEqual(value, expected)

    def test_ELEMENTARY_CHARGE(self):
        value = ELEMENTARY_CHARGE
        expected = 1.602176634e-19
        self.assertEqual(value, expected)
    
    def test_FARADAY_CONSTANT(self):
        value = FARADAY_CONSTANT
        expected = 96485.33212
        self.assertEqual(value, expected)

    def test_MOLAR_MASS_CONSTANT(self):
        value = MOLAR_MASS_CONSTANT
        expected = 0.99999999965e-3
        self.assertEqual(value, expected)

    def test_MOLAR_VOLUME_NTP(self):
        value = MOLAR_VOLUME_OF_IDEAL_GAS__273_15K__101_325_KPA
        expected = 22.41396954e-3
        self.assertEqual(value, expected)

    def test_PLANCK_CONSTANT(self):
        value = PLANCK_CONSTANT
        expected = 6.62607015e-34 
        self.assertEqual(value, expected)

    def test_SPEED_OF_LIGHT(self):
        value = SPEED_OF_LIGHT_IN_VACUUM
        expected = 299792458.0
        self.assertEqual(value, expected)

    def test_STANDARD_ACCELERATION_OF_GRAVITY(self):
        value = STANDARD_ACCELERATION_OF_GRAVITY
        expected = 9.80665
        self.assertEqual(value, expected)

