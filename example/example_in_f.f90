program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print '(A)', '########## VERSION ##########'
    print *, "version = ", get_version()
    
    print '(A)', '########## CONSTANTS ##########'
    print *, "c=",  SPEED_OF_LIGHT_IN_VACUUM
    
    print '(A)', '########## UNCERTAINTY ##########'
    print *, "u(c)=", U_SPEED_OF_LIGHT_IN_VACUUM

end program
