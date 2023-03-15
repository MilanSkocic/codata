program example_in_fortran
    use codata
    implicit none

    character(len=4) :: year = "2014"

    ! call directly codata, the values used will be the last i.e. 2018
    call codata_print()
    print *, "Codata ", codata_get_year(), codata_get_value("alpha particle mass")
    print *, codata_get_year()

end program
