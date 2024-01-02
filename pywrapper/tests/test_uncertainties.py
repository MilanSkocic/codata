import unittest
from pycodata.constants import *


class TestUncertainties(unittest.TestCase):
    r"""Test constant uncertainties."""
    def test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(self):
        value = U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO
        expected =  0.00000024
        self.assertEqual(value, expected)
    
    def test_U_ALPHA_PARTICLE_MASS(self):
        value = U_ALPHA_PARTICLE_MASS
        expected = 0.0000000020e-27
        self.assertEqual(value, expected)

    def test_U_ATOMIC_MASS_CONSTANT(self):
        value = U_ATOMIC_MASS_CONSTANT
        expected = 0.00000000050e-27
        self.assertEqual(value, expected)
    
    def test_U_AVOGADRO_CONSTANT(self):
        value = U_AVOGADRO_CONSTANT
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_BOLTZMANN_CONSTANT(self):
        value = U_BOLTZMANN_CONSTANT
        expected = 0.0
        self.assertEqual(value, expected)
    
    def test_U_ELECTRON_VOLT(self):
        value = U_ELECTRON_VOLT
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_ELEMENTARY_CHARGE(self):
        value = U_ELEMENTARY_CHARGE
        expected = 0.0
        self.assertEqual(value, expected)
    
    def test_U_FARADAY_CONSTANT(self):
        value = U_FARADAY_CONSTANT
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_MOLAR_MASS_CONSTANT(self):
        value = U_MOLAR_MASS_CONSTANT
        expected = 0.00000000030e-3
        self.assertEqual(value, expected)

    def test_U_MOLAR_VOLUME_NTP(self):
        value = U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_PLANCK_CONSTANT(self):
        value = U_PLANCK_CONSTANT
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_SPEED_OF_LIGHT(self):
        value = U_SPEED_OF_LIGHT_IN_VACUUM
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_STANDARD_ACCELERATION_OF_GRAVITY(self):
        value = U_STANDARD_ACCELERATION_OF_GRAVITY
        expected = 0.0 
        self.assertEqual(value, expected)

