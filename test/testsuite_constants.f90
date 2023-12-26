module testsuite_constants
    use iso_fortran_env
    use testdrive, only : new_unittest, unittest_type, error_type, check
    use codata
    implicit none
    private
    
    public :: collect_suite_constants

contains
!> Collect all exported unit tests
subroutine collect_suite_constants(testsuite)
  !> Collection of tests
  type(unittest_type), allocatable, intent(out) :: testsuite(:)



  testsuite = [&
               new_unittest("ALPHA_PARTICLE_ELECTRON_MASS_RATIO", test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO),&
               new_unittest("ALPHA_PARTICLE_MASS", test_ALPHA_PARTICLE_MASS),&
               new_unittest("ATOMIC_MASS_CONSTANT", test_ATOMIC_MASS_CONSTANT),&
               new_unittest("AVOGADRO_CONSTANT", test_AVOGADRO_CONSTANT),&
               new_unittest("BOLTZMANN_CONSTANT", test_BOLTZMANN_CONSTANT),&
               new_unittest("ELECTRON_VOLT", test_ELECTRON_VOLT),&
               new_unittest("ELEMENTARY_CHARGE", test_ELEMENTARY_CHARGE),&
               new_unittest("FARADAY_CONSTANT", test_FARADAY_CONSTANT),&
               new_unittest("MOLAR_MASS_CONSTANT", test_MOLAR_MASS_CONSTANT),&
               new_unittest("MOLAR_VOLUME_OF_IDEAL_GAS__273_15K__101_325_KPA", test_MOLAR_VOLUME_NTP),&
               new_unittest("PLANCK_CONSTANT", test_PLANCK_CONSTANT),&
               new_unittest("SPEED_OF_LIGHT_IN_VACUUM", test_SPEED_OF_LIGHT),&
               new_unittest("STANDARD_ACCELERATION_OF_GRAVITY", test_STANDARD_ACCELERATION_OF_GRAVITY)]

end subroutine

subroutine test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 7294.29954142d0
    value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_ALPHA_PARTICLE_MASS(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 6.6446573357d-27
    value = ALPHA_PARTICLE_MASS
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_ATOMIC_MASS_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 1.66053906660d-27
    value = ATOMIC_MASS_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_AVOGADRO_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected =  6.02214076d23
    value = AVOGADRO_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_BOLTZMANN_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected =  1.380649d-23
    value = BOLTZMANN_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_ELECTRON_VOLT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 1.602176634d-19
    value = ELECTRON_VOLT 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_ELEMENTARY_CHARGE(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 1.602176634d-19
    value = ELEMENTARY_CHARGE
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_FARADAY_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 96485.33212d0
    value = FARADAY_CONSTANT 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_MOLAR_MASS_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.99999999965d-3
    value = MOLAR_MASS_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_MOLAR_VOLUME_NTP(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 22.41396954d-3
    value = MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_PLANCK_CONSTANT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 6.62607015d-34 
    value = PLANCK_CONSTANT 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_SPEED_OF_LIGHT(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected
    expected = 299792458.0d0
    value = SPEED_OF_LIGHT_IN_VACUUM
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_STANDARD_ACCELERATION_OF_GRAVITY(error)
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected
    expected = 9.80665d0
    value = STANDARD_ACCELERATION_OF_GRAVITY 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

end module
