module testsuite_uncertainties
    !! Test some uncertainty values.
    use iso_fortran_env
    use testdrive, only : new_unittest, unittest_type, error_type, check
    use codata
    implicit none
    private
    
    public :: collect_suite_uncertainties

contains

subroutine collect_suite_uncertainties(testsuite)
    implicit none
  type(unittest_type), allocatable, intent(out) :: testsuite(:)

  testsuite = [&
               new_unittest("U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO", test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO),&
               new_unittest("U_ALPHA_PARTICLE_MASS", test_U_ALPHA_PARTICLE_MASS),&
               new_unittest("U_ATOMIC_MASS_CONSTANT", test_U_ATOMIC_MASS_CONSTANT),&
               new_unittest("U_AVOGADRO_CONSTANT", test_U_AVOGADRO_CONSTANT),&
               new_unittest("U_BOLTZMANN_CONSTANT", test_U_BOLTZMANN_CONSTANT),&
               new_unittest("U_ELECTRON_VOLT", test_U_ELECTRON_VOLT),&
               new_unittest("U_ELEMENTARY_CHARGE", test_U_ELEMENTARY_CHARGE),&
               new_unittest("U_FARADAY_CONSTANT", test_U_FARADAY_CONSTANT),&
               new_unittest("U_MOLAR_MASS_CONSTANT", test_U_MOLAR_MASS_CONSTANT),&
               new_unittest("U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15K__101_325_KPA", test_U_MOLAR_VOLUME_NTP),&
               new_unittest("U_PLANCK_CONSTANT", test_U_PLANCK_CONSTANT),&
               new_unittest("U_SPEED_OF_LIGHT_IN_VACUUM", test_U_SPEED_OF_LIGHT),&
               new_unittest("U_STANDARD_ACCELERATION_OF_GRAVITY", test_U_STANDARD_ACCELERATION_OF_GRAVITY)]
end subroutine

subroutine test_U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d7
    expected = 0.00000017d0 * fac
    value = U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_ALPHA_PARTICLE_MASS(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d36
    expected = 0.0000000021d-27 * fac
    value = U_ALPHA_PARTICLE_MASS * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_ATOMIC_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d37
    expected = 0.00000000052d-27 * fac
    value = U_ATOMIC_MASS_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_AVOGADRO_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_AVOGADRO_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_BOLTZMANN_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_BOLTZMANN_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_ELECTRON_VOLT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_ELECTRON_VOLT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_ELEMENTARY_CHARGE(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_ELEMENTARY_CHARGE * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_FARADAY_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_FARADAY_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_MOLAR_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d13
    expected = 0.00000000031d-3 * fac
    value = U_MOLAR_MASS_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_MOLAR_VOLUME_NTP(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_PLANCK_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = PLANCK_CONSTANT * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_SPEED_OF_LIGHT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_SPEED_OF_LIGHT_IN_VACUUM * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

subroutine test_U_STANDARD_ACCELERATION_OF_GRAVITY(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, diff, fac
    fac = 1.0d0
    expected = 0.0d0 * fac
    value = U_STANDARD_ACCELERATION_OF_GRAVITY * fac
    diff = expected - value
    call check(error, diff, 0.0d0)
    if (allocated(error)) return
end subroutine

end module
