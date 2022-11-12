!> 
!! @file
!! Fundamental Physical Constants --- Complete Listing                                                                                                                                                                                                             
!! 2018 CODATA adjustment                                                                                                                                                                                                                                          
!! From:  http://physics.nist.gov/constants                                                                                                                                                                                                                        
!! @example example_in_fortran.f90
!! @details How to us codata in Fortran.
!! 
module codata
use iso_c_binding
implicit none
real(c_double), bind(C), protected :: alpha_particle_electron_mass_ratio                           = 7294.29954142d0          !<                           
real(c_double), bind(C), protected :: D_alpha_particle_electron_mass_ratio                         = 0.00000024d0             !<                           

real(c_double), bind(C), protected :: alpha_particle_mass                                          = 6.6446573357d-27         !< kg                        
real(c_double), bind(C), protected :: D_alpha_particle_mass                                        = 0.0000000020d-27         !< kg                        

real(c_double), bind(C), protected :: alpha_particle_mass_energy_equivalent                        = 5.9719201914d-10         !< J                         
real(c_double), bind(C), protected :: D_alpha_particle_mass_energy_equivalent                      = 0.0000000018d-10         !< J                         

real(c_double), bind(C), protected :: alpha_particle_mass_energy_equivalent_in_mev                 = 3727.3794066d0           !< MeV                       
real(c_double), bind(C), protected :: D_alpha_particle_mass_energy_equivalent_in_mev               = 0.0000011d0              !< MeV                       

real(c_double), bind(C), protected :: alpha_particle_mass_in_u                                     = 4.001506179127d0         !< u                         
real(c_double), bind(C), protected :: D_alpha_particle_mass_in_u                                   = 0.000000000063d0         !< u                         

real(c_double), bind(C), protected :: alpha_particle_molar_mass                                    = 4.0015061777d-3          !< kg mol^-1                 
real(c_double), bind(C), protected :: D_alpha_particle_molar_mass                                  = 0.0000000012d-3          !< kg mol^-1                 

real(c_double), bind(C), protected :: alpha_particle_proton_mass_ratio                             = 3.97259969009d0          !<                           
real(c_double), bind(C), protected :: D_alpha_particle_proton_mass_ratio                           = 0.00000000022d0          !<                           

real(c_double), bind(C), protected :: alpha_particle_relative_atomic_mass                          = 4.001506179127d0         !<                           
real(c_double), bind(C), protected :: D_alpha_particle_relative_atomic_mass                        = 0.000000000063d0         !<                           

real(c_double), bind(C), protected :: angstrom_star                                                = 1.00001495d-10           !< m                         
real(c_double), bind(C), protected :: D_angstrom_star                                              = 0.00000090d-10           !< m                         

real(c_double), bind(C), protected :: atomic_mass_constant                                         = 1.66053906660d-27        !< kg                        
real(c_double), bind(C), protected :: D_atomic_mass_constant                                       = 0.00000000050d-27        !< kg                        

real(c_double), bind(C), protected :: atomic_mass_constant_energy_equivalent                       = 1.49241808560d-10        !< J                         
real(c_double), bind(C), protected :: D_atomic_mass_constant_energy_equivalent                     = 0.00000000045d-10        !< J                         

real(c_double), bind(C), protected :: atomic_mass_constant_energy_equivalent_in_mev                = 931.49410242d0           !< MeV                       
real(c_double), bind(C), protected :: D_atomic_mass_constant_energy_equivalent_in_mev              = 0.00000028d0             !< MeV                       

real(c_double), bind(C), protected :: atomic_mass_unit_electron_volt_relationship                  = 9.3149410242d8           !< eV                        
real(c_double), bind(C), protected :: D_atomic_mass_unit_electron_volt_relationship                = 0.0000000028d8           !< eV                        

real(c_double), bind(C), protected :: atomic_mass_unit_hartree_relationship                        = 3.4231776874d7           !< E_h                       
real(c_double), bind(C), protected :: D_atomic_mass_unit_hartree_relationship                      = 0.0000000010d7           !< E_h                       

real(c_double), bind(C), protected :: atomic_mass_unit_hertz_relationship                          = 2.25234271871d23         !< Hz                        
real(c_double), bind(C), protected :: D_atomic_mass_unit_hertz_relationship                        = 0.00000000068d23         !< Hz                        

real(c_double), bind(C), protected :: atomic_mass_unit_inverse_meter_relationship                  = 7.5130066104d14          !< m^-1                      
real(c_double), bind(C), protected :: D_atomic_mass_unit_inverse_meter_relationship                = 0.0000000023d14          !< m^-1                      

real(c_double), bind(C), protected :: atomic_mass_unit_joule_relationship                          = 1.49241808560d-10        !< J                         
real(c_double), bind(C), protected :: D_atomic_mass_unit_joule_relationship                        = 0.00000000045d-10        !< J                         

real(c_double), bind(C), protected :: atomic_mass_unit_kelvin_relationship                         = 1.08095401916d13         !< K                         
real(c_double), bind(C), protected :: D_atomic_mass_unit_kelvin_relationship                       = 0.00000000033d13         !< K                         

real(c_double), bind(C), protected :: atomic_mass_unit_kilogram_relationship                       = 1.66053906660d-27        !< kg                        
real(c_double), bind(C), protected :: D_atomic_mass_unit_kilogram_relationship                     = 0.00000000050d-27        !< kg                        

real(c_double), bind(C), protected :: atomic_unit_of_1st_hyperpolarizability                       = 3.2063613061d-53         !< C^3 m^3 J^-2              
real(c_double), bind(C), protected :: D_atomic_unit_of_1st_hyperpolarizability                     = 0.0000000015d-53         !< C^3 m^3 J^-2              

real(c_double), bind(C), protected :: atomic_unit_of_2nd_hyperpolarizability                       = 6.2353799905d-65         !< C^4 m^4 J^-3              
real(c_double), bind(C), protected :: D_atomic_unit_of_2nd_hyperpolarizability                     = 0.0000000038d-65         !< C^4 m^4 J^-3              

real(c_double), bind(C), protected :: atomic_unit_of_action                                        = 1.054571817d-34          !< J s                       
real(c_double), bind(C), protected :: D_atomic_unit_of_action                                      = 0.0d0                    !< J s                       

real(c_double), bind(C), protected :: atomic_unit_of_charge                                        = 1.602176634d-19          !< C                         
real(c_double), bind(C), protected :: D_atomic_unit_of_charge                                      = 0.0d0                    !< C                         

real(c_double), bind(C), protected :: atomic_unit_of_charge_density                                = 1.08120238457d12         !< C m^-3                    
real(c_double), bind(C), protected :: D_atomic_unit_of_charge_density                              = 0.00000000049d12         !< C m^-3                    

real(c_double), bind(C), protected :: atomic_unit_of_current                                       = 6.623618237510d-3        !< A                         
real(c_double), bind(C), protected :: D_atomic_unit_of_current                                     = 0.000000000013d-3        !< A                         

real(c_double), bind(C), protected :: atomic_unit_of_electric_dipole_mom                           = 8.4783536255d-30         !< C m                       
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_dipole_mom                         = 0.0000000013d-30         !< C m                       

real(c_double), bind(C), protected :: atomic_unit_of_electric_field                                = 5.14220674763d11         !< V m^-1                    
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_field                              = 0.00000000078d11         !< V m^-1                    

real(c_double), bind(C), protected :: atomic_unit_of_electric_field_gradient                       = 9.7173624292d21          !< V m^-2                    
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_field_gradient                     = 0.0000000029d21          !< V m^-2                    

real(c_double), bind(C), protected :: atomic_unit_of_electric_polarizability                       = 1.64877727436d-41        !< C^2 m^2 J^-1              
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_polarizability                     = 0.00000000050d-41        !< C^2 m^2 J^-1              

real(c_double), bind(C), protected :: atomic_unit_of_electric_potential                            = 27.211386245988d0        !< V                         
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_potential                          = 0.000000000053d0         !< V                         

real(c_double), bind(C), protected :: atomic_unit_of_electric_quadrupole_mom                       = 4.4865515246d-40         !< C m^2                     
real(c_double), bind(C), protected :: D_atomic_unit_of_electric_quadrupole_mom                     = 0.0000000014d-40         !< C m^2                     

real(c_double), bind(C), protected :: atomic_unit_of_energy                                        = 4.3597447222071d-18      !< J                         
real(c_double), bind(C), protected :: D_atomic_unit_of_energy                                      = 0.0000000000085d-18      !< J                         

real(c_double), bind(C), protected :: atomic_unit_of_force                                         = 8.2387234983d-8          !< N                         
real(c_double), bind(C), protected :: D_atomic_unit_of_force                                       = 0.0000000012d-8          !< N                         

real(c_double), bind(C), protected :: atomic_unit_of_length                                        = 5.29177210903d-11        !< m                         
real(c_double), bind(C), protected :: D_atomic_unit_of_length                                      = 0.00000000080d-11        !< m                         

real(c_double), bind(C), protected :: atomic_unit_of_mag__dipole_mom                               = 1.85480201566d-23        !< J T^-1                    
real(c_double), bind(C), protected :: D_atomic_unit_of_mag__dipole_mom                             = 0.00000000056d-23        !< J T^-1                    

real(c_double), bind(C), protected :: atomic_unit_of_mag__flux_density                             = 2.35051756758d5          !< T                         
real(c_double), bind(C), protected :: D_atomic_unit_of_mag__flux_density                           = 0.00000000071d5          !< T                         

real(c_double), bind(C), protected :: atomic_unit_of_magnetizability                               = 7.8910366008d-29         !< J T^-2                    
real(c_double), bind(C), protected :: D_atomic_unit_of_magnetizability                             = 0.0000000048d-29         !< J T^-2                    

real(c_double), bind(C), protected :: atomic_unit_of_mass                                          = 9.1093837015d-31         !< kg                        
real(c_double), bind(C), protected :: D_atomic_unit_of_mass                                        = 0.0000000028d-31         !< kg                        

real(c_double), bind(C), protected :: atomic_unit_of_momentum                                      = 1.99285191410d-24        !< kg m s^-1                 
real(c_double), bind(C), protected :: D_atomic_unit_of_momentum                                    = 0.00000000030d-24        !< kg m s^-1                 

real(c_double), bind(C), protected :: atomic_unit_of_permittivity                                  = 1.11265005545d-10        !< F m^-1                    
real(c_double), bind(C), protected :: D_atomic_unit_of_permittivity                                = 0.00000000017d-10        !< F m^-1                    

real(c_double), bind(C), protected :: atomic_unit_of_time                                          = 2.4188843265857d-17      !< s                         
real(c_double), bind(C), protected :: D_atomic_unit_of_time                                        = 0.0000000000047d-17      !< s                         

