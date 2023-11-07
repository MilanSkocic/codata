module utils
    !! Functions for parsing and manipulating codata.
    use iso_fortran_env
    implicit none

    !! Properties of the file for the codata raw data.
    type :: codata_file_props
        integer(int32) :: n !! Number of lines.
        integer(int32) :: index_header_end !! Number of lines for the header.
        character(len=18) :: codata_path !! Filepath to the raw codata constants.
        character(len=4) :: year !! Year of release of the codata constants.
    end type

    integer(int32) :: LINE_LENGTH = 256 !! Length of line.
    integer(int32) :: NAMES_LENGTH = 60 !! Length of column name
    integer(int32) :: VALUES_LENGTH = 25 !! Length of column value
    integer(int32) :: UNCERTAINTIES_LENGTH = 25 !! Length of column uncertainty
    integer(int32) :: UNITS_LENGTH = 25 !! Length of column unit

    integer(int32), parameter :: ASCII_UNDERSCORE = iachar("_")
    
contains

pure function isalnum(c)result(r)
    !! Check if c is alpha numeric.
    implicit none
    ! Arguments
    character, intent(in) :: c
        !! Character to be checked
    ! Returns
    logical :: r
        !! Result

    ! Local vars
    integer(int32) :: i
    i = iachar(c)
    r = .false.
    select case (i)
        case(48:57) ! 0-9
            r = .true.
        case(65:90) ! A-Z
            r = .true.
        case(97:122) ! a-z
            r = .true.
        case default
            r = .false.
    end select

end function

pure function isdigit(c)result(r)
    !! Check if c is a digit.
    implicit none
    ! Arguments
    character, intent(in) :: c
        !! Character to be checked
    ! Returns
    logical :: r
        !! Result

    ! Local vars
    integer(int32) :: i

    i = iachar(c)
    r = .false.
    if(i>=48 .and. i<=57)then
        r = .true.
    else 
        .false.
    endif

end function

pure subroutine toupper(s)
    !! Upper case
    implicit none
    ! Arguments
    character(len=*), intent(inout) :: s
    ! Local vars
    integer(int32) :: i,j

    do i=1, len(s)
        j = iachar(s(i:i))
        if((j .ge. 97) .and. (j .le. 122))then
            s(i:i) = achar(j-32)
        endif
    end do


end subroutine

subroutine clean_line(line)
    !! Fill the buffer with white space.
    implicit none
    ! Arguments
    character(len=*), intent(inout) :: line
        !! Line to be cleaned
    ! Local variables
    integer(int32) :: i
    do i=1, len(line)
        line(i:i) = " "
    end do
end subroutine

subroutine get_props(properties)
    !! Get the properties of the codata file.
    implicit none

    ! Arguments
    type(codata_file_props), intent(inout) :: properties
        !! Properties of the codata file.
    
    ! Local variables
    integer(int32) :: unit, iostat, iostat_read
    character(len=512) :: msg
    character(len=LINE_LENGTH) :: line

    iostat = 0 
    iostat_read = 0
    properties%index_header_end = 0
    open(file=properties%codata_path, newunit=unit, iostat=iostat, iomsg=msg, action="read", status="old")

    if(iostat == 0)then
    loop: do 
            read(unit, "(A)", iostat=iostat_read) line
            if(iostat_read == 0)then
                if(line(1:1) == "-")then
                    properties%index_header_end = properties%index_header_end + 1
                    exit loop
                else
                    properties%index_header_end = properties%index_header_end + 1
                endif
            else 
                exit loop
            endif
        end do loop
    endif

    do while(iostat_read == 0)
        read(unit, "(A)", iostat=iostat_read) line
        if((iostat_read == 0) .and. (len(line)>0))then
            properties%n = properties%n+1
        else 
            exit
        endif
    end do

    close(unit)

end subroutine

subroutine format_names(line, name)
    !! Format names simply by copying them.
    implicit none
    ! Arguments
    character(len=*), intent(in) :: line
        ! Line to be parsed
    character(len=*), intent(inout) :: name
        ! String where the name will be copied.
    ! Local vars
    integer(int32) :: i, c

    do i=1, len(name)
        if(.not. isalnum(line(i:i)))then
            name(i:i) = "_"
        else
            name(i:i) = line(i:i)
        endif
    end do  

    do i=len(name), 1, -1
        c = ichar(name(i:i))
        if(c /= ASCII_UNDERSCORE)then
            exit
        else
            name(i:i) = " "
        endif
    end do

    call toupper(name)

end subroutine

subroutine format_values(line, value)
    !! Format values to be conform to Fortran double precision.
    implicit none
    ! Arguments
    character(len=*), intent(in) :: line
        ! Line to be parsed
    character(len=*), intent(inout) :: value 
        ! String where the value will be copied.
    
    ! Local vars
    integer(int32) :: i, j, 
    logical flag_decimal, flag_exponent
    character(len=VALUES_LENGTH) :: temp

    

end subroutine


subroutine write_all_constants(fcodata, ffortran, props)
    !! Generate all constants in the Fortran module.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcodata
        !! File unit of the codata file.
    integer(int32), intent(in) :: ffortran
        !! ffortran File unit of the Fortran module.
        !! fcheader File unit of the C header.
        !! fpython File unit of the python module.
        !! fcpython File unit of the cpython module.
        !! flist File unit of the list of constants.
    type(codata_file_props), intent(in) :: props
        !! props Properties of the codata file.

    ! Local vars
    character(len=LINE_LENGTH) :: line
    character(len=NAMES_LENGTH) :: name
    character(len=VALUES_LENGTH) :: value
    character(len=UNCERTAINTIES_LENGTH) :: uncertainty
    character(len=UNITS_LENGTH) :: unit
    integer(int32) :: i

    rewind(unit=fcodata)
    do i=1, props%index_header_end
        read(fcodata, "(A)") line
    end do

    ! fortran
    write(ffortran, "(A,/)") 'integer(c_int), protected, bind(C,name="YEAR") :: YEAR = ' // props%year

    do i=1, props%n
        call clean_line(line)
        call clean_line(name)
        call clean_line(value)
        call clean_line(uncertainty)
        call clean_line(unit)
        read(fcodata, "(A)") line
        if(len(line)>0)then
            call format_names(line, name);
            ! fortran code
            write(ffortran, "(A,/,A)") 'real(c_double), protected, bind(C,name="'//trim(name)//'") :: &', &
            trim(name)//'='//trim(value)//' !! '//trim(unit)
            write(ffortran, "(A,/,A)") 'real(c_double), protected, bind(C,name="U_'//trim(name)//'") :: &', &
            "U_"//trim(name)//'='//trim(value)//' !! '//trim(unit)
            write(ffortran, "(A)") ""
        end if

    end do

end subroutine

end module