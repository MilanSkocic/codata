module codata_base
    use iso_fortran_env
    implicit none

type :: t_constant
  character(len=60) :: name
  real(real64) :: value
  real(real64) :: uncertainty
  character(len=25) :: unit
end type t_constant
    
character(len=60), dimension(4), parameter :: headers = [character(len=60):: "Names", "Values", "Uncertainties", "Units"]
type(t_constant), dimension(:), pointer :: codata_constants

end module