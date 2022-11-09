!> 
!! Fundamental Physical Constants --- Complete Listing                                                                                                                                                                                                             
!! 2018 CODATA adjustment                                                                                                                                                                                                                                          
!! From:  http://physics.nist.gov/constants                                                                                                                                                                                                                        
!! @example example_in_fortran.f90
!! @details How to us ccodata in Fortran.
!! 
module codata
use iso_c_binding
implicit none
real(c_double), parameter :: ALPHA_PARTICLE_ELECTRON_MASS_RATIO                           = 7294.29954142d0          !<                           
real(c_double), parameter :: D_ALPHA_PARTICLE_ELECTRON_MASS_RATIO                         = 0.00000024d0             !<                           

real(c_double), parameter :: ALPHA_PARTICLE_MASS                                          = 6.6446573357d-27         !< kg                        
real(c_double), parameter :: D_ALPHA_PARTICLE_MASS                                        = 0.0000000020d-27         !< kg                        

real(c_double), parameter :: ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT                        = 5.9719201914d-10         !< J                         
real(c_double), parameter :: D_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT                      = 0.0000000018d-10         !< J                         

real(c_double), parameter :: ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV                 = 3727.3794066d0           !< MeV                       
real(c_double), parameter :: D_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV               = 0.0000011d0              !< MeV                       

real(c_double), parameter :: ALPHA_PARTICLE_MASS_IN_U                                     = 4.001506179127d0         !< u                         
real(c_double), parameter :: D_ALPHA_PARTICLE_MASS_IN_U                                   = 0.000000000063d0         !< u                         

real(c_double), parameter :: ALPHA_PARTICLE_MOLAR_MASS                                    = 4.0015061777d-3          !< kg mol^-1                 
real(c_double), parameter :: D_ALPHA_PARTICLE_MOLAR_MASS                                  = 0.0000000012d-3          !< kg mol^-1                 

real(c_double), parameter :: ALPHA_PARTICLE_PROTON_MASS_RATIO                             = 3.97259969009d0          !<                           
real(c_double), parameter :: D_ALPHA_PARTICLE_PROTON_MASS_RATIO                           = 0.00000000022d0          !<                           

real(c_double), parameter :: ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS                          = 4.001506179127d0         !<                           
real(c_double), parameter :: D_ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS                        = 0.000000000063d0         !<                           

real(c_double), parameter :: ANGSTROM_STAR                                                = 1.00001495d-10           !< m                         
real(c_double), parameter :: D_ANGSTROM_STAR                                              = 0.00000090d-10           !< m                         

real(c_double), parameter :: ATOMIC_MASS_CONSTANT                                         = 1.66053906660d-27        !< kg                        
real(c_double), parameter :: D_ATOMIC_MASS_CONSTANT                                       = 0.00000000050d-27        !< kg                        

real(c_double), parameter :: ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT                       = 1.49241808560d-10        !< J                         
real(c_double), parameter :: D_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT                     = 0.00000000045d-10        !< J                         

real(c_double), parameter :: ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV                = 931.49410242d0           !< MeV                       
real(c_double), parameter :: D_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV              = 0.00000028d0             !< MeV                       

real(c_double), parameter :: ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP                  = 9.3149410242d8           !< eV                        
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP                = 0.0000000028d8           !< eV                        

real(c_double), parameter :: ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP                        = 3.4231776874d7           !< E_h                       
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP                      = 0.0000000010d7           !< E_h                       

real(c_double), parameter :: ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP                          = 2.25234271871d23         !< Hz                        
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP                        = 0.00000000068d23         !< Hz                        

real(c_double), parameter :: ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP                  = 7.5130066104d14          !< m^-1                      
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP                = 0.0000000023d14          !< m^-1                      

real(c_double), parameter :: ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP                          = 1.49241808560d-10        !< J                         
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP                        = 0.00000000045d-10        !< J                         

real(c_double), parameter :: ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP                         = 1.08095401916d13         !< K                         
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP                       = 0.00000000033d13         !< K                         

real(c_double), parameter :: ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP                       = 1.66053906660d-27        !< kg                        
real(c_double), parameter :: D_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP                     = 0.00000000050d-27        !< kg                        

real(c_double), parameter :: ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY                       = 3.2063613061d-53         !< C^3 m^3 J^-2              
real(c_double), parameter :: D_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY                     = 0.0000000015d-53         !< C^3 m^3 J^-2              

real(c_double), parameter :: ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY                       = 6.2353799905d-65         !< C^4 m^4 J^-3              
real(c_double), parameter :: D_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY                     = 0.0000000038d-65         !< C^4 m^4 J^-3              

real(c_double), parameter :: ATOMIC_UNIT_OF_ACTION                                        = 1.054571817d-34          !< J s                       
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ACTION                                      = 0.0d0                    !< J s                       

real(c_double), parameter :: ATOMIC_UNIT_OF_CHARGE                                        = 1.602176634d-19          !< C                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_CHARGE                                      = 0.0d0                    !< C                         

real(c_double), parameter :: ATOMIC_UNIT_OF_CHARGE_DENSITY                                = 1.08120238457d12         !< C m^-3                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_CHARGE_DENSITY                              = 0.00000000049d12         !< C m^-3                    

real(c_double), parameter :: ATOMIC_UNIT_OF_CURRENT                                       = 6.623618237510d-3        !< A                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_CURRENT                                     = 0.000000000013d-3        !< A                         

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM                           = 8.4783536255d-30         !< C m                       
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM                         = 0.0000000013d-30         !< C m                       

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_FIELD                                = 5.14220674763d11         !< V m^-1                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_FIELD                              = 0.00000000078d11         !< V m^-1                    

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT                       = 9.7173624292d21          !< V m^-2                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT                     = 0.0000000029d21          !< V m^-2                    

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY                       = 1.64877727436d-41        !< C^2 m^2 J^-1              
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY                     = 0.00000000050d-41        !< C^2 m^2 J^-1              

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL                            = 27.211386245988d0        !< V                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL                          = 0.000000000053d0         !< V                         

real(c_double), parameter :: ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM                       = 4.4865515246d-40         !< C m^2                     
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM                     = 0.0000000014d-40         !< C m^2                     

real(c_double), parameter :: ATOMIC_UNIT_OF_ENERGY                                        = 4.3597447222071d-18      !< J                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_ENERGY                                      = 0.0000000000085d-18      !< J                         

real(c_double), parameter :: ATOMIC_UNIT_OF_FORCE                                         = 8.2387234983d-8          !< N                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_FORCE                                       = 0.0000000012d-8          !< N                         

real(c_double), parameter :: ATOMIC_UNIT_OF_LENGTH                                        = 5.29177210903d-11        !< m                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_LENGTH                                      = 0.00000000080d-11        !< m                         

real(c_double), parameter :: ATOMIC_UNIT_OF_MAG__DIPOLE_MOM                               = 1.85480201566d-23        !< J T^-1                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM                             = 0.00000000056d-23        !< J T^-1                    

real(c_double), parameter :: ATOMIC_UNIT_OF_MAG__FLUX_DENSITY                             = 2.35051756758d5          !< T                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY                           = 0.00000000071d5          !< T                         

real(c_double), parameter :: ATOMIC_UNIT_OF_MAGNETIZABILITY                               = 7.8910366008d-29         !< J T^-2                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_MAGNETIZABILITY                             = 0.0000000048d-29         !< J T^-2                    

real(c_double), parameter :: ATOMIC_UNIT_OF_MASS                                          = 9.1093837015d-31         !< kg                        
real(c_double), parameter :: D_ATOMIC_UNIT_OF_MASS                                        = 0.0000000028d-31         !< kg                        

real(c_double), parameter :: ATOMIC_UNIT_OF_MOMENTUM                                      = 1.99285191410d-24        !< kg m s^-1                 
real(c_double), parameter :: D_ATOMIC_UNIT_OF_MOMENTUM                                    = 0.00000000030d-24        !< kg m s^-1                 

real(c_double), parameter :: ATOMIC_UNIT_OF_PERMITTIVITY                                  = 1.11265005545d-10        !< F m^-1                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_PERMITTIVITY                                = 0.00000000017d-10        !< F m^-1                    

real(c_double), parameter :: ATOMIC_UNIT_OF_TIME                                          = 2.4188843265857d-17      !< s                         
real(c_double), parameter :: D_ATOMIC_UNIT_OF_TIME                                        = 0.0000000000047d-17      !< s                         

real(c_double), parameter :: ATOMIC_UNIT_OF_VELOCITY                                      = 2.18769126364d6          !< m s^-1                    
real(c_double), parameter :: D_ATOMIC_UNIT_OF_VELOCITY                                    = 0.00000000033d6          !< m s^-1                    

real(c_double), parameter :: AVOGADRO_CONSTANT                                            = 6.02214076d23            !< mol^-1                    
real(c_double), parameter :: D_AVOGADRO_CONSTANT                                          = 0.0d0                    !< mol^-1                    

real(c_double), parameter :: BOHR_MAGNETON                                                = 9.2740100783d-24         !< J T^-1                    
real(c_double), parameter :: D_BOHR_MAGNETON                                              = 0.0000000028d-24         !< J T^-1                    

real(c_double), parameter :: BOHR_MAGNETON_IN_EV_T                                        = 5.7883818060d-5          !< eV T^-1                   
real(c_double), parameter :: D_BOHR_MAGNETON_IN_EV_T                                      = 0.0000000017d-5          !< eV T^-1                   

real(c_double), parameter :: BOHR_MAGNETON_IN_HZ_T                                        = 1.39962449361d10         !< Hz T^-1                   
real(c_double), parameter :: D_BOHR_MAGNETON_IN_HZ_T                                      = 0.00000000042d10         !< Hz T^-1                   

real(c_double), parameter :: BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA                     = 46.686447783d0           !< m^-1 T^-1                 
real(c_double), parameter :: D_BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA                   = 0.000000014d0            !< m^-1 T^-1                 

real(c_double), parameter :: BOHR_MAGNETON_IN_K_T                                         = 0.67171381563d0          !< K T^-1                    
real(c_double), parameter :: D_BOHR_MAGNETON_IN_K_T                                       = 0.00000000020d0          !< K T^-1                    

real(c_double), parameter :: BOHR_RADIUS                                                  = 5.29177210903d-11        !< m                         
real(c_double), parameter :: D_BOHR_RADIUS                                                = 0.00000000080d-11        !< m                         

