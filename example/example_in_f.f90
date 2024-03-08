program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print '(A)', '########## VERSION ##########'
    print *, "version = ", get_version()
    
    print '(A)', '########## CONSTANTS ##########'
    print *, "c = ",  SPEED_OF_LIGHT_IN_VACUUM
    
    print '(A)', '########## UNCERTAINTY ##########'
    print *, "u(c) = ", U_SPEED_OF_LIGHT_IN_VACUUM

    print '(A)', '########## OLDER VALUES ##########'
    print '(A, F23.16)', "Mu_2018 = ", MOLAR_MASS_CONSTANT_2018 
    print '(A, F23.16)', "Mu_2014 = ",  MOLAR_MASS_CONSTANT_2014
    print '(A, F23.16)', "Mu_2010 = ",  MOLAR_MASS_CONSTANT_2010


end program
