program main
    use iso_fortran_env
    use codata
    implicit none
    
    print *, "c=",  speed_of_light_in_vacuum
    print *, "u(c)=", u_speed_of_light_in_vacuum
    print *, codata_version_version

contains

pure elemental function roundn(x, n)result(r)
    implicit none
    real(real64), intent(in) :: x
    integer(int32), intent(in) :: n
    real(real64) :: r

    r = anint(x * 10.0d0**n, kind=kind(r)) / 10.0d0**n

end function

end program main