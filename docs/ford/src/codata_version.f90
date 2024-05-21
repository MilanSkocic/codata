module codata__version
!! Version
use iso_fortran_env
use iso_c_binding
implicit none
private

character(len=*), parameter :: version = "0.10.0"
character(len=:), allocatable, target :: version_f
character(len=:), allocatable, target :: version_c

public :: get_version

contains

function get_version()result(fptr)
    !! Get the version. 
    implicit none

    !! Returns
    character(len=:), pointer :: fptr
        !! Pointer to the version string.

    if(allocated(version_f))then
        deallocate(version_f)
    endif
    allocate(character(len=len(version)) :: version_f)
    version_f = version
    fptr => version_f    
end function

function capi_get_version()bind(c,name="codata_get_version")result(cptr)
    !! Get the version.
    implicit none
    
    ! Returns   
    type(c_ptr) :: cptr
        !! Pointer to version string.

    character(len=:), pointer :: fptr
    fptr => get_version() 

    if(allocated(version_c))then
        deallocate(version_c)
    endif
    allocate(character(len=len(fptr)+1) :: version_c)

    version_c = fptr // c_null_char
    cptr = c_loc(version_c)
end function

end module codata__version
