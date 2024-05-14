module codata__constants_type
    use iso_fortran_env, only: dp=>real64
    private

    character(len=*), parameter :: FMT_REAL_DP = "(ES24.16E3)"
    
    type, public :: codata_constant_type
        !! Derived type for representing a Codata constant.
        character(len=64) :: name
        real(dp) :: value
        real(dp) :: uncertainty
        character(len=32) :: unit
    contains 
        procedure :: print
        procedure :: to_real
    end type

contains

subroutine print(self)
    !! Print out the constant's name, value, uncertainty and unit.
    class(codata_constant_type), intent(in) :: self
    print "(A64, SP, "//FMT_REAL_DP//", A5, "//FMT_REAL_DP//", 1X, A32)", self%name, self%value, "+/-", self%uncertainty, self%unit 
end subroutine

elemental pure real(dp) function to_real(self, uncertainty) result(r)
    !! Get the constant value or uncertainty 
    
    class(codata_constant_type), intent(in) :: self !! Codata constant
    logical, intent(in), optional :: uncertainty !! Set to true if the uncertainty is required. Default to .false..
        !! 
    logical :: u
    
    if(present(uncertainty))then
        u = uncertainty
    else
        u = .false.
    end if

    if(u .eqv. .false.)then
        r = self%value
    else
        r = self%uncertainty
    end if
end function

end module
