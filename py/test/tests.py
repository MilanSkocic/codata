import unittest
from pycodata import *


class TestYear(unittest.TestCase):
    def test_year(self):
        value = YEAR
        expected = 2022
        self.assertEqual(value, expected)


class TestConstants(unittest.TestCase):
    def test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(self):
        value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO["value"]
        expected = 7294.29954171
        self.assertEqual(value, expected)
    
    def test_ALPHA_PARTICLE_MASS(self):
        value = ALPHA_PARTICLE_MASS["value"]
        expected = 6.6446573450e-27
        self.assertEqual(value, expected)

    def test_ATOMIC_MASS_CONSTANT(self):
        value = ATOMIC_MASS_CONSTANT["value"]
        expected = 1.66053906892e-27
        self.assertEqual(value, expected)
    
    def test_AVOGADRO_CONSTANT(self):
        value = AVOGADRO_CONSTANT["value"]
        expected =  6.02214076e23
        self.assertEqual(value, expected)

    def test_BOLTZMANN_CONSTANT(self):
        value = BOLTZMANN_CONSTANT["value"]
        expected =  1.380649e-23
        self.assertEqual(value, expected)
    
    def test_ELECTRON_VOLT(self):
        value = ELECTRON_VOLT["value"]
        expected = 1.602176634e-19
        self.assertEqual(value, expected)

    def test_ELEMENTARY_CHARGE(self):
        value = ELEMENTARY_CHARGE["value"]
        expected = 1.602176634e-19
        self.assertEqual(value, expected)
    
    def test_FARADAY_CONSTANT(self):
        value = FARADAY_CONSTANT["value"]
        expected = 96485.33212
        self.assertEqual(value, expected)

    def test_MOLAR_MASS_CONSTANT(self):
        value = MOLAR_MASS_CONSTANT["value"]
        expected = 1.00000000105e-3
        self.assertEqual(value, expected)

    def test_MOLAR_VOLUME_NTP(self):
        value = MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA["value"]
        expected = 22.41396954e-3
        self.assertEqual(value, expected)

    def test_PLANCK_CONSTANT(self):
        value = PLANCK_CONSTANT["value"]
        expected = 6.62607015e-34 
        self.assertEqual(value, expected)

    def test_SPEED_OF_LIGHT(self):
        value = SPEED_OF_LIGHT_IN_VACUUM["value"]
        expected = 299792458.0
        self.assertEqual(value, expected)

    def test_STANDARD_ACCELERATION_OF_GRAVITY(self):
        value = STANDARD_ACCELERATION_OF_GRAVITY["value"]
        expected = 9.80665
        self.assertEqual(value, expected)
    
    def test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(self):
        value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO["uncertainty"]
        expected =  0.00000017
        self.assertEqual(value, expected)
    
    def test_U_ALPHA_PARTICLE_MASS(self):
        value = ALPHA_PARTICLE_MASS["uncertainty"]
        expected = 0.0000000021e-27
        self.assertEqual(value, expected)

    def test_U_ATOMIC_MASS_CONSTANT(self):
        value = ATOMIC_MASS_CONSTANT["uncertainty"]
        expected = 0.00000000052e-27
        self.assertEqual(value, expected)
    
    def test_U_AVOGADRO_CONSTANT(self):
        value = AVOGADRO_CONSTANT["uncertainty"]
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_BOLTZMANN_CONSTANT(self):
        value = BOLTZMANN_CONSTANT["uncertainty"]
        expected = 0.0
        self.assertEqual(value, expected)
    
    def test_U_ELECTRON_VOLT(self):
        value = ELECTRON_VOLT["uncertainty"]
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_ELEMENTARY_CHARGE(self):
        value = ELEMENTARY_CHARGE["uncertainty"]
        expected = 0.0
        self.assertEqual(value, expected)
    
    def test_U_FARADAY_CONSTANT(self):
        value = FARADAY_CONSTANT["uncertainty"]
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_MOLAR_MASS_CONSTANT(self):
        value = MOLAR_MASS_CONSTANT["uncertainty"]
        expected = 0.00000000031e-3
        self.assertEqual(value, expected)

    def test_U_MOLAR_VOLUME_NTP(self):
        value = MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA["uncertainty"]
        expected = 0.0
        self.assertEqual(value, expected)

    def test_U_PLANCK_CONSTANT(self):
        value = PLANCK_CONSTANT["uncertainty"]
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_SPEED_OF_LIGHT(self):
        value = SPEED_OF_LIGHT_IN_VACUUM["uncertainty"]
        expected = 0.0 
        self.assertEqual(value, expected)

    def test_U_STANDARD_ACCELERATION_OF_GRAVITY(self):
        value = STANDARD_ACCELERATION_OF_GRAVITY["uncertainty"]
        expected = 0.0 
        self.assertEqual(value, expected)

