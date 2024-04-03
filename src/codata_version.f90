!> @file
!! @brief Codata version.

!> @brief Codata version.
module codata__version
!! Version
use iso_fortran_env
use iso_c_binding
implicit none
private

character(len=*), parameter :: version = "0.11.0"
character(len=:), allocatable, target :: version_f
character(len=:), allocatable, target :: version_c

public :: get_version, capi_get_version

contains

!> @brief Get the version.
!! @return fptr Fortran pointer to a string indicating the version.
function get_version()result(fptr)
    implicit none
    character(len=:), pointer :: fptr

    if(allocated(version_f))then
        deallocate(version_f)
    endif
    allocate(character(len=len(version)) :: version_f)
    version_f = version
    fptr => version_f
end function

!> @brief Get the version.
!! @return cptr C pointer to a string indicating the version.
function capi_get_version()bind(c,name="codata_get_version")result(cptr)
    implicit none
    type(c_ptr) :: cptr

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
