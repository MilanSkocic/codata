module iapws__version
    !! Version
    implicit none
    private

    character(len=*), parameter :: version = "0.3.0"
    character(len=:), allocatable, target :: version_f

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

end module iapws__version
