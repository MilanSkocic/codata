module test__common
    use iso_c_binding
    implicit none

contains
    
function roundn(x, n)result(r)bind(C)
    implicit none
    real(c_double), intent(in), value :: x
    integer(c_int), intent(in), value :: n
    real(c_double) :: r
    real(c_double) :: fac

    fac = 10**n
    r = nint(x*fac, kind=kind(x)) / fac

end function

function assertEqual(x1, x2, n)result(r)bind(C, name="assertEqual")
    implicit none
    real(c_double), intent(in), value :: x1
    real(c_double), intent(in), value :: x2
    integer(c_int), intent(in), value :: n
    logical(c_bool) :: r

    real(c_double) :: fac
    real(c_double) :: ix1
    real(c_double) :: ix2
    
    fac = 10**n
    ix1 = nint(x1 * fac, kind=kind(n))
    ix2 = nint(x2 * fac, kind=kind(n))
    r = ix1 == ix2

end function

end module