real(c_double), parameter :: BOLTZMANN_CONSTANT                                           = 1.380649d-23             !< J K^-1                    
real(c_double), parameter :: D_BOLTZMANN_CONSTANT                                         = 0.0d0                    !< J K^-1                    

real(c_double), parameter :: BOLTZMANN_CONSTANT_IN_EV_K                                   = 8.617333262d-5           !< eV K^-1                   
real(c_double), parameter :: D_BOLTZMANN_CONSTANT_IN_EV_K                                 = 0.0d0                    !< eV K^-1                   

real(c_double), parameter :: BOLTZMANN_CONSTANT_IN_HZ_K                                   = 2.083661912d10           !< Hz K^-1                   
real(c_double), parameter :: D_BOLTZMANN_CONSTANT_IN_HZ_K                                 = 0.0d0                    !< Hz K^-1                   

real(c_double), parameter :: BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN               = 69.50348004d0            !< m^-1 K^-1                 
real(c_double), parameter :: D_BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN             = 0.0d0                    !< m^-1 K^-1                 

real(c_double), parameter :: CHARACTERISTIC_IMPEDANCE_OF_VACUUM                           = 376.730313668d0          !< ohm                       
real(c_double), parameter :: D_CHARACTERISTIC_IMPEDANCE_OF_VACUUM                         = 0.000000057d0            !< ohm                       

real(c_double), parameter :: CLASSICAL_ELECTRON_RADIUS                                    = 2.8179403262d-15         !< m                         
real(c_double), parameter :: D_CLASSICAL_ELECTRON_RADIUS                                  = 0.0000000013d-15         !< m                         

real(c_double), parameter :: COMPTON_WAVELENGTH                                           = 2.42631023867d-12        !< m                         
real(c_double), parameter :: D_COMPTON_WAVELENGTH                                         = 0.00000000073d-12        !< m                         

real(c_double), parameter :: CONDUCTANCE_QUANTUM                                          = 7.748091729d-5           !< S                         
real(c_double), parameter :: D_CONDUCTANCE_QUANTUM                                        = 0.0d0                    !< S                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_AMPERE_90                              = 1.00000008887d0          !< A                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_AMPERE_90                            = 0.0d0                    !< A                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_COULOMB_90                             = 1.00000008887d0          !< C                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_COULOMB_90                           = 0.0d0                    !< C                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_FARAD_90                               = 0.99999998220d0          !< F                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_FARAD_90                             = 0.0d0                    !< F                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_HENRY_90                               = 1.00000001779d0          !< H                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_HENRY_90                             = 0.0d0                    !< H                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT                     = 483597.9d9               !< Hz V^-1                   
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT                   = 0.0d0                    !< Hz V^-1                   

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_OHM_90                                 = 1.00000001779d0          !< ohm                       
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_OHM_90                               = 0.0d0                    !< ohm                       

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_VOLT_90                                = 1.00000010666d0          !< V                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_VOLT_90                              = 0.0d0                    !< V                         

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT                  = 25812.807d0              !< ohm                       
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT                = 0.0d0                    !< ohm                       

real(c_double), parameter :: CONVENTIONAL_VALUE_OF_WATT_90                                = 1.00000019553d0          !< W                         
real(c_double), parameter :: D_CONVENTIONAL_VALUE_OF_WATT_90                              = 0.0d0                    !< W                         

real(c_double), parameter :: COPPER_X_UNIT                                                = 1.00207697d-13           !< m                         
real(c_double), parameter :: D_COPPER_X_UNIT                                              = 0.00000028d-13           !< m                         

real(c_double), parameter :: DEUTERON_ELECTRON_MAG__MOM__RATIO                            = -4.664345551d-4          !<                           
real(c_double), parameter :: D_DEUTERON_ELECTRON_MAG__MOM__RATIO                          = 0.000000012d-4           !<                           

real(c_double), parameter :: DEUTERON_ELECTRON_MASS_RATIO                                 = 3670.48296788d0          !<                           
real(c_double), parameter :: D_DEUTERON_ELECTRON_MASS_RATIO                               = 0.00000013d0             !<                           

real(c_double), parameter :: DEUTERON_G_FACTOR                                            = 0.8574382338d0           !<                           
real(c_double), parameter :: D_DEUTERON_G_FACTOR                                          = 0.0000000022d0           !<                           

real(c_double), parameter :: DEUTERON_MAG__MOM                                            = 4.330735094d-27          !< J T^-1                    
real(c_double), parameter :: D_DEUTERON_MAG__MOM                                          = 0.000000011d-27          !< J T^-1                    

real(c_double), parameter :: DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                    = 4.669754570d-4           !<                           
real(c_double), parameter :: D_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                  = 0.000000012d-4           !<                           

real(c_double), parameter :: DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                 = 0.8574382338d0           !<                           
real(c_double), parameter :: D_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO               = 0.0000000022d0           !<                           

real(c_double), parameter :: DEUTERON_MASS                                                = 3.3435837724d-27         !< kg                        
real(c_double), parameter :: D_DEUTERON_MASS                                              = 0.0000000010d-27         !< kg                        

real(c_double), parameter :: DEUTERON_MASS_ENERGY_EQUIVALENT                              = 3.00506323102d-10        !< J                         
real(c_double), parameter :: D_DEUTERON_MASS_ENERGY_EQUIVALENT                            = 0.00000000091d-10        !< J                         

real(c_double), parameter :: DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV                       = 1875.61294257d0          !< MeV                       
real(c_double), parameter :: D_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV                     = 0.00000057d0             !< MeV                       

real(c_double), parameter :: DEUTERON_MASS_IN_U                                           = 2.013553212745d0         !< u                         
real(c_double), parameter :: D_DEUTERON_MASS_IN_U                                         = 0.000000000040d0         !< u                         

real(c_double), parameter :: DEUTERON_MOLAR_MASS                                          = 2.01355321205d-3         !< kg mol^-1                 
real(c_double), parameter :: D_DEUTERON_MOLAR_MASS                                        = 0.00000000061d-3         !< kg mol^-1                 

real(c_double), parameter :: DEUTERON_NEUTRON_MAG__MOM__RATIO                             = -0.44820653d0            !<                           
real(c_double), parameter :: D_DEUTERON_NEUTRON_MAG__MOM__RATIO                           = 0.00000011d0             !<                           

real(c_double), parameter :: DEUTERON_PROTON_MAG__MOM__RATIO                              = 0.30701220939d0          !<                           
real(c_double), parameter :: D_DEUTERON_PROTON_MAG__MOM__RATIO                            = 0.00000000079d0          !<                           

real(c_double), parameter :: DEUTERON_PROTON_MASS_RATIO                                   = 1.99900750139d0          !<                           
real(c_double), parameter :: D_DEUTERON_PROTON_MASS_RATIO                                 = 0.00000000011d0          !<                           

real(c_double), parameter :: DEUTERON_RELATIVE_ATOMIC_MASS                                = 2.013553212745d0         !<                           
real(c_double), parameter :: D_DEUTERON_RELATIVE_ATOMIC_MASS                              = 0.000000000040d0         !<                           

real(c_double), parameter :: DEUTERON_RMS_CHARGE_RADIUS                                   = 2.12799d-15              !< m                         
real(c_double), parameter :: D_DEUTERON_RMS_CHARGE_RADIUS                                 = 0.00074d-15              !< m                         

real(c_double), parameter :: ELECTRON_CHARGE_TO_MASS_QUOTIENT                             = -1.75882001076d11        !< C kg^-1                   
real(c_double), parameter :: D_ELECTRON_CHARGE_TO_MASS_QUOTIENT                           = 0.00000000053d11         !< C kg^-1                   

real(c_double), parameter :: ELECTRON_DEUTERON_MAG__MOM__RATIO                            = -2143.9234915d0          !<                           
real(c_double), parameter :: D_ELECTRON_DEUTERON_MAG__MOM__RATIO                          = 0.0000056d0              !<                           

real(c_double), parameter :: ELECTRON_DEUTERON_MASS_RATIO                                 = 2.724437107462d-4        !<                           
real(c_double), parameter :: D_ELECTRON_DEUTERON_MASS_RATIO                               = 0.000000000096d-4        !<                           

real(c_double), parameter :: ELECTRON_G_FACTOR                                            = -2.00231930436256d0      !<                           
real(c_double), parameter :: D_ELECTRON_G_FACTOR                                          = 0.00000000000035d0       !<                           

real(c_double), parameter :: ELECTRON_GYROMAG__RATIO                                      = 1.76085963023d11         !< s^-1 T^-1                 
real(c_double), parameter :: D_ELECTRON_GYROMAG__RATIO                                    = 0.00000000053d11         !< s^-1 T^-1                 

real(c_double), parameter :: ELECTRON_GYROMAG__RATIO_IN_MHZ_T                             = 28024.9514242d0          !< MHz T^-1                  
real(c_double), parameter :: D_ELECTRON_GYROMAG__RATIO_IN_MHZ_T                           = 0.0000085d0              !< MHz T^-1                  

real(c_double), parameter :: ELECTRON_HELION_MASS_RATIO                                   = 1.819543074573d-4        !<                           
real(c_double), parameter :: D_ELECTRON_HELION_MASS_RATIO                                 = 0.000000000079d-4        !<                           

real(c_double), parameter :: ELECTRON_MAG__MOM                                            = -9.2847647043d-24        !< J T^-1                    
real(c_double), parameter :: D_ELECTRON_MAG__MOM                                          = 0.0000000028d-24         !< J T^-1                    

real(c_double), parameter :: ELECTRON_MAG__MOM__ANOMALY                                   = 1.15965218128d-3         !<                           
real(c_double), parameter :: D_ELECTRON_MAG__MOM__ANOMALY                                 = 0.00000000018d-3         !<                           

real(c_double), parameter :: ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                    = -1.00115965218128d0      !<                           
real(c_double), parameter :: D_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                  = 0.00000000000018d0       !<                           

real(c_double), parameter :: ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                 = -1838.28197188d0         !<                           
real(c_double), parameter :: D_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO               = 0.00000011d0             !<                           

real(c_double), parameter :: ELECTRON_MASS                                                = 9.1093837015d-31         !< kg                        
real(c_double), parameter :: D_ELECTRON_MASS                                              = 0.0000000028d-31         !< kg                        

