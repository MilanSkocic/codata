program main
    use iso_fortran_env
    use codata
    use test__common
    implicit none

    print *, "***** TESTING FORTRAN CODE FOR CONSTANTS *****"
    call test_constants()
    
contains

subroutine test_constants()
    implicit none 

    real(real64) :: value
    real(real64) :: expected
    real(real64) :: diff
    real(real64) :: fac
    
    write(*, "(4X, A)", advance="no") "ATOMIC MASS CONSTANT..."

    fac = 10.0d0**27
    expected = 1.66053906660d-27 * fac
    value = ATOMIC_MASS_CONSTANT * fac
    diff = value - expected
    diff = roundn(diff, 11)
    if(.not. assertEqual(diff, 0.0d0, 11))then
        write(*, "(A)", advance="yes") "Failed"
        write(*, "(4X, ES23.16, A1, ES23.16, A1, ES23.16)", advance="yes") value, "/", expected, "/", diff
        stop 1
    else
        write(*, "(A)", advance="yes") "OK"
    endif
    
    write(*, "(4X, A)", advance="no") "SPEED OF LIGHT IN VACUUM..."

    fac = 10.0d0**0
    expected = 299792458.0d0 * fac
    value = SPEED_OF_LIGHT_IN_VACUUM * fac
    diff = value - expected
    diff = roundn(diff, 1)
    if(.not. assertEqual(diff, 0.0d0, 1))then
        write(*, "(A)", advance="yes") "Failed"
        write(*, "(4X, ES23.16, A1, ES23.16, A1, ES23.16)", advance="yes") value, "/", expected, "/", diff
        stop 1
    else
        write(*, "(A)", advance="yes") "OK"
    endif


end subroutine


end program main