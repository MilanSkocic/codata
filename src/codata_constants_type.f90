module codata__constants_type
    use iso_fortran_env, only: dp=>real64
    use iso_c_binding, only: c_char, c_double
    private

    type, public :: codata_constant_type
        !! Derived type for representing a Codata constant.
        character(len=64) :: name
        real(dp) :: value
        real(dp) :: uncertainty
        character(len=32) :: unit
    end type

    type, public, bind(c) :: capi_codata_constant_type
        !! Derived type for representing a Codata constant for C.
        character(kind=c_char) :: name(65)
        real(c_double) :: value
        real(c_double) :: uncertainty
        character(kind=c_char) :: unit(33)
    end type


end module
