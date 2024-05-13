module testsuite_constants
    !! Test some constants values
    use iso_fortran_env
    use testdrive, only : new_unittest, unittest_type, error_type, check
    use codata
    implicit none
    private
    
    public :: collect_suite_year
    public :: collect_suite_constants

contains

subroutine collect_suite_constants(testsuite)
    implicit none
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

subroutine collect_suite_year(testsuite)
    implicit none
    type(unittest_type), allocatable, intent(out) :: testsuite(:)
    testsuite = [new_unittest("YEAR", test_year)]
end subroutine

subroutine test_year(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    
    integer(int32) :: value, expected, diff
    
    expected = 2022
    value = YEAR
    diff = expected - value
    call check(error, diff, 0)
    if (allocated(error)) return
end subroutine

subroutine test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 7294.29954171d0 * fac
    value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_ALPHA_PARTICLE_MASS(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d27
    expected = 6.6446573450d-27 * fac
    value = ALPHA_PARTICLE_MASS * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_ATOMIC_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d27
    expected = 1.66053906892d-27 * fac
    value = ATOMIC_MASS_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_AVOGADRO_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d-23
    expected =  6.02214076d23 * fac
    value = AVOGADRO_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_BOLTZMANN_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d23
    expected =  1.380649d-23 * fac
    value = BOLTZMANN_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_ELECTRON_VOLT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d19
    expected = 1.602176634d-19 * fac
    value = ELECTRON_VOLT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_ELEMENTARY_CHARGE(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d19
    expected = 1.602176634d-19 * fac
    value = ELEMENTARY_CHARGE * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_FARADAY_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 96485.33212d0 * fac
    value = FARADAY_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_MOLAR_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d3
    expected = 1.00000000105d-3 * fac
    value = MOLAR_MASS_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_MOLAR_VOLUME_NTP(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d3
    expected = 22.41396954d-3 * fac
    value = MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_PLANCK_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d34
    expected = 6.62607015d-34 * fac
    value = PLANCK_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_SPEED_OF_LIGHT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 299792458.0d0 * fac
    value = SPEED_OF_LIGHT_IN_VACUUM * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_STANDARD_ACCELERATION_OF_GRAVITY(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 9.80665d0 * fac
    value = STANDARD_ACCELERATION_OF_GRAVITY * fac 
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

end module
