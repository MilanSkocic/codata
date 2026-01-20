program codatacli
    use iso_fortran_env, only: output_unit
    use M_CLI2, only: set_args, iget
    use M_CLI2, only: args=>unnamed
    use codata
    
    character(len=*), parameter :: name="codata"
    character(len=:),allocatable, target  :: help_text(:) 
    character(len=:),allocatable, target  :: version_text(:)
    character(len=:), pointer :: char_fp(:)
    type(codata_constant_type), pointer :: cctptr(:)
    
    integer :: i
    
    nullify(char_fp)
    nullify(cctptr)
    
    version_text=[character(len=80) :: &
        'PROGRAM:      '//name//'                         ', &
        'DESCRIPTION:  Command line interface for codata  ', &
        'VERSION:      '//get_version()//'                ', &
        'AUTHOR:       M. Skocic                          ', &
        'LICENSE:      MIT                                ', &
        '' ]
    
    help_text=[character(len=80) :: &
        'NAME                                                            ', &
        '  '//name//' - Command line for codata                          ', &
        '                                                                ', &
        'SYNOPSIS                                                        ', &
        '  '//name//' [OPTIONS] [PATTERN ... ]                           ', &
        '                                                                ', &
        'DESCRIPTION                                                     ', &
        '  codatacli is command line interface which prints all the codata', &
        '  constants. The current values are from 2022.                 ', &
        '  The output can filtered with PATTERNS.                           ', &
        '                                                                ', &
        '                                                                ', &
        'OPTIONS                                                         ', &
        '  o --year, -y  Year of the codata constants: 2022, 2018, 2014, 2010', &
        '  o --usage     Show usage text and exit                          ', & 
        '  o --help      Show help text and exit                          ', & 
        '  o --verbose   Display additional information when available.   ', &
        '  o --version   Show version information and exit.               ', &
        '                                                                ', &
        'EXAMPLE                                                         ', &
        '  Minimal example                                               ', &
        '                                                                ', &
        '     codata                                                     ', &
        '     codata -y 2018 molar electron                              ', &
        '                                                                ', &
        'SEE ALSO                                                         ', &
        '  codata(3)                                                     ', &
        '' ]
    
    call set_args("--year:y 2022", help_text, version_text)
    select case(iget("year"))
        case (2022)
            cctptr => cc
        case (2018)
            cctptr => cc_2018
        case (2014)
            cctptr => cc_2014
        case (2010)
            cctptr => cc_2010
        case default
            nullify(cctptr)
            char_fp => help_text
            call print_text(char_fp)
            stop
    end select

    if(ASSOCIATED(cctptr))then
        if(size(args) > 0) then
            do i=1, size(args), 1
                 call display(cctptr, trim(args(i)))
            end do
        else
            call display(cctptr)
        end if
    end if

contains

subroutine print_text(char_fp)
    character(len=:), pointer, intent(in) :: char_fp(:)
    integer :: i
    do i=1, size(char_fp), 1
        write (OUTPUT_UNIT, '(A)') char_fp(i)
    end do
end subroutine

subroutine display(fptr, pattern)
    type(codata_constant_type), intent(in), pointer :: fptr(:)
    character(len=*), intent(in), optional :: pattern
    integer :: i,n
    
    if(present(pattern))then
        n = len(pattern)
        do i=1, size(fptr),1
            if(fptr(i)%name(1:n) == pattern)then
                call fptr(i)%print()
            end if
        end do
    else
        do i=1, size(fptr),1
            call fptr(i)%print()
        end do
    end if
end subroutine


end program
