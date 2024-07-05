module codata__capi_version
    !! Version
use iso_c_binding, only: c_ptr, c_null_char, c_loc
use codata__version, only: get_version
implicit none
private

character(len=:), allocatable, target :: version_c

public :: capi_get_version

contains


function capi_get_version()bind(C, name="codata_get_version")result(cptr)
    !! Get the version
    implicit none
    type(c_ptr) :: cptr
        !! C pointer to a string indicating the version.

    character(len=:), pointer :: fptr 

    fptr => get_version() 

    if(allocated(version_c))then
        deallocate(version_c)
    endif
    allocate(character(len=len(fptr)+1) :: version_c)

    version_c = fptr // c_null_char
    cptr = c_loc(version_c)
end function

end module codata__capi_version
