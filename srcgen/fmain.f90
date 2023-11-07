program generator
    use iso_fortran_env
    use utils
    use fortran_code
    implicit none
    
    type(codata_file_props) :: props
    integer(int32) :: fcodata
    integer(int32) :: ffortran
    integer(int32) :: unit
    logical :: exist

    props = codata_file_props(0, 0, "./codata_2018.txt", "2018")

    print *, "Reading codata file properties..."
    call get_props(props)
    print "(4X, A, I3)", "Number of constants: ", props%n
    print "(4X, A, I2)", "Header Offset: ", props%index_header_end
    print "(4X, A, A)", "fpath: ", props%codata_path
    print "(4X, A, A)", "Year: ", props%year


    print *, "Opening codata file..."
    open(file=props%codata_path, newunit=fcodata, status="old", action="read")
    
    print *, "Opening ffortran file..."
    inquire(file="../src/codata_.f90", exist=exist)
    if(exist)then
        open(file="../src/codata_.f90", newunit=unit, status="old")
        close(unit=unit, status="delete")
    endif
    open(file="../src/codata_.f90", newunit=ffortran, status="new", action="write")

    print *, "Writing fortran module declaration..."
    call write_fortran_module_declaration(ffortran)

    print *, "Writing all constants..."
    call write_all_constants(fcodata, ffortran, props)

    print *, "Writing fortran module end..."
    call write_fortran_module_end(ffortran)


    print *, "Closing codata file..."
    close(fcodata)
    print *, "Closing ffortran file..."
    close(ffortran)

end program