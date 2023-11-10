module c_code
    use iso_fortran_env
    use utils
    implicit none

contains
subroutine write_c_header_doc(fcode)
    !! Generate the documentation for the C header.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit to the C header.
    write(fcode, "(A)") '/**'
    write(fcode, "(A)") '* @file'
    write(fcode, "(A) ") '* @brief Codata module - autogenerated.'
    write(fcode, "(A)") "*/"
    write(fcode, "(A)") ""
    write(fcode, "(A)") "#if _MSC_VER"
    write(fcode, "(A)") "#define ADD_IMPORT __declspec(dllimport)"
    write(fcode, "(A)") "#else"
    write(fcode, "(A)") "#define ADD_IMPORT"
    write(fcode, "(A)") "#endif"
end subroutine


end module 