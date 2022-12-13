!> @file
!! @brief Codata constants.
!! @example example_in_fortran.f90

!> @brief Codata constants
!! @details Codata constants wrapped in an array of derived type
!! with members name, value, uncertainty and unit.
!! Methods for getting the member values are available.
module Codata
    use ieee_arithmetic
    use iso_fortran_env
    use codata_data
    
    character(len=60), dimension(4), parameter :: headers = [character(len=60):: "Names", "Values", "Uncertainties", "Units"]

contains

    !> @brief Display all constants.
    subroutine codata_print() bind(C)
        integer :: i
        print "(A60, 4X, A23, 4X, A23, 4X, A25)", headers(:)
        do i=1, size(codata_constants)
            print "(A60, 4X, SP, ES23.16E2, 4X, ES23.16E2, 4X, A25)", codata_constants(i)%name, &
                                                                      codata_constants(i)%value, &
                                                                      codata_constants(i)%uncertainty, &
                                                                      codata_constants(i)%unit
        end do
    end subroutine codata_print


end module