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


# subroutine test_BOLTZMANN_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, BOLTZMANN_CONSTANT%to_real(1.0_dp), 1.380649d-23)
#     if (allocated(error)) return
# end subroutine

# subroutine test_ELECTRON_VOLT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ELECTRON_VOLT%to_real(1.0_dp), 1.602176634d-19)
#     if (allocated(error)) return
# end subroutine

# subroutine test_ELEMENTARY_CHARGE(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ELEMENTARY_CHARGE%to_real(1.0_dp), 1.602176634d-19)
#     if (allocated(error)) return
# end subroutine

# subroutine test_FARADAY_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, FARADAY_CONSTANT%to_real(1.0_dp), 96485.33212d0)
#     if (allocated(error)) return
# end subroutine

# subroutine test_MOLAR_MASS_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, MOLAR_MASS_CONSTANT%to_real(1.0_dp), 1.00000000105d-3)
#     if (allocated(error)) return
# end subroutine

# subroutine test_MOLAR_VOLUME_NTP(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA%to_real(1.0_dp), 22.41396954d-3)
#     if (allocated(error)) return
# end subroutine

# subroutine test_PLANCK_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, PLANCK_CONSTANT%to_real(1.0_dp), 6.62607015d-34)
#     if (allocated(error)) return
# end subroutine

# subroutine test_SPEED_OF_LIGHT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, SPEED_OF_LIGHT_IN_VACUUM%to_real(1.0_dp), 299792458.0d0)
#     if (allocated(error)) return
# end subroutine

# subroutine test_STANDARD_ACCELERATION_OF_GRAVITY(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, STANDARD_ACCELERATION_OF_GRAVITY%to_real(1.0_dp), 9.80665d0)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ALPHA_PARTICLE_ELECTRON_MASS_RATIO%to_real(1.0_dp, uncertainty=.true.), 0.00000017d0)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_ALPHA_PARTICLE_MASS(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ALPHA_PARTICLE_MASS%to_real(1.0_dp, uncertainty=.true.), 0.0000000021d-27)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_ATOMIC_MASS_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ATOMIC_MASS_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.00000000052d-27)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_AVOGADRO_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, AVOGADRO_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_BOLTZMANN_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, BOLTZMANN_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_ELECTRON_VOLT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ELECTRON_VOLT%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_ELEMENTARY_CHARGE(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, ELEMENTARY_CHARGE%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_FARADAY_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, FARADAY_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_MOLAR_MASS_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, MOLAR_MASS_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.00000000031d-3)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_MOLAR_VOLUME_NTP(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_PLANCK_CONSTANT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, PLANCK_CONSTANT%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_SPEED_OF_LIGHT(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, SPEED_OF_LIGHT_IN_VACUUM%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine

# subroutine test_U_STANDARD_ACCELERATION_OF_GRAVITY(error)
#     type(error_type), allocatable, intent(out) :: error
#     call check(error, STANDARD_ACCELERATION_OF_GRAVITY%to_real(1.0_dp, uncertainty=.true.), 0.0_dp)
#     if (allocated(error)) return
# end subroutine