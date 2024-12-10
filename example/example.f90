program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print '(A)', '########## EXAMPLE IN FORTRAN ##########'
    
    print '(A)', '########## VERSION ##########'
    print *, "version = ", get_version()
    
    print '(A)', '########## CONSTANTS ##########'
    print *, "c = ",  SPEED_OF_LIGHT_IN_VACUUM%value
    
    print '(A)', '########## UNCERTAINTY ##########'
    print *, "u(c) = ", SPEED_OF_LIGHT_IN_VACUUM%uncertainty

    print '(A)', '########## OLDER VALUES ##########'
    print '(A, F23.16)', "Mu_2022(latest) = ", MOLAR_MASS_CONSTANT%value
    print '(A, F23.16)', "Mu_2018 = ", MOLAR_MASS_CONSTANT_2018%value
    print '(A, F23.16)', "Mu_2014 = ",  MOLAR_MASS_CONSTANT_2014%value
    print '(A, F23.16)', "Mu_2010 = ",  MOLAR_MASS_CONSTANT_2010%value


end program