real(c_double), parameter :: ELECTRON_MASS_ENERGY_EQUIVALENT                              = 8.1871057769d-14         !< J                         
real(c_double), parameter :: D_ELECTRON_MASS_ENERGY_EQUIVALENT                            = 0.0000000025d-14         !< J                         

real(c_double), parameter :: ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV                       = 0.51099895000d0          !< MeV                       
real(c_double), parameter :: D_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV                     = 0.00000000015d0          !< MeV                       

real(c_double), parameter :: ELECTRON_MASS_IN_U                                           = 5.48579909065d-4         !< u                         
real(c_double), parameter :: D_ELECTRON_MASS_IN_U                                         = 0.00000000016d-4         !< u                         

real(c_double), parameter :: ELECTRON_MOLAR_MASS                                          = 5.4857990888d-7          !< kg mol^-1                 
real(c_double), parameter :: D_ELECTRON_MOLAR_MASS                                        = 0.0000000017d-7          !< kg mol^-1                 

real(c_double), parameter :: ELECTRON_MUON_MAG__MOM__RATIO                                = 206.7669883d0            !<                           
real(c_double), parameter :: D_ELECTRON_MUON_MAG__MOM__RATIO                              = 0.0000046d0              !<                           

real(c_double), parameter :: ELECTRON_MUON_MASS_RATIO                                     = 4.83633169d-3            !<                           
real(c_double), parameter :: D_ELECTRON_MUON_MASS_RATIO                                   = 0.00000011d-3            !<                           

real(c_double), parameter :: ELECTRON_NEUTRON_MAG__MOM__RATIO                             = 960.92050d0              !<                           
real(c_double), parameter :: D_ELECTRON_NEUTRON_MAG__MOM__RATIO                           = 0.00023d0                !<                           

real(c_double), parameter :: ELECTRON_NEUTRON_MASS_RATIO                                  = 5.4386734424d-4          !<                           
real(c_double), parameter :: D_ELECTRON_NEUTRON_MASS_RATIO                                = 0.0000000026d-4          !<                           

real(c_double), parameter :: ELECTRON_PROTON_MAG__MOM__RATIO                              = -658.21068789d0          !<                           
real(c_double), parameter :: D_ELECTRON_PROTON_MAG__MOM__RATIO                            = 0.00000020d0             !<                           

real(c_double), parameter :: ELECTRON_PROTON_MASS_RATIO                                   = 5.44617021487d-4         !<                           
real(c_double), parameter :: D_ELECTRON_PROTON_MASS_RATIO                                 = 0.00000000033d-4         !<                           

real(c_double), parameter :: ELECTRON_RELATIVE_ATOMIC_MASS                                = 5.48579909065d-4         !<                           
real(c_double), parameter :: D_ELECTRON_RELATIVE_ATOMIC_MASS                              = 0.00000000016d-4         !<                           

real(c_double), parameter :: ELECTRON_TAU_MASS_RATIO                                      = 2.87585d-4               !<                           
real(c_double), parameter :: D_ELECTRON_TAU_MASS_RATIO                                    = 0.00019d-4               !<                           

real(c_double), parameter :: ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO                        = 1.370933554787d-4        !<                           
real(c_double), parameter :: D_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO                      = 0.000000000045d-4        !<                           

real(c_double), parameter :: ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO                  = 864.058257d0             !<                           
real(c_double), parameter :: D_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO                = 0.000010d0               !<                           

real(c_double), parameter :: ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO                  = -658.2275971d0           !<                           
real(c_double), parameter :: D_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO                = 0.0000072d0              !<                           

real(c_double), parameter :: ELECTRON_TRITON_MASS_RATIO                                   = 1.819200062251d-4        !<                           
real(c_double), parameter :: D_ELECTRON_TRITON_MASS_RATIO                                 = 0.000000000090d-4        !<                           

real(c_double), parameter :: ELECTRON_VOLT                                                = 1.602176634d-19          !< J                         
real(c_double), parameter :: D_ELECTRON_VOLT                                              = 0.0d0                    !< J                         

real(c_double), parameter :: ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP                  = 1.07354410233d-9         !< u                         
real(c_double), parameter :: D_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP                = 0.00000000032d-9         !< u                         

real(c_double), parameter :: ELECTRON_VOLT_HARTREE_RELATIONSHIP                           = 3.6749322175655d-2       !< E_h                       
real(c_double), parameter :: D_ELECTRON_VOLT_HARTREE_RELATIONSHIP                         = 0.0000000000071d-2       !< E_h                       

real(c_double), parameter :: ELECTRON_VOLT_HERTZ_RELATIONSHIP                             = 2.417989242d14           !< Hz                        
real(c_double), parameter :: D_ELECTRON_VOLT_HERTZ_RELATIONSHIP                           = 0.0d0                    !< Hz                        

real(c_double), parameter :: ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP                     = 8.065543937d5            !< m^-1                      
real(c_double), parameter :: D_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP                   = 0.0d0                    !< m^-1                      

real(c_double), parameter :: ELECTRON_VOLT_JOULE_RELATIONSHIP                             = 1.602176634d-19          !< J                         
real(c_double), parameter :: D_ELECTRON_VOLT_JOULE_RELATIONSHIP                           = 0.0d0                    !< J                         

real(c_double), parameter :: ELECTRON_VOLT_KELVIN_RELATIONSHIP                            = 1.160451812d4            !< K                         
real(c_double), parameter :: D_ELECTRON_VOLT_KELVIN_RELATIONSHIP                          = 0.0d0                    !< K                         

real(c_double), parameter :: ELECTRON_VOLT_KILOGRAM_RELATIONSHIP                          = 1.782661921d-36          !< kg                        
real(c_double), parameter :: D_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP                        = 0.0d0                    !< kg                        

real(c_double), parameter :: ELEMENTARY_CHARGE                                            = 1.602176634d-19          !< C                         
real(c_double), parameter :: D_ELEMENTARY_CHARGE                                          = 0.0d0                    !< C                         

real(c_double), parameter :: ELEMENTARY_CHARGE_OVER_H_BAR                                 = 1.519267447d15           !< A J^-1                    
real(c_double), parameter :: D_ELEMENTARY_CHARGE_OVER_H_BAR                               = 0.0d0                    !< A J^-1                    

real(c_double), parameter :: FARADAY_CONSTANT                                             = 96485.33212d0            !< C mol^-1                  
real(c_double), parameter :: D_FARADAY_CONSTANT                                           = 0.0d0                    !< C mol^-1                  

real(c_double), parameter :: FERMI_COUPLING_CONSTANT                                      = 1.1663787d-5             !< GeV^-2                    
real(c_double), parameter :: D_FERMI_COUPLING_CONSTANT                                    = 0.0000006d-5             !< GeV^-2                    

real(c_double), parameter :: FINE_STRUCTURE_CONSTANT                                      = 7.2973525693d-3          !<                           
real(c_double), parameter :: D_FINE_STRUCTURE_CONSTANT                                    = 0.0000000011d-3          !<                           

real(c_double), parameter :: FIRST_RADIATION_CONSTANT                                     = 3.741771852d-16          !< W m^2                     
real(c_double), parameter :: D_FIRST_RADIATION_CONSTANT                                   = 0.0d0                    !< W m^2                     

real(c_double), parameter :: FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE               = 1.191042972d-16          !< W m^2 sr^-1               
real(c_double), parameter :: D_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE             = 0.0d0                    !< W m^2 sr^-1               

real(c_double), parameter :: HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP                        = 2.92126232205d-8         !< u                         
real(c_double), parameter :: D_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP                      = 0.00000000088d-8         !< u                         

real(c_double), parameter :: HARTREE_ELECTRON_VOLT_RELATIONSHIP                           = 27.211386245988d0        !< eV                        
real(c_double), parameter :: D_HARTREE_ELECTRON_VOLT_RELATIONSHIP                         = 0.000000000053d0         !< eV                        

real(c_double), parameter :: HARTREE_ENERGY                                               = 4.3597447222071d-18      !< J                         
real(c_double), parameter :: D_HARTREE_ENERGY                                             = 0.0000000000085d-18      !< J                         

real(c_double), parameter :: HARTREE_ENERGY_IN_EV                                         = 27.211386245988d0        !< eV                        
real(c_double), parameter :: D_HARTREE_ENERGY_IN_EV                                       = 0.000000000053d0         !< eV                        

real(c_double), parameter :: HARTREE_HERTZ_RELATIONSHIP                                   = 6.579683920502d15        !< Hz                        
real(c_double), parameter :: D_HARTREE_HERTZ_RELATIONSHIP                                 = 0.000000000013d15        !< Hz                        

real(c_double), parameter :: HARTREE_INVERSE_METER_RELATIONSHIP                           = 2.1947463136320d7        !< m^-1                      
real(c_double), parameter :: D_HARTREE_INVERSE_METER_RELATIONSHIP                         = 0.0000000000043d7        !< m^-1                      

real(c_double), parameter :: HARTREE_JOULE_RELATIONSHIP                                   = 4.3597447222071d-18      !< J                         
real(c_double), parameter :: D_HARTREE_JOULE_RELATIONSHIP                                 = 0.0000000000085d-18      !< J                         

real(c_double), parameter :: HARTREE_KELVIN_RELATIONSHIP                                  = 3.1577502480407d5        !< K                         
real(c_double), parameter :: D_HARTREE_KELVIN_RELATIONSHIP                                = 0.0000000000061d5        !< K                         

real(c_double), parameter :: HARTREE_KILOGRAM_RELATIONSHIP                                = 4.8508702095432d-35      !< kg                        
real(c_double), parameter :: D_HARTREE_KILOGRAM_RELATIONSHIP                              = 0.0000000000094d-35      !< kg                        

real(c_double), parameter :: HELION_ELECTRON_MASS_RATIO                                   = 5495.88528007d0          !<                           
real(c_double), parameter :: D_HELION_ELECTRON_MASS_RATIO                                 = 0.00000024d0             !<                           

real(c_double), parameter :: HELION_G_FACTOR                                              = -4.255250615d0           !<                           
real(c_double), parameter :: D_HELION_G_FACTOR                                            = 0.000000050d0            !<                           

real(c_double), parameter :: HELION_MAG__MOM                                              = -1.074617532d-26         !< J T^-1                    
real(c_double), parameter :: D_HELION_MAG__MOM                                            = 0.000000013d-26          !< J T^-1                    

