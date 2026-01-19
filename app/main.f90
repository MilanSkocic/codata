program codatacli
    use iso_fortran_env, only: output_unit
    use M_CLI2, only: set_args, iget
    use codata
    
    character(len=:),allocatable, target  :: help_text(:) 
    character(len=:),allocatable, target  :: version_text(:)
    character(len=:), pointer :: char_fp(:)
    type(codata_constant_type), pointer :: cctptr(:)
    
    integer :: i
    
    nullify(char_fp)
    nullify(cctptr)
    
    version_text=[character(len=80) :: &
        'PROGRAM:      codata                ', &
        'DESCRIPTION:  Command line for codata  ', &
        'VERSION:      '//get_version()//'      ', &
        'AUTHOR:       M. Skocic                ', &
        'LICENSE:      MIT                      ', &
        '' ]
    
    help_text=[character(len=80) :: &
        'NAME                                                            ', &
        '  codata(1) - Command line for codata                        ', &
        '                                                                ', &
        'SYNOPSIS                                                        ', &
        '  codata [OPTIONS]                                           ', &
        '                                                                ', &
        'DESCRIPTION                                                     ', &
        '  codata is command line interface which prints all the codata', &
        '  constants.                                                    ', &
        '  The current values are from 2022.                             ', &
        '                                                                ', &
        'OPTIONS                                                         ', &
        '  o --year, -y  Year of the codata constants: 2022, 2018, 2014, 2010', &
        '  o --usage     Show usage text and exit                          ', & 
        '  o --help      Show help text and exit                          ', & 
        '  o --verbose   Display additional information when available.   ', &
        '  o --version   Show version information and exit.               ', &
        '                                                                ', &
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
    
    if(ASSOCIATED(cctptr)) call display(cctptr) 

contains

subroutine print_text(char_fp)
    character(len=:), pointer, intent(in) :: char_fp(:)
    integer :: i
    do i=1, size(char_fp), 1
        write (OUTPUT_UNIT, '(A)') char_fp(i)
    end do
end subroutine

subroutine display(fptr)
    type(codata_constant_type), intent(in), pointer :: fptr(:)
    integer :: i
    do i=1, size(fptr),1
        call fptr(i)%print()
    end do
end subroutine


end program
