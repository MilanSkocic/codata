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
    write(fcode, "(A) ") '* @brief Constants - autogenerated.'
    write(fcode, "(A)") "*/"
    write(fcode, "(A)") ""
    write(fcode, "(A)") '#ifndef codata_CONSTANTS_H'
    write(fcode, "(A)") '#define codata_CONSTANTS_H'
    write(fcode, "(A)") "#if _MSC_VER"
    write(fcode, "(A)") "#define ADD_IMPORT __declspec(dllimport)"
    write(fcode, "(A)") "#else"
    write(fcode, "(A)") "#define ADD_IMPORT"
    write(fcode, "(A)") "#endif"
end subroutine

subroutine write_C_header_end(fcode)
    !! Generate the C header declaration
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the C header.
    write(fcode, "(A)") '#endif'
    write(fcode, "(A)") ''
end subroutine


end module 