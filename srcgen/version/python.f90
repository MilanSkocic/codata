module python 
    use iso_fortran_env
    implicit none
contains

subroutine write_python(fcode, version)
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the C header.
    character(len=*), intent(in) :: version
        !! Version string

    write(fcode, "(A)") 'r"""Version"""'
    write(fcode, "(A)") '__all__ = ["__version__"]'
    write(fcode, "(A)") '__version__ = '//trim(version)

end subroutine

subroutine write_pyproject(fcode, version)
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the C header.
    character(len=*), intent(in) :: version
        !! Version string

    integer(int32) :: iostat, unit
    character(len=128) :: line

    open(newunit=unit, status="scratch")

    do
        read(fcode, "(A)", iostat=iostat) line
        if(iostat == 0)then
            if(line(1:10) == "version = ")then
                write(unit, "(A)") "version = "//trim(version)
            else
                write(unit, "(A)") trim(line)
            endif
        else
            exit
        end if
    end do
    rewind(fcode)
    rewind(unit)
    do
        read(unit, "(A)", iostat=iostat) line
        if(iostat == 0)then
            write(fcode, "(A)") trim(line)
        else
            exit
        endif
    end do

    close(unit)

end subroutine

end module