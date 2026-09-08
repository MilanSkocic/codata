module test_lookup
!! Test the quantity key, the runtime lookup, and the aliases.
!!
!! The point of these tests is that the two ways of reaching a constant -- the
!! named symbols, resolved at compile time, and codata_value, resolved at run
!! time -- are generated from the same data and must never disagree.
use testdrive, only : new_unittest, unittest_type, error_type, check
use stdlib_kinds, only : dp, int32
use, intrinsic :: iso_fortran_env, only: int64
use, intrinsic :: ieee_arithmetic, only: ieee_is_nan
use codata
implicit none(type,external)
private

!=======================================================================
! PUBLIC
!=======================================================================
public :: collect_lookup
!=======================================================================

contains

!> Collect all exported unit tests
subroutine collect_lookup(testsuite)
    !> Collection of tests
    type(unittest_type), allocatable, intent(out) :: testsuite(:)
    testsuite = [new_unittest("year_suffixed_aliases", test_year_suffixed_aliases),&
                 new_unittest("renamed_quantity_aliases", test_renamed_quantity_aliases),&
                 new_unittest("adjustments_stay_distinct", test_adjustments_stay_distinct),&
                 new_unittest("quantity_key_aliases", test_quantity_key_aliases),&
                 new_unittest("lookup_is_a_bijection", test_lookup_is_a_bijection),&
                 new_unittest("lookup_matches_named_symbols", test_lookup_matches_named_symbols),&
                 new_unittest("absent_quantity_is_undefined", test_absent_quantity_is_undefined),&
                 new_unittest("quantity_names_round_trip", test_quantity_names_round_trip),&
                 new_unittest("datasets", test_datasets)]
end subroutine collect_lookup

!> The latest adjustment is reachable under both its unsuffixed and its
!> year-suffixed name, and the two are the same constant.
subroutine test_year_suffixed_aliases(error)
    type(error_type), allocatable, intent(out) :: error
    integer(int32) :: i
    call check(error, size(cc) == size(cc_2022))
    if (allocated(error)) return
    do i = 1, size(cc)
        call check(error, transfer(cc(i)%value, 0_int64) == transfer(cc_2022(i)%value, 0_int64))
        if (allocated(error)) return
        call check(error, transfer(cc(i)%uncertainty, 0_int64) == transfer(cc_2022(i)%uncertainty, 0_int64))
        if (allocated(error)) return
    end do
    call check(error, transfer(BOHR_RADIUS%value, 0_int64) == transfer(BOHR_RADIUS_2022%value, 0_int64))
    if (allocated(error)) return
end subroutine test_year_suffixed_aliases