real(c_double), bind(C), protected :: atomic_unit_of_velocity                                      = 2.18769126364d6          !< m s^-1                    
real(c_double), bind(C), protected :: D_atomic_unit_of_velocity                                    = 0.00000000033d6          !< m s^-1                    

real(c_double), bind(C), protected :: avogadro_constant                                            = 6.02214076d23            !< mol^-1                    
real(c_double), bind(C), protected :: D_avogadro_constant                                          = 0.0d0                    !< mol^-1                    

real(c_double), bind(C), protected :: bohr_magneton                                                = 9.2740100783d-24         !< J T^-1                    
real(c_double), bind(C), protected :: D_bohr_magneton                                              = 0.0000000028d-24         !< J T^-1                    

real(c_double), bind(C), protected :: bohr_magneton_in_ev_t                                        = 5.7883818060d-5          !< eV T^-1                   
real(c_double), bind(C), protected :: D_bohr_magneton_in_ev_t                                      = 0.0000000017d-5          !< eV T^-1                   

real(c_double), bind(C), protected :: bohr_magneton_in_hz_t                                        = 1.39962449361d10         !< Hz T^-1                   
real(c_double), bind(C), protected :: D_bohr_magneton_in_hz_t                                      = 0.00000000042d10         !< Hz T^-1                   

real(c_double), bind(C), protected :: bohr_magneton_in_inverse_meter_per_tesla                     = 46.686447783d0           !< m^-1 T^-1                 
real(c_double), bind(C), protected :: D_bohr_magneton_in_inverse_meter_per_tesla                   = 0.000000014d0            !< m^-1 T^-1                 

real(c_double), bind(C), protected :: bohr_magneton_in_k_t                                         = 0.67171381563d0          !< K T^-1                    
real(c_double), bind(C), protected :: D_bohr_magneton_in_k_t                                       = 0.00000000020d0          !< K T^-1                    

real(c_double), bind(C), protected :: bohr_radius                                                  = 5.29177210903d-11        !< m                         
real(c_double), bind(C), protected :: D_bohr_radius                                                = 0.00000000080d-11        !< m                         

real(c_double), bind(C), protected :: boltzmann_constant                                           = 1.380649d-23             !< J K^-1                    
real(c_double), bind(C), protected :: D_boltzmann_constant                                         = 0.0d0                    !< J K^-1                    

real(c_double), bind(C), protected :: boltzmann_constant_in_ev_k                                   = 8.617333262d-5           !< eV K^-1                   
real(c_double), bind(C), protected :: D_boltzmann_constant_in_ev_k                                 = 0.0d0                    !< eV K^-1                   

real(c_double), bind(C), protected :: boltzmann_constant_in_hz_k                                   = 2.083661912d10           !< Hz K^-1                   
real(c_double), bind(C), protected :: D_boltzmann_constant_in_hz_k                                 = 0.0d0                    !< Hz K^-1                   

real(c_double), bind(C), protected :: boltzmann_constant_in_inverse_meter_per_kelvin               = 69.50348004d0            !< m^-1 K^-1                 
real(c_double), bind(C), protected :: D_boltzmann_constant_in_inverse_meter_per_kelvin             = 0.0d0                    !< m^-1 K^-1                 

real(c_double), bind(C), protected :: characteristic_impedance_of_vacuum                           = 376.730313668d0          !< ohm                       
real(c_double), bind(C), protected :: D_characteristic_impedance_of_vacuum                         = 0.000000057d0            !< ohm                       

real(c_double), bind(C), protected :: classical_electron_radius                                    = 2.8179403262d-15         !< m                         
real(c_double), bind(C), protected :: D_classical_electron_radius                                  = 0.0000000013d-15         !< m                         

real(c_double), bind(C), protected :: compton_wavelength                                           = 2.42631023867d-12        !< m                         
real(c_double), bind(C), protected :: D_compton_wavelength                                         = 0.00000000073d-12        !< m                         

real(c_double), bind(C), protected :: conductance_quantum                                          = 7.748091729d-5           !< S                         
real(c_double), bind(C), protected :: D_conductance_quantum                                        = 0.0d0                    !< S                         

real(c_double), bind(C), protected :: conventional_value_of_ampere_90                              = 1.00000008887d0          !< A                         
real(c_double), bind(C), protected :: D_conventional_value_of_ampere_90                            = 0.0d0                    !< A                         

real(c_double), bind(C), protected :: conventional_value_of_coulomb_90                             = 1.00000008887d0          !< C                         
real(c_double), bind(C), protected :: D_conventional_value_of_coulomb_90                           = 0.0d0                    !< C                         

real(c_double), bind(C), protected :: conventional_value_of_farad_90                               = 0.99999998220d0          !< F                         
real(c_double), bind(C), protected :: D_conventional_value_of_farad_90                             = 0.0d0                    !< F                         

real(c_double), bind(C), protected :: conventional_value_of_henry_90                               = 1.00000001779d0          !< H                         
real(c_double), bind(C), protected :: D_conventional_value_of_henry_90                             = 0.0d0                    !< H                         

real(c_double), bind(C), protected :: conventional_value_of_josephson_constant                     = 483597.9d9               !< Hz V^-1                   
real(c_double), bind(C), protected :: D_conventional_value_of_josephson_constant                   = 0.0d0                    !< Hz V^-1                   

real(c_double), bind(C), protected :: conventional_value_of_ohm_90                                 = 1.00000001779d0          !< ohm                       
real(c_double), bind(C), protected :: D_conventional_value_of_ohm_90                               = 0.0d0                    !< ohm                       

real(c_double), bind(C), protected :: conventional_value_of_volt_90                                = 1.00000010666d0          !< V                         
real(c_double), bind(C), protected :: D_conventional_value_of_volt_90                              = 0.0d0                    !< V                         

real(c_double), bind(C), protected :: conventional_value_of_von_klitzing_constant                  = 25812.807d0              !< ohm                       
real(c_double), bind(C), protected :: D_conventional_value_of_von_klitzing_constant                = 0.0d0                    !< ohm                       

real(c_double), bind(C), protected :: conventional_value_of_watt_90                                = 1.00000019553d0          !< W                         
real(c_double), bind(C), protected :: D_conventional_value_of_watt_90                              = 0.0d0                    !< W                         

real(c_double), bind(C), protected :: copper_x_unit                                                = 1.00207697d-13           !< m                         
real(c_double), bind(C), protected :: D_copper_x_unit                                              = 0.00000028d-13           !< m                         

real(c_double), bind(C), protected :: deuteron_electron_mag__mom__ratio                            = -4.664345551d-4          !<                           
real(c_double), bind(C), protected :: D_deuteron_electron_mag__mom__ratio                          = 0.000000012d-4           !<                           

real(c_double), bind(C), protected :: deuteron_electron_mass_ratio                                 = 3670.48296788d0          !<                           
real(c_double), bind(C), protected :: D_deuteron_electron_mass_ratio                               = 0.00000013d0             !<                           

real(c_double), bind(C), protected :: deuteron_g_factor                                            = 0.8574382338d0           !<                           
real(c_double), bind(C), protected :: D_deuteron_g_factor                                          = 0.0000000022d0           !<                           

real(c_double), bind(C), protected :: deuteron_mag__mom                                            = 4.330735094d-27          !< J T^-1                    
real(c_double), bind(C), protected :: D_deuteron_mag__mom                                          = 0.000000011d-27          !< J T^-1                    

real(c_double), bind(C), protected :: deuteron_mag__mom__to_bohr_magneton_ratio                    = 4.669754570d-4           !<                           
real(c_double), bind(C), protected :: D_deuteron_mag__mom__to_bohr_magneton_ratio                  = 0.000000012d-4           !<                           

real(c_double), bind(C), protected :: deuteron_mag__mom__to_nuclear_magneton_ratio                 = 0.8574382338d0           !<                           
real(c_double), bind(C), protected :: D_deuteron_mag__mom__to_nuclear_magneton_ratio               = 0.0000000022d0           !<                           

real(c_double), bind(C), protected :: deuteron_mass                                                = 3.3435837724d-27         !< kg                        
real(c_double), bind(C), protected :: D_deuteron_mass                                              = 0.0000000010d-27         !< kg                        

real(c_double), bind(C), protected :: deuteron_mass_energy_equivalent                              = 3.00506323102d-10        !< J                         
real(c_double), bind(C), protected :: D_deuteron_mass_energy_equivalent                            = 0.00000000091d-10        !< J                         

real(c_double), bind(C), protected :: deuteron_mass_energy_equivalent_in_mev                       = 1875.61294257d0          !< MeV                       
real(c_double), bind(C), protected :: D_deuteron_mass_energy_equivalent_in_mev                     = 0.00000057d0             !< MeV                       

real(c_double), bind(C), protected :: deuteron_mass_in_u                                           = 2.013553212745d0         !< u                         
real(c_double), bind(C), protected :: D_deuteron_mass_in_u                                         = 0.000000000040d0         !< u                         

real(c_double), bind(C), protected :: deuteron_molar_mass                                          = 2.01355321205d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_deuteron_molar_mass                                        = 0.00000000061d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: deuteron_neutron_mag__mom__ratio                             = -0.44820653d0            !<                           
real(c_double), bind(C), protected :: D_deuteron_neutron_mag__mom__ratio                           = 0.00000011d0             !<                           

real(c_double), bind(C), protected :: deuteron_proton_mag__mom__ratio                              = 0.30701220939d0          !<                           
real(c_double), bind(C), protected :: D_deuteron_proton_mag__mom__ratio                            = 0.00000000079d0          !<                           

real(c_double), bind(C), protected :: deuteron_proton_mass_ratio                                   = 1.99900750139d0          !<                           
real(c_double), bind(C), protected :: D_deuteron_proton_mass_ratio                                 = 0.00000000011d0          !<                           

real(c_double), bind(C), protected :: deuteron_relative_atomic_mass                                = 2.013553212745d0         !<                           
real(c_double), bind(C), protected :: D_deuteron_relative_atomic_mass                              = 0.000000000040d0         !<                           

real(c_double), bind(C), protected :: deuteron_rms_charge_radius                                   = 2.12799d-15              !< m                         
real(c_double), bind(C), protected :: D_deuteron_rms_charge_radius                                 = 0.00074d-15              !< m                         

real(c_double), bind(C), protected :: electron_charge_to_mass_quotient                             = -1.75882001076d11        !< C kg^-1                   
real(c_double), bind(C), protected :: D_electron_charge_to_mass_quotient                           = 0.00000000053d11         !< C kg^-1                   

real(c_double), bind(C), protected :: electron_deuteron_mag__mom__ratio                            = -2143.9234915d0          !<                           
real(c_double), bind(C), protected :: D_electron_deuteron_mag__mom__ratio                          = 0.0000056d0              !<                           

real(c_double), bind(C), protected :: electron_deuteron_mass_ratio                                 = 2.724437107462d-4        !<                           
real(c_double), bind(C), protected :: D_electron_deuteron_mass_ratio                               = 0.000000000096d-4        !<                           

