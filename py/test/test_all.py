r"""Tests for version."""
import unittest
from pycodata import __version__
from pycodata import *

class TestVersion(unittest.TestCase):
    r"""Test version module."""

    def test_version(self):
        expected = None
        with open("VERSION", "r") as f:
            expected = f.read().strip()
        value = __version__
        self.assertEqual(value, expected)

def test_year():
    assert YEAR == 2022

def test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO():
    assert ALPHA_PARTICLE_ELECTRON_MASS_RATIO["value"] ==7294.29954171

def test_ALPHA_PARTICLE_MASS():
     assert ALPHA_PARTICLE_MASS["value"] == 6.6446573450e-27

def test_ATOMIC_MASS_CONSTANT():
    assert ATOMIC_MASS_CONSTANT["value"] == 1.66053906892e-27

def test_AVOGADRO_CONSTANT():
    assert AVOGADRO_CONSTANT["value"] == 6.02214076e23

def test_BOLTZMANN_CONSTANT():
     assert BOLTZMANN_CONSTANT["value"] == 1.380649e-23

def test_ELECTRON_VOLT():
     assert ELECTRON_VOLT["value"] == 1.602176634e-19

def test_ELEMENTARY_CHARGE():
    assert ELEMENTARY_CHARGE["value"] == 1.602176634e-19

def test_FARADAY_CONSTANT():
    assert FARADAY_CONSTANT["value"] == 96485.33212e0

def test_MOLAR_MASS_CONSTANT():
    assert MOLAR_MASS_CONSTANT["value"] ==  1.00000000105e-3
    
def test_MOLAR_VOLUME_NTP():
    assert MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA["value"] ==  22.41396954e-3
    
def test_PLANCK_CONSTANT():
    assert PLANCK_CONSTANT["value"] ==  6.62607015e-34
    
def test_SPEED_OF_LIGHT():
    assert SPEED_OF_LIGHT_IN_VACUUM["value"] ==  299792458.0e0
    
def test_STANDARD_ACCELERATION_OF_GRAVITY():
    assert STANDARD_ACCELERATION_OF_GRAVITY["value"] ==  9.80665e0

def test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO():
    assert ALPHA_PARTICLE_ELECTRON_MASS_RATIO["uncertainty"] ==  0.00000017e0
    
def test_U_ALPHA_PARTICLE_MASS():
    assert ALPHA_PARTICLE_MASS["uncertainty"] ==  0.0000000021e-27
    
def test_U_ATOMIC_MASS_CONSTANT():
    assert ATOMIC_MASS_CONSTANT["uncertainty"] ==  0.00000000052e-27
    
def test_U_AVOGADRO_CONSTANT():
    assert AVOGADRO_CONSTANT["uncertainty"] ==  0.0
    
def test_U_BOLTZMANN_CONSTANT():
    assert BOLTZMANN_CONSTANT["uncertainty"] ==  0.0

def test_U_ELECTRON_VOLT():
    assert ELECTRON_VOLT["uncertainty"] ==  0.0

def test_U_ELEMENTARY_CHARGE():
    assert ELEMENTARY_CHARGE["uncertainty"] ==  0.0
    
def test_U_FARADAY_CONSTANT():
    assert FARADAY_CONSTANT["uncertainty"] ==  0.0
    
def test_U_MOLAR_MASS_CONSTANT():
    assert MOLAR_MASS_CONSTANT["uncertainty"] ==  0.00000000031e-3
    
def test_U_MOLAR_VOLUME_NTP():
    assert MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA["uncertainty"] ==  0.0
    
def test_U_PLANCK_CONSTANT():
    assert PLANCK_CONSTANT["uncertainty"] ==  0.0
    
def test_U_SPEED_OF_LIGHT():
    assert SPEED_OF_LIGHT_IN_VACUUM["uncertainty"] ==  0.0
    
def test_U_STANDARD_ACCELERATION_OF_GRAVITY():
    assert STANDARD_ACCELERATION_OF_GRAVITY["uncertainty"] ==  0.0
    

