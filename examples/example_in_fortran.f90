program example_in_fortran
    use codata
    implicit none

    character(len=4) :: year = "2014"

    ! call directly codata, the values used will be the last i.e. 2018
    call codata_print()
    print *, codata_get_value("alpha particle mass")

    ! Or set the codata values that you want
    call set_codata(year)
    call codata_print()
    print *, codata_get_value("alpha particle mass")


end program