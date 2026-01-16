module codata__api
    !! API.
use codata__version, only: version
implicit none
private

character(len=:), allocatable, target, private :: version_f ! Version

public :: get_version

contains


$BLOCK comment --file codata_get_version.3.txt
NAME
    get_version - version getter for the library

LIBRARY
    Codata - (-libcodata, -lcodata) 

SYNOPSIS
    function get_version()result(fptr)
    
DESCRIPTION
    This function returns the version of the codata library.

RETURN VALUE
    character(len=:), pointer :: fptr

NOTES
    The C API is defined by the following prototype: char* codata_get_version(void)

    The python wrappers embeds the version of the version in the top level
    variable __version__.

EXAMPLE
    Fortran

        print *, "version = ", get_version()

    C

        printf("version = %s\n", codata_get_version());

    Python

        print(f"version = {pycodata.__version__}")

SEE ALSO
    codata(3)
$ENDBLOCK
function get_version()result(fptr)
    !! Get the version.

    character(len=:), pointer :: fptr !! Fortran pointer to a string indicating the version.

    if(allocated(version_f))then
        deallocate(version_f)
    endif
    allocate(character(len=len(version)) :: version_f)
    version_f = version
    fptr => version_f
end function

end module codata__api
