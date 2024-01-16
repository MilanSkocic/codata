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
    real(real64) :: value, expected, fac
    expected = 0.00000024d0
    value = U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_ALPHA_PARTICLE_MASS(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0000000020d-27
    value = U_ALPHA_PARTICLE_MASS
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_ATOMIC_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.00000000050d-27
    value = U_ATOMIC_MASS_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_AVOGADRO_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0 
    value = U_AVOGADRO_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_BOLTZMANN_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = U_BOLTZMANN_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_ELECTRON_VOLT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = U_ELECTRON_VOLT 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_ELEMENTARY_CHARGE(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = U_ELEMENTARY_CHARGE
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_FARADAY_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = U_FARADAY_CONSTANT 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_MOLAR_MASS_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.00000000030d-3
    value = U_MOLAR_MASS_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_MOLAR_VOLUME_NTP(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_PLANCK_CONSTANT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected, fac
    expected = 0.0d0
    value = PLANCK_CONSTANT
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_SPEED_OF_LIGHT(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected
    expected = 0.0d0
    value = U_SPEED_OF_LIGHT_IN_VACUUM
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_U_STANDARD_ACCELERATION_OF_GRAVITY(error)
    implicit none
    type(error_type), allocatable, intent(out) :: error 
    real(real64) :: value, expected
    expected = 0.0d0
    value = U_STANDARD_ACCELERATION_OF_GRAVITY 
    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

end module
