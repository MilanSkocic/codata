module codata__constants_type
    use stdlib_codata_type
    use iso_c_binding, only: c_char, c_double, c_null_char
    
    type, public, bind(C) :: capi_codata_constant_type
        !! Derived type for representing a Codata constant in C.
        character(kind=c_char) :: name(65)
        real(c_double) :: value
        real(c_double) :: uncertainty
        character(kind=c_char) :: unit(33)
    end type

end module codata__constants_type
