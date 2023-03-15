!> @file
!! @brief Codata module - C API


!> @brief C API for the codata constants
!! @details Provide C compatible getters and setters for 
!! accessing the codata constants.
module codata_capi
    use iso_c_binding
    use codata
    implicit none

    !> @brief Allocatable for a Fortran string representing the name of the constant.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), allocatable, target :: capi_name

    !> @brief Fortran pointer to the string representing the name of the constant.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), pointer  :: capi_name_ptr
    
    !> @brief Allocatable for a Fortran string representing the unit of the constant.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), allocatable, target :: capi_unit

    !> @brief Fortran pointer to the string representing the unit of the constant.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), pointer  :: capi_unit_ptr
    
    !> @brief Allocatable for a Fortran string representing the codata year.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), allocatable, target :: capi_year

    !> @brief Fortran pointer to the string representing the codata year.
    !! @details It is used for interoperability Fortran and C strings.
    character(len=:), pointer :: capi_year_ptr

contains

    !> @brief Get the set year for the codata constants
    !! return Year of the codata constants
    function codata_capi_get_year() bind(C) result(year)
        implicit none
        type(c_ptr) :: year
        
        if (associated(capi_year_ptr) .eqv. .true.)then
            capi_year_ptr => null()
        end if
        if (allocated(capi_year) .eqv. .true.)then
            deallocate(capi_year)
        endif
        
        capi_year = codata_get_year() // c_null_char
        capi_year_ptr => capi_year
        year = c_loc(capi_year_ptr)

    end function

    !> @brief Get the number of constants
    !! @return Number of constants
    function codata_capi_get_number_constants() bind(C) result(n)
        use iso_c_binding, only : c_int
        integer(c_int) :: n
        n = codata_get_number_constants()
    end function

    !> @brief Display all constants.
    subroutine codata_capi_print() bind(C)
        implicit none
        call codata_print()
    end subroutine
    
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
    function codata_capi_get_value_by_index(index) bind(C) result(value)
        use iso_c_binding, only : c_int, c_double
        implicit none    
        integer(c_int), intent(in), value :: index
        real(c_double) :: value
        value = codata_get_value_by_index(index+1)
    end function

    !> @brief Get the uncertainty of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    function codata_capi_get_uncertainty_by_index(index) bind(C) result(value)
        use iso_c_binding, only : c_int, c_double
        implicit none    
        integer(c_int), intent(in), value :: index
        real(c_double) :: value
        value = codata_get_uncertainty_by_index(index+1)
    end function

    !> @brief Get the unit of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    function codata_capi_get_unit_by_index(index) bind(C) result(char_p)
        use iso_c_binding, only : c_null_char, c_ptr, c_loc, c_int
        implicit none
        integer(c_int), intent(in), value :: index
        type(c_ptr) :: char_p

        if (associated(capi_unit_ptr) .eqv. .true.)then
            capi_unit_ptr => null()
        end if
        if (allocated(capi_unit) .eqv. .true.)then
            deallocate(capi_unit)
        endif
        capi_unit = trim(codata_get_unit_by_index(index+1)) // c_null_char
        capi_unit_ptr => capi_unit
        char_p = c_loc(capi_unit_ptr)
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
        character(len=25) :: unit_f
        
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

end module