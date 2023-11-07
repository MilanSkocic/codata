program generator
    use iso_fortran_env
    use utils
    implicit none

    character(len=32) :: s = "alpha"

    print *, isalnum("_")
    call toupper(s)
    print *, s

end program