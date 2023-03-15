!> @file
!! @brief Codata module
!! @example example_in_fortran.f90


!> @brief Codata constants
!! @details Codata constants wrapped in an array of derived type
!! with members name, value, uncertainty and unit.
!! Methods for getting the member values are available.
module codata
    use iso_fortran_env
    use codata_base
    use codata_last
    implicit none
    private

!> @brief Header for the print function.
character(len=60), dimension(4), parameter :: codata_headers = [character(len=60):: "Names", "Values", "Uncertainties", "Units"]

public :: codata_get_year
public :: codata_print, codata_get_number_constants
public :: codata_get_name_by_index, codata_get_value_by_index
public :: codata_get_uncertainty_by_index, codata_get_unit_by_index
public :: codata_get_value, codata_get_uncertainty, codata_get_unit

contains


    !> @brief Get the set year for the codata constants
    !! @return Year of the codata constants
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
        n = size(codata_constants)
    end function

    !> @brief Display all constants.
    subroutine codata_print()
        implicit none
        integer :: i
        print "(A60, 4X, A23, 4X, A23, 4X, A25)", codata_headers(:)
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
        implicit none    
        character(len=*), intent(in) :: name
        character(len=25) :: unit
        integer :: i

        unit = "None"

        do i=1, size(codata_constants)
            if (codata_constants(i)%name == name)then
                unit =  codata_get_unit_by_index(i)
                exit
            endif
        enddo
    end function


    
end module codata
