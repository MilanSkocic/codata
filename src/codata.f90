!> @file
!! @brief Codata module
!! @example example_in_fortran.f90


!> @brief Codata constants
!! @details Codata constants wrapped in an array of derived type
!! with members name, value, uncertainty and unit.
!! Methods for getting the member values are available.
module codata
    use codata_2014
    use codata_2018
    

contains

    !> @brief Set the revision year for the codata constants.
    !! param[in] year Year of the revision.
    subroutine codata_set_year(year)
        character(len=*), intent(in) :: year
        nullify(codata_constants)
        if (year == "2018") then
            codata_constants => codata_constants_2018
            codata_year = "2018"
        else if (year == "2014") then
            codata_constants => codata_constants_2014
            codata_year = "2014"
        else
            codata_constants => codata_constants_2018
            codata_year = "2018"
        end if
        codata_is_set = .true.
    end subroutine

    !> @brief Get the set year for the codata constants
    !! return Year of the codata constants
    pure function codata_get_year()result(year)
        implicit none
        character(len=4):: year
        year = codata_year
    end function

    !> @brief Get the number of constants
    !! @return Number of constants
    function codata_get_number_constants() result(n)
        implicit none
        integer :: n
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        n = size(codata_constants)
    end function

    !> @brief Display all constants.
    subroutine codata_print()
        implicit none
        integer :: i
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        print "(A60, 4X, A23, 4X, A23, 4X, A25)", headers(:)
        do i=1, size(codata_constants)
            print "(A60, 4X, SP, ES23.16E2, 4X, ES23.16E2, 4X, A25)", codata_constants(i)%name, &
                                                                      codata_constants(i)%value, &
                                                                      codata_constants(i)%uncertainty, &
                                                                      codata_constants(i)%unit
        end do
    end subroutine

    !> @brief Get the name of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    function codata_get_name_by_index(index) result(name)
        implicit none    
        integer, intent(in) :: index
        character(len=:), allocatable :: name
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        if ((index > size(codata_constants)) .or. (index<1))then
            name = "None"
        else
            name = trim(codata_constants(index)%name)
        endif
    end function
    
    !> @brief Get the value of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    function codata_get_value_by_index(index) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        integer, intent(in) :: index
        real(real64) :: value
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        if ((index > size(codata_constants)) .or. (index<1))then
            value = ieee_value(1.0d0, ieee_quiet_nan)
        else
            value = codata_constants(index)%value
        endif
    end function
    
    !> @brief Get the vauncertaintylue of the constant by index 
    !! @param[in] index Index of the position.
    !! @return value or NaN if not found.
    function codata_get_uncertainty_by_index(index) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        integer, intent(in) :: index
        real(real64) :: value
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        if ((index > size(codata_constants)) .or. (index<1))then
            value = ieee_value(1.0d0, ieee_quiet_nan)
        else
            value = codata_constants(index)%uncertainty
        endif
    end function
    
    !> @brief Get the unit of the constant by index 
    !! @param[in] index Index of the position.
    !! @return name or empty if not found.
    function codata_get_unit_by_index(index) result(unit)
        implicit none    
        integer, intent(in) :: index
        character(len=:), allocatable :: unit
        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        if ((index > size(codata_constants)) .or. (index<1))then
            unit = "None"
        else
            unit = trim(codata_constants(index)%unit)
        endif
    end function
    
    !> @brief Get the value of the constant by name
    !! @param[in] name Name of the constant
    !! @return value or NaN if not found
    function codata_get_value(name) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        real(real64) :: value
        integer :: i

        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        value = ieee_value(1.0d0, ieee_quiet_nan)
        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                value =  codata_get_value_by_index(i)
                exit
            endif
        enddo
    end function

    !> @brief Get the uncertainty of the constant by name
    !! @param[in] name Name of the constant
    !! @return value or NaN if not found
    function codata_get_uncertainty(name) result(value)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        real(real64) :: value
        integer :: i

        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        value = ieee_value(1.0d0, ieee_quiet_nan)

        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                value =  codata_get_uncertainty_by_index(i)
                exit
            endif
        enddo
    end function


    !> @brief Get the unit of the constant by name
    !! @param[in] name Name of the constant
    !! @return unit or None if not found
    function codata_get_unit(name) result(unit)
        use ieee_arithmetic, only : ieee_value, ieee_quiet_nan
        implicit none    
        character(len=*), intent(in) :: name
        character(len=:), allocatable :: unit
        integer :: i

        if (codata_is_set .eqv. .false.) then
            call codata_set_year("XXXX")
        end if
        unit = "None"

        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                unit =  codata_get_unit_by_index(i)
                exit
            endif
        enddo
    end function


    
end module codata
