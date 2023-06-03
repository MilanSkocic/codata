program main
    use iso_fortran_env
    use codata
    implicit none
    
    print *, "c=",  SPEED_OF_LIGHT_IN_VACUUM
    print *, "U(c)=", U_SPEED_OF_LIGHT_IN_VACUUM

contains

pure elemental function roundn(x, n)result(r)
    implicit none
    real(real64), intent(in) :: x
    integer(int32), intent(in) :: n
    real(real64) :: r

    r = anint(x * 10.0d0**n, kind=kind(r)) / 10.0d0**n

end function

end program main