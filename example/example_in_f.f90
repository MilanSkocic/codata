program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print '(A)', '########## VERSION ##########'
    print *, "version = ", get_version()
    
    print '(A)', '########## CONSTANTS ##########'
    print *, "c=",  speed_of_light_in_vacuum
    
    print '(A)', '########## UNCERTAINTY ##########'
    print *, "u(c)=", u_speed_of_light_in_vacuum

end program
