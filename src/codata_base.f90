!> @file
!! @brief Base for the codata module.

!> @brief Base module
!! @details Here are defined all common variables needed for the codata module.
module codata_base
    use iso_fortran_env
    implicit none
    private

!> @brief constant type
type :: codata_t_constant
  character(len=60) :: name
  real(real64) :: value
  real(real64) :: uncertainty
  character(len=25) :: unit
end type codata_t_constant
    
!> @brief Pointer to the codata table
!! @details Pointer that will point to the adequat codata table according
!! to the choosen year. By default, it points to the last update of codata values.
type(codata_t_constant), dimension(:), pointer :: codata_constants

!> @brief flag for indicating if the codata year is set
logical :: codata_is_set = .false. 

!> @brief year that was set
character(len=4) :: codata_year = "XXXX"

public :: codata_t_constant, codata_constants, codata_is_set, codata_year

end module