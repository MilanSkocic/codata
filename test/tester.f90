program tester
    use iso_fortran_env
    use testdrive, only : run_testsuite, new_testsuite, testsuite_type
    use test_constants, only : collect_constants
    implicit none
    type(testsuite_type), allocatable :: testsuites(:)
    character(len=*), parameter :: fmt = '("#", *(1x, a))'
    integer :: stat, is

    stat = 0

    testsuites = [new_testsuite("constants", collect_constants)]

    do is = 1, size(testsuites)
        write(error_unit, fmt) "Testing:", testsuites(is)%name
        call run_testsuite(testsuites(is)%collect, error_unit, stat)
    end do

    if (stat > 0) then
        write(error_unit, '(i0, 1x, a)') stat, "test(s) failed!"
        error stop
    end if

end program
