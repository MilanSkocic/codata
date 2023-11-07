module utils
    use iso_fortran_env
    implicit none


contains

pure function isalnum(c)result(r)
    !! Check if c is alpha numeric.
    implicit none
    ! Arguments
    character, intent(in) :: c
        !! Character to be checked
    ! Returns
    logical :: r
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

end module