real(c_double), bind(C), protected :: electron_g_factor                                            = -2.00231930436256d0      !<                           
real(c_double), bind(C), protected :: D_electron_g_factor                                          = 0.00000000000035d0       !<                           

real(c_double), bind(C), protected :: electron_gyromag__ratio                                      = 1.76085963023d11         !< s^-1 T^-1                 
real(c_double), bind(C), protected :: D_electron_gyromag__ratio                                    = 0.00000000053d11         !< s^-1 T^-1                 

real(c_double), bind(C), protected :: electron_gyromag__ratio_in_mhz_t                             = 28024.9514242d0          !< MHz T^-1                  
real(c_double), bind(C), protected :: D_electron_gyromag__ratio_in_mhz_t                           = 0.0000085d0              !< MHz T^-1                  

real(c_double), bind(C), protected :: electron_helion_mass_ratio                                   = 1.819543074573d-4        !<                           
real(c_double), bind(C), protected :: D_electron_helion_mass_ratio                                 = 0.000000000079d-4        !<                           

real(c_double), bind(C), protected :: electron_mag__mom                                            = -9.2847647043d-24        !< J T^-1                    
real(c_double), bind(C), protected :: D_electron_mag__mom                                          = 0.0000000028d-24         !< J T^-1                    

real(c_double), bind(C), protected :: electron_mag__mom__anomaly                                   = 1.15965218128d-3         !<                           
real(c_double), bind(C), protected :: D_electron_mag__mom__anomaly                                 = 0.00000000018d-3         !<                           

real(c_double), bind(C), protected :: electron_mag__mom__to_bohr_magneton_ratio                    = -1.00115965218128d0      !<                           
real(c_double), bind(C), protected :: D_electron_mag__mom__to_bohr_magneton_ratio                  = 0.00000000000018d0       !<                           

real(c_double), bind(C), protected :: electron_mag__mom__to_nuclear_magneton_ratio                 = -1838.28197188d0         !<                           
real(c_double), bind(C), protected :: D_electron_mag__mom__to_nuclear_magneton_ratio               = 0.00000011d0             !<                           

real(c_double), bind(C), protected :: electron_mass                                                = 9.1093837015d-31         !< kg                        
real(c_double), bind(C), protected :: D_electron_mass                                              = 0.0000000028d-31         !< kg                        

real(c_double), bind(C), protected :: electron_mass_energy_equivalent                              = 8.1871057769d-14         !< J                         
real(c_double), bind(C), protected :: D_electron_mass_energy_equivalent                            = 0.0000000025d-14         !< J                         

real(c_double), bind(C), protected :: electron_mass_energy_equivalent_in_mev                       = 0.51099895000d0          !< MeV                       
real(c_double), bind(C), protected :: D_electron_mass_energy_equivalent_in_mev                     = 0.00000000015d0          !< MeV                       

real(c_double), bind(C), protected :: electron_mass_in_u                                           = 5.48579909065d-4         !< u                         
real(c_double), bind(C), protected :: D_electron_mass_in_u                                         = 0.00000000016d-4         !< u                         

real(c_double), bind(C), protected :: electron_molar_mass                                          = 5.4857990888d-7          !< kg mol^-1                 
real(c_double), bind(C), protected :: D_electron_molar_mass                                        = 0.0000000017d-7          !< kg mol^-1                 

real(c_double), bind(C), protected :: electron_muon_mag__mom__ratio                                = 206.7669883d0            !<                           
real(c_double), bind(C), protected :: D_electron_muon_mag__mom__ratio                              = 0.0000046d0              !<                           

real(c_double), bind(C), protected :: electron_muon_mass_ratio                                     = 4.83633169d-3            !<                           
real(c_double), bind(C), protected :: D_electron_muon_mass_ratio                                   = 0.00000011d-3            !<                           

real(c_double), bind(C), protected :: electron_neutron_mag__mom__ratio                             = 960.92050d0              !<                           
real(c_double), bind(C), protected :: D_electron_neutron_mag__mom__ratio                           = 0.00023d0                !<                           

real(c_double), bind(C), protected :: electron_neutron_mass_ratio                                  = 5.4386734424d-4          !<                           
real(c_double), bind(C), protected :: D_electron_neutron_mass_ratio                                = 0.0000000026d-4          !<                           

real(c_double), bind(C), protected :: electron_proton_mag__mom__ratio                              = -658.21068789d0          !<                           
real(c_double), bind(C), protected :: D_electron_proton_mag__mom__ratio                            = 0.00000020d0             !<                           

real(c_double), bind(C), protected :: electron_proton_mass_ratio                                   = 5.44617021487d-4         !<                           
real(c_double), bind(C), protected :: D_electron_proton_mass_ratio                                 = 0.00000000033d-4         !<                           

real(c_double), bind(C), protected :: electron_relative_atomic_mass                                = 5.48579909065d-4         !<                           
real(c_double), bind(C), protected :: D_electron_relative_atomic_mass                              = 0.00000000016d-4         !<                           

real(c_double), bind(C), protected :: electron_tau_mass_ratio                                      = 2.87585d-4               !<                           
real(c_double), bind(C), protected :: D_electron_tau_mass_ratio                                    = 0.00019d-4               !<                           

real(c_double), bind(C), protected :: electron_to_alpha_particle_mass_ratio                        = 1.370933554787d-4        !<                           
real(c_double), bind(C), protected :: D_electron_to_alpha_particle_mass_ratio                      = 0.000000000045d-4        !<                           

real(c_double), bind(C), protected :: electron_to_shielded_helion_mag__mom__ratio                  = 864.058257d0             !<                           
real(c_double), bind(C), protected :: D_electron_to_shielded_helion_mag__mom__ratio                = 0.000010d0               !<                           

real(c_double), bind(C), protected :: electron_to_shielded_proton_mag__mom__ratio                  = -658.2275971d0           !<                           
real(c_double), bind(C), protected :: D_electron_to_shielded_proton_mag__mom__ratio                = 0.0000072d0              !<                           

real(c_double), bind(C), protected :: electron_triton_mass_ratio                                   = 1.819200062251d-4        !<                           
real(c_double), bind(C), protected :: D_electron_triton_mass_ratio                                 = 0.000000000090d-4        !<                           

real(c_double), bind(C), protected :: electron_volt                                                = 1.602176634d-19          !< J                         
real(c_double), bind(C), protected :: D_electron_volt                                              = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: electron_volt_atomic_mass_unit_relationship                  = 1.07354410233d-9         !< u                         
real(c_double), bind(C), protected :: D_electron_volt_atomic_mass_unit_relationship                = 0.00000000032d-9         !< u                         

real(c_double), bind(C), protected :: electron_volt_hartree_relationship                           = 3.6749322175655d-2       !< E_h                       
real(c_double), bind(C), protected :: D_electron_volt_hartree_relationship                         = 0.0000000000071d-2       !< E_h                       

real(c_double), bind(C), protected :: electron_volt_hertz_relationship                             = 2.417989242d14           !< Hz                        
real(c_double), bind(C), protected :: D_electron_volt_hertz_relationship                           = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: electron_volt_inverse_meter_relationship                     = 8.065543937d5            !< m^-1                      
real(c_double), bind(C), protected :: D_electron_volt_inverse_meter_relationship                   = 0.0d0                    !< m^-1                      

real(c_double), bind(C), protected :: electron_volt_joule_relationship                             = 1.602176634d-19          !< J                         
real(c_double), bind(C), protected :: D_electron_volt_joule_relationship                           = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: electron_volt_kelvin_relationship                            = 1.160451812d4            !< K                         
real(c_double), bind(C), protected :: D_electron_volt_kelvin_relationship                          = 0.0d0                    !< K                         

real(c_double), bind(C), protected :: electron_volt_kilogram_relationship                          = 1.782661921d-36          !< kg                        
real(c_double), bind(C), protected :: D_electron_volt_kilogram_relationship                        = 0.0d0                    !< kg                        

real(c_double), bind(C), protected :: elementary_charge                                            = 1.602176634d-19          !< C                         
real(c_double), bind(C), protected :: D_elementary_charge                                          = 0.0d0                    !< C                         

real(c_double), bind(C), protected :: elementary_charge_over_h_bar                                 = 1.519267447d15           !< A J^-1                    
real(c_double), bind(C), protected :: D_elementary_charge_over_h_bar                               = 0.0d0                    !< A J^-1                    

real(c_double), bind(C), protected :: faraday_constant                                             = 96485.33212d0            !< C mol^-1                  
real(c_double), bind(C), protected :: D_faraday_constant                                           = 0.0d0                    !< C mol^-1                  

real(c_double), bind(C), protected :: fermi_coupling_constant                                      = 1.1663787d-5             !< GeV^-2                    
real(c_double), bind(C), protected :: D_fermi_coupling_constant                                    = 0.0000006d-5             !< GeV^-2                    

real(c_double), bind(C), protected :: fine_structure_constant                                      = 7.2973525693d-3          !<                           
real(c_double), bind(C), protected :: D_fine_structure_constant                                    = 0.0000000011d-3          !<                           

real(c_double), bind(C), protected :: first_radiation_constant                                     = 3.741771852d-16          !< W m^2                     
real(c_double), bind(C), protected :: D_first_radiation_constant                                   = 0.0d0                    !< W m^2                     

real(c_double), bind(C), protected :: first_radiation_constant_for_spectral_radiance               = 1.191042972d-16          !< W m^2 sr^-1               
real(c_double), bind(C), protected :: D_first_radiation_constant_for_spectral_radiance             = 0.0d0                    !< W m^2 sr^-1               

real(c_double), bind(C), protected :: hartree_atomic_mass_unit_relationship                        = 2.92126232205d-8         !< u                         
real(c_double), bind(C), protected :: D_hartree_atomic_mass_unit_relationship                      = 0.00000000088d-8         !< u                         

real(c_double), bind(C), protected :: hartree_electron_volt_relationship                           = 27.211386245988d0        !< eV                        
real(c_double), bind(C), protected :: D_hartree_electron_volt_relationship                         = 0.000000000053d0         !< eV                        

real(c_double), bind(C), protected :: hartree_energy                                               = 4.3597447222071d-18      !< J                         
real(c_double), bind(C), protected :: D_hartree_energy                                             = 0.0000000000085d-18      !< J                         

real(c_double), bind(C), protected :: hartree_energy_in_ev                                         = 27.211386245988d0        !< eV                        
real(c_double), bind(C), protected :: D_hartree_energy_in_ev                                       = 0.000000000053d0         !< eV                        

real(c_double), bind(C), protected :: hartree_hertz_relationship                                   = 6.579683920502d15        !< Hz                        
real(c_double), bind(C), protected :: D_hartree_hertz_relationship                                 = 0.000000000013d15        !< Hz                        

