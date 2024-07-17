module codata__version
    !! Version
use iso_fortran_env
implicit none
private

character(len=*), parameter :: version = "1.2.1"
character(len=:), allocatable, target :: version_f

public :: get_version

contains

function get_version()result(fptr)
    !! Get the version.
    implicit none
    character(len=:), pointer :: fptr 
        !! Fortran pointer to a string indicating the version.

    if(allocated(version_f))then
        deallocate(version_f)
    endif
    allocate(character(len=len(version)) :: version_f)
    version_f = version
    fptr => version_f
end function

end module codata__version
