module testsuite_year
    use iso_fortran_env
    use testdrive, only : new_unittest, unittest_type, error_type, check
    use codata
    implicit none
    private
    
    public :: collect_suite_year

contains
!> Collect all exported unit tests
subroutine collect_suite_year(testsuite)
  !> Collection of tests
  type(unittest_type), allocatable, intent(out) :: testsuite(:)

  testsuite = [new_unittest("YEAR", test_year)]
end subroutine

subroutine test_year(error)
    type(error_type), allocatable, intent(out) :: error 
    
    integer(int32) :: value, expected
    
    expected = 2018
    value = YEAR

    call check(error, value, expected)
    if (allocated(error)) return
end subroutine


end module