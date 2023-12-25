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

  testsuite = [new_unittest("ALPHA_PARTICLE_ELECTRON_MASS_RATIO", test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO),&
               new_unittest("ATOMIC MASS CONSTANT", test_atomic_mass_constant),&
               new_unittest("SPEED OF LIGHT IN VACUUM", test_speed_of_light)]

end subroutine


subroutine test_ALPHA_PARTICLE_ELECTRON_MASS_RATIO(error)
    type(error_type), allocatable, intent(out) :: error 
    
    real(real64) :: value, expected, fac
    
    expected = 7294.29954142d0
    value = ALPHA_PARTICLE_ELECTRON_MASS_RATIO

    call check(error, value, expected)
    if (allocated(error)) return

end subroutine

subroutine test_atomic_mass_constant(error)
    type(error_type), allocatable, intent(out) :: error 
    
    real(real64) :: value, expected, fac
    
    expected = 1.66053906660d-27
    value = ATOMIC_MASS_CONSTANT

    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

subroutine test_speed_of_light(error)
    type(error_type), allocatable, intent(out) :: error 
    
    real(real64) :: value, expected
    
    expected = 299792458.0d0
    value = SPEED_OF_LIGHT_IN_VACUUM

    call check(error, value, expected)
    if (allocated(error)) return
end subroutine

end module