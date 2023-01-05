!> @file
!! @brief Codata module - autogenerated.
!! Fundamental Physical Constants --- Complete Listing
!! 2018 CODATA adjustment
!! From:  http://physics.nist.gov/constants
!! @example example_in_fortran.f90


!> @brief Codata constants
!! @details Codata constants wrapped in an array of derived type
!! with members name, value, uncertainty and unit.
!! Methods for getting the member values are available.
module codata
    use codata_data
    
    character(len=60), dimension(4), parameter :: headers = [character(len=60):: "Names", "Values", "Uncertainties", "Units"]
    
    character(len=:), allocatable, target, private :: capi_name
    character(len=:), pointer, private  :: capi_name_ptr
    type(t_constant), dimension(:), pointer :: codata_constants

contains

    subroutine set_codata(year)
        character(len=*), intent(in) :: year
        nullify(codata_constants)
        if (year == "2018")then
            codata_constants => codata_constants_2018
        else
            codata_constants => codata_constants_2018
        end if
    end subroutine

    !> @brief Get the number of constants
    !! @return Number of constants
    pure function codata_get_number_constants() result(n)
        implicit none
        integer :: n
        n = size(codata_constants)
    end function

    !> @brief Get the number of constants
    !! @return Number of constants
    pure function codata_capi_get_number_constants() bind(C) result(n)
        use iso_c_binding, only : c_int
        integer(c_int) :: n
        n = codata_get_number_constants()
    end function


    !> @brief Display all constants.
    subroutine codata_print()
        implicit none
        integer :: i
        print "(A60, 4X, A23, 4X, A23, 4X, A25)", headers(:)
        do i=1, size(codata_constants)
            print "(A60, 4X, SP, ES23.16E2, 4X, ES23.16E2, 4X, A25)", codata_constants(i)%name, &
                                                                      codata_constants(i)%value, &
                                                                      codata_constants(i)%uncertainty, &
                                                                      codata_constants(i)%unit
        end do
    end subroutine

    !> @brief Display all constants.
    subroutine codata_capi_print() bind(C)
        implicit none
        call codata_print()
    end subroutine
    
    !> @brief Get the name of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    pure function codata_get_name_by_index(index) result(name)
        implicit none    
        integer, intent(in) :: index
        character(len=:), allocatable :: name
        if ((index > size(codata_constants)) .or. (index<1))then
            name = "None"
        else
            name = trim(codata_constants(index)%name)
        endif
    end function
    
    !> @brief Get the name of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    function codata_capi_get_name_by_index(index) bind(C) result(char_p)
        use iso_c_binding, only : c_null_char, c_ptr, c_loc, c_int
        implicit none
        integer(c_int), intent(in), value :: index
        type(c_ptr) :: char_p

        if (associated(capi_name_ptr) .eqv. .true.)then
            capi_name_ptr => null()
        end if
        if (allocated(capi_name) .eqv. .true.)then
            deallocate(capi_name)
        endif
        capi_name = trim(codata_get_name_by_index(index+1)) // c_null_char
        capi_name_ptr => capi_name
        char_p = c_loc(capi_name_ptr)
    end function
    
    !> @brief Get the value of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    pure function codata_get_value_by_index(index) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        integer, intent(in) :: index
        real(real64) :: value
        if ((index > size(codata_constants)) .or. (index<1))then
            value = ieee_value(1.0d0, ieee_quiet_nan)
        else
            value = codata_constants(index)%value
        endif
    end function
    
    !> @brief Get the value of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    pure function codata_capi_get_value_by_index(index) bind(C) result(value)
        use iso_c_binding, only : c_int, c_double
        implicit none    
        integer(c_int), intent(in), value :: index
        real(c_double) :: value
        value = codata_get_value_by_index(index+1)
    end function
    
    !> @brief Get the vauncertaintylue of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    pure function codata_get_uncertainty_by_index(index) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        integer, intent(in) :: index
        real(real64) :: value
        if ((index > size(codata_constants)) .or. (index<1))then
            value = ieee_value(1.0d0, ieee_quiet_nan)
        else
            value = codata_constants(index)%uncertainty
        endif
    end function
    
    !> @brief Get the uncertainty of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    pure function codata_capi_get_uncertainty_by_index(index) bind(C) result(value)
        use iso_c_binding, only : c_int, c_double
        implicit none    
        integer(c_int), intent(in), value :: index
        real(c_double) :: value
        value = codata_get_uncertainty_by_index(index+1)
    end function
    
    !> @brief Get the unit of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    pure function codata_get_unit_by_index(index) result(unit)
        implicit none    
        integer, intent(in) :: index
        character(len=:), allocatable :: unit
        if ((index > size(codata_constants)) .or. (index<1))then
            unit = "None"
        else
            unit = trim(codata_constants(index)%unit)
        endif
    end function
    
    !> @brief Get the unit of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    function codata_capi_get_unit_by_index(index) bind(C) result(char_p)
        use iso_c_binding, only : c_null_char, c_ptr, c_loc, c_int
        implicit none
        integer(c_int), intent(in), value :: index
        type(c_ptr) :: char_p

        if (associated(capi_name_ptr) .eqv. .true.)then
            capi_name_ptr => null()
        end if
        if (allocated(capi_name) .eqv. .true.)then
            deallocate(capi_name)
        endif
        capi_name = trim(codata_get_unit_by_index(index+1)) // c_null_char
        capi_name_ptr => capi_name
        char_p = c_loc(capi_name_ptr)
    end function

    !> @brief Get the value of the constant by name
    !! @param[in] name Name of the constant
    !! @return value or NaN if not found
    pure function codata_get_value(name) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        real(real64) :: value
        integer :: i

        value = ieee_value(1.0d0, ieee_quiet_nan)
        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                value =  codata_get_value_by_index(i)
                exit
            endif
        enddo
    end function

    !> @brief Get the value of the constant by name
    !! @param[in] char_p Name of the constant
    !! @param[in] length Length of the string
    !! @return value or NaN if not found
    function codata_capi_get_value(char_p, length) bind(C) result(value)
        use iso_c_binding, only : c_double, c_int, c_ptr, c_f_pointer
        implicit none
        integer(c_int), intent(in), value :: length
        type(c_ptr), intent(in), value :: char_p
        character, pointer, dimension(:) :: c2f_string
        real(c_double) :: value
        
        integer :: i
        character(len=length) :: name
        
        call c_f_pointer(char_p, c2f_string, shape=[length])

        do i=1, length
            name(i:i) = c2f_string(i)
        enddo

        value = codata_get_value(name)

    end function

    !> @brief Get the uncertainty of the constant by name
    !! @param[in] name Name of the constant
    !! @return value or NaN if not found
    pure function codata_get_uncertainty(name) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        real(real64) :: value
        integer :: i

        value = ieee_value(1.0d0, ieee_quiet_nan)

        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                value =  codata_get_uncertainty_by_index(i)
                exit
            endif
        enddo
    end function

    !> @brief Get the uncertainty of the constant by name
    !! @param[in] char_p Name of the constant
    !! @param[in] length Length of the string
    !! @return value or NaN if not found
    function codata_capi_get_uncertainty(char_p, length) bind(C) result(value)
        use iso_c_binding, only : c_double, c_int, c_ptr, c_f_pointer
        implicit none
        integer(c_int), intent(in), value :: length
        type(c_ptr), intent(in), value :: char_p
        character, pointer, dimension(:) :: c2f_string
        real(c_double) :: value
        
        integer :: i
        character(len=length) :: name
        
        call c_f_pointer(char_p, c2f_string, shape=[length])

        do i=1, length
            name(i:i) = c2f_string(i)
        enddo

        value = codata_get_uncertainty(name)

    end function

    !> @brief Get the unit of the constant by name
    !! @param[in] name Name of the constant
    !! @return unit or None if not found
    pure function codata_get_unit(name) result(unit)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        character(len=:), allocatable :: unit
        integer :: i

        unit = "None"

        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                unit =  codata_get_unit_by_index(i)
                exit
            endif
        enddo
    end function

    !> @brief Get the unit of the constant by name
    !! @param[in] char_p Name of the constant
    !! @param[in] length Length of the string
    !! @return unit or None if not found
    function codata_capi_get_unit(char_p, length) bind(C) result(unit)
        use iso_c_binding, only : c_int, c_ptr, c_f_pointer, c_null_char, c_loc
        implicit none
        integer(c_int), intent(in), value :: length
        type(c_ptr), intent(in), value :: char_p
        character, pointer, dimension(:) :: c2f_string
        
        type(c_ptr) :: unit
        character(len=:), allocatable :: unit_f
        
        integer :: i
        character(len=length) :: name
        
        call c_f_pointer(char_p, c2f_string, shape=[length])
        do i=1, length
            name(i:i) = c2f_string(i)
        enddo

        unit_f = codata_get_unit(name)
        capi_name = trim(unit_f) // c_null_char
        capi_name_ptr => capi_name
        unit = c_loc(capi_name_ptr)
    end function

    
end module codata
