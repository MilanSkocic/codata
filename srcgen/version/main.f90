program generator
    use iso_fortran_env
    use core
    use fortran
    use cheader
    use python
    implicit none
    
    character(len=*), parameter :: root = "../../"
    character(len=:), allocatable :: version, name
    integer(int32) :: ffortran, ffortran_capi, fcheader, fpython, fpyproject, unit
    logical :: exist
    character(len=64) :: fpath

    version = get_version()
    name = get_name()
    write(output_unit, "(A)") "name = "//name
    write(output_unit, "(A)") "version = "//version

    write(output_unit, "(A)", advance="NO") "Opening files..."
    
    ! FORTRAN
    fpath = root//"/src/"//trim(name)//"_version.f90"
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=ffortran, status="new", action="write")
    
    ! C API
    fpath = root // "/src/"//trim(name)//"_version_capi.f90"
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=ffortran_capi, status="new", action="write")

    ! C HEADER
    fpath = root//"/include/"//trim(name)//"_version.h"
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=fcheader, status="new", action="write")

    ! Python
    fpath = root//"/pywrapper/py"//trim(name)//"/version.py"
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=fpython, status="new", action="write")
    
    ! Python pyproject
    fpath = root//"pywrapper/pyproject.toml"
    inquire(file=fpath, exist=exist)
    if(exist)then
       open(file=fpath, newunit=fpyproject, status="old", action="readwrite")
    else
        print *, "pyproject does not exist." 
        stop 1
    endif
    
    write(output_unit, "(A)", advance="YES") "OK"

    
    write(output_unit, "(A)", advance="NO") "Generating code..."
    call write_fortran_module_declaration(ffortran, version, name)
    call write_fortran_capi_module_declaration(ffortran_capi, version, name)
    call write_C_header_declaration(fcheader, version, name)
    call write_python(fpython, version)
    call write_pyproject(fpyproject, version)
    call write_fortran_module_end(ffortran, name)
    call write_fortran_capi_module_end(ffortran_capi, name)
    call write_C_header_end(fcheader)
    write(output_unit, "(A)", advance="YES") "OK"
    
    close(ffortran)
    close(ffortran_capi)
    close(fcheader)
    close(fpython)
    close(fpyproject)


end program