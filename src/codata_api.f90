module codata__api
    !! Constants module.
    !! The latest values (2022) do not have the year as a suffix in their name.
    !! Older values can be used and they feature the year as a suffix in their name.
use codata__constants_2022
use codata__constants_2018
use codata__constants_2014
use codata__constants_2010
use codata__constants_type
use codata__version, only: version
implicit none

character(len=:), allocatable, target, private :: version_f

public :: get_version

contains

function get_version()result(fptr)
    !! Get the version.

    character(len=:), pointer :: fptr 
        !! Fortran pointer to a string indicating the version.

    if(allocated(version_f))then
        deallocate(version_f)
    endif
    allocate(character(len=len(version)) :: version_f)
    version_f = version
    fptr => version_f
end function

end module codata__api