real(c_double), bind(C), protected :: hartree_inverse_meter_relationship                           = 2.1947463136320d7        !< m^-1                      
real(c_double), bind(C), protected :: D_hartree_inverse_meter_relationship                         = 0.0000000000043d7        !< m^-1                      

real(c_double), bind(C), protected :: hartree_joule_relationship                                   = 4.3597447222071d-18      !< J                         
real(c_double), bind(C), protected :: D_hartree_joule_relationship                                 = 0.0000000000085d-18      !< J                         

real(c_double), bind(C), protected :: hartree_kelvin_relationship                                  = 3.1577502480407d5        !< K                         
real(c_double), bind(C), protected :: D_hartree_kelvin_relationship                                = 0.0000000000061d5        !< K                         

real(c_double), bind(C), protected :: hartree_kilogram_relationship                                = 4.8508702095432d-35      !< kg                        
real(c_double), bind(C), protected :: D_hartree_kilogram_relationship                              = 0.0000000000094d-35      !< kg                        

real(c_double), bind(C), protected :: helion_electron_mass_ratio                                   = 5495.88528007d0          !<                           
real(c_double), bind(C), protected :: D_helion_electron_mass_ratio                                 = 0.00000024d0             !<                           

real(c_double), bind(C), protected :: helion_g_factor                                              = -4.255250615d0           !<                           
real(c_double), bind(C), protected :: D_helion_g_factor                                            = 0.000000050d0            !<                           

real(c_double), bind(C), protected :: helion_mag__mom                                              = -1.074617532d-26         !< J T^-1                    
real(c_double), bind(C), protected :: D_helion_mag__mom                                            = 0.000000013d-26          !< J T^-1                    

real(c_double), bind(C), protected :: helion_mag__mom__to_bohr_magneton_ratio                      = -1.158740958d-3          !<                           
real(c_double), bind(C), protected :: D_helion_mag__mom__to_bohr_magneton_ratio                    = 0.000000014d-3           !<                           

real(c_double), bind(C), protected :: helion_mag__mom__to_nuclear_magneton_ratio                   = -2.127625307d0           !<                           
real(c_double), bind(C), protected :: D_helion_mag__mom__to_nuclear_magneton_ratio                 = 0.000000025d0            !<                           

real(c_double), bind(C), protected :: helion_mass                                                  = 5.0064127796d-27         !< kg                        
real(c_double), bind(C), protected :: D_helion_mass                                                = 0.0000000015d-27         !< kg                        

real(c_double), bind(C), protected :: helion_mass_energy_equivalent                                = 4.4995394125d-10         !< J                         
real(c_double), bind(C), protected :: D_helion_mass_energy_equivalent                              = 0.0000000014d-10         !< J                         

real(c_double), bind(C), protected :: helion_mass_energy_equivalent_in_mev                         = 2808.39160743d0          !< MeV                       
real(c_double), bind(C), protected :: D_helion_mass_energy_equivalent_in_mev                       = 0.00000085d0             !< MeV                       

real(c_double), bind(C), protected :: helion_mass_in_u                                             = 3.014932247175d0         !< u                         
real(c_double), bind(C), protected :: D_helion_mass_in_u                                           = 0.000000000097d0         !< u                         

real(c_double), bind(C), protected :: helion_molar_mass                                            = 3.01493224613d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_helion_molar_mass                                          = 0.00000000091d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: helion_proton_mass_ratio                                     = 2.99315267167d0          !<                           
real(c_double), bind(C), protected :: D_helion_proton_mass_ratio                                   = 0.00000000013d0          !<                           

real(c_double), bind(C), protected :: helion_relative_atomic_mass                                  = 3.014932247175d0         !<                           
real(c_double), bind(C), protected :: D_helion_relative_atomic_mass                                = 0.000000000097d0         !<                           

real(c_double), bind(C), protected :: helion_shielding_shift                                       = 5.996743d-5              !<                           
real(c_double), bind(C), protected :: D_helion_shielding_shift                                     = 0.000010d-5              !<                           

real(c_double), bind(C), protected :: hertz_atomic_mass_unit_relationship                          = 4.4398216652d-24         !< u                         
real(c_double), bind(C), protected :: D_hertz_atomic_mass_unit_relationship                        = 0.0000000013d-24         !< u                         

real(c_double), bind(C), protected :: hertz_electron_volt_relationship                             = 4.135667696d-15          !< eV                        
real(c_double), bind(C), protected :: D_hertz_electron_volt_relationship                           = 0.0d0                    !< eV                        

real(c_double), bind(C), protected :: hertz_hartree_relationship                                   = 1.5198298460570d-16      !< E_h                       
real(c_double), bind(C), protected :: D_hertz_hartree_relationship                                 = 0.0000000000029d-16      !< E_h                       

real(c_double), bind(C), protected :: hertz_inverse_meter_relationship                             = 3.335640951d-9           !< m^-1                      
real(c_double), bind(C), protected :: D_hertz_inverse_meter_relationship                           = 0.0d0                    !< m^-1                      

real(c_double), bind(C), protected :: hertz_joule_relationship                                     = 6.62607015d-34           !< J                         
real(c_double), bind(C), protected :: D_hertz_joule_relationship                                   = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: hertz_kelvin_relationship                                    = 4.799243073d-11          !< K                         
real(c_double), bind(C), protected :: D_hertz_kelvin_relationship                                  = 0.0d0                    !< K                         

real(c_double), bind(C), protected :: hertz_kilogram_relationship                                  = 7.372497323d-51          !< kg                        
real(c_double), bind(C), protected :: D_hertz_kilogram_relationship                                = 0.0d0                    !< kg                        

real(c_double), bind(C), protected :: hyperfine_transition_frequency_of_cs_133                     = 9192631770.0d0           !< Hz                        
real(c_double), bind(C), protected :: D_hyperfine_transition_frequency_of_cs_133                   = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: inverse_fine_structure_constant                              = 137.035999084d0          !<                           
real(c_double), bind(C), protected :: D_inverse_fine_structure_constant                            = 0.000000021d0            !<                           

real(c_double), bind(C), protected :: inverse_meter_atomic_mass_unit_relationship                  = 1.33102505010d-15        !< u                         
real(c_double), bind(C), protected :: D_inverse_meter_atomic_mass_unit_relationship                = 0.00000000040d-15        !< u                         

real(c_double), bind(C), protected :: inverse_meter_electron_volt_relationship                     = 1.239841984d-6           !< eV                        
real(c_double), bind(C), protected :: D_inverse_meter_electron_volt_relationship                   = 0.0d0                    !< eV                        

real(c_double), bind(C), protected :: inverse_meter_hartree_relationship                           = 4.5563352529120d-8       !< E_h                       
real(c_double), bind(C), protected :: D_inverse_meter_hartree_relationship                         = 0.0000000000088d-8       !< E_h                       

real(c_double), bind(C), protected :: inverse_meter_hertz_relationship                             = 299792458.0d0            !< Hz                        
real(c_double), bind(C), protected :: D_inverse_meter_hertz_relationship                           = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: inverse_meter_joule_relationship                             = 1.986445857d-25          !< J                         
real(c_double), bind(C), protected :: D_inverse_meter_joule_relationship                           = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: inverse_meter_kelvin_relationship                            = 1.438776877d-2           !< K                         
real(c_double), bind(C), protected :: D_inverse_meter_kelvin_relationship                          = 0.0d0                    !< K                         

real(c_double), bind(C), protected :: inverse_meter_kilogram_relationship                          = 2.210219094d-42          !< kg                        
real(c_double), bind(C), protected :: D_inverse_meter_kilogram_relationship                        = 0.0d0                    !< kg                        

real(c_double), bind(C), protected :: inverse_of_conductance_quantum                               = 12906.40372d0            !< ohm                       
real(c_double), bind(C), protected :: D_inverse_of_conductance_quantum                             = 0.0d0                    !< ohm                       

real(c_double), bind(C), protected :: josephson_constant                                           = 483597.8484d9            !< Hz V^-1                   
real(c_double), bind(C), protected :: D_josephson_constant                                         = 0.0d0                    !< Hz V^-1                   

real(c_double), bind(C), protected :: joule_atomic_mass_unit_relationship                          = 6.7005352565d9           !< u                         
real(c_double), bind(C), protected :: D_joule_atomic_mass_unit_relationship                        = 0.0000000020d9           !< u                         

real(c_double), bind(C), protected :: joule_electron_volt_relationship                             = 6.241509074d18           !< eV                        
real(c_double), bind(C), protected :: D_joule_electron_volt_relationship                           = 0.0d0                    !< eV                        

real(c_double), bind(C), protected :: joule_hartree_relationship                                   = 2.2937122783963d17       !< E_h                       
real(c_double), bind(C), protected :: D_joule_hartree_relationship                                 = 0.0000000000045d17       !< E_h                       

real(c_double), bind(C), protected :: joule_hertz_relationship                                     = 1.509190179d33           !< Hz                        
real(c_double), bind(C), protected :: D_joule_hertz_relationship                                   = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: joule_inverse_meter_relationship                             = 5.034116567d24           !< m^-1                      
real(c_double), bind(C), protected :: D_joule_inverse_meter_relationship                           = 0.0d0                    !< m^-1                      

real(c_double), bind(C), protected :: joule_kelvin_relationship                                    = 7.242970516d22           !< K                         
real(c_double), bind(C), protected :: D_joule_kelvin_relationship                                  = 0.0d0                    !< K                         

real(c_double), bind(C), protected :: joule_kilogram_relationship                                  = 1.112650056d-17          !< kg                        
real(c_double), bind(C), protected :: D_joule_kilogram_relationship                                = 0.0d0                    !< kg                        

real(c_double), bind(C), protected :: kelvin_atomic_mass_unit_relationship                         = 9.2510873014d-14         !< u                         
real(c_double), bind(C), protected :: D_kelvin_atomic_mass_unit_relationship                       = 0.0000000028d-14         !< u                         

real(c_double), bind(C), protected :: kelvin_electron_volt_relationship                            = 8.617333262d-5           !< eV                        
real(c_double), bind(C), protected :: D_kelvin_electron_volt_relationship                          = 0.0d0                    !< eV                        

real(c_double), bind(C), protected :: kelvin_hartree_relationship                                  = 3.1668115634556d-6       !< E_h                       
real(c_double), bind(C), protected :: D_kelvin_hartree_relationship                                = 0.0000000000061d-6       !< E_h                       

real(c_double), bind(C), protected :: kelvin_hertz_relationship                                    = 2.083661912d10           !< Hz                        
real(c_double), bind(C), protected :: D_kelvin_hertz_relationship                                  = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: kelvin_inverse_meter_relationship                            = 69.50348004d0            !< m^-1                      
real(c_double), bind(C), protected :: D_kelvin_inverse_meter_relationship                          = 0.0d0                    !< m^-1                      

