program generator
    use iso_fortran_env
    use utils
    use fortran_code
    use c_code
    use py_code
    implicit none
    
    type(codata_file_props) :: props
    integer(int32) :: fcodata
    integer(int32) :: ffortran
    integer(int32) :: fcheader
    integer(int32) :: fpython
    integer(int32) :: unit
    logical :: exist

    props = codata_file_props(0, 0, "./codata_2018.txt", "2018")

    print *, "Reading codata file properties..."
    call get_props(props)
    print "(4X, A, I3)", "Number of constants: ", props%n
    print "(4X, A, I2)", "Header Offset: ", props%index_header_end
    print "(4X, A, A)", "fpath: ", props%codata_path
    print "(4X, A, A)", "Year: ", props%year

    ! CODATA SOURCE
    print *, "Opening codata file..."
    open(file=props%codata_path, newunit=fcodata, status="old", action="read")
    
    ! FORTRAN
    print *, "Opening ffortran file..."
    inquire(file="../src/codata.f90", exist=exist)
    if(exist)then
        open(file="../src/codata.f90", newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file="../src/codata.f90", newunit=ffortran, status="new", action="write")
    
    ! C HEADER
    print *, "Opening C header file..."
    inquire(file="../include/codata.h", exist=exist)
    if(exist)then
        open(file="../include/codata.h", newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file="../include/codata.h", newunit=fcheader, status="new", action="write")
    
    ! TXT INCLUDE
    print *, "Opening python as txt in include..."
    inquire(file="../include/codata.txt", exist=exist)
    if(exist)then
        open(file="../include/codata.txt", newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file="../include/codata.txt", newunit=fpython, status="new", action="write")


    print *, "Writing fortran module declaration..."
    call write_fortran_module_declaration(ffortran)
    print *, "Writing C header doc..."
    call write_c_header_doc(fcheader)
    print *, "Writing Python code as txt doc..."
    call write_python_module_doc(fpython)

    print *, "Writing all constants..."
    call write_all_constants(fcodata, ffortran, fcheader, fpython, props)

    print *, "Writing fortran module end..."
    call write_fortran_module_end(ffortran)


    print *, "Closing codata file..."
    close(fcodata)
    print *, "Closing ffortran file..."
    close(ffortran)
    print *, "Closing c header file..."
    close(fcheader)
    print *, "Closing python as txt header file..."
    close(fpython)

end program