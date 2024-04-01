program generator
    use iso_fortran_env
    implicit none
    
    !! Properties of the file for the codata raw data.
    type :: codata_file_props
        integer(int32) :: n !! Number of lines.
        integer(int32) :: index_header_end !! Number of lines for the header.
        character(len=32) :: codata_path !! Filepath to the raw codata constants.
        character(len=6) :: year !! Year of release of the codata constants.
    end type

    integer(int32) :: LINE_LENGTH = 256 !! Length of line.
    integer(int32) :: NAMES_LENGTH = 60 !! Length of column name
    integer(int32) :: VALUES_LENGTH = 25 !! Length of column value
    integer(int32) :: UNCERTAINTIES_LENGTH = 25 !! Length of column uncertainty
    integer(int32) :: UNITS_LENGTH = 25 !! Length of column unit

    type(codata_file_props) :: props
    integer(int32) :: fcodata
    integer(int32) :: ffortran
    integer(int32) :: fcheader
    integer(int32) :: fcpython
    integer(int32) :: unit
    integer(int32) :: i
    logical :: exist

    character(len=*), parameter :: root = "../../"
    character(len=64) :: fpath
    character(len=6), parameter :: years(4) = [character(len=6) :: "2018", "2014", "2010", "latest"]
    character(len=:), allocatable :: suffix

    do i=1, size(years)
        suffix = "_"//trim(years(i))

        print *, '########## CODATA CONSTANTS '//years(i)//' ##########' 
        props = codata_file_props(0, 0, "./codata"//suffix//".txt", years(i))

        print *, "Reading codata file properties..."
        call get_props(props)
        print "(4X, A, I3)", "Number of constants: ", props%n
        print "(4X, A, I2)", "Header Offset: ", props%index_header_end
        print "(4X, A, A)", "fpath: ", props%codata_path
        print "(4X, A, A)", "Year: ", props%year

        write(output_unit, "(A)", advance="NO") "Opening files..."
        
        ! CODATA SOURCE
        open(file=props%codata_path, newunit=fcodata, status="old", action="read")
        
        ! FORTRAN
        fpath = root//'src/codata_constants'//suffix//'.f90'
        inquire(file=fpath, exist=exist)
        if(exist)then
            open(file=fpath, newunit=unit, status="old")
            close(unit=unit, status="delete")
        endif
        open(file=fpath, newunit=ffortran, status="new", action="write")

        ! C HEADER
        fpath = root//'include/codata_constants'//suffix//'.h'
        inquire(file=fpath, exist=exist)
        if(exist)then
            open(file=fpath, newunit=unit, status="old")
            close(unit=unit, status="delete")
        endif
        open(file=fpath, newunit=fcheader, status="new", action="write")
        
        ! CPYTHON
        fpath = root//'pywrapper/src/pycodata/cpy_codata_constants'//suffix//'.c'
        inquire(file=fpath, exist=exist)
        if(exist)then
            open(file=fpath, newunit=unit, status="old")
            close(unit=unit, status="delete")
        endif
        open(file=fpath, newunit=fcpython, status="new", action="write")
        
        write(output_unit, "(A)", advance="YES") "OK"

        write(output_unit, "(A)", advance="NO") "Generating code..."
        call write_fortran_module_declaration(ffortran, props%year)
        call write_c_header_doc(fcheader, props%year)
        call write_cpython_extension_declaration(fcpython, props%year);
        
        call write_all_constants(fcodata, ffortran, fcheader, fcpython, props)

        call write_fortran_module_end(ffortran, props%year)
        call write_C_header_end(fcheader)
        call write_cpython_extension_end(fcpython);
        
        write(output_unit, "(A)", advance="YES") "OK"

        close(fcodata)
        close(ffortran)
        close(fcheader)
        close(fcpython)
    print *, '########## CODATA CONSTANTS '//years(i)//' ##########' 

    end do

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
        r= .false.
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

subroutine check_name(name)
    !! Check if name is valid.
    character(len=*), intent(inout) :: name
        ! String where the name will be copied.
    if(name(1:1) == "_")then
        name(1:1) = achar(iachar("v"))
    endif
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
    integer(int32) :: i

    do i=1, len(name)
        if(.not. isalnum(line(i:i)))then
            name(i:i) = "_"
        else
            name(i:i) = line(i:i)
        endif
    end do  

    do i=len(name), 1, -1
        if(name(i:i) /= "_")then
            exit
        else
            name(i:i) = " "
        endif
    end do

    call toupper(name)
    call check_name(name)
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
    integer(int32) :: i, j 
    logical flag_decimal, flag_exponent
    character(len=VALUES_LENGTH) :: temp

    flag_decimal = .false.
    flag_exponent = .false.

    do i=1, len(value)
        temp(i:i) = " "
    end do
    
    j = 1
    temp(j:j) = line(NAMES_LENGTH+1:NAMES_LENGTH+1)
    j = j+1;
    do i=(NAMES_LENGTH+2), (NAMES_LENGTH+VALUES_LENGTH-1), 1
        if(isdigit(line(i:i)))then
            temp(j:j) = line(i:i)
            j = j + 1
        endif
        if(line(i:i) == "." .and. isdigit(line(i-1:i-1)) .and. isdigit(line(i+1:i+1)))then
            temp(j:j) = line(i:i)
            j = j + 1
        endif
        if(line(i:i) == "e")then
            temp(j:j) = line(i:i)
            j = j+1
        endif
        if(line(i:i) == "-" .or. line(i:i) == "+")then
            temp(j:j) = line(i:i)
            j = j+1
        endif
    end do

    do i=1, VALUES_LENGTH
        value(i:i) = temp(i:i)
    end do
    
    do i=1, VALUES_LENGTH, 1
        if(value(i:i) == ".")then
            flag_decimal = .true.
            exit
        else
            exit
        end if
    end do

    do i=1, VALUES_LENGTH, 1
        if(value(i:i) == "e")then
            value(i:i) = achar(iachar("d"))
        endif
        if(value(i:i) == "d")then
            flag_exponent = .true.
        endif
    end do

    if(flag_decimal .eqv. .false. .and. flag_exponent .eqv. .false.)then
        do i=VALUES_LENGTH, 1, -1
            if(isdigit(value(i:i)))then
                value(i+1:i+1) = achar(iachar("."))
                value(i+2:i+2) = achar(iachar("0"))
            endif
        end do
    endif

    if(flag_exponent .eqv. .false.)then
        do i=VALUES_LENGTH, 1, -1
            if(isdigit(value(i:i)))then
                value(i+1:i+1) = achar(iachar("d"))
                value(i+2:i+2) = achar(iachar("0"))
                exit
            end if
        end do
    end if
end subroutine

subroutine format_uncertainties(line, uncertainty)
    !! Format the uncertainties to be conform to Fortran double precsion. 
    implicit none
    character(len=*), intent(in) :: line
        !! Line to be parsed.
    character(len=*), intent(inout) :: uncertainty
        !! String where the uncertainty will be copied.
        
    ! Local vars
    integer(int32) :: i, j, start,end
    logical  :: flag_exponent
    character(len=UNCERTAINTIES_LENGTH) :: temp

    flag_exponent = .false.
    start = NAMES_LENGTH + VALUES_LENGTH
    end = NAMES_LENGTH + VALUES_LENGTH + UNCERTAINTIES_LENGTH

    do i=1, UNCERTAINTIES_LENGTH, 1
        temp(i:i) = ' '
    end do
    j = 1
    if(line(start+1:start+1) /= '(')then
        temp(j:j) = line(start+1:start+1);
    endif
    j = j+1
    do i=(start+2), end-1, 1
        if (trim(line(start+1:end)) == "(exact)")then
            temp(1:1) = '0';
            temp(2:2) = '.';
            temp(3:3) = '0';
            exit
        endif

        if(isdigit(line(i:i)))then
            temp(j:j) = line(i:i);
            j=j+1
        endif

        if(line(i:i)=='.' .and. isdigit(line(i-1:i-1)) .and. isdigit(line(i+1:i+1)))then
            temp(j:j) = line(i:i);
            j=j+1;
        endif

        if(line(i:i)=='e')then
            temp(j:j) = line(i:i);
            j=j+1
        endif

        if(line(i:i)=='-' .or. line(i:i)=='+')then
            temp(j:j) = line(i:i);
            j=j+1
        endif
    enddo
    do i=1, UNCERTAINTIES_LENGTH, 1
        uncertainty(i:i) = temp(i:i)
    end do
    do i=1, UNCERTAINTIES_LENGTH, 1
        if (uncertainty(i:i)=='e')then
            uncertainty(i:i) = 'd';
        end if
        if(uncertainty(i:i) == 'd')then
            flag_exponent = .true.;
        endif
    end do
    if (flag_exponent .eqv. .false.)then
        do i=UNCERTAINTIES_LENGTH, 1, -1
            if(isdigit(uncertainty(i:i)))then
                uncertainty(i+1:i+1) = 'd';
                uncertainty(i+2:i+2) = '0';
                exit
            end if
        end do
    end if
end subroutine

subroutine format_units(line, unit)
    !! Format the units to be conform to Fortran strings.
    implicit none
    ! Arguments
    character(len=*), intent(in) :: line
        ! Line to be parsed
    character(len=*), intent(inout) :: unit
        ! String where the unit will be copied.
    ! Local vars
    integer(int32) :: i

    do i=1, UNITS_LENGTH, 1
        unit(i:i) = line(i+NAMES_LENGTH+VALUES_LENGTH+UNCERTAINTIES_LENGTH:&
                         i+NAMES_LENGTH+VALUES_LENGTH+UNCERTAINTIES_LENGTH)
    enddo
    if(len(trim(unit))==0)then
        unit = "dimensionless"
    endif
end subroutine

subroutine convert_value_to_c(value)
    !! Convert power symbol d to e for C code
    ! Arguments
    character(len=*), intent(inout) :: value
        ! Value to be converted.
    
    ! Local vars
    integer(int32) :: i

    do i=1, VALUES_LENGTH, 1
        if(value(i:i) == 'd')then
            value(i:i) = achar(iachar("e"))
        end if
    end do
end subroutine

subroutine write_fortran_module_declaration(fcode, year)
    !! brief Generate the Fortran module declaration.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the Fortran module.
    character(len=*), intent(in) :: year
        !! Codata year

    character(len=:), allocatable :: suffix
    
    suffix = trim("_"//year)
    write(fcode, "(A)") "!> @file"
    write(fcode, "(A,/)") "!> @brief Constants "//trim(year)//" - autogenerated."
    write(fcode, "(A)") "!> @brief Constants "//trim(year)//" - autogenerated."
    write(fcode, "(A)") "module codata__constants"//suffix
    write(fcode, "(A)") "use iso_fortran_env"
    write(fcode, "(A)") "use iso_c_binding"
    write(fcode, "(A)") "implicit none"
    write(fcode, "(A)") "private"
    write(fcode, "(A)") " "
end subroutine

subroutine write_fortran_module_end(fcode, year)
    !! Generate the end of the Fortran module.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcode
        !! File unit of the Fortran module.
    character(len=*), intent(in) :: year
        !! Codata year
    
    character(len=:), allocatable :: suffix
    
    suffix = trim("_"//year)
    write(fcode, "(A)") "end module codata__constants"//suffix
end subroutine

subroutine write_c_header_doc(fcode, year)
    !! Generate the documentation for the C header.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit to the C header.
    character(len=*), intent(in) :: year
        !! Codata year
    
    character(len=:), allocatable :: suffix
    
    suffix = trim("_"//year)
    write(fcode, "(A)") '/**'
    write(fcode, "(A)") '* @file'
    write(fcode, "(A) ") '* @brief CAPI - Constants '//trim(year)//' - autogenerated.'
    write(fcode, "(A)") "*/"
    write(fcode, "(A)") ""
    write(fcode, "(A)") '#ifndef codata_CONSTANTS_H_'//suffix
    write(fcode, "(A)") '#define codata_CONSTANTS_H_'//suffix
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

subroutine write_cpython_extension_declaration(fcode, year)
    !! Generate the cpython module declaration.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the Python module.
    character(len=*), intent(in) :: year
        !! Codata year

    character(len=:), allocatable :: suffix
    
    suffix = trim("_"//year)
    write(fcode, "(A)") "#define PY_SSIZE_T_CLEAN"
    write(fcode, "(A)") "#include <Python.h>"
    write(fcode, "(A)") '#include "codata_constants'//suffix//'.h"'
    write(fcode, "(A)") ""
    write(fcode, "(A)") 'PyDoc_STRVAR(module_docstring, "C extension for constants '//trim(year)//'.");'
    write(fcode, "(A)") ""
    write(fcode, "(A)") "static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};"
    write(fcode, "(A)") ""
    write(fcode, "(A)", advance="NO") 'static struct PyModuleDef constants'//suffix//' = '
    write(fcode, "(A)") '{PyModuleDef_HEAD_INIT, "constants'//suffix//'", module_docstring, -1, myMethods};'
    write(fcode, "(A)") ""
    write(fcode, "(A)") 'PyMODINIT_FUNC PyInit_constants'//suffix//'(void){'
    write(fcode, "(4X, A)") "PyObject *m;"
    write(fcode, "(4X, A)") "PyObject *d;"
    write(fcode, "(4X, A)") "PyObject *v;"
    write(fcode, "(4X, A)") 'm = PyModule_Create(&constants'//suffix//');'
    write(fcode, "(4X, A)") "d = PyModule_GetDict(m);"
    write(fcode, "(A)") ""
end subroutine

subroutine write_cpython_extension_end(fcode)
    !! Generate the cpython module end.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the Python module.
    write(fcode, "(4X, A)") "return m;"
    write(fcode, "(A)") "}"
end subroutine

subroutine write_all_constants(fcodata, ffortran, fcheader, fcpython, props)
    !! Generate all constants in the Fortran module.
    implicit none
    ! Arguments
    integer(int32), intent(in) :: fcodata
        !! File unit of the codata file.
    integer(int32), intent(in) :: ffortran
        !! ffortran File unit of the Fortran module.
    integer(int32), intent(in) :: fcheader
        !! File unit of the C header.
    integer(int32), intent(in) :: fcpython
        !! fcpython File unit of the cpython module.
    type(codata_file_props), intent(in) :: props
        !! props Properties of the codata file.

    ! Local vars
    character(len=LINE_LENGTH) :: line
    character(len=NAMES_LENGTH) :: name
    character(len=VALUES_LENGTH) :: value
    character(len=UNCERTAINTIES_LENGTH) :: uncertainty
    character(len=UNITS_LENGTH) :: unit
    integer(int32) :: i
    character(len=:), allocatable :: suffix
    character(len=3) :: capi_dummy
    character(len=:), allocatable :: year_value

    rewind(unit=fcodata)
    do i=1, props%index_header_end
        read(fcodata, "(A)") line
    end do
    
    if(props%year == "latest")then
        suffix = ''
        year_value = years(1)
    else
        suffix = trim('_'//props%year)
        year_value = trim(props%year)
    endif

    ! fortran
    write(ffortran, "(A)") 'integer(int32), parameter, public :: YEAR'//suffix//' = '//year_value//' !< Year of codata constants'
    write(ffortran, "(A,A,/)") 'integer(c_int), protected, public, bind(C,name="YEAR'//suffix//'") ::',&
                              'capi_YEAR'//suffix//' = YEAR'//suffix//' !< C API Year of codata constants'
    ! C Code
    write(fcheader, "(A,/)") 'ADD_IMPORT extern const int YEAR'//suffix//';/**< Year of codata constants*/'
    ! cpython
    write(fcpython, "(4X, A)") 'v = PyLong_FromLong(YEAR'//suffix//');'
    write(fcpython, "(4X, A)") 'PyDict_SetItemString(d, "YEAR'//suffix//'", v);'
    write(fcpython, "(4X, A)") "Py_INCREF(v);"
    write(fcpython, "(A)") ""

    do i=1, props%n
        call clean_line(line)
        call clean_line(name)
        call clean_line(value)
        call clean_line(uncertainty)
        call clean_line(unit)
        read(fcodata, "(A)") line
        if(len(line)>0)then
            call format_names(line, name);
            call format_values(line, value);
            call format_uncertainties(line, uncertainty)
            call format_units(line, unit)
            
            ! fortran code
            write(capi_dummy, '(I3.3)') i
            write(ffortran, "(A)") 'real(real64), parameter, public :: '&
            //trim(name)//suffix//'='//trim(value)//' !< '//trim(unit)
            write(ffortran, "(A,/,A)") 'real(real64), parameter, public :: '//&
            'U_'//trim(name)//suffix//'='//trim(uncertainty)//' !< '//trim(unit)
            write(ffortran, "(A,/,A)") 'real(c_double), protected, public, bind(C,name="'//trim(name)//suffix//'"):: &', &
            'capi_'//trim(capi_dummy)//suffix//'='//trim(name)//suffix//' !< C API '//trim(unit)
            write(ffortran, "(A,/,A)") 'real(c_double), protected, public, bind(C,name="U_'//trim(name)//suffix//'") :: &', &
            "capi_U_"//trim(capi_dummy)//suffix//'=U_'//trim(name)//suffix//' !< C API '//trim(unit)
            write(ffortran, "(A)") ""

            ! C Code
            call convert_value_to_c(value);
            call convert_value_to_c(uncertainty);
            write(fcheader, "(A)") "ADD_IMPORT extern const double "//trim(name)//suffix//";/**< "//trim(unit)//" */"
            write(fcheader, "(A)") "ADD_IMPORT extern const double U_"//trim(name)//suffix//";/**< "//trim(unit)//" */"
            write(fcheader, "(A)")  
            
            ! CPython code
            write(fcpython, "(4X, A)") "v = PyFloat_FromDouble("//trim(name)//suffix//");"
            write(fcpython, "(4X, A)") 'PyDict_SetItemString(d, "'//trim(name)//suffix//'", v);'
            write(fcpython, "(4X, A)") "Py_INCREF(v);"
            write(fcpython, "(4X, A)") "v = PyFloat_FromDouble(U_"//trim(name)//suffix//");"
            write(fcpython, "(4X, A)") 'PyDict_SetItemString(d, "U_'//trim(name)//suffix//'", v);'
            write(fcpython, "(4X, A)") "Py_INCREF(v);"
            write(fcpython, "(A)") ""

        end if

    end do
end subroutine

end program
