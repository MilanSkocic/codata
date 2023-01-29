!> @file
!! @brief Base for the codata module.

!> @brief Base module
module codata_base
    use iso_fortran_env
    implicit none

!> @brief constant type
type :: t_constant
  character(len=60) :: name
  real(real64) :: value
  real(real64) :: uncertainty
  character(len=25) :: unit
end type t_constant
    
character(len=60), dimension(4), parameter :: headers = [character(len=60):: "Names", "Values", "Uncertainties", "Units"]

!> @brief Pointer to the codata table 
type(t_constant), dimension(:), pointer :: codata_constants

!> @brief flag for indicating if the codata year is set
logical :: codata_is_set = .false. 

!> @brief year that was set
character(len=4) :: codata_year = "XXXX"

end module