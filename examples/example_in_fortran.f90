program example_in_fortran
    use codata
    implicit none

    call codata_print()
    print *, codata_get_value("alpha particle mass")

end program