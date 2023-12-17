program generator
    use iso_fortran_env
    use utils
    use fortran_code
    use c_code
    use py_code
    use cpy_code
    implicit none
    
    type(codata_file_props) :: props
    integer(int32) :: fcodata
    integer(int32) :: ffortran
    integer(int32) :: fcheader
    integer(int32) :: fpython
    integer(int32) :: fcpython
    integer(int32) :: unit
    logical :: exist

    character(len=*), parameter :: root = "../../"
    character(len=64) :: fpath
    props = codata_file_props(0, 0, "./codata_2018.txt", "2018")

    print *, "Reading codata file properties..."
    call get_props(props)
    print "(4X, A, I3)", "Number of constants: ", props%n
    print "(4X, A, I2)", "Header Offset: ", props%index_header_end
    print "(4X, A, A)", "fpath: ", props%codata_path
    print "(4X, A, A)", "Year: ", props%year

    write(output_unit, "(A)", advance="NO") "Opening files..."
    
    ! CODATA SOURCE
    open(file=props%codata_path, newunit=fcodata, status="old", action="read")
    
    ! FORTRAN
    fpath = root//'src/codata_constants.f90'
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=ffortran, status="new", action="write")
    
    ! C HEADER
    fpath = root//'include/codata_constants.h'
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=fcheader, status="new", action="write")
    
    ! TXT INCLUDE
    fpath = root//'include/codata.txt'
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=fpython, status="new", action="write")
    
    ! CPYTHON
    fpath = root//'pywrapper/pycodata/cpy_codata_constants.c'
    inquire(file=fpath, exist=exist)
    if(exist)then
        open(file=fpath, newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file=fpath, newunit=fcpython, status="new", action="write")
    
    write(output_unit, "(A)", advance="YES") "OK"

    write(output_unit, "(A)", advance="NO") "Generating code..."
    call write_fortran_module_declaration(ffortran)
    call write_c_header_doc(fcheader)
    call write_python_module_doc(fpython)
    call write_cpython_extension_declaration(fcpython);

    call write_all_constants(fcodata, ffortran, fcheader, fpython, fcpython, props)

    call write_fortran_module_end(ffortran)
    call write_C_header_end(fcheader)
    call write_cpython_extension_end(fcpython);
    
    write(output_unit, "(A)", advance="YES") "OK"

    close(fcodata)
    close(ffortran)
    close(fcheader)
    close(fpython)
    close(fcpython)
    

end program