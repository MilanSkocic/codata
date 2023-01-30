program example_in_fortran
    use codata
    implicit none

    character(len=4) :: year = "2014"

    ! call directly codata, the values used will be the last i.e. 2018
    call codata_print()
    print *, "Codata 2018: ", codata_get_value("alpha particle mass")
    print *, codata_get_year()

    ! Or set the codata values that you want
    call codata_set_year(year)
    print *, "Codata 2014: ", codata_get_value("alpha particle mass")


    print *, codata_get_year()

end program