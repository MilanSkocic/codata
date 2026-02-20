program codatacli
    use iso_fortran_env, only: output_unit
    use stdlib_kinds, only: dp, sp, int32, int64
    use M_CLI2, only: set_args, set_mode, specified, iget, lget, sget, get_args
    use M_CLI2, only: args=>unnamed
    use regex_module, only: REGEX, parse_pattern, regex_pattern
    use stdlib_optval
    use codata
    
    character(len=*), parameter :: name="codata"
    character(len=:),allocatable, target  :: help_text(:) 
    character(len=:),allocatable, target  :: version_text(:)
    character(len=:), pointer :: char_fp(:)
    type(codata_constant_type), pointer :: cctptr(:)
    character(len=:), allocatable :: patterns(:)
    
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
        '  '//name//' [OPTIONS] [REGEX_PATTERN ... ]                           ', &
        '                                                                ', &
        'DESCRIPTION                                                     ', &
        '  codata is a command line interface which prints all the codata', &
        '  constants.                                                    ', &
        '                                                                ', &
        '  The current values are from 2022.                             ', &
        '  Older values can be retrieved if needed and                   ', &
        '  the output can be filtered with REGEX PATTERNS.                ', &
        '                                                                ', &
        '                                                                ', &
        'OPTIONS                                                         ', &
        '  --year, -y YEAR  Year of the codata constants: 2022, 2018, 2014, 2010.', &
        '  --value, -a      Show only the value.', &
        '  --error, -e      Show only the uncertainty.                         ', &
        '  --usage          Show usage text and exit.                          ', & 
        '  --help           Show help text and exit.                          ', & 
        '  --verbose        Display additional information when available.   ', &
        '  --version        Show version information and exit.               ', &
        '                                                                ', &
        'EXAMPLE                                                         ', &
        '  Minimal example                                               ', &
        '                                                                ', &
        '     codata                                                     ', &
        '     codata -y 2018 molar electron                              ', &
        "     codata -y 2014 'molar.*gas' 'electron.*eV'                 ", &
        "     codata '[B,b]oltzmann.*eV'                                  ", &
        '                                                                ', &
        'SEE ALSO                                                         ', &
        '  codata(3)                                                     ', &
        '' ]
    call set_mode('strict') 
    call set_mode('response_file')
    call set_args('--year:y 2022 --value:a F --error:e F --pattern:p .*', help_text, version_text)
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
            write(output_unit, '(A)') 'Invalid year. See --help.'
            stop
    end select

    if(ASSOCIATED(cctptr))then
        if(size(args) > 0) then
            do i=1, size(args), 1
                 call display(cctptr, trim(args(i)), lget("a"), lget("e"))
            end do
        end if
        if(specified('p'))then
            call get_args('p', patterns, delimiters=',')
            do i=1, size(patterns), 1
                call display(cctptr, trim(patterns(i)), lget("a"), lget("e"))
            end do
        end if
        if(.not.specified('p') .and. size(args) <= 0)then
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

subroutine display(fptr, pattern, value, uncertainty)
    type(codata_constant_type), intent(in), pointer :: fptr(:)
    character(len=*), intent(in), optional :: pattern
    logical, intent(in), optional :: value, uncertainty

    integer :: i, n, idx
    type(regex_pattern) :: re
    logical :: value2, uncertainty2

    value2 = optval(value, .false.)
    uncertainty2 = optval(uncertainty, .false.)
    
    if(present(pattern))then
        re = parse_pattern(pattern)
        do i=1, size(fptr),1
            idx = REGEX(trim(fptr(i)%name), pattern=re, length=n)
            if(idx /= 0)then
                if(value2)then
                    write(output_unit, '(SP,ES24.16)') fptr(i)%value
                elseif(uncertainty2)then
                    write(output_unit, '(SP,ES24.16)') fptr(i)%uncertainty
                else
                    call fptr(i)%print()
                end if
            end if
        end do
    else
        do i=1, size(fptr),1
            call fptr(i)%print()
        end do
    end if
end subroutine


end program