real(c_double), parameter :: HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO                      = -1.158740958d-3          !<                           
real(c_double), parameter :: D_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO                    = 0.000000014d-3           !<                           

real(c_double), parameter :: HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                   = -2.127625307d0           !<                           
real(c_double), parameter :: D_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                 = 0.000000025d0            !<                           

real(c_double), parameter :: HELION_MASS                                                  = 5.0064127796d-27         !< kg                        
real(c_double), parameter :: D_HELION_MASS                                                = 0.0000000015d-27         !< kg                        

real(c_double), parameter :: HELION_MASS_ENERGY_EQUIVALENT                                = 4.4995394125d-10         !< J                         
real(c_double), parameter :: D_HELION_MASS_ENERGY_EQUIVALENT                              = 0.0000000014d-10         !< J                         

real(c_double), parameter :: HELION_MASS_ENERGY_EQUIVALENT_IN_MEV                         = 2808.39160743d0          !< MeV                       
real(c_double), parameter :: D_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV                       = 0.00000085d0             !< MeV                       

real(c_double), parameter :: HELION_MASS_IN_U                                             = 3.014932247175d0         !< u                         
real(c_double), parameter :: D_HELION_MASS_IN_U                                           = 0.000000000097d0         !< u                         

real(c_double), parameter :: HELION_MOLAR_MASS                                            = 3.01493224613d-3         !< kg mol^-1                 
real(c_double), parameter :: D_HELION_MOLAR_MASS                                          = 0.00000000091d-3         !< kg mol^-1                 

real(c_double), parameter :: HELION_PROTON_MASS_RATIO                                     = 2.99315267167d0          !<                           
real(c_double), parameter :: D_HELION_PROTON_MASS_RATIO                                   = 0.00000000013d0          !<                           

real(c_double), parameter :: HELION_RELATIVE_ATOMIC_MASS                                  = 3.014932247175d0         !<                           
real(c_double), parameter :: D_HELION_RELATIVE_ATOMIC_MASS                                = 0.000000000097d0         !<                           

real(c_double), parameter :: HELION_SHIELDING_SHIFT                                       = 5.996743d-5              !<                           
real(c_double), parameter :: D_HELION_SHIELDING_SHIFT                                     = 0.000010d-5              !<                           

real(c_double), parameter :: HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP                          = 4.4398216652d-24         !< u                         
real(c_double), parameter :: D_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP                        = 0.0000000013d-24         !< u                         

real(c_double), parameter :: HERTZ_ELECTRON_VOLT_RELATIONSHIP                             = 4.135667696d-15          !< eV                        
real(c_double), parameter :: D_HERTZ_ELECTRON_VOLT_RELATIONSHIP                           = 0.0d0                    !< eV                        

real(c_double), parameter :: HERTZ_HARTREE_RELATIONSHIP                                   = 1.5198298460570d-16      !< E_h                       
real(c_double), parameter :: D_HERTZ_HARTREE_RELATIONSHIP                                 = 0.0000000000029d-16      !< E_h                       

real(c_double), parameter :: HERTZ_INVERSE_METER_RELATIONSHIP                             = 3.335640951d-9           !< m^-1                      
real(c_double), parameter :: D_HERTZ_INVERSE_METER_RELATIONSHIP                           = 0.0d0                    !< m^-1                      

real(c_double), parameter :: HERTZ_JOULE_RELATIONSHIP                                     = 6.62607015d-34           !< J                         
real(c_double), parameter :: D_HERTZ_JOULE_RELATIONSHIP                                   = 0.0d0                    !< J                         

real(c_double), parameter :: HERTZ_KELVIN_RELATIONSHIP                                    = 4.799243073d-11          !< K                         
real(c_double), parameter :: D_HERTZ_KELVIN_RELATIONSHIP                                  = 0.0d0                    !< K                         

real(c_double), parameter :: HERTZ_KILOGRAM_RELATIONSHIP                                  = 7.372497323d-51          !< kg                        
real(c_double), parameter :: D_HERTZ_KILOGRAM_RELATIONSHIP                                = 0.0d0                    !< kg                        

real(c_double), parameter :: HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133                     = 9192631770.0d0           !< Hz                        
real(c_double), parameter :: D_HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133                   = 0.0d0                    !< Hz                        

real(c_double), parameter :: INVERSE_FINE_STRUCTURE_CONSTANT                              = 137.035999084d0          !<                           
real(c_double), parameter :: D_INVERSE_FINE_STRUCTURE_CONSTANT                            = 0.000000021d0            !<                           

real(c_double), parameter :: INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP                  = 1.33102505010d-15        !< u                         
real(c_double), parameter :: D_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP                = 0.00000000040d-15        !< u                         

real(c_double), parameter :: INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP                     = 1.239841984d-6           !< eV                        
real(c_double), parameter :: D_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP                   = 0.0d0                    !< eV                        

real(c_double), parameter :: INVERSE_METER_HARTREE_RELATIONSHIP                           = 4.5563352529120d-8       !< E_h                       
real(c_double), parameter :: D_INVERSE_METER_HARTREE_RELATIONSHIP                         = 0.0000000000088d-8       !< E_h                       

real(c_double), parameter :: INVERSE_METER_HERTZ_RELATIONSHIP                             = 299792458.0d0            !< Hz                        
real(c_double), parameter :: D_INVERSE_METER_HERTZ_RELATIONSHIP                           = 0.0d0                    !< Hz                        

real(c_double), parameter :: INVERSE_METER_JOULE_RELATIONSHIP                             = 1.986445857d-25          !< J                         
real(c_double), parameter :: D_INVERSE_METER_JOULE_RELATIONSHIP                           = 0.0d0                    !< J                         

real(c_double), parameter :: INVERSE_METER_KELVIN_RELATIONSHIP                            = 1.438776877d-2           !< K                         
real(c_double), parameter :: D_INVERSE_METER_KELVIN_RELATIONSHIP                          = 0.0d0                    !< K                         

real(c_double), parameter :: INVERSE_METER_KILOGRAM_RELATIONSHIP                          = 2.210219094d-42          !< kg                        
real(c_double), parameter :: D_INVERSE_METER_KILOGRAM_RELATIONSHIP                        = 0.0d0                    !< kg                        

real(c_double), parameter :: INVERSE_OF_CONDUCTANCE_QUANTUM                               = 12906.40372d0            !< ohm                       
real(c_double), parameter :: D_INVERSE_OF_CONDUCTANCE_QUANTUM                             = 0.0d0                    !< ohm                       

real(c_double), parameter :: JOSEPHSON_CONSTANT                                           = 483597.8484d9            !< Hz V^-1                   
real(c_double), parameter :: D_JOSEPHSON_CONSTANT                                         = 0.0d0                    !< Hz V^-1                   

real(c_double), parameter :: JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP                          = 6.7005352565d9           !< u                         
real(c_double), parameter :: D_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP                        = 0.0000000020d9           !< u                         

real(c_double), parameter :: JOULE_ELECTRON_VOLT_RELATIONSHIP                             = 6.241509074d18           !< eV                        
real(c_double), parameter :: D_JOULE_ELECTRON_VOLT_RELATIONSHIP                           = 0.0d0                    !< eV                        

real(c_double), parameter :: JOULE_HARTREE_RELATIONSHIP                                   = 2.2937122783963d17       !< E_h                       
real(c_double), parameter :: D_JOULE_HARTREE_RELATIONSHIP                                 = 0.0000000000045d17       !< E_h                       

real(c_double), parameter :: JOULE_HERTZ_RELATIONSHIP                                     = 1.509190179d33           !< Hz                        
real(c_double), parameter :: D_JOULE_HERTZ_RELATIONSHIP                                   = 0.0d0                    !< Hz                        

real(c_double), parameter :: JOULE_INVERSE_METER_RELATIONSHIP                             = 5.034116567d24           !< m^-1                      
real(c_double), parameter :: D_JOULE_INVERSE_METER_RELATIONSHIP                           = 0.0d0                    !< m^-1                      

real(c_double), parameter :: JOULE_KELVIN_RELATIONSHIP                                    = 7.242970516d22           !< K                         
real(c_double), parameter :: D_JOULE_KELVIN_RELATIONSHIP                                  = 0.0d0                    !< K                         

real(c_double), parameter :: JOULE_KILOGRAM_RELATIONSHIP                                  = 1.112650056d-17          !< kg                        
real(c_double), parameter :: D_JOULE_KILOGRAM_RELATIONSHIP                                = 0.0d0                    !< kg                        

real(c_double), parameter :: KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP                         = 9.2510873014d-14         !< u                         
real(c_double), parameter :: D_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP                       = 0.0000000028d-14         !< u                         

real(c_double), parameter :: KELVIN_ELECTRON_VOLT_RELATIONSHIP                            = 8.617333262d-5           !< eV                        
real(c_double), parameter :: D_KELVIN_ELECTRON_VOLT_RELATIONSHIP                          = 0.0d0                    !< eV                        

real(c_double), parameter :: KELVIN_HARTREE_RELATIONSHIP                                  = 3.1668115634556d-6       !< E_h                       
real(c_double), parameter :: D_KELVIN_HARTREE_RELATIONSHIP                                = 0.0000000000061d-6       !< E_h                       

real(c_double), parameter :: KELVIN_HERTZ_RELATIONSHIP                                    = 2.083661912d10           !< Hz                        
real(c_double), parameter :: D_KELVIN_HERTZ_RELATIONSHIP                                  = 0.0d0                    !< Hz                        

real(c_double), parameter :: KELVIN_INVERSE_METER_RELATIONSHIP                            = 69.50348004d0            !< m^-1                      
real(c_double), parameter :: D_KELVIN_INVERSE_METER_RELATIONSHIP                          = 0.0d0                    !< m^-1                      

real(c_double), parameter :: KELVIN_JOULE_RELATIONSHIP                                    = 1.380649d-23             !< J                         
real(c_double), parameter :: D_KELVIN_JOULE_RELATIONSHIP                                  = 0.0d0                    !< J                         

real(c_double), parameter :: KELVIN_KILOGRAM_RELATIONSHIP                                 = 1.536179187d-40          !< kg                        
real(c_double), parameter :: D_KELVIN_KILOGRAM_RELATIONSHIP                               = 0.0d0                    !< kg                        

real(c_double), parameter :: KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP                       = 6.0221407621d26          !< u                         
real(c_double), parameter :: D_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP                     = 0.0000000018d26          !< u                         

real(c_double), parameter :: KILOGRAM_ELECTRON_VOLT_RELATIONSHIP                          = 5.609588603d35           !< eV                        
real(c_double), parameter :: D_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP                        = 0.0d0                    !< eV                        

real(c_double), parameter :: KILOGRAM_HARTREE_RELATIONSHIP                                = 2.0614857887409d34       !< E_h                       
real(c_double), parameter :: D_KILOGRAM_HARTREE_RELATIONSHIP                              = 0.0000000000040d34       !< E_h                       

real(c_double), parameter :: KILOGRAM_HERTZ_RELATIONSHIP                                  = 1.356392489d50           !< Hz                        
real(c_double), parameter :: D_KILOGRAM_HERTZ_RELATIONSHIP                                = 0.0d0                    !< Hz                        

real(c_double), parameter :: KILOGRAM_INVERSE_METER_RELATIONSHIP                          = 4.524438335d41           !< m^-1                      
real(c_double), parameter :: D_KILOGRAM_INVERSE_METER_RELATIONSHIP                        = 0.0d0                    !< m^-1                      

real(c_double), parameter :: KILOGRAM_JOULE_RELATIONSHIP                                  = 8.987551787d16           !< J                         
real(c_double), parameter :: D_KILOGRAM_JOULE_RELATIONSHIP                                = 0.0d0                    !< J                         

real(c_double), parameter :: KILOGRAM_KELVIN_RELATIONSHIP                                 = 6.509657260d39           !< K                         
real(c_double), parameter :: D_KILOGRAM_KELVIN_RELATIONSHIP                               = 0.0d0                    !< K                         

real(c_double), parameter :: LATTICE_PARAMETER_OF_SILICON                                 = 5.431020511d-10          !< m                         
real(c_double), parameter :: D_LATTICE_PARAMETER_OF_SILICON                               = 0.000000089d-10          !< m                         

real(c_double), parameter :: LATTICE_SPACING_OF_IDEAL_SI__220                             = 1.920155716d-10          !< m                         
real(c_double), parameter :: D_LATTICE_SPACING_OF_IDEAL_SI__220                           = 0.000000032d-10          !< m                         

real(c_double), parameter :: LOSCHMIDT_CONSTANT__273_15_K__100_KPA                        = 2.651645804d25           !< m^-3                      
real(c_double), parameter :: D_LOSCHMIDT_CONSTANT__273_15_K__100_KPA                      = 0.0d0                    !< m^-3                      

real(c_double), parameter :: LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA                    = 2.686780111d25           !< m^-3                      
real(c_double), parameter :: D_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA                  = 0.0d0                    !< m^-3                      

real(c_double), parameter :: LUMINOUS_EFFICACY                                            = 683.0d0                  !< lm W^-1                   
real(c_double), parameter :: D_LUMINOUS_EFFICACY                                          = 0.0d0                    !< lm W^-1                   

real(c_double), parameter :: MAG__FLUX_QUANTUM                                            = 2.067833848d-15          !< Wb                        
real(c_double), parameter :: D_MAG__FLUX_QUANTUM                                          = 0.0d0                    !< Wb                        

real(c_double), parameter :: MOLAR_GAS_CONSTANT                                           = 8.314462618d0            !< J mol^-1 K^-1             
real(c_double), parameter :: D_MOLAR_GAS_CONSTANT                                         = 0.0d0                    !< J mol^-1 K^-1             

real(c_double), parameter :: MOLAR_MASS_CONSTANT                                          = 0.99999999965d-3         !< kg mol^-1                 
real(c_double), parameter :: D_MOLAR_MASS_CONSTANT                                        = 0.00000000030d-3         !< kg mol^-1                 

real(c_double), parameter :: MOLAR_MASS_OF_CARBON_12                                      = 11.9999999958d-3         !< kg mol^-1                 
real(c_double), parameter :: D_MOLAR_MASS_OF_CARBON_12                                    = 0.0000000036d-3          !< kg mol^-1                 

real(c_double), parameter :: MOLAR_PLANCK_CONSTANT                                        = 3.990312712d-10          !< J Hz^-1 mol^-1            
real(c_double), parameter :: D_MOLAR_PLANCK_CONSTANT                                      = 0.0d0                    !< J Hz^-1 mol^-1            

real(c_double), parameter :: MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA                 = 22.71095464d-3           !< m^3 mol^-1                
real(c_double), parameter :: D_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA               = 0.0d0                    !< m^3 mol^-1                

real(c_double), parameter :: MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA             = 22.41396954d-3           !< m^3 mol^-1                
real(c_double), parameter :: D_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA           = 0.0d0                    !< m^3 mol^-1                

real(c_double), parameter :: MOLAR_VOLUME_OF_SILICON                                      = 1.205883199d-5           !< m^3 mol^-1                
real(c_double), parameter :: D_MOLAR_VOLUME_OF_SILICON                                    = 0.000000060d-5           !< m^3 mol^-1                

real(c_double), parameter :: MOLYBDENUM_X_UNIT                                            = 1.00209952d-13           !< m                         
real(c_double), parameter :: D_MOLYBDENUM_X_UNIT                                          = 0.00000053d-13           !< m                         

real(c_double), parameter :: MUON_COMPTON_WAVELENGTH                                      = 1.173444110d-14          !< m                         
real(c_double), parameter :: D_MUON_COMPTON_WAVELENGTH                                    = 0.000000026d-14          !< m                         

real(c_double), parameter :: MUON_ELECTRON_MASS_RATIO                                     = 206.7682830d0            !<                           
real(c_double), parameter :: D_MUON_ELECTRON_MASS_RATIO                                   = 0.0000046d0              !<                           

real(c_double), parameter :: MUON_G_FACTOR                                                = -2.0023318418d0          !<                           
real(c_double), parameter :: D_MUON_G_FACTOR                                              = 0.0000000013d0           !<                           

real(c_double), parameter :: MUON_MAG__MOM                                                = -4.49044830d-26          !< J T^-1                    
real(c_double), parameter :: D_MUON_MAG__MOM                                              = 0.00000010d-26           !< J T^-1                    

real(c_double), parameter :: MUON_MAG__MOM__ANOMALY                                       = 1.16592089d-3            !<                           
real(c_double), parameter :: D_MUON_MAG__MOM__ANOMALY                                     = 0.00000063d-3            !<                           

real(c_double), parameter :: MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                        = -4.84197047d-3           !<                           
real(c_double), parameter :: D_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                      = 0.00000011d-3            !<                           

real(c_double), parameter :: MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                     = -8.89059703d0            !<                           
real(c_double), parameter :: D_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                   = 0.00000020d0             !<                           

real(c_double), parameter :: MUON_MASS                                                    = 1.883531627d-28          !< kg                        
real(c_double), parameter :: D_MUON_MASS                                                  = 0.000000042d-28          !< kg                        

real(c_double), parameter :: MUON_MASS_ENERGY_EQUIVALENT                                  = 1.692833804d-11          !< J                         
real(c_double), parameter :: D_MUON_MASS_ENERGY_EQUIVALENT                                = 0.000000038d-11          !< J                         

real(c_double), parameter :: MUON_MASS_ENERGY_EQUIVALENT_IN_MEV                           = 105.6583755d0            !< MeV                       
real(c_double), parameter :: D_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV                         = 0.0000023d0              !< MeV                       

real(c_double), parameter :: MUON_MASS_IN_U                                               = 0.1134289259d0           !< u                         
real(c_double), parameter :: D_MUON_MASS_IN_U                                             = 0.0000000025d0           !< u                         

real(c_double), parameter :: MUON_MOLAR_MASS                                              = 1.134289259d-4           !< kg mol^-1                 
real(c_double), parameter :: D_MUON_MOLAR_MASS                                            = 0.000000025d-4           !< kg mol^-1                 

real(c_double), parameter :: MUON_NEUTRON_MASS_RATIO                                      = 0.1124545170d0           !<                           
real(c_double), parameter :: D_MUON_NEUTRON_MASS_RATIO                                    = 0.0000000025d0           !<                           

real(c_double), parameter :: MUON_PROTON_MAG__MOM__RATIO                                  = -3.183345142d0           !<                           
real(c_double), parameter :: D_MUON_PROTON_MAG__MOM__RATIO                                = 0.000000071d0            !<                           

real(c_double), parameter :: MUON_PROTON_MASS_RATIO                                       = 0.1126095264d0           !<                           
real(c_double), parameter :: D_MUON_PROTON_MASS_RATIO                                     = 0.0000000025d0           !<                           

real(c_double), parameter :: MUON_TAU_MASS_RATIO                                          = 5.94635d-2               !<                           
real(c_double), parameter :: D_MUON_TAU_MASS_RATIO                                        = 0.00040d-2               !<                           

real(c_double), parameter :: NATURAL_UNIT_OF_ACTION                                       = 1.054571817d-34          !< J s                       
real(c_double), parameter :: D_NATURAL_UNIT_OF_ACTION                                     = 0.0d0                    !< J s                       

real(c_double), parameter :: NATURAL_UNIT_OF_ACTION_IN_EV_S                               = 6.582119569d-16          !< eV s                      
real(c_double), parameter :: D_NATURAL_UNIT_OF_ACTION_IN_EV_S                             = 0.0d0                    !< eV s                      

real(c_double), parameter :: NATURAL_UNIT_OF_ENERGY                                       = 8.1871057769d-14         !< J                         
real(c_double), parameter :: D_NATURAL_UNIT_OF_ENERGY                                     = 0.0000000025d-14         !< J                         

real(c_double), parameter :: NATURAL_UNIT_OF_ENERGY_IN_MEV                                = 0.51099895000d0          !< MeV                       
real(c_double), parameter :: D_NATURAL_UNIT_OF_ENERGY_IN_MEV                              = 0.00000000015d0          !< MeV                       

real(c_double), parameter :: NATURAL_UNIT_OF_LENGTH                                       = 3.8615926796d-13         !< m                         
real(c_double), parameter :: D_NATURAL_UNIT_OF_LENGTH                                     = 0.0000000012d-13         !< m                         

real(c_double), parameter :: NATURAL_UNIT_OF_MASS                                         = 9.1093837015d-31         !< kg                        
real(c_double), parameter :: D_NATURAL_UNIT_OF_MASS                                       = 0.0000000028d-31         !< kg                        

real(c_double), parameter :: NATURAL_UNIT_OF_MOMENTUM                                     = 2.73092453075d-22        !< kg m s^-1                 
real(c_double), parameter :: D_NATURAL_UNIT_OF_MOMENTUM                                   = 0.00000000082d-22        !< kg m s^-1                 

real(c_double), parameter :: NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C                            = 0.51099895000d0          !< MeV/c                     
real(c_double), parameter :: D_NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C                          = 0.00000000015d0          !< MeV/c                     

real(c_double), parameter :: NATURAL_UNIT_OF_TIME                                         = 1.28808866819d-21        !< s                         
real(c_double), parameter :: D_NATURAL_UNIT_OF_TIME                                       = 0.00000000039d-21        !< s                         

real(c_double), parameter :: NATURAL_UNIT_OF_VELOCITY                                     = 299792458.0d0            !< m s^-1                    
real(c_double), parameter :: D_NATURAL_UNIT_OF_VELOCITY                                   = 0.0d0                    !< m s^-1                    

real(c_double), parameter :: NEUTRON_COMPTON_WAVELENGTH                                   = 1.31959090581d-15        !< m                         
real(c_double), parameter :: D_NEUTRON_COMPTON_WAVELENGTH                                 = 0.00000000075d-15        !< m                         

real(c_double), parameter :: NEUTRON_ELECTRON_MAG__MOM__RATIO                             = 1.04066882d-3            !<                           
real(c_double), parameter :: D_NEUTRON_ELECTRON_MAG__MOM__RATIO                           = 0.00000025d-3            !<                           

real(c_double), parameter :: NEUTRON_ELECTRON_MASS_RATIO                                  = 1838.68366173d0          !<                           
real(c_double), parameter :: D_NEUTRON_ELECTRON_MASS_RATIO                                = 0.00000089d0             !<                           

real(c_double), parameter :: NEUTRON_G_FACTOR                                             = -3.82608545d0            !<                           
real(c_double), parameter :: D_NEUTRON_G_FACTOR                                           = 0.00000090d0             !<                           

real(c_double), parameter :: NEUTRON_GYROMAG__RATIO                                       = 1.83247171d8             !< s^-1 T^-1                 
real(c_double), parameter :: D_NEUTRON_GYROMAG__RATIO                                     = 0.00000043d8             !< s^-1 T^-1                 

real(c_double), parameter :: NEUTRON_GYROMAG__RATIO_IN_MHZ_T                              = 29.1646931d0             !< MHz T^-1                  
real(c_double), parameter :: D_NEUTRON_GYROMAG__RATIO_IN_MHZ_T                            = 0.0000069d0              !< MHz T^-1                  

real(c_double), parameter :: NEUTRON_MAG__MOM                                             = -9.6623651d-27           !< J T^-1                    
real(c_double), parameter :: D_NEUTRON_MAG__MOM                                           = 0.0000023d-27            !< J T^-1                    

real(c_double), parameter :: NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                     = -1.04187563d-3           !<                           
real(c_double), parameter :: D_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                   = 0.00000025d-3            !<                           

real(c_double), parameter :: NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                  = -1.91304273d0            !<                           
real(c_double), parameter :: D_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                = 0.00000045d0             !<                           

real(c_double), parameter :: NEUTRON_MASS                                                 = 1.67492749804d-27        !< kg                        
real(c_double), parameter :: D_NEUTRON_MASS                                               = 0.00000000095d-27        !< kg                        

real(c_double), parameter :: NEUTRON_MASS_ENERGY_EQUIVALENT                               = 1.50534976287d-10        !< J                         
real(c_double), parameter :: D_NEUTRON_MASS_ENERGY_EQUIVALENT                             = 0.00000000086d-10        !< J                         

real(c_double), parameter :: NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV                        = 939.56542052d0           !< MeV                       
real(c_double), parameter :: D_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV                      = 0.00000054d0             !< MeV                       

real(c_double), parameter :: NEUTRON_MASS_IN_U                                            = 1.00866491595d0          !< u                         
real(c_double), parameter :: D_NEUTRON_MASS_IN_U                                          = 0.00000000049d0          !< u                         

real(c_double), parameter :: NEUTRON_MOLAR_MASS                                           = 1.00866491560d-3         !< kg mol^-1                 
real(c_double), parameter :: D_NEUTRON_MOLAR_MASS                                         = 0.00000000057d-3         !< kg mol^-1                 

real(c_double), parameter :: NEUTRON_MUON_MASS_RATIO                                      = 8.89248406d0             !<                           
real(c_double), parameter :: D_NEUTRON_MUON_MASS_RATIO                                    = 0.00000020d0             !<                           

real(c_double), parameter :: NEUTRON_PROTON_MAG__MOM__RATIO                               = -0.68497934d0            !<                           
real(c_double), parameter :: D_NEUTRON_PROTON_MAG__MOM__RATIO                             = 0.00000016d0             !<                           

real(c_double), parameter :: NEUTRON_PROTON_MASS_DIFFERENCE                               = 2.30557435d-30           !< kg                        
real(c_double), parameter :: D_NEUTRON_PROTON_MASS_DIFFERENCE                             = 0.00000082d-30           !< kg                        

real(c_double), parameter :: NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT             = 2.07214689d-13           !< J                         
real(c_double), parameter :: D_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT           = 0.00000074d-13           !< J                         

real(c_double), parameter :: NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV      = 1.29333236d0             !< MeV                       
real(c_double), parameter :: D_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV    = 0.00000046d0             !< MeV                       

real(c_double), parameter :: NEUTRON_PROTON_MASS_DIFFERENCE_IN_U                          = 1.38844933d-3            !< u                         
real(c_double), parameter :: D_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U                        = 0.00000049d-3            !< u                         

real(c_double), parameter :: NEUTRON_PROTON_MASS_RATIO                                    = 1.00137841931d0          !<                           
real(c_double), parameter :: D_NEUTRON_PROTON_MASS_RATIO                                  = 0.00000000049d0          !<                           

real(c_double), parameter :: NEUTRON_RELATIVE_ATOMIC_MASS                                 = 1.00866491595d0          !<                           
real(c_double), parameter :: D_NEUTRON_RELATIVE_ATOMIC_MASS                               = 0.00000000049d0          !<                           

real(c_double), parameter :: NEUTRON_TAU_MASS_RATIO                                       = 0.528779d0               !<                           
real(c_double), parameter :: D_NEUTRON_TAU_MASS_RATIO                                     = 0.000036d0               !<                           

real(c_double), parameter :: NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO                   = -0.68499694d0            !<                           
real(c_double), parameter :: D_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO                 = 0.00000016d0             !<                           

real(c_double), parameter :: NEWTONIAN_CONSTANT_OF_GRAVITATION                            = 6.67430d-11              !< m^3 kg^-1 s^-2            
real(c_double), parameter :: D_NEWTONIAN_CONSTANT_OF_GRAVITATION                          = 0.00015d-11              !< m^3 kg^-1 s^-2            

real(c_double), parameter :: NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C               = 6.70883d-39              !< (GeV/c^2)^-2              
real(c_double), parameter :: D_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C             = 0.00015d-39              !< (GeV/c^2)^-2              

real(c_double), parameter :: NUCLEAR_MAGNETON                                             = 5.0507837461d-27         !< J T^-1                    
real(c_double), parameter :: D_NUCLEAR_MAGNETON                                           = 0.0000000015d-27         !< J T^-1                    

real(c_double), parameter :: NUCLEAR_MAGNETON_IN_EV_T                                     = 3.15245125844d-8         !< eV T^-1                   
real(c_double), parameter :: D_NUCLEAR_MAGNETON_IN_EV_T                                   = 0.00000000096d-8         !< eV T^-1                   

real(c_double), parameter :: NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA                  = 2.54262341353d-2         !< m^-1 T^-1                 
real(c_double), parameter :: D_NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA                = 0.00000000078d-2         !< m^-1 T^-1                 

real(c_double), parameter :: NUCLEAR_MAGNETON_IN_K_T                                      = 3.6582677756d-4          !< K T^-1                    
real(c_double), parameter :: D_NUCLEAR_MAGNETON_IN_K_T                                    = 0.0000000011d-4          !< K T^-1                    

real(c_double), parameter :: NUCLEAR_MAGNETON_IN_MHZ_T                                    = 7.6225932291d0           !< MHz T^-1                  
real(c_double), parameter :: D_NUCLEAR_MAGNETON_IN_MHZ_T                                  = 0.0000000023d0           !< MHz T^-1                  

real(c_double), parameter :: PLANCK_CONSTANT                                              = 6.62607015d-34           !< J Hz^-1                   
real(c_double), parameter :: D_PLANCK_CONSTANT                                            = 0.0d0                    !< J Hz^-1                   

real(c_double), parameter :: PLANCK_CONSTANT_IN_EV_HZ                                     = 4.135667696d-15          !< eV Hz^-1                  
real(c_double), parameter :: D_PLANCK_CONSTANT_IN_EV_HZ                                   = 0.0d0                    !< eV Hz^-1                  

real(c_double), parameter :: PLANCK_LENGTH                                                = 1.616255d-35             !< m                         
real(c_double), parameter :: D_PLANCK_LENGTH                                              = 0.000018d-35             !< m                         

real(c_double), parameter :: PLANCK_MASS                                                  = 2.176434d-8              !< kg                        
real(c_double), parameter :: D_PLANCK_MASS                                                = 0.000024d-8              !< kg                        

real(c_double), parameter :: PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV                         = 1.220890d19              !< GeV                       
real(c_double), parameter :: D_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV                       = 0.000014d19              !< GeV                       

real(c_double), parameter :: PLANCK_TEMPERATURE                                           = 1.416784d32              !< K                         
real(c_double), parameter :: D_PLANCK_TEMPERATURE                                         = 0.000016d32              !< K                         

real(c_double), parameter :: PLANCK_TIME                                                  = 5.391247d-44             !< s                         
real(c_double), parameter :: D_PLANCK_TIME                                                = 0.000060d-44             !< s                         

real(c_double), parameter :: PROTON_CHARGE_TO_MASS_QUOTIENT                               = 9.5788331560d7           !< C kg^-1                   
real(c_double), parameter :: D_PROTON_CHARGE_TO_MASS_QUOTIENT                             = 0.0000000029d7           !< C kg^-1                   

real(c_double), parameter :: PROTON_COMPTON_WAVELENGTH                                    = 1.32140985539d-15        !< m                         
real(c_double), parameter :: D_PROTON_COMPTON_WAVELENGTH                                  = 0.00000000040d-15        !< m                         

real(c_double), parameter :: PROTON_ELECTRON_MASS_RATIO                                   = 1836.15267343d0          !<                           
real(c_double), parameter :: D_PROTON_ELECTRON_MASS_RATIO                                 = 0.00000011d0             !<                           

real(c_double), parameter :: PROTON_G_FACTOR                                              = 5.5856946893d0           !<                           
real(c_double), parameter :: D_PROTON_G_FACTOR                                            = 0.0000000016d0           !<                           

real(c_double), parameter :: PROTON_GYROMAG__RATIO                                        = 2.6752218744d8           !< s^-1 T^-1                 
real(c_double), parameter :: D_PROTON_GYROMAG__RATIO                                      = 0.0000000011d8           !< s^-1 T^-1                 

real(c_double), parameter :: PROTON_GYROMAG__RATIO_IN_MHZ_T                               = 42.577478518d0           !< MHz T^-1                  
real(c_double), parameter :: D_PROTON_GYROMAG__RATIO_IN_MHZ_T                             = 0.000000018d0            !< MHz T^-1                  

real(c_double), parameter :: PROTON_MAG__MOM                                              = 1.41060679736d-26        !< J T^-1                    
real(c_double), parameter :: D_PROTON_MAG__MOM                                            = 0.00000000060d-26        !< J T^-1                    

real(c_double), parameter :: PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                      = 1.52103220230d-3         !<                           
real(c_double), parameter :: D_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                    = 0.00000000046d-3         !<                           

real(c_double), parameter :: PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                   = 2.79284734463d0          !<                           
real(c_double), parameter :: D_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                 = 0.00000000082d0          !<                           

real(c_double), parameter :: PROTON_MAG__SHIELDING_CORRECTION                             = 2.5689d-5                !<                           
real(c_double), parameter :: D_PROTON_MAG__SHIELDING_CORRECTION                           = 0.0011d-5                !<                           

real(c_double), parameter :: PROTON_MASS                                                  = 1.67262192369d-27        !< kg                        
real(c_double), parameter :: D_PROTON_MASS                                                = 0.00000000051d-27        !< kg                        

real(c_double), parameter :: PROTON_MASS_ENERGY_EQUIVALENT                                = 1.50327761598d-10        !< J                         
real(c_double), parameter :: D_PROTON_MASS_ENERGY_EQUIVALENT                              = 0.00000000046d-10        !< J                         

real(c_double), parameter :: PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV                         = 938.27208816d0           !< MeV                       
real(c_double), parameter :: D_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV                       = 0.00000029d0             !< MeV                       

real(c_double), parameter :: PROTON_MASS_IN_U                                             = 1.007276466621d0         !< u                         
real(c_double), parameter :: D_PROTON_MASS_IN_U                                           = 0.000000000053d0         !< u                         

real(c_double), parameter :: PROTON_MOLAR_MASS                                            = 1.00727646627d-3         !< kg mol^-1                 
real(c_double), parameter :: D_PROTON_MOLAR_MASS                                          = 0.00000000031d-3         !< kg mol^-1                 

real(c_double), parameter :: PROTON_MUON_MASS_RATIO                                       = 8.88024337d0             !<                           
real(c_double), parameter :: D_PROTON_MUON_MASS_RATIO                                     = 0.00000020d0             !<                           

real(c_double), parameter :: PROTON_NEUTRON_MAG__MOM__RATIO                               = -1.45989805d0            !<                           
real(c_double), parameter :: D_PROTON_NEUTRON_MAG__MOM__RATIO                             = 0.00000034d0             !<                           

real(c_double), parameter :: PROTON_NEUTRON_MASS_RATIO                                    = 0.99862347812d0          !<                           
real(c_double), parameter :: D_PROTON_NEUTRON_MASS_RATIO                                  = 0.00000000049d0          !<                           

real(c_double), parameter :: PROTON_RELATIVE_ATOMIC_MASS                                  = 1.007276466621d0         !<                           
real(c_double), parameter :: D_PROTON_RELATIVE_ATOMIC_MASS                                = 0.000000000053d0         !<                           

real(c_double), parameter :: PROTON_RMS_CHARGE_RADIUS                                     = 8.414d-16                !< m                         
real(c_double), parameter :: D_PROTON_RMS_CHARGE_RADIUS                                   = 0.019d-16                !< m                         

real(c_double), parameter :: PROTON_TAU_MASS_RATIO                                        = 0.528051d0               !<                           
real(c_double), parameter :: D_PROTON_TAU_MASS_RATIO                                      = 0.000036d0               !<                           

real(c_double), parameter :: QUANTUM_OF_CIRCULATION                                       = 3.6369475516d-4          !< m^2 s^-1                  
real(c_double), parameter :: D_QUANTUM_OF_CIRCULATION                                     = 0.0000000011d-4          !< m^2 s^-1                  

real(c_double), parameter :: QUANTUM_OF_CIRCULATION_TIMES_2                               = 7.2738951032d-4          !< m^2 s^-1                  
real(c_double), parameter :: D_QUANTUM_OF_CIRCULATION_TIMES_2                             = 0.0000000022d-4          !< m^2 s^-1                  

real(c_double), parameter :: REDUCED_COMPTON_WAVELENGTH                                   = 3.8615926796d-13         !< m                         
real(c_double), parameter :: D_REDUCED_COMPTON_WAVELENGTH                                 = 0.0000000012d-13         !< m                         

real(c_double), parameter :: REDUCED_MUON_COMPTON_WAVELENGTH                              = 1.867594306d-15          !< m                         
real(c_double), parameter :: D_REDUCED_MUON_COMPTON_WAVELENGTH                            = 0.000000042d-15          !< m                         

real(c_double), parameter :: REDUCED_NEUTRON_COMPTON_WAVELENGTH                           = 2.1001941552d-16         !< m                         
real(c_double), parameter :: D_REDUCED_NEUTRON_COMPTON_WAVELENGTH                         = 0.0000000012d-16         !< m                         

real(c_double), parameter :: REDUCED_PLANCK_CONSTANT                                      = 1.054571817d-34          !< J s                       
real(c_double), parameter :: D_REDUCED_PLANCK_CONSTANT                                    = 0.0d0                    !< J s                       

real(c_double), parameter :: REDUCED_PLANCK_CONSTANT_IN_EV_S                              = 6.582119569d-16          !< eV s                      
real(c_double), parameter :: D_REDUCED_PLANCK_CONSTANT_IN_EV_S                            = 0.0d0                    !< eV s                      

real(c_double), parameter :: REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM                    = 197.3269804d0            !< MeV fm                    
real(c_double), parameter :: D_REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM                  = 0.0d0                    !< MeV fm                    

real(c_double), parameter :: REDUCED_PROTON_COMPTON_WAVELENGTH                            = 2.10308910336d-16        !< m                         
real(c_double), parameter :: D_REDUCED_PROTON_COMPTON_WAVELENGTH                          = 0.00000000064d-16        !< m                         

real(c_double), parameter :: REDUCED_TAU_COMPTON_WAVELENGTH                               = 1.110538d-16             !< m                         
real(c_double), parameter :: D_REDUCED_TAU_COMPTON_WAVELENGTH                             = 0.000075d-16             !< m                         

real(c_double), parameter :: RYDBERG_CONSTANT                                             = 10973731.568160d0        !< m^-1                      
real(c_double), parameter :: D_RYDBERG_CONSTANT                                           = 0.000021d0               !< m^-1                      

real(c_double), parameter :: RYDBERG_CONSTANT_TIMES_C_IN_HZ                               = 3.2898419602508d15       !< Hz                        
real(c_double), parameter :: D_RYDBERG_CONSTANT_TIMES_C_IN_HZ                             = 0.0000000000064d15       !< Hz                        

real(c_double), parameter :: RYDBERG_CONSTANT_TIMES_HC_IN_EV                              = 13.605693122994d0        !< eV                        
real(c_double), parameter :: D_RYDBERG_CONSTANT_TIMES_HC_IN_EV                            = 0.000000000026d0         !< eV                        

real(c_double), parameter :: RYDBERG_CONSTANT_TIMES_HC_IN_J                               = 2.1798723611035d-18      !< J                         
real(c_double), parameter :: D_RYDBERG_CONSTANT_TIMES_HC_IN_J                             = 0.0000000000042d-18      !< J                         

real(c_double), parameter :: SACKUR_TETRODE_CONSTANT__1_K__100_KPA                        = -1.15170753706d0         !<                           
real(c_double), parameter :: D_SACKUR_TETRODE_CONSTANT__1_K__100_KPA                      = 0.00000000045d0          !<                           

real(c_double), parameter :: SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA                    = -1.16487052358d0         !<                           
real(c_double), parameter :: D_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA                  = 0.00000000045d0          !<                           

real(c_double), parameter :: SECOND_RADIATION_CONSTANT                                    = 1.438776877d-2           !< m K                       
real(c_double), parameter :: D_SECOND_RADIATION_CONSTANT                                  = 0.0d0                    !< m K                       

real(c_double), parameter :: SHIELDED_HELION_GYROMAG__RATIO                               = 2.037894569d8            !< s^-1 T^-1                 
real(c_double), parameter :: D_SHIELDED_HELION_GYROMAG__RATIO                             = 0.000000024d8            !< s^-1 T^-1                 

real(c_double), parameter :: SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T                      = 32.43409942d0            !< MHz T^-1                  
real(c_double), parameter :: D_SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T                    = 0.00000038d0             !< MHz T^-1                  

real(c_double), parameter :: SHIELDED_HELION_MAG__MOM                                     = -1.074553090d-26         !< J T^-1                    
real(c_double), parameter :: D_SHIELDED_HELION_MAG__MOM                                   = 0.000000013d-26          !< J T^-1                    

real(c_double), parameter :: SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO             = -1.158671471d-3          !<                           
real(c_double), parameter :: D_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO           = 0.000000014d-3           !<                           

real(c_double), parameter :: SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO          = -2.127497719d0           !<                           
real(c_double), parameter :: D_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO        = 0.000000025d0            !<                           

real(c_double), parameter :: SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO                    = -0.7617665618d0          !<                           
real(c_double), parameter :: D_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO                  = 0.0000000089d0           !<                           

real(c_double), parameter :: SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO           = -0.7617861313d0          !<                           
real(c_double), parameter :: D_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO         = 0.0000000033d0           !<                           

real(c_double), parameter :: SHIELDED_PROTON_GYROMAG__RATIO                               = 2.675153151d8            !< s^-1 T^-1                 
real(c_double), parameter :: D_SHIELDED_PROTON_GYROMAG__RATIO                             = 0.000000029d8            !< s^-1 T^-1                 

real(c_double), parameter :: SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T                      = 42.57638474d0            !< MHz T^-1                  
real(c_double), parameter :: D_SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T                    = 0.00000046d0             !< MHz T^-1                  

real(c_double), parameter :: SHIELDED_PROTON_MAG__MOM                                     = 1.410570560d-26          !< J T^-1                    
real(c_double), parameter :: D_SHIELDED_PROTON_MAG__MOM                                   = 0.000000015d-26          !< J T^-1                    

real(c_double), parameter :: SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO             = 1.520993128d-3           !<                           
real(c_double), parameter :: D_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO           = 0.000000017d-3           !<                           

real(c_double), parameter :: SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO          = 2.792775599d0            !<                           
real(c_double), parameter :: D_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO        = 0.000000030d0            !<                           

real(c_double), parameter :: SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD                        = 2.0200d-8                !<                           
real(c_double), parameter :: D_SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD                      = 0.0020d-8                !<                           

real(c_double), parameter :: SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT                        = 2.4140d-8                !<                           
real(c_double), parameter :: D_SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT                      = 0.0020d-8                !<                           

real(c_double), parameter :: SPEED_OF_LIGHT_IN_VACUUM                                     = 299792458.0d0            !< m s^-1                    
real(c_double), parameter :: D_SPEED_OF_LIGHT_IN_VACUUM                                   = 0.0d0                    !< m s^-1                    

real(c_double), parameter :: STANDARD_ACCELERATION_OF_GRAVITY                             = 9.80665d0                !< m s^-2                    
real(c_double), parameter :: D_STANDARD_ACCELERATION_OF_GRAVITY                           = 0.0d0                    !< m s^-2                    

real(c_double), parameter :: STANDARD_ATMOSPHERE                                          = 101325.0d0               !< Pa                        
real(c_double), parameter :: D_STANDARD_ATMOSPHERE                                        = 0.0d0                    !< Pa                        

real(c_double), parameter :: STANDARD_STATE_PRESSURE                                      = 100000.0d0               !< Pa                        
real(c_double), parameter :: D_STANDARD_STATE_PRESSURE                                    = 0.0d0                    !< Pa                        

real(c_double), parameter :: STEFAN_BOLTZMANN_CONSTANT                                    = 5.670374419d-8           !< W m^-2 K^-4               
real(c_double), parameter :: D_STEFAN_BOLTZMANN_CONSTANT                                  = 0.0d0                    !< W m^-2 K^-4               

real(c_double), parameter :: TAU_COMPTON_WAVELENGTH                                       = 6.97771d-16              !< m                         
real(c_double), parameter :: D_TAU_COMPTON_WAVELENGTH                                     = 0.00047d-16              !< m                         

real(c_double), parameter :: TAU_ELECTRON_MASS_RATIO                                      = 3477.23d0                !<                           
real(c_double), parameter :: D_TAU_ELECTRON_MASS_RATIO                                    = 0.23d0                   !<                           

real(c_double), parameter :: TAU_ENERGY_EQUIVALENT                                        = 1776.86d0                !< MeV                       
real(c_double), parameter :: D_TAU_ENERGY_EQUIVALENT                                      = 0.12d0                   !< MeV                       

real(c_double), parameter :: TAU_MASS                                                     = 3.16754d-27              !< kg                        
real(c_double), parameter :: D_TAU_MASS                                                   = 0.00021d-27              !< kg                        

real(c_double), parameter :: TAU_MASS_ENERGY_EQUIVALENT                                   = 2.84684d-10              !< J                         
real(c_double), parameter :: D_TAU_MASS_ENERGY_EQUIVALENT                                 = 0.00019d-10              !< J                         

real(c_double), parameter :: TAU_MASS_IN_U                                                = 1.90754d0                !< u                         
real(c_double), parameter :: D_TAU_MASS_IN_U                                              = 0.00013d0                !< u                         

real(c_double), parameter :: TAU_MOLAR_MASS                                               = 1.90754d-3               !< kg mol^-1                 
real(c_double), parameter :: D_TAU_MOLAR_MASS                                             = 0.00013d-3               !< kg mol^-1                 

real(c_double), parameter :: TAU_MUON_MASS_RATIO                                          = 16.8170d0                !<                           
real(c_double), parameter :: D_TAU_MUON_MASS_RATIO                                        = 0.0011d0                 !<                           

real(c_double), parameter :: TAU_NEUTRON_MASS_RATIO                                       = 1.89115d0                !<                           
real(c_double), parameter :: D_TAU_NEUTRON_MASS_RATIO                                     = 0.00013d0                !<                           

real(c_double), parameter :: TAU_PROTON_MASS_RATIO                                        = 1.89376d0                !<                           
real(c_double), parameter :: D_TAU_PROTON_MASS_RATIO                                      = 0.00013d0                !<                           

real(c_double), parameter :: THOMSON_CROSS_SECTION                                        = 6.6524587321d-29         !< m^2                       
real(c_double), parameter :: D_THOMSON_CROSS_SECTION                                      = 0.0000000060d-29         !< m^2                       

real(c_double), parameter :: TRITON_ELECTRON_MASS_RATIO                                   = 5496.92153573d0          !<                           
real(c_double), parameter :: D_TRITON_ELECTRON_MASS_RATIO                                 = 0.00000027d0             !<                           

real(c_double), parameter :: TRITON_G_FACTOR                                              = 5.957924931d0            !<                           
real(c_double), parameter :: D_TRITON_G_FACTOR                                            = 0.000000012d0            !<                           

real(c_double), parameter :: TRITON_MAG__MOM                                              = 1.5046095202d-26         !< J T^-1                    
real(c_double), parameter :: D_TRITON_MAG__MOM                                            = 0.0000000030d-26         !< J T^-1                    

real(c_double), parameter :: TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                      = 1.6223936651d-3          !<                           
real(c_double), parameter :: D_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO                    = 0.0000000032d-3          !<                           

real(c_double), parameter :: TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                   = 2.9789624656d0           !<                           
real(c_double), parameter :: D_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO                 = 0.0000000059d0           !<                           

real(c_double), parameter :: TRITON_MASS                                                  = 5.0073567446d-27         !< kg                        
real(c_double), parameter :: D_TRITON_MASS                                                = 0.0000000015d-27         !< kg                        

real(c_double), parameter :: TRITON_MASS_ENERGY_EQUIVALENT                                = 4.5003878060d-10         !< J                         
real(c_double), parameter :: D_TRITON_MASS_ENERGY_EQUIVALENT                              = 0.0000000014d-10         !< J                         

real(c_double), parameter :: TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV                         = 2808.92113298d0          !< MeV                       
real(c_double), parameter :: D_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV                       = 0.00000085d0             !< MeV                       

real(c_double), parameter :: TRITON_MASS_IN_U                                             = 3.01550071621d0          !< u                         
real(c_double), parameter :: D_TRITON_MASS_IN_U                                           = 0.00000000012d0          !< u                         

real(c_double), parameter :: TRITON_MOLAR_MASS                                            = 3.01550071517d-3         !< kg mol^-1                 
real(c_double), parameter :: D_TRITON_MOLAR_MASS                                          = 0.00000000092d-3         !< kg mol^-1                 

real(c_double), parameter :: TRITON_PROTON_MASS_RATIO                                     = 2.99371703414d0          !<                           
real(c_double), parameter :: D_TRITON_PROTON_MASS_RATIO                                   = 0.00000000015d0          !<                           

real(c_double), parameter :: TRITON_RELATIVE_ATOMIC_MASS                                  = 3.01550071621d0          !<                           
real(c_double), parameter :: D_TRITON_RELATIVE_ATOMIC_MASS                                = 0.00000000012d0          !<                           

real(c_double), parameter :: TRITON_TO_PROTON_MAG__MOM__RATIO                             = 1.0666399191d0           !<                           
real(c_double), parameter :: D_TRITON_TO_PROTON_MAG__MOM__RATIO                           = 0.0000000021d0           !<                           

real(c_double), parameter :: UNIFIED_ATOMIC_MASS_UNIT                                     = 1.66053906660d-27        !< kg                        
real(c_double), parameter :: D_UNIFIED_ATOMIC_MASS_UNIT                                   = 0.00000000050d-27        !< kg                        

real(c_double), parameter :: VACUUM_ELECTRIC_PERMITTIVITY                                 = 8.8541878128d-12         !< F m^-1                    
real(c_double), parameter :: D_VACUUM_ELECTRIC_PERMITTIVITY                               = 0.0000000013d-12         !< F m^-1                    

real(c_double), parameter :: VACUUM_MAG__PERMEABILITY                                     = 1.25663706212d-6         !< N A^-2                    
real(c_double), parameter :: D_VACUUM_MAG__PERMEABILITY                                   = 0.00000000019d-6         !< N A^-2                    

real(c_double), parameter :: VON_KLITZING_CONSTANT                                        = 25812.80745d0            !< ohm                       
real(c_double), parameter :: D_VON_KLITZING_CONSTANT                                      = 0.0d0                    !< ohm                       

real(c_double), parameter :: WEAK_MIXING_ANGLE                                            = 0.22290d0                !<                           
real(c_double), parameter :: D_WEAK_MIXING_ANGLE                                          = 0.00030d0                !<                           

real(c_double), parameter :: WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT                     = 5.878925757d10           !< Hz K^-1                   
real(c_double), parameter :: D_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT                   = 0.0d0                    !< Hz K^-1                   

real(c_double), parameter :: WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT                    = 2.897771955d-3           !< m K                       
real(c_double), parameter :: D_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT                  = 0.0d0                    !< m K                       

real(c_double), parameter :: W_TO_Z_MASS_RATIO                                            = 0.88153d0                !<                           
real(c_double), parameter :: D_W_TO_Z_MASS_RATIO                                          = 0.00017d0                !<                           

end module codata