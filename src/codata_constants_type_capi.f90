module codata__constants_type_capi
!! Codata constant type: C API.
use, intrinsic :: iso_c_binding, only: c_char, c_double
implicit none(type,external)
private

type, bind(C), public :: capi_constant_type
    !! Derived type for representing a Codata constant in C.
    character(kind=c_char) :: name(65)
    real(c_double) :: value
    real(c_double) :: uncertainty
    character(kind=c_char) :: unit(33)
end type
end module codata__constants_type_capi