!> A quantity NIST renamed is reachable under both spellings, in every
!> adjustment, and both name the same constant.
subroutine test_renamed_quantity_aliases(error)
    type(error_type), allocatable, intent(out) :: error
    call check(error, transfer(ELECTRIC_CONSTANT_2014%value, 0_int64) == &
                      transfer(VACUUM_ELECTRIC_PERMITTIVITY_2014%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(ELECTRIC_CONSTANT_2018%value, 0_int64) == &
                      transfer(VACUUM_ELECTRIC_PERMITTIVITY_2018%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(PLANCK_CONSTANT_OVER_2_PI_2022%value, 0_int64) == &
                      transfer(REDUCED_PLANCK_CONSTANT_2022%value, 0_int64))
    if (allocated(error)) return
end subroutine test_renamed_quantity_aliases

!> Aliasing must not collapse the adjustments onto each other.
subroutine test_adjustments_stay_distinct(error)
    type(error_type), allocatable, intent(out) :: error
    call check(error, ELECTRIC_CONSTANT_2014%value /= ELECTRIC_CONSTANT_2018%value)
    if (allocated(error)) return
    call check(error, BOHR_RADIUS_2010%value /= BOHR_RADIUS_2022%value)
    if (allocated(error)) return
end subroutine test_adjustments_stay_distinct

!> Renamed spellings share one quantity key.
subroutine test_quantity_key_aliases(error)
    type(error_type), allocatable, intent(out) :: error
    call check(error, Q_ELECTRIC_CONSTANT, Q_VACUUM_ELECTRIC_PERMITTIVITY)
    if (allocated(error)) return
    call check(error, Q_PLANCK_CONSTANT_OVER_2_PI, Q_REDUCED_PLANCK_CONSTANT)
    if (allocated(error)) return
end subroutine test_quantity_key_aliases

!> For each adjustment, the quantity keys that are defined correspond one for
!> one with that adjustment's constants, by pointer identity: the lookup hands
!> back the very same objects the named symbols do, not copies of them.
subroutine test_lookup_is_a_bijection(error)
    type(error_type), allocatable, intent(out) :: error
    type(codata_constant_type), pointer :: p
    integer(int32) :: ids, q, i, ndefined
    logical, allocatable :: hit(:)

    do ids = 1, CODATA_N_DATASETS
        select case(CODATA_DATASETS(ids))
        case(CODATA_2010)
            allocate(hit(size(cc_2010)))
        case(CODATA_2014)
            allocate(hit(size(cc_2014)))
        case(CODATA_2018)
            allocate(hit(size(cc_2018)))
        case default
            allocate(hit(size(cc_2022)))
        end select
        hit = .false.
        ndefined = 0

        do q = 0_int32, Q_COUNT - 1_int32
            p => codata_get(CODATA_DATASETS(ids), q)
            if(.not. associated(p)) cycle
            ndefined = ndefined + 1
            do i = 1, size(hit)
                select case(CODATA_DATASETS(ids))
                case(CODATA_2010)
                    if(associated(p, cc_2010(i))) exit
                case(CODATA_2014)
                    if(associated(p, cc_2014(i))) exit
                case(CODATA_2018)
                    if(associated(p, cc_2018(i))) exit
                case default
                    if(associated(p, cc_2022(i))) exit
                end select
            end do
            ! every defined quantity is one of that adjustment's constants ...
            call check(error, i <= size(hit))
            if (allocated(error)) return
            ! ... and no two quantity keys land on the same constant
            call check(error, .not. hit(i))
            if (allocated(error)) return
            hit(i) = .true.
        end do

        ! ... and every constant is reachable from some quantity key
        call check(error, ndefined, size(hit))
        if (allocated(error)) return
        call check(error, all(hit))
        if (allocated(error)) return
        deallocate(hit)
    end do
end subroutine test_lookup_is_a_bijection

!> The runtime accessor returns bitwise what the named symbol holds.
subroutine test_lookup_matches_named_symbols(error)
    type(error_type), allocatable, intent(out) :: error

    call check(error, transfer(codata_value(CODATA_2010, Q_BOHR_RADIUS), 0_int64) == &
                      transfer(BOHR_RADIUS_2010%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(codata_value(CODATA_2014, Q_BOHR_RADIUS), 0_int64) == &
                      transfer(BOHR_RADIUS_2014%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(codata_value(CODATA_2018, Q_BOHR_RADIUS), 0_int64) == &
                      transfer(BOHR_RADIUS_2018%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(codata_value(CODATA_2022, Q_BOHR_RADIUS), 0_int64) == &
                      transfer(BOHR_RADIUS_2022%value, 0_int64))
    if (allocated(error)) return
    call check(error, transfer(codata_value(CODATA_LATEST, Q_BOHR_RADIUS), 0_int64) == &
                      transfer(BOHR_RADIUS%value, 0_int64))
    if (allocated(error)) return

    call check(error, transfer(codata_uncertainty(CODATA_2018, Q_PLANCK_CONSTANT), 0_int64) == &
                      transfer(PLANCK_CONSTANT_2018%uncertainty, 0_int64))
    if (allocated(error)) return
    call check(error, codata_unit(CODATA_2018, Q_BOHR_RADIUS) == BOHR_RADIUS_2018%unit)
    if (allocated(error)) return

    ! reached through the older spelling of a renamed quantity
    call check(error, transfer(codata_value(CODATA_2014, Q_ELECTRIC_CONSTANT), 0_int64) == &
                      transfer(ELECTRIC_CONSTANT_2014%value, 0_int64))
    if (allocated(error)) return
end subroutine test_lookup_matches_named_symbols

!> A quantity an adjustment does not contain is reported as undefined, and its
!> value is a quiet NaN rather than a plausible-looking zero.
subroutine test_absent_quantity_is_undefined(error)
    type(error_type), allocatable, intent(out) :: error
    type(codata_constant_type), pointer :: p

    ! helion shielding shift arrives in 2018
    call check(error, .not. codata_defined(CODATA_2010, Q_HELION_SHIELDING_SHIFT))
    if (allocated(error)) return
    call check(error, codata_defined(CODATA_2018, Q_HELION_SHIELDING_SHIFT))
    if (allocated(error)) return

    p => codata_get(CODATA_2010, Q_HELION_SHIELDING_SHIFT)
    call check(error, .not. associated(p))
    if (allocated(error)) return

    call check(error, ieee_is_nan(codata_value(CODATA_2010, Q_HELION_SHIELDING_SHIFT)))
    if (allocated(error)) return
    call check(error, codata_value(CODATA_2010, Q_HELION_SHIELDING_SHIFT) /= 0.0_dp)
    if (allocated(error)) return
    call check(error, ieee_is_nan(codata_uncertainty(CODATA_2010, Q_HELION_SHIELDING_SHIFT)))
    if (allocated(error)) return

    ! and so is an out of range key
    call check(error, .not. codata_defined(CODATA_2022, Q_UNKNOWN))
    if (allocated(error)) return
    call check(error, ieee_is_nan(codata_value(CODATA_2022, Q_COUNT)))
    if (allocated(error)) return
end subroutine test_absent_quantity_is_undefined

!> Every quantity key round trips through its name, and renamed spellings
!> resolve to the same key.
subroutine test_quantity_names_round_trip(error)
    type(error_type), allocatable, intent(out) :: error
    integer(int32) :: q

    do q = 0_int32, Q_COUNT - 1_int32
        call check(error, codata_quantity_from_name(codata_quantity_name(q)), q)
        if (allocated(error)) return
    end do

    call check(error, codata_quantity_from_name("ELECTRIC_CONSTANT"), Q_VACUUM_ELECTRIC_PERMITTIVITY)
    if (allocated(error)) return
    call check(error, codata_quantity_from_name("NO_SUCH_QUANTITY"), Q_UNKNOWN)
    if (allocated(error)) return
    call check(error, trim(codata_quantity_name(Q_BOHR_RADIUS)) == "BOHR_RADIUS")
    if (allocated(error)) return
end subroutine test_quantity_names_round_trip

!> The adjustments are listed oldest first, and CODATA_LATEST is the last.
subroutine test_datasets(error)
    type(error_type), allocatable, intent(out) :: error
    integer(int32) :: i

    call check(error, size(CODATA_DATASETS), CODATA_N_DATASETS)
    if (allocated(error)) return
    do i = 2, CODATA_N_DATASETS
        call check(error, CODATA_DATASETS(i) > CODATA_DATASETS(i - 1))
        if (allocated(error)) return
    end do
    call check(error, CODATA_DATASETS(CODATA_N_DATASETS), CODATA_LATEST)
    if (allocated(error)) return
end subroutine test_datasets

end module test_lookup
