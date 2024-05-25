module codata__constants_type
    !! Codata constant type
    use stdlib_kinds, only: sp, dp
    use stdlib_io, only: FMT_REAL_DP
    use stdlib_optval, only: optval 
    use iso_c_binding, only: c_char, c_double, c_null_char
    private

    type, public :: codata_constant_type
        !! Derived type for representing a Codata constant.
        character(len=64) :: name
        real(dp) :: value
        real(dp) :: uncertainty
        character(len=32) :: unit
    contains 
        procedure :: print
        procedure :: to_real_sp
        procedure :: to_real_dp
        generic :: to_real => to_real_sp, to_real_dp
    end type
    
    interface to_real
        !! Get the constant value or uncertainty.
        module procedure to_real_sp
        module procedure to_real_dp
    end interface

    public :: to_real, c_char, c_double, c_null_char
    
contains

subroutine print(self)
    !! Print out the constant's name, value, uncertainty and unit.
    class(codata_constant_type), intent(in) :: self
    print "(A64, SP, "//FMT_REAL_DP//", A5, "//FMT_REAL_DP//", 1X, A32)", self%name, self%value, "+/-", self%uncertainty, self%unit 
end subroutine

elemental pure real(sp) function to_real_sp(self, mold, uncertainty) result(r)
    !! Get the constant value or uncertainty for the kind sp
    
    class(codata_constant_type), intent(in) :: self !! Codata constant
    real(sp), intent(in) :: mold !! dummy argument to disambiguate at compile time the generic interface
    logical, intent(in), optional :: uncertainty !! Set to true if the uncertainty is required. Default to .false..
        !! 
    logical :: u
    
    u = optval(uncertainty, .false.)

    if(u .eqv. .false.)then
        r = real(self%value, kind(mold))
    else
        r = real(self%uncertainty, kind(mold))
    end if
end function
elemental pure real(dp) function to_real_dp(self, mold, uncertainty) result(r)
    !! Get the constant value or uncertainty for the kind dp
    
    class(codata_constant_type), intent(in) :: self !! Codata constant
    real(dp), intent(in) :: mold !! dummy argument to disambiguate at compile time the generic interface
    logical, intent(in), optional :: uncertainty !! Set to true if the uncertainty is required. Default to .false..
        !! 
    logical :: u
    
    u = optval(uncertainty, .false.)

    if(u .eqv. .false.)then
        r = real(self%value, kind(mold))
    else
        r = real(self%uncertainty, kind(mold))
    end if
end function

end module codata__constants_type
