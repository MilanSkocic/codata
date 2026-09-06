program example_in_f
use codata
implicit none
integer :: i
print '(A)', '########## EXAMPLE IN FORTRAN ##########'
print '(A)', '# VERSION'
print *, "version = ", version()
print '(A)', '# CONSTANTS'
print *, "c = ",  SPEED_OF_LIGHT_IN_VACUUM%value
print '(A)', '# UNCERTAINTY'
print *, "u(c) = ", SPEED_OF_LIGHT_IN_VACUUM%uncertainty
print '(A)', '# OLDER VALUES'
print '(A, F23.16)', "Mu_2022(latest) = ", MOLAR_MASS_CONSTANT%value
print '(A, F23.16)', "Mu_2018 = ", MOLAR_MASS_CONSTANT_2018%value
print '(A, F23.16)', "Mu_2014 = ",  MOLAR_MASS_CONSTANT_2014%value
print '(A, F23.16)', "Mu_2010 = ",  MOLAR_MASS_CONSTANT_2010%value
print '(A)', '# SELECTING THE ADJUSTMENT AT RUN TIME'
do i = 1, CODATA_N_DATASETS
    print '(A, I0, A, F23.16)', "Mu_", CODATA_DATASETS(i), " = ", &
        codata_value(CODATA_DATASETS(i), Q_MOLAR_MASS_CONSTANT)
end do
print '(A)', '# A QUANTITY AN OLDER ADJUSTMENT DOES NOT CONTAIN'
print *, "defined in 2018 = ", codata_defined(CODATA_2018, Q_HELION_SHIELDING_SHIFT)
print *, "defined in 2010 = ", codata_defined(CODATA_2010, Q_HELION_SHIELDING_SHIFT)
print '(A)', '# A QUANTITY NIST RENAMED IN 2018'
print *, "eps0_2014 via either name = ", ELECTRIC_CONSTANT_2014%value, &
                                         VACUUM_ELECTRIC_PERMITTIVITY_2014%value
end program