real(c_double), bind(C), protected :: kelvin_joule_relationship                                    = 1.380649d-23             !< J                         
real(c_double), bind(C), protected :: D_kelvin_joule_relationship                                  = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: kelvin_kilogram_relationship                                 = 1.536179187d-40          !< kg                        
real(c_double), bind(C), protected :: D_kelvin_kilogram_relationship                               = 0.0d0                    !< kg                        

real(c_double), bind(C), protected :: kilogram_atomic_mass_unit_relationship                       = 6.0221407621d26          !< u                         
real(c_double), bind(C), protected :: D_kilogram_atomic_mass_unit_relationship                     = 0.0000000018d26          !< u                         

real(c_double), bind(C), protected :: kilogram_electron_volt_relationship                          = 5.609588603d35           !< eV                        
real(c_double), bind(C), protected :: D_kilogram_electron_volt_relationship                        = 0.0d0                    !< eV                        

real(c_double), bind(C), protected :: kilogram_hartree_relationship                                = 2.0614857887409d34       !< E_h                       
real(c_double), bind(C), protected :: D_kilogram_hartree_relationship                              = 0.0000000000040d34       !< E_h                       

real(c_double), bind(C), protected :: kilogram_hertz_relationship                                  = 1.356392489d50           !< Hz                        
real(c_double), bind(C), protected :: D_kilogram_hertz_relationship                                = 0.0d0                    !< Hz                        

real(c_double), bind(C), protected :: kilogram_inverse_meter_relationship                          = 4.524438335d41           !< m^-1                      
real(c_double), bind(C), protected :: D_kilogram_inverse_meter_relationship                        = 0.0d0                    !< m^-1                      

real(c_double), bind(C), protected :: kilogram_joule_relationship                                  = 8.987551787d16           !< J                         
real(c_double), bind(C), protected :: D_kilogram_joule_relationship                                = 0.0d0                    !< J                         

real(c_double), bind(C), protected :: kilogram_kelvin_relationship                                 = 6.509657260d39           !< K                         
real(c_double), bind(C), protected :: D_kilogram_kelvin_relationship                               = 0.0d0                    !< K                         

real(c_double), bind(C), protected :: lattice_parameter_of_silicon                                 = 5.431020511d-10          !< m                         
real(c_double), bind(C), protected :: D_lattice_parameter_of_silicon                               = 0.000000089d-10          !< m                         

real(c_double), bind(C), protected :: lattice_spacing_of_ideal_si__220                             = 1.920155716d-10          !< m                         
real(c_double), bind(C), protected :: D_lattice_spacing_of_ideal_si__220                           = 0.000000032d-10          !< m                         

real(c_double), bind(C), protected :: loschmidt_constant__273_15_k__100_kpa                        = 2.651645804d25           !< m^-3                      
real(c_double), bind(C), protected :: D_loschmidt_constant__273_15_k__100_kpa                      = 0.0d0                    !< m^-3                      

real(c_double), bind(C), protected :: loschmidt_constant__273_15_k__101_325_kpa                    = 2.686780111d25           !< m^-3                      
real(c_double), bind(C), protected :: D_loschmidt_constant__273_15_k__101_325_kpa                  = 0.0d0                    !< m^-3                      

real(c_double), bind(C), protected :: luminous_efficacy                                            = 683.0d0                  !< lm W^-1                   
real(c_double), bind(C), protected :: D_luminous_efficacy                                          = 0.0d0                    !< lm W^-1                   

real(c_double), bind(C), protected :: mag__flux_quantum                                            = 2.067833848d-15          !< Wb                        
real(c_double), bind(C), protected :: D_mag__flux_quantum                                          = 0.0d0                    !< Wb                        

real(c_double), bind(C), protected :: molar_gas_constant                                           = 8.314462618d0            !< J mol^-1 K^-1             
real(c_double), bind(C), protected :: D_molar_gas_constant                                         = 0.0d0                    !< J mol^-1 K^-1             

real(c_double), bind(C), protected :: molar_mass_constant                                          = 0.99999999965d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_molar_mass_constant                                        = 0.00000000030d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: molar_mass_of_carbon_12                                      = 11.9999999958d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_molar_mass_of_carbon_12                                    = 0.0000000036d-3          !< kg mol^-1                 

real(c_double), bind(C), protected :: molar_planck_constant                                        = 3.990312712d-10          !< J Hz^-1 mol^-1            
real(c_double), bind(C), protected :: D_molar_planck_constant                                      = 0.0d0                    !< J Hz^-1 mol^-1            

real(c_double), bind(C), protected :: molar_volume_of_ideal_gas__273_15_k__100_kpa                 = 22.71095464d-3           !< m^3 mol^-1                
real(c_double), bind(C), protected :: D_molar_volume_of_ideal_gas__273_15_k__100_kpa               = 0.0d0                    !< m^3 mol^-1                

real(c_double), bind(C), protected :: molar_volume_of_ideal_gas__273_15_k__101_325_kpa             = 22.41396954d-3           !< m^3 mol^-1                
real(c_double), bind(C), protected :: D_molar_volume_of_ideal_gas__273_15_k__101_325_kpa           = 0.0d0                    !< m^3 mol^-1                

real(c_double), bind(C), protected :: molar_volume_of_silicon                                      = 1.205883199d-5           !< m^3 mol^-1                
real(c_double), bind(C), protected :: D_molar_volume_of_silicon                                    = 0.000000060d-5           !< m^3 mol^-1                

real(c_double), bind(C), protected :: molybdenum_x_unit                                            = 1.00209952d-13           !< m                         
real(c_double), bind(C), protected :: D_molybdenum_x_unit                                          = 0.00000053d-13           !< m                         

real(c_double), bind(C), protected :: muon_compton_wavelength                                      = 1.173444110d-14          !< m                         
real(c_double), bind(C), protected :: D_muon_compton_wavelength                                    = 0.000000026d-14          !< m                         

real(c_double), bind(C), protected :: muon_electron_mass_ratio                                     = 206.7682830d0            !<                           
real(c_double), bind(C), protected :: D_muon_electron_mass_ratio                                   = 0.0000046d0              !<                           

real(c_double), bind(C), protected :: muon_g_factor                                                = -2.0023318418d0          !<                           
real(c_double), bind(C), protected :: D_muon_g_factor                                              = 0.0000000013d0           !<                           

real(c_double), bind(C), protected :: muon_mag__mom                                                = -4.49044830d-26          !< J T^-1                    
real(c_double), bind(C), protected :: D_muon_mag__mom                                              = 0.00000010d-26           !< J T^-1                    

real(c_double), bind(C), protected :: muon_mag__mom__anomaly                                       = 1.16592089d-3            !<                           
real(c_double), bind(C), protected :: D_muon_mag__mom__anomaly                                     = 0.00000063d-3            !<                           

real(c_double), bind(C), protected :: muon_mag__mom__to_bohr_magneton_ratio                        = -4.84197047d-3           !<                           
real(c_double), bind(C), protected :: D_muon_mag__mom__to_bohr_magneton_ratio                      = 0.00000011d-3            !<                           

real(c_double), bind(C), protected :: muon_mag__mom__to_nuclear_magneton_ratio                     = -8.89059703d0            !<                           
real(c_double), bind(C), protected :: D_muon_mag__mom__to_nuclear_magneton_ratio                   = 0.00000020d0             !<                           

real(c_double), bind(C), protected :: muon_mass                                                    = 1.883531627d-28          !< kg                        
real(c_double), bind(C), protected :: D_muon_mass                                                  = 0.000000042d-28          !< kg                        

real(c_double), bind(C), protected :: muon_mass_energy_equivalent                                  = 1.692833804d-11          !< J                         
real(c_double), bind(C), protected :: D_muon_mass_energy_equivalent                                = 0.000000038d-11          !< J                         

real(c_double), bind(C), protected :: muon_mass_energy_equivalent_in_mev                           = 105.6583755d0            !< MeV                       
real(c_double), bind(C), protected :: D_muon_mass_energy_equivalent_in_mev                         = 0.0000023d0              !< MeV                       

real(c_double), bind(C), protected :: muon_mass_in_u                                               = 0.1134289259d0           !< u                         
real(c_double), bind(C), protected :: D_muon_mass_in_u                                             = 0.0000000025d0           !< u                         

real(c_double), bind(C), protected :: muon_molar_mass                                              = 1.134289259d-4           !< kg mol^-1                 
real(c_double), bind(C), protected :: D_muon_molar_mass                                            = 0.000000025d-4           !< kg mol^-1                 

real(c_double), bind(C), protected :: muon_neutron_mass_ratio                                      = 0.1124545170d0           !<                           
real(c_double), bind(C), protected :: D_muon_neutron_mass_ratio                                    = 0.0000000025d0           !<                           

real(c_double), bind(C), protected :: muon_proton_mag__mom__ratio                                  = -3.183345142d0           !<                           
real(c_double), bind(C), protected :: D_muon_proton_mag__mom__ratio                                = 0.000000071d0            !<                           

real(c_double), bind(C), protected :: muon_proton_mass_ratio                                       = 0.1126095264d0           !<                           
real(c_double), bind(C), protected :: D_muon_proton_mass_ratio                                     = 0.0000000025d0           !<                           

real(c_double), bind(C), protected :: muon_tau_mass_ratio                                          = 5.94635d-2               !<                           
real(c_double), bind(C), protected :: D_muon_tau_mass_ratio                                        = 0.00040d-2               !<                           

real(c_double), bind(C), protected :: natural_unit_of_action                                       = 1.054571817d-34          !< J s                       
real(c_double), bind(C), protected :: D_natural_unit_of_action                                     = 0.0d0                    !< J s                       

real(c_double), bind(C), protected :: natural_unit_of_action_in_ev_s                               = 6.582119569d-16          !< eV s                      
real(c_double), bind(C), protected :: D_natural_unit_of_action_in_ev_s                             = 0.0d0                    !< eV s                      

real(c_double), bind(C), protected :: natural_unit_of_energy                                       = 8.1871057769d-14         !< J                         
real(c_double), bind(C), protected :: D_natural_unit_of_energy                                     = 0.0000000025d-14         !< J                         

real(c_double), bind(C), protected :: natural_unit_of_energy_in_mev                                = 0.51099895000d0          !< MeV                       
real(c_double), bind(C), protected :: D_natural_unit_of_energy_in_mev                              = 0.00000000015d0          !< MeV                       

real(c_double), bind(C), protected :: natural_unit_of_length                                       = 3.8615926796d-13         !< m                         
real(c_double), bind(C), protected :: D_natural_unit_of_length                                     = 0.0000000012d-13         !< m                         

real(c_double), bind(C), protected :: natural_unit_of_mass                                         = 9.1093837015d-31         !< kg                        
real(c_double), bind(C), protected :: D_natural_unit_of_mass                                       = 0.0000000028d-31         !< kg                        

