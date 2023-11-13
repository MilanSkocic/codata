module fortran_code
    !! Function for wirting the Fortran code.
    use iso_fortran_env
    implicit none

contains

subroutine write_fortran_module_declaration(fcode)
    !! brief Generate the Fortran module declaration.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the Fortran module.
    
    write(fcode, "(A)") "module codata"
    write(fcode, "(A)") "!! Codata constants - autogenerated."
    write(fcode, "(A)") "use iso_c_binding"
    write(fcode, "(A)") "implicit none"
    write(fcode, "(A)") " "
end subroutine


subroutine write_fortran_module_end(fcode)
    !! Generate the end of the Fortran module.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the Fortran module.
    write(fcode, "(A)") "end module codata"
end subroutine

end module