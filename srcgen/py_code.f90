module py_code
    !! Functions for writing the python txt code
    use iso_fortran_env
    implicit none

contains


subroutine write_python_module_doc(fcode)
    !! Generate the python module declaration.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the Python module.
    write(fcode, "(A)") '"""Codata module - autogenerated"""'
    write(fcode, "(A)") ""
end subroutine

end module