real(c_double), bind(C), protected :: natural_unit_of_momentum                                     = 2.73092453075d-22        !< kg m s^-1                 
real(c_double), bind(C), protected :: D_natural_unit_of_momentum                                   = 0.00000000082d-22        !< kg m s^-1                 

real(c_double), bind(C), protected :: natural_unit_of_momentum_in_mev_c                            = 0.51099895000d0          !< MeV/c                     
real(c_double), bind(C), protected :: D_natural_unit_of_momentum_in_mev_c                          = 0.00000000015d0          !< MeV/c                     

real(c_double), bind(C), protected :: natural_unit_of_time                                         = 1.28808866819d-21        !< s                         
real(c_double), bind(C), protected :: D_natural_unit_of_time                                       = 0.00000000039d-21        !< s                         

real(c_double), bind(C), protected :: natural_unit_of_velocity                                     = 299792458.0d0            !< m s^-1                    
real(c_double), bind(C), protected :: D_natural_unit_of_velocity                                   = 0.0d0                    !< m s^-1                    

real(c_double), bind(C), protected :: neutron_compton_wavelength                                   = 1.31959090581d-15        !< m                         
real(c_double), bind(C), protected :: D_neutron_compton_wavelength                                 = 0.00000000075d-15        !< m                         

real(c_double), bind(C), protected :: neutron_electron_mag__mom__ratio                             = 1.04066882d-3            !<                           
real(c_double), bind(C), protected :: D_neutron_electron_mag__mom__ratio                           = 0.00000025d-3            !<                           

real(c_double), bind(C), protected :: neutron_electron_mass_ratio                                  = 1838.68366173d0          !<                           
real(c_double), bind(C), protected :: D_neutron_electron_mass_ratio                                = 0.00000089d0             !<                           

real(c_double), bind(C), protected :: neutron_g_factor                                             = -3.82608545d0            !<                           
real(c_double), bind(C), protected :: D_neutron_g_factor                                           = 0.00000090d0             !<                           

real(c_double), bind(C), protected :: neutron_gyromag__ratio                                       = 1.83247171d8             !< s^-1 T^-1                 
real(c_double), bind(C), protected :: D_neutron_gyromag__ratio                                     = 0.00000043d8             !< s^-1 T^-1                 

real(c_double), bind(C), protected :: neutron_gyromag__ratio_in_mhz_t                              = 29.1646931d0             !< MHz T^-1                  
real(c_double), bind(C), protected :: D_neutron_gyromag__ratio_in_mhz_t                            = 0.0000069d0              !< MHz T^-1                  

real(c_double), bind(C), protected :: neutron_mag__mom                                             = -9.6623651d-27           !< J T^-1                    
real(c_double), bind(C), protected :: D_neutron_mag__mom                                           = 0.0000023d-27            !< J T^-1                    

real(c_double), bind(C), protected :: neutron_mag__mom__to_bohr_magneton_ratio                     = -1.04187563d-3           !<                           
real(c_double), bind(C), protected :: D_neutron_mag__mom__to_bohr_magneton_ratio                   = 0.00000025d-3            !<                           

real(c_double), bind(C), protected :: neutron_mag__mom__to_nuclear_magneton_ratio                  = -1.91304273d0            !<                           
real(c_double), bind(C), protected :: D_neutron_mag__mom__to_nuclear_magneton_ratio                = 0.00000045d0             !<                           

real(c_double), bind(C), protected :: neutron_mass                                                 = 1.67492749804d-27        !< kg                        
real(c_double), bind(C), protected :: D_neutron_mass                                               = 0.00000000095d-27        !< kg                        

real(c_double), bind(C), protected :: neutron_mass_energy_equivalent                               = 1.50534976287d-10        !< J                         
real(c_double), bind(C), protected :: D_neutron_mass_energy_equivalent                             = 0.00000000086d-10        !< J                         

real(c_double), bind(C), protected :: neutron_mass_energy_equivalent_in_mev                        = 939.56542052d0           !< MeV                       
real(c_double), bind(C), protected :: D_neutron_mass_energy_equivalent_in_mev                      = 0.00000054d0             !< MeV                       

real(c_double), bind(C), protected :: neutron_mass_in_u                                            = 1.00866491595d0          !< u                         
real(c_double), bind(C), protected :: D_neutron_mass_in_u                                          = 0.00000000049d0          !< u                         

real(c_double), bind(C), protected :: neutron_molar_mass                                           = 1.00866491560d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_neutron_molar_mass                                         = 0.00000000057d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: neutron_muon_mass_ratio                                      = 8.89248406d0             !<                           
real(c_double), bind(C), protected :: D_neutron_muon_mass_ratio                                    = 0.00000020d0             !<                           

real(c_double), bind(C), protected :: neutron_proton_mag__mom__ratio                               = -0.68497934d0            !<                           
real(c_double), bind(C), protected :: D_neutron_proton_mag__mom__ratio                             = 0.00000016d0             !<                           

real(c_double), bind(C), protected :: neutron_proton_mass_difference                               = 2.30557435d-30           !< kg                        
real(c_double), bind(C), protected :: D_neutron_proton_mass_difference                             = 0.00000082d-30           !< kg                        

real(c_double), bind(C), protected :: neutron_proton_mass_difference_energy_equivalent             = 2.07214689d-13           !< J                         
real(c_double), bind(C), protected :: D_neutron_proton_mass_difference_energy_equivalent           = 0.00000074d-13           !< J                         

real(c_double), bind(C), protected :: neutron_proton_mass_difference_energy_equivalent_in_mev      = 1.29333236d0             !< MeV                       
real(c_double), bind(C), protected :: D_neutron_proton_mass_difference_energy_equivalent_in_mev    = 0.00000046d0             !< MeV                       

real(c_double), bind(C), protected :: neutron_proton_mass_difference_in_u                          = 1.38844933d-3            !< u                         
real(c_double), bind(C), protected :: D_neutron_proton_mass_difference_in_u                        = 0.00000049d-3            !< u                         

real(c_double), bind(C), protected :: neutron_proton_mass_ratio                                    = 1.00137841931d0          !<                           
real(c_double), bind(C), protected :: D_neutron_proton_mass_ratio                                  = 0.00000000049d0          !<                           

real(c_double), bind(C), protected :: neutron_relative_atomic_mass                                 = 1.00866491595d0          !<                           
real(c_double), bind(C), protected :: D_neutron_relative_atomic_mass                               = 0.00000000049d0          !<                           

real(c_double), bind(C), protected :: neutron_tau_mass_ratio                                       = 0.528779d0               !<                           
real(c_double), bind(C), protected :: D_neutron_tau_mass_ratio                                     = 0.000036d0               !<                           

real(c_double), bind(C), protected :: neutron_to_shielded_proton_mag__mom__ratio                   = -0.68499694d0            !<                           
real(c_double), bind(C), protected :: D_neutron_to_shielded_proton_mag__mom__ratio                 = 0.00000016d0             !<                           

real(c_double), bind(C), protected :: newtonian_constant_of_gravitation                            = 6.67430d-11              !< m^3 kg^-1 s^-2            
real(c_double), bind(C), protected :: D_newtonian_constant_of_gravitation                          = 0.00015d-11              !< m^3 kg^-1 s^-2            

real(c_double), bind(C), protected :: newtonian_constant_of_gravitation_over_h_bar_c               = 6.70883d-39              !< (GeV/c^2)^-2              
real(c_double), bind(C), protected :: D_newtonian_constant_of_gravitation_over_h_bar_c             = 0.00015d-39              !< (GeV/c^2)^-2              

real(c_double), bind(C), protected :: nuclear_magneton                                             = 5.0507837461d-27         !< J T^-1                    
real(c_double), bind(C), protected :: D_nuclear_magneton                                           = 0.0000000015d-27         !< J T^-1                    

real(c_double), bind(C), protected :: nuclear_magneton_in_ev_t                                     = 3.15245125844d-8         !< eV T^-1                   
real(c_double), bind(C), protected :: D_nuclear_magneton_in_ev_t                                   = 0.00000000096d-8         !< eV T^-1                   

real(c_double), bind(C), protected :: nuclear_magneton_in_inverse_meter_per_tesla                  = 2.54262341353d-2         !< m^-1 T^-1                 
real(c_double), bind(C), protected :: D_nuclear_magneton_in_inverse_meter_per_tesla                = 0.00000000078d-2         !< m^-1 T^-1                 

real(c_double), bind(C), protected :: nuclear_magneton_in_k_t                                      = 3.6582677756d-4          !< K T^-1                    
real(c_double), bind(C), protected :: D_nuclear_magneton_in_k_t                                    = 0.0000000011d-4          !< K T^-1                    

real(c_double), bind(C), protected :: nuclear_magneton_in_mhz_t                                    = 7.6225932291d0           !< MHz T^-1                  
real(c_double), bind(C), protected :: D_nuclear_magneton_in_mhz_t                                  = 0.0000000023d0           !< MHz T^-1                  

real(c_double), bind(C), protected :: planck_constant                                              = 6.62607015d-34           !< J Hz^-1                   
real(c_double), bind(C), protected :: D_planck_constant                                            = 0.0d0                    !< J Hz^-1                   

real(c_double), bind(C), protected :: planck_constant_in_ev_hz                                     = 4.135667696d-15          !< eV Hz^-1                  
real(c_double), bind(C), protected :: D_planck_constant_in_ev_hz                                   = 0.0d0                    !< eV Hz^-1                  

real(c_double), bind(C), protected :: planck_length                                                = 1.616255d-35             !< m                         
real(c_double), bind(C), protected :: D_planck_length                                              = 0.000018d-35             !< m                         

real(c_double), bind(C), protected :: planck_mass                                                  = 2.176434d-8              !< kg                        
real(c_double), bind(C), protected :: D_planck_mass                                                = 0.000024d-8              !< kg                        

real(c_double), bind(C), protected :: planck_mass_energy_equivalent_in_gev                         = 1.220890d19              !< GeV                       
real(c_double), bind(C), protected :: D_planck_mass_energy_equivalent_in_gev                       = 0.000014d19              !< GeV                       

real(c_double), bind(C), protected :: planck_temperature                                           = 1.416784d32              !< K                         
real(c_double), bind(C), protected :: D_planck_temperature                                         = 0.000016d32              !< K                         

real(c_double), bind(C), protected :: planck_time                                                  = 5.391247d-44             !< s                         
real(c_double), bind(C), protected :: D_planck_time                                                = 0.000060d-44             !< s                         

real(c_double), bind(C), protected :: proton_charge_to_mass_quotient                               = 9.5788331560d7           !< C kg^-1                   
real(c_double), bind(C), protected :: D_proton_charge_to_mass_quotient                             = 0.0000000029d7           !< C kg^-1                   

real(c_double), bind(C), protected :: proton_compton_wavelength                                    = 1.32140985539d-15        !< m                         
real(c_double), bind(C), protected :: D_proton_compton_wavelength                                  = 0.00000000040d-15        !< m                         

real(c_double), bind(C), protected :: proton_electron_mass_ratio                                   = 1836.15267343d0          !<                           
real(c_double), bind(C), protected :: D_proton_electron_mass_ratio                                 = 0.00000011d0             !<                           

real(c_double), bind(C), protected :: proton_g_factor                                              = 5.5856946893d0           !<                           
real(c_double), bind(C), protected :: D_proton_g_factor                                            = 0.0000000016d0           !<                           

real(c_double), bind(C), protected :: proton_gyromag__ratio                                        = 2.6752218744d8           !< s^-1 T^-1                 
real(c_double), bind(C), protected :: D_proton_gyromag__ratio                                      = 0.0000000011d8           !< s^-1 T^-1                 

real(c_double), bind(C), protected :: proton_gyromag__ratio_in_mhz_t                               = 42.577478518d0           !< MHz T^-1                  
real(c_double), bind(C), protected :: D_proton_gyromag__ratio_in_mhz_t                             = 0.000000018d0            !< MHz T^-1                  

real(c_double), bind(C), protected :: proton_mag__mom                                              = 1.41060679736d-26        !< J T^-1                    
real(c_double), bind(C), protected :: D_proton_mag__mom                                            = 0.00000000060d-26        !< J T^-1                    

real(c_double), bind(C), protected :: proton_mag__mom__to_bohr_magneton_ratio                      = 1.52103220230d-3         !<                           
real(c_double), bind(C), protected :: D_proton_mag__mom__to_bohr_magneton_ratio                    = 0.00000000046d-3         !<                           

real(c_double), bind(C), protected :: proton_mag__mom__to_nuclear_magneton_ratio                   = 2.79284734463d0          !<                           
real(c_double), bind(C), protected :: D_proton_mag__mom__to_nuclear_magneton_ratio                 = 0.00000000082d0          !<                           

real(c_double), bind(C), protected :: proton_mag__shielding_correction                             = 2.5689d-5                !<                           
real(c_double), bind(C), protected :: D_proton_mag__shielding_correction                           = 0.0011d-5                !<                           

real(c_double), bind(C), protected :: proton_mass                                                  = 1.67262192369d-27        !< kg                        
real(c_double), bind(C), protected :: D_proton_mass                                                = 0.00000000051d-27        !< kg                        

real(c_double), bind(C), protected :: proton_mass_energy_equivalent                                = 1.50327761598d-10        !< J                         
real(c_double), bind(C), protected :: D_proton_mass_energy_equivalent                              = 0.00000000046d-10        !< J                         

real(c_double), bind(C), protected :: proton_mass_energy_equivalent_in_mev                         = 938.27208816d0           !< MeV                       
real(c_double), bind(C), protected :: D_proton_mass_energy_equivalent_in_mev                       = 0.00000029d0             !< MeV                       

real(c_double), bind(C), protected :: proton_mass_in_u                                             = 1.007276466621d0         !< u                         
real(c_double), bind(C), protected :: D_proton_mass_in_u                                           = 0.000000000053d0         !< u                         

real(c_double), bind(C), protected :: proton_molar_mass                                            = 1.00727646627d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_proton_molar_mass                                          = 0.00000000031d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: proton_muon_mass_ratio                                       = 8.88024337d0             !<                           
real(c_double), bind(C), protected :: D_proton_muon_mass_ratio                                     = 0.00000020d0             !<                           

real(c_double), bind(C), protected :: proton_neutron_mag__mom__ratio                               = -1.45989805d0            !<                           
real(c_double), bind(C), protected :: D_proton_neutron_mag__mom__ratio                             = 0.00000034d0             !<                           

real(c_double), bind(C), protected :: proton_neutron_mass_ratio                                    = 0.99862347812d0          !<                           
real(c_double), bind(C), protected :: D_proton_neutron_mass_ratio                                  = 0.00000000049d0          !<                           

real(c_double), bind(C), protected :: proton_relative_atomic_mass                                  = 1.007276466621d0         !<                           
real(c_double), bind(C), protected :: D_proton_relative_atomic_mass                                = 0.000000000053d0         !<                           

real(c_double), bind(C), protected :: proton_rms_charge_radius                                     = 8.414d-16                !< m                         
real(c_double), bind(C), protected :: D_proton_rms_charge_radius                                   = 0.019d-16                !< m                         

real(c_double), bind(C), protected :: proton_tau_mass_ratio                                        = 0.528051d0               !<                           
real(c_double), bind(C), protected :: D_proton_tau_mass_ratio                                      = 0.000036d0               !<                           

real(c_double), bind(C), protected :: quantum_of_circulation                                       = 3.6369475516d-4          !< m^2 s^-1                  
real(c_double), bind(C), protected :: D_quantum_of_circulation                                     = 0.0000000011d-4          !< m^2 s^-1                  

real(c_double), bind(C), protected :: quantum_of_circulation_times_2                               = 7.2738951032d-4          !< m^2 s^-1                  
real(c_double), bind(C), protected :: D_quantum_of_circulation_times_2                             = 0.0000000022d-4          !< m^2 s^-1                  

real(c_double), bind(C), protected :: reduced_compton_wavelength                                   = 3.8615926796d-13         !< m                         
real(c_double), bind(C), protected :: D_reduced_compton_wavelength                                 = 0.0000000012d-13         !< m                         

real(c_double), bind(C), protected :: reduced_muon_compton_wavelength                              = 1.867594306d-15          !< m                         
real(c_double), bind(C), protected :: D_reduced_muon_compton_wavelength                            = 0.000000042d-15          !< m                         

real(c_double), bind(C), protected :: reduced_neutron_compton_wavelength                           = 2.1001941552d-16         !< m                         
real(c_double), bind(C), protected :: D_reduced_neutron_compton_wavelength                         = 0.0000000012d-16         !< m                         

real(c_double), bind(C), protected :: reduced_planck_constant                                      = 1.054571817d-34          !< J s                       
real(c_double), bind(C), protected :: D_reduced_planck_constant                                    = 0.0d0                    !< J s                       

real(c_double), bind(C), protected :: reduced_planck_constant_in_ev_s                              = 6.582119569d-16          !< eV s                      
real(c_double), bind(C), protected :: D_reduced_planck_constant_in_ev_s                            = 0.0d0                    !< eV s                      

real(c_double), bind(C), protected :: reduced_planck_constant_times_c_in_mev_fm                    = 197.3269804d0            !< MeV fm                    
real(c_double), bind(C), protected :: D_reduced_planck_constant_times_c_in_mev_fm                  = 0.0d0                    !< MeV fm                    

real(c_double), bind(C), protected :: reduced_proton_compton_wavelength                            = 2.10308910336d-16        !< m                         
real(c_double), bind(C), protected :: D_reduced_proton_compton_wavelength                          = 0.00000000064d-16        !< m                         

real(c_double), bind(C), protected :: reduced_tau_compton_wavelength                               = 1.110538d-16             !< m                         
real(c_double), bind(C), protected :: D_reduced_tau_compton_wavelength                             = 0.000075d-16             !< m                         

real(c_double), bind(C), protected :: rydberg_constant                                             = 10973731.568160d0        !< m^-1                      
real(c_double), bind(C), protected :: D_rydberg_constant                                           = 0.000021d0               !< m^-1                      

real(c_double), bind(C), protected :: rydberg_constant_times_c_in_hz                               = 3.2898419602508d15       !< Hz                        
real(c_double), bind(C), protected :: D_rydberg_constant_times_c_in_hz                             = 0.0000000000064d15       !< Hz                        

real(c_double), bind(C), protected :: rydberg_constant_times_hc_in_ev                              = 13.605693122994d0        !< eV                        
real(c_double), bind(C), protected :: D_rydberg_constant_times_hc_in_ev                            = 0.000000000026d0         !< eV                        

real(c_double), bind(C), protected :: rydberg_constant_times_hc_in_j                               = 2.1798723611035d-18      !< J                         
real(c_double), bind(C), protected :: D_rydberg_constant_times_hc_in_j                             = 0.0000000000042d-18      !< J                         

real(c_double), bind(C), protected :: sackur_tetrode_constant__1_k__100_kpa                        = -1.15170753706d0         !<                           
real(c_double), bind(C), protected :: D_sackur_tetrode_constant__1_k__100_kpa                      = 0.00000000045d0          !<                           

real(c_double), bind(C), protected :: sackur_tetrode_constant__1_k__101_325_kpa                    = -1.16487052358d0         !<                           
real(c_double), bind(C), protected :: D_sackur_tetrode_constant__1_k__101_325_kpa                  = 0.00000000045d0          !<                           

real(c_double), bind(C), protected :: second_radiation_constant                                    = 1.438776877d-2           !< m K                       
real(c_double), bind(C), protected :: D_second_radiation_constant                                  = 0.0d0                    !< m K                       

real(c_double), bind(C), protected :: shielded_helion_gyromag__ratio                               = 2.037894569d8            !< s^-1 T^-1                 
real(c_double), bind(C), protected :: D_shielded_helion_gyromag__ratio                             = 0.000000024d8            !< s^-1 T^-1                 

real(c_double), bind(C), protected :: shielded_helion_gyromag__ratio_in_mhz_t                      = 32.43409942d0            !< MHz T^-1                  
real(c_double), bind(C), protected :: D_shielded_helion_gyromag__ratio_in_mhz_t                    = 0.00000038d0             !< MHz T^-1                  

real(c_double), bind(C), protected :: shielded_helion_mag__mom                                     = -1.074553090d-26         !< J T^-1                    
real(c_double), bind(C), protected :: D_shielded_helion_mag__mom                                   = 0.000000013d-26          !< J T^-1                    

real(c_double), bind(C), protected :: shielded_helion_mag__mom__to_bohr_magneton_ratio             = -1.158671471d-3          !<                           
real(c_double), bind(C), protected :: D_shielded_helion_mag__mom__to_bohr_magneton_ratio           = 0.000000014d-3           !<                           

real(c_double), bind(C), protected :: shielded_helion_mag__mom__to_nuclear_magneton_ratio          = -2.127497719d0           !<                           
real(c_double), bind(C), protected :: D_shielded_helion_mag__mom__to_nuclear_magneton_ratio        = 0.000000025d0            !<                           

real(c_double), bind(C), protected :: shielded_helion_to_proton_mag__mom__ratio                    = -0.7617665618d0          !<                           
real(c_double), bind(C), protected :: D_shielded_helion_to_proton_mag__mom__ratio                  = 0.0000000089d0           !<                           

real(c_double), bind(C), protected :: shielded_helion_to_shielded_proton_mag__mom__ratio           = -0.7617861313d0          !<                           
real(c_double), bind(C), protected :: D_shielded_helion_to_shielded_proton_mag__mom__ratio         = 0.0000000033d0           !<                           

real(c_double), bind(C), protected :: shielded_proton_gyromag__ratio                               = 2.675153151d8            !< s^-1 T^-1                 
real(c_double), bind(C), protected :: D_shielded_proton_gyromag__ratio                             = 0.000000029d8            !< s^-1 T^-1                 

real(c_double), bind(C), protected :: shielded_proton_gyromag__ratio_in_mhz_t                      = 42.57638474d0            !< MHz T^-1                  
real(c_double), bind(C), protected :: D_shielded_proton_gyromag__ratio_in_mhz_t                    = 0.00000046d0             !< MHz T^-1                  

real(c_double), bind(C), protected :: shielded_proton_mag__mom                                     = 1.410570560d-26          !< J T^-1                    
real(c_double), bind(C), protected :: D_shielded_proton_mag__mom                                   = 0.000000015d-26          !< J T^-1                    

real(c_double), bind(C), protected :: shielded_proton_mag__mom__to_bohr_magneton_ratio             = 1.520993128d-3           !<                           
real(c_double), bind(C), protected :: D_shielded_proton_mag__mom__to_bohr_magneton_ratio           = 0.000000017d-3           !<                           

real(c_double), bind(C), protected :: shielded_proton_mag__mom__to_nuclear_magneton_ratio          = 2.792775599d0            !<                           
real(c_double), bind(C), protected :: D_shielded_proton_mag__mom__to_nuclear_magneton_ratio        = 0.000000030d0            !<                           

real(c_double), bind(C), protected :: shielding_difference_of_d_and_p_in_hd                        = 2.0200d-8                !<                           
real(c_double), bind(C), protected :: D_shielding_difference_of_d_and_p_in_hd                      = 0.0020d-8                !<                           

real(c_double), bind(C), protected :: shielding_difference_of_t_and_p_in_ht                        = 2.4140d-8                !<                           
real(c_double), bind(C), protected :: D_shielding_difference_of_t_and_p_in_ht                      = 0.0020d-8                !<                           

real(c_double), bind(C), protected :: speed_of_light_in_vacuum                                     = 299792458.0d0            !< m s^-1                    
real(c_double), bind(C), protected :: D_speed_of_light_in_vacuum                                   = 0.0d0                    !< m s^-1                    

real(c_double), bind(C), protected :: standard_acceleration_of_gravity                             = 9.80665d0                !< m s^-2                    
real(c_double), bind(C), protected :: D_standard_acceleration_of_gravity                           = 0.0d0                    !< m s^-2                    

real(c_double), bind(C), protected :: standard_atmosphere                                          = 101325.0d0               !< Pa                        
real(c_double), bind(C), protected :: D_standard_atmosphere                                        = 0.0d0                    !< Pa                        

real(c_double), bind(C), protected :: standard_state_pressure                                      = 100000.0d0               !< Pa                        
real(c_double), bind(C), protected :: D_standard_state_pressure                                    = 0.0d0                    !< Pa                        

real(c_double), bind(C), protected :: stefan_boltzmann_constant                                    = 5.670374419d-8           !< W m^-2 K^-4               
real(c_double), bind(C), protected :: D_stefan_boltzmann_constant                                  = 0.0d0                    !< W m^-2 K^-4               

real(c_double), bind(C), protected :: tau_compton_wavelength                                       = 6.97771d-16              !< m                         
real(c_double), bind(C), protected :: D_tau_compton_wavelength                                     = 0.00047d-16              !< m                         

real(c_double), bind(C), protected :: tau_electron_mass_ratio                                      = 3477.23d0                !<                           
real(c_double), bind(C), protected :: D_tau_electron_mass_ratio                                    = 0.23d0                   !<                           

real(c_double), bind(C), protected :: tau_energy_equivalent                                        = 1776.86d0                !< MeV                       
real(c_double), bind(C), protected :: D_tau_energy_equivalent                                      = 0.12d0                   !< MeV                       

real(c_double), bind(C), protected :: tau_mass                                                     = 3.16754d-27              !< kg                        
real(c_double), bind(C), protected :: D_tau_mass                                                   = 0.00021d-27              !< kg                        

real(c_double), bind(C), protected :: tau_mass_energy_equivalent                                   = 2.84684d-10              !< J                         
real(c_double), bind(C), protected :: D_tau_mass_energy_equivalent                                 = 0.00019d-10              !< J                         

real(c_double), bind(C), protected :: tau_mass_in_u                                                = 1.90754d0                !< u                         
real(c_double), bind(C), protected :: D_tau_mass_in_u                                              = 0.00013d0                !< u                         

real(c_double), bind(C), protected :: tau_molar_mass                                               = 1.90754d-3               !< kg mol^-1                 
real(c_double), bind(C), protected :: D_tau_molar_mass                                             = 0.00013d-3               !< kg mol^-1                 

real(c_double), bind(C), protected :: tau_muon_mass_ratio                                          = 16.8170d0                !<                           
real(c_double), bind(C), protected :: D_tau_muon_mass_ratio                                        = 0.0011d0                 !<                           

real(c_double), bind(C), protected :: tau_neutron_mass_ratio                                       = 1.89115d0                !<                           
real(c_double), bind(C), protected :: D_tau_neutron_mass_ratio                                     = 0.00013d0                !<                           

real(c_double), bind(C), protected :: tau_proton_mass_ratio                                        = 1.89376d0                !<                           
real(c_double), bind(C), protected :: D_tau_proton_mass_ratio                                      = 0.00013d0                !<                           

real(c_double), bind(C), protected :: thomson_cross_section                                        = 6.6524587321d-29         !< m^2                       
real(c_double), bind(C), protected :: D_thomson_cross_section                                      = 0.0000000060d-29         !< m^2                       

real(c_double), bind(C), protected :: triton_electron_mass_ratio                                   = 5496.92153573d0          !<                           
real(c_double), bind(C), protected :: D_triton_electron_mass_ratio                                 = 0.00000027d0             !<                           

real(c_double), bind(C), protected :: triton_g_factor                                              = 5.957924931d0            !<                           
real(c_double), bind(C), protected :: D_triton_g_factor                                            = 0.000000012d0            !<                           

real(c_double), bind(C), protected :: triton_mag__mom                                              = 1.5046095202d-26         !< J T^-1                    
real(c_double), bind(C), protected :: D_triton_mag__mom                                            = 0.0000000030d-26         !< J T^-1                    

real(c_double), bind(C), protected :: triton_mag__mom__to_bohr_magneton_ratio                      = 1.6223936651d-3          !<                           
real(c_double), bind(C), protected :: D_triton_mag__mom__to_bohr_magneton_ratio                    = 0.0000000032d-3          !<                           

real(c_double), bind(C), protected :: triton_mag__mom__to_nuclear_magneton_ratio                   = 2.9789624656d0           !<                           
real(c_double), bind(C), protected :: D_triton_mag__mom__to_nuclear_magneton_ratio                 = 0.0000000059d0           !<                           

real(c_double), bind(C), protected :: triton_mass                                                  = 5.0073567446d-27         !< kg                        
real(c_double), bind(C), protected :: D_triton_mass                                                = 0.0000000015d-27         !< kg                        

real(c_double), bind(C), protected :: triton_mass_energy_equivalent                                = 4.5003878060d-10         !< J                         
real(c_double), bind(C), protected :: D_triton_mass_energy_equivalent                              = 0.0000000014d-10         !< J                         

real(c_double), bind(C), protected :: triton_mass_energy_equivalent_in_mev                         = 2808.92113298d0          !< MeV                       
real(c_double), bind(C), protected :: D_triton_mass_energy_equivalent_in_mev                       = 0.00000085d0             !< MeV                       

real(c_double), bind(C), protected :: triton_mass_in_u                                             = 3.01550071621d0          !< u                         
real(c_double), bind(C), protected :: D_triton_mass_in_u                                           = 0.00000000012d0          !< u                         

real(c_double), bind(C), protected :: triton_molar_mass                                            = 3.01550071517d-3         !< kg mol^-1                 
real(c_double), bind(C), protected :: D_triton_molar_mass                                          = 0.00000000092d-3         !< kg mol^-1                 

real(c_double), bind(C), protected :: triton_proton_mass_ratio                                     = 2.99371703414d0          !<                           
real(c_double), bind(C), protected :: D_triton_proton_mass_ratio                                   = 0.00000000015d0          !<                           

real(c_double), bind(C), protected :: triton_relative_atomic_mass                                  = 3.01550071621d0          !<                           
real(c_double), bind(C), protected :: D_triton_relative_atomic_mass                                = 0.00000000012d0          !<                           

real(c_double), bind(C), protected :: triton_to_proton_mag__mom__ratio                             = 1.0666399191d0           !<                           
real(c_double), bind(C), protected :: D_triton_to_proton_mag__mom__ratio                           = 0.0000000021d0           !<                           

real(c_double), bind(C), protected :: unified_atomic_mass_unit                                     = 1.66053906660d-27        !< kg                        
real(c_double), bind(C), protected :: D_unified_atomic_mass_unit                                   = 0.00000000050d-27        !< kg                        

real(c_double), bind(C), protected :: vacuum_electric_permittivity                                 = 8.8541878128d-12         !< F m^-1                    
real(c_double), bind(C), protected :: D_vacuum_electric_permittivity                               = 0.0000000013d-12         !< F m^-1                    

real(c_double), bind(C), protected :: vacuum_mag__permeability                                     = 1.25663706212d-6         !< N A^-2                    
real(c_double), bind(C), protected :: D_vacuum_mag__permeability                                   = 0.00000000019d-6         !< N A^-2                    

real(c_double), bind(C), protected :: von_klitzing_constant                                        = 25812.80745d0            !< ohm                       
real(c_double), bind(C), protected :: D_von_klitzing_constant                                      = 0.0d0                    !< ohm                       

real(c_double), bind(C), protected :: weak_mixing_angle                                            = 0.22290d0                !<                           
real(c_double), bind(C), protected :: D_weak_mixing_angle                                          = 0.00030d0                !<                           

real(c_double), bind(C), protected :: wien_frequency_displacement_law_constant                     = 5.878925757d10           !< Hz K^-1                   
real(c_double), bind(C), protected :: D_wien_frequency_displacement_law_constant                   = 0.0d0                    !< Hz K^-1                   

real(c_double), bind(C), protected :: wien_wavelength_displacement_law_constant                    = 2.897771955d-3           !< m K                       
real(c_double), bind(C), protected :: D_wien_wavelength_displacement_law_constant                  = 0.0d0                    !< m K                       

real(c_double), bind(C), protected :: w_to_z_mass_ratio                                            = 0.88153d0                !<                           
real(c_double), bind(C), protected :: D_w_to_z_mass_ratio                                          = 0.00017d0                !<                           

end module codata