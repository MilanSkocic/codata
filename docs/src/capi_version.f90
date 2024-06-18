module capi__version
    !! Version: C API.
    use iso_c_binding, only: c_null_char, c_ptr, c_loc
    use iapws__version
    implicit none
    private

    character(len=:), allocatable, target :: version_c

    public :: capi_get_version

contains

function capi_get_version()bind(c,name="iapws_get_version")result(cptr)
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

end module capi__version
