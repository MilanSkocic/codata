!> 
!! @file
!! @brief 
!! Fundamental Physical Constants --- Complete Listing                                                                                                                                                                                                             
!! 2018 CODATA adjustment                                                                                                                                                                                                                                          
!! @details
!! From:  http://physics.nist.gov/constants                                                                                                                                                                                                                        
!! @example example_in_fortran.f90
!! @details How to us codata in Fortran.
!! 

!>@brief Fundamental Physical Constants (CODATA).
module codata
use iso_c_binding
implicit none
real(c_double), protected, bind(C, name="ALPHA_PARTICLE_ELECTRON_MASS_RATIO") ::  & 
ALPHA_PARTICLE_ELECTRON_MASS_RATIO = 7294.29954142d0          !<                           
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO") ::  & 
U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO = 0.00000024d0             !<                           

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_MASS") ::  & 
ALPHA_PARTICLE_MASS = 6.6446573357d-27         !< kg                        
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_MASS") ::  & 
U_ALPHA_PARTICLE_MASS = 0.0000000020d-27         !< kg                        

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT") ::  & 
ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT = 5.9719201914d-10         !< J                         
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT") ::  & 
U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT = 0.0000000018d-10         !< J                         

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV = 3727.3794066d0           !< MeV                       
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.0000011d0              !< MeV                       

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_MASS_IN_U") ::  & 
ALPHA_PARTICLE_MASS_IN_U = 4.001506179127d0         !< u                         
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_MASS_IN_U") ::  & 
U_ALPHA_PARTICLE_MASS_IN_U = 0.000000000063d0         !< u                         

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_MOLAR_MASS") ::  & 
ALPHA_PARTICLE_MOLAR_MASS = 4.0015061777d-3          !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_MOLAR_MASS") ::  & 
U_ALPHA_PARTICLE_MOLAR_MASS = 0.0000000012d-3          !< kg mol^-1                 

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_PROTON_MASS_RATIO") ::  & 
ALPHA_PARTICLE_PROTON_MASS_RATIO = 3.97259969009d0          !<                           
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_PROTON_MASS_RATIO") ::  & 
U_ALPHA_PARTICLE_PROTON_MASS_RATIO = 0.00000000022d0          !<                           

real(c_double), protected, bind(C, name="ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS") ::  & 
ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS = 4.001506179127d0         !<                           
real(c_double), protected, bind(C, name="U_ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS") ::  & 
U_ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS = 0.000000000063d0         !<                           

real(c_double), protected, bind(C, name="ANGSTROM_STAR") ::  & 
ANGSTROM_STAR = 1.00001495d-10           !< m                         
real(c_double), protected, bind(C, name="U_ANGSTROM_STAR") ::  & 
U_ANGSTROM_STAR = 0.00000090d-10           !< m                         

real(c_double), protected, bind(C, name="ATOMIC_MASS_CONSTANT") ::  & 
ATOMIC_MASS_CONSTANT = 1.66053906660d-27        !< kg                        
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_CONSTANT") ::  & 
U_ATOMIC_MASS_CONSTANT = 0.00000000050d-27        !< kg                        

real(c_double), protected, bind(C, name="ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT") ::  & 
ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT = 1.49241808560d-10        !< J                         
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT") ::  & 
U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT = 0.00000000045d-10        !< J                         

real(c_double), protected, bind(C, name="ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV") ::  & 
ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV = 931.49410242d0           !< MeV                       
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV = 0.00000028d0             !< MeV                       

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP = 9.3149410242d8           !< eV                        
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP = 0.0000000028d8           !< eV                        

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP = 3.4231776874d7           !< E_h                       
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP = 0.0000000010d7           !< E_h                       

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP = 2.25234271871d23         !< Hz                        
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP = 0.00000000068d23         !< Hz                        

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP = 7.5130066104d14          !< m^-1                      
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP = 0.0000000023d14          !< m^-1                      

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP = 1.49241808560d-10        !< J                         
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP = 0.00000000045d-10        !< J                         

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP = 1.08095401916d13         !< K                         
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP = 0.00000000033d13         !< K                         

real(c_double), protected, bind(C, name="ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP") ::  & 
ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP = 1.66053906660d-27        !< kg                        
real(c_double), protected, bind(C, name="U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP") ::  & 
U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP = 0.00000000050d-27        !< kg                        

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY") ::  & 
ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY = 3.2063613061d-53         !< C^3 m^3 J^-2              
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY") ::  & 
U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY = 0.0000000015d-53         !< C^3 m^3 J^-2              

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY") ::  & 
ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY = 6.2353799905d-65         !< C^4 m^4 J^-3              
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY") ::  & 
U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY = 0.0000000038d-65         !< C^4 m^4 J^-3              

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ACTION") ::  & 
ATOMIC_UNIT_OF_ACTION = 1.054571817d-34          !< J s                       
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ACTION") ::  & 
U_ATOMIC_UNIT_OF_ACTION = 0.0d0                    !< J s                       

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_CHARGE") ::  & 
ATOMIC_UNIT_OF_CHARGE = 1.602176634d-19          !< C                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_CHARGE") ::  & 
U_ATOMIC_UNIT_OF_CHARGE = 0.0d0                    !< C                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_CHARGE_DENSITY") ::  & 
ATOMIC_UNIT_OF_CHARGE_DENSITY = 1.08120238457d12         !< C m^-3                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_CHARGE_DENSITY") ::  & 
U_ATOMIC_UNIT_OF_CHARGE_DENSITY = 0.00000000049d12         !< C m^-3                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_CURRENT") ::  & 
ATOMIC_UNIT_OF_CURRENT = 6.623618237510d-3        !< A                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_CURRENT") ::  & 
U_ATOMIC_UNIT_OF_CURRENT = 0.000000000013d-3        !< A                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM = 8.4783536255d-30         !< C m                       
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM = 0.0000000013d-30         !< C m                       

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_FIELD") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_FIELD = 5.14220674763d11         !< V m^-1                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_FIELD") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_FIELD = 0.00000000078d11         !< V m^-1                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT = 9.7173624292d21          !< V m^-2                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT = 0.0000000029d21          !< V m^-2                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY = 1.64877727436d-41        !< C^2 m^2 J^-1              
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY = 0.00000000050d-41        !< C^2 m^2 J^-1              

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL = 27.211386245988d0        !< V                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL = 0.000000000053d0         !< V                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM") ::  & 
ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM = 4.4865515246d-40         !< C m^2                     
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM") ::  & 
U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM = 0.0000000014d-40         !< C m^2                     

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_ENERGY") ::  & 
ATOMIC_UNIT_OF_ENERGY = 4.3597447222071d-18      !< J                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_ENERGY") ::  & 
U_ATOMIC_UNIT_OF_ENERGY = 0.0000000000085d-18      !< J                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_FORCE") ::  & 
ATOMIC_UNIT_OF_FORCE = 8.2387234983d-8          !< N                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_FORCE") ::  & 
U_ATOMIC_UNIT_OF_FORCE = 0.0000000012d-8          !< N                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_LENGTH") ::  & 
ATOMIC_UNIT_OF_LENGTH = 5.29177210903d-11        !< m                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_LENGTH") ::  & 
U_ATOMIC_UNIT_OF_LENGTH = 0.00000000080d-11        !< m                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_MAG__DIPOLE_MOM") ::  & 
ATOMIC_UNIT_OF_MAG__DIPOLE_MOM = 1.85480201566d-23        !< J T^-1                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM") ::  & 
U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM = 0.00000000056d-23        !< J T^-1                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_MAG__FLUX_DENSITY") ::  & 
ATOMIC_UNIT_OF_MAG__FLUX_DENSITY = 2.35051756758d5          !< T                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY") ::  & 
U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY = 0.00000000071d5          !< T                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_MAGNETIZABILITY") ::  & 
ATOMIC_UNIT_OF_MAGNETIZABILITY = 7.8910366008d-29         !< J T^-2                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_MAGNETIZABILITY") ::  & 
U_ATOMIC_UNIT_OF_MAGNETIZABILITY = 0.0000000048d-29         !< J T^-2                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_MASS") ::  & 
ATOMIC_UNIT_OF_MASS = 9.1093837015d-31         !< kg                        
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_MASS") ::  & 
U_ATOMIC_UNIT_OF_MASS = 0.0000000028d-31         !< kg                        

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_MOMENTUM") ::  & 
ATOMIC_UNIT_OF_MOMENTUM = 1.99285191410d-24        !< kg m s^-1                 
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_MOMENTUM") ::  & 
U_ATOMIC_UNIT_OF_MOMENTUM = 0.00000000030d-24        !< kg m s^-1                 

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_PERMITTIVITY") ::  & 
ATOMIC_UNIT_OF_PERMITTIVITY = 1.11265005545d-10        !< F m^-1                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_PERMITTIVITY") ::  & 
U_ATOMIC_UNIT_OF_PERMITTIVITY = 0.00000000017d-10        !< F m^-1                    

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_TIME") ::  & 
ATOMIC_UNIT_OF_TIME = 2.4188843265857d-17      !< s                         
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_TIME") ::  & 
U_ATOMIC_UNIT_OF_TIME = 0.0000000000047d-17      !< s                         

real(c_double), protected, bind(C, name="ATOMIC_UNIT_OF_VELOCITY") ::  & 
ATOMIC_UNIT_OF_VELOCITY = 2.18769126364d6          !< m s^-1                    
real(c_double), protected, bind(C, name="U_ATOMIC_UNIT_OF_VELOCITY") ::  & 
U_ATOMIC_UNIT_OF_VELOCITY = 0.00000000033d6          !< m s^-1                    

real(c_double), protected, bind(C, name="AVOGADRO_CONSTANT") ::  & 
AVOGADRO_CONSTANT = 6.02214076d23            !< mol^-1                    
real(c_double), protected, bind(C, name="U_AVOGADRO_CONSTANT") ::  & 
U_AVOGADRO_CONSTANT = 0.0d0                    !< mol^-1                    

real(c_double), protected, bind(C, name="BOHR_MAGNETON") ::  & 
BOHR_MAGNETON = 9.2740100783d-24         !< J T^-1                    
real(c_double), protected, bind(C, name="U_BOHR_MAGNETON") ::  & 
U_BOHR_MAGNETON = 0.0000000028d-24         !< J T^-1                    

real(c_double), protected, bind(C, name="BOHR_MAGNETON_IN_EV_T") ::  & 
BOHR_MAGNETON_IN_EV_T = 5.7883818060d-5          !< eV T^-1                   
real(c_double), protected, bind(C, name="U_BOHR_MAGNETON_IN_EV_T") ::  & 
U_BOHR_MAGNETON_IN_EV_T = 0.0000000017d-5          !< eV T^-1                   

real(c_double), protected, bind(C, name="BOHR_MAGNETON_IN_HZ_T") ::  & 
BOHR_MAGNETON_IN_HZ_T = 1.39962449361d10         !< Hz T^-1                   
real(c_double), protected, bind(C, name="U_BOHR_MAGNETON_IN_HZ_T") ::  & 
U_BOHR_MAGNETON_IN_HZ_T = 0.00000000042d10         !< Hz T^-1                   

real(c_double), protected, bind(C, name="BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA") ::  & 
BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA = 46.686447783d0           !< m^-1 T^-1                 
real(c_double), protected, bind(C, name="U_BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA") ::  & 
U_BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA = 0.000000014d0            !< m^-1 T^-1                 

real(c_double), protected, bind(C, name="BOHR_MAGNETON_IN_K_T") ::  & 
BOHR_MAGNETON_IN_K_T = 0.67171381563d0          !< K T^-1                    
real(c_double), protected, bind(C, name="U_BOHR_MAGNETON_IN_K_T") ::  & 
U_BOHR_MAGNETON_IN_K_T = 0.00000000020d0          !< K T^-1                    

real(c_double), protected, bind(C, name="BOHR_RADIUS") ::  & 
BOHR_RADIUS = 5.29177210903d-11        !< m                         
real(c_double), protected, bind(C, name="U_BOHR_RADIUS") ::  & 
U_BOHR_RADIUS = 0.00000000080d-11        !< m                         

real(c_double), protected, bind(C, name="BOLTZMANN_CONSTANT") ::  & 
BOLTZMANN_CONSTANT = 1.380649d-23             !< J K^-1                    
real(c_double), protected, bind(C, name="U_BOLTZMANN_CONSTANT") ::  & 
U_BOLTZMANN_CONSTANT = 0.0d0                    !< J K^-1                    

real(c_double), protected, bind(C, name="BOLTZMANN_CONSTANT_IN_EV_K") ::  & 
BOLTZMANN_CONSTANT_IN_EV_K = 8.617333262d-5           !< eV K^-1                   
real(c_double), protected, bind(C, name="U_BOLTZMANN_CONSTANT_IN_EV_K") ::  & 
U_BOLTZMANN_CONSTANT_IN_EV_K = 0.0d0                    !< eV K^-1                   

real(c_double), protected, bind(C, name="BOLTZMANN_CONSTANT_IN_HZ_K") ::  & 
BOLTZMANN_CONSTANT_IN_HZ_K = 2.083661912d10           !< Hz K^-1                   
real(c_double), protected, bind(C, name="U_BOLTZMANN_CONSTANT_IN_HZ_K") ::  & 
U_BOLTZMANN_CONSTANT_IN_HZ_K = 0.0d0                    !< Hz K^-1                   

real(c_double), protected, bind(C, name="BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN") ::  & 
BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN = 69.50348004d0            !< m^-1 K^-1                 
real(c_double), protected, bind(C, name="U_BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN") ::  & 
U_BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN = 0.0d0                    !< m^-1 K^-1                 

real(c_double), protected, bind(C, name="CHARACTERISTIC_IMPEDANCE_OF_VACUUM") ::  & 
CHARACTERISTIC_IMPEDANCE_OF_VACUUM = 376.730313668d0          !< ohm                       
real(c_double), protected, bind(C, name="U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM") ::  & 
U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM = 0.000000057d0            !< ohm                       

real(c_double), protected, bind(C, name="CLASSICAL_ELECTRON_RADIUS") ::  & 
CLASSICAL_ELECTRON_RADIUS = 2.8179403262d-15         !< m                         
real(c_double), protected, bind(C, name="U_CLASSICAL_ELECTRON_RADIUS") ::  & 
U_CLASSICAL_ELECTRON_RADIUS = 0.0000000013d-15         !< m                         

real(c_double), protected, bind(C, name="COMPTON_WAVELENGTH") ::  & 
COMPTON_WAVELENGTH = 2.42631023867d-12        !< m                         
real(c_double), protected, bind(C, name="U_COMPTON_WAVELENGTH") ::  & 
U_COMPTON_WAVELENGTH = 0.00000000073d-12        !< m                         

real(c_double), protected, bind(C, name="CONDUCTANCE_QUANTUM") ::  & 
CONDUCTANCE_QUANTUM = 7.748091729d-5           !< S                         
real(c_double), protected, bind(C, name="U_CONDUCTANCE_QUANTUM") ::  & 
U_CONDUCTANCE_QUANTUM = 0.0d0                    !< S                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_AMPERE_90") ::  & 
CONVENTIONAL_VALUE_OF_AMPERE_90 = 1.00000008887d0          !< A                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_AMPERE_90") ::  & 
U_CONVENTIONAL_VALUE_OF_AMPERE_90 = 0.0d0                    !< A                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_COULOMB_90") ::  & 
CONVENTIONAL_VALUE_OF_COULOMB_90 = 1.00000008887d0          !< C                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_COULOMB_90") ::  & 
U_CONVENTIONAL_VALUE_OF_COULOMB_90 = 0.0d0                    !< C                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_FARAD_90") ::  & 
CONVENTIONAL_VALUE_OF_FARAD_90 = 0.99999998220d0          !< F                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_FARAD_90") ::  & 
U_CONVENTIONAL_VALUE_OF_FARAD_90 = 0.0d0                    !< F                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_HENRY_90") ::  & 
CONVENTIONAL_VALUE_OF_HENRY_90 = 1.00000001779d0          !< H                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_HENRY_90") ::  & 
U_CONVENTIONAL_VALUE_OF_HENRY_90 = 0.0d0                    !< H                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT") ::  & 
CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT = 483597.9d9               !< Hz V^-1                   
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT") ::  & 
U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT = 0.0d0                    !< Hz V^-1                   

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_OHM_90") ::  & 
CONVENTIONAL_VALUE_OF_OHM_90 = 1.00000001779d0          !< ohm                       
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_OHM_90") ::  & 
U_CONVENTIONAL_VALUE_OF_OHM_90 = 0.0d0                    !< ohm                       

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_VOLT_90") ::  & 
CONVENTIONAL_VALUE_OF_VOLT_90 = 1.00000010666d0          !< V                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_VOLT_90") ::  & 
U_CONVENTIONAL_VALUE_OF_VOLT_90 = 0.0d0                    !< V                         

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT") ::  & 
CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT = 25812.807d0              !< ohm                       
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT") ::  & 
U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT = 0.0d0                    !< ohm                       

real(c_double), protected, bind(C, name="CONVENTIONAL_VALUE_OF_WATT_90") ::  & 
CONVENTIONAL_VALUE_OF_WATT_90 = 1.00000019553d0          !< W                         
real(c_double), protected, bind(C, name="U_CONVENTIONAL_VALUE_OF_WATT_90") ::  & 
U_CONVENTIONAL_VALUE_OF_WATT_90 = 0.0d0                    !< W                         

real(c_double), protected, bind(C, name="COPPER_X_UNIT") ::  & 
COPPER_X_UNIT = 1.00207697d-13           !< m                         
real(c_double), protected, bind(C, name="U_COPPER_X_UNIT") ::  & 
U_COPPER_X_UNIT = 0.00000028d-13           !< m                         

real(c_double), protected, bind(C, name="DEUTERON_ELECTRON_MAG__MOM__RATIO") ::  & 
DEUTERON_ELECTRON_MAG__MOM__RATIO = -4.664345551d-4          !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_ELECTRON_MAG__MOM__RATIO") ::  & 
U_DEUTERON_ELECTRON_MAG__MOM__RATIO = 0.000000012d-4           !<                           

real(c_double), protected, bind(C, name="DEUTERON_ELECTRON_MASS_RATIO") ::  & 
DEUTERON_ELECTRON_MASS_RATIO = 3670.48296788d0          !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_ELECTRON_MASS_RATIO") ::  & 
U_DEUTERON_ELECTRON_MASS_RATIO = 0.00000013d0             !<                           

real(c_double), protected, bind(C, name="DEUTERON_G_FACTOR") ::  & 
DEUTERON_G_FACTOR = 0.8574382338d0           !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_G_FACTOR") ::  & 
U_DEUTERON_G_FACTOR = 0.0000000022d0           !<                           

real(c_double), protected, bind(C, name="DEUTERON_MAG__MOM") ::  & 
DEUTERON_MAG__MOM = 4.330735094d-27          !< J T^-1                    
real(c_double), protected, bind(C, name="U_DEUTERON_MAG__MOM") ::  & 
U_DEUTERON_MAG__MOM = 0.000000011d-27          !< J T^-1                    

real(c_double), protected, bind(C, name="DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 4.669754570d-4           !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.000000012d-4           !<                           

real(c_double), protected, bind(C, name="DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.8574382338d0           !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.0000000022d0           !<                           

real(c_double), protected, bind(C, name="DEUTERON_MASS") ::  & 
DEUTERON_MASS = 3.3435837724d-27         !< kg                        
real(c_double), protected, bind(C, name="U_DEUTERON_MASS") ::  & 
U_DEUTERON_MASS = 0.0000000010d-27         !< kg                        

real(c_double), protected, bind(C, name="DEUTERON_MASS_ENERGY_EQUIVALENT") ::  & 
DEUTERON_MASS_ENERGY_EQUIVALENT = 3.00506323102d-10        !< J                         
real(c_double), protected, bind(C, name="U_DEUTERON_MASS_ENERGY_EQUIVALENT") ::  & 
U_DEUTERON_MASS_ENERGY_EQUIVALENT = 0.00000000091d-10        !< J                         

real(c_double), protected, bind(C, name="DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV = 1875.61294257d0          !< MeV                       
real(c_double), protected, bind(C, name="U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000057d0             !< MeV                       

real(c_double), protected, bind(C, name="DEUTERON_MASS_IN_U") ::  & 
DEUTERON_MASS_IN_U = 2.013553212745d0         !< u                         
real(c_double), protected, bind(C, name="U_DEUTERON_MASS_IN_U") ::  & 
U_DEUTERON_MASS_IN_U = 0.000000000040d0         !< u                         

real(c_double), protected, bind(C, name="DEUTERON_MOLAR_MASS") ::  & 
DEUTERON_MOLAR_MASS = 2.01355321205d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_DEUTERON_MOLAR_MASS") ::  & 
U_DEUTERON_MOLAR_MASS = 0.00000000061d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="DEUTERON_NEUTRON_MAG__MOM__RATIO") ::  & 
DEUTERON_NEUTRON_MAG__MOM__RATIO = -0.44820653d0            !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_NEUTRON_MAG__MOM__RATIO") ::  & 
U_DEUTERON_NEUTRON_MAG__MOM__RATIO = 0.00000011d0             !<                           

real(c_double), protected, bind(C, name="DEUTERON_PROTON_MAG__MOM__RATIO") ::  & 
DEUTERON_PROTON_MAG__MOM__RATIO = 0.30701220939d0          !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_PROTON_MAG__MOM__RATIO") ::  & 
U_DEUTERON_PROTON_MAG__MOM__RATIO = 0.00000000079d0          !<                           

real(c_double), protected, bind(C, name="DEUTERON_PROTON_MASS_RATIO") ::  & 
DEUTERON_PROTON_MASS_RATIO = 1.99900750139d0          !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_PROTON_MASS_RATIO") ::  & 
U_DEUTERON_PROTON_MASS_RATIO = 0.00000000011d0          !<                           

real(c_double), protected, bind(C, name="DEUTERON_RELATIVE_ATOMIC_MASS") ::  & 
DEUTERON_RELATIVE_ATOMIC_MASS = 2.013553212745d0         !<                           
real(c_double), protected, bind(C, name="U_DEUTERON_RELATIVE_ATOMIC_MASS") ::  & 
U_DEUTERON_RELATIVE_ATOMIC_MASS = 0.000000000040d0         !<                           

real(c_double), protected, bind(C, name="DEUTERON_RMS_CHARGE_RADIUS") ::  & 
DEUTERON_RMS_CHARGE_RADIUS = 2.12799d-15              !< m                         
real(c_double), protected, bind(C, name="U_DEUTERON_RMS_CHARGE_RADIUS") ::  & 
U_DEUTERON_RMS_CHARGE_RADIUS = 0.00074d-15              !< m                         

real(c_double), protected, bind(C, name="ELECTRON_CHARGE_TO_MASS_QUOTIENT") ::  & 
ELECTRON_CHARGE_TO_MASS_QUOTIENT = -1.75882001076d11        !< C kg^-1                   
real(c_double), protected, bind(C, name="U_ELECTRON_CHARGE_TO_MASS_QUOTIENT") ::  & 
U_ELECTRON_CHARGE_TO_MASS_QUOTIENT = 0.00000000053d11         !< C kg^-1                   

real(c_double), protected, bind(C, name="ELECTRON_DEUTERON_MAG__MOM__RATIO") ::  & 
ELECTRON_DEUTERON_MAG__MOM__RATIO = -2143.9234915d0          !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_DEUTERON_MAG__MOM__RATIO") ::  & 
U_ELECTRON_DEUTERON_MAG__MOM__RATIO = 0.0000056d0              !<                           

real(c_double), protected, bind(C, name="ELECTRON_DEUTERON_MASS_RATIO") ::  & 
ELECTRON_DEUTERON_MASS_RATIO = 2.724437107462d-4        !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_DEUTERON_MASS_RATIO") ::  & 
U_ELECTRON_DEUTERON_MASS_RATIO = 0.000000000096d-4        !<                           

real(c_double), protected, bind(C, name="ELECTRON_G_FACTOR") ::  & 
ELECTRON_G_FACTOR = -2.00231930436256d0      !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_G_FACTOR") ::  & 
U_ELECTRON_G_FACTOR = 0.00000000000035d0       !<                           

real(c_double), protected, bind(C, name="ELECTRON_GYROMAG__RATIO") ::  & 
ELECTRON_GYROMAG__RATIO = 1.76085963023d11         !< s^-1 T^-1                 
real(c_double), protected, bind(C, name="U_ELECTRON_GYROMAG__RATIO") ::  & 
U_ELECTRON_GYROMAG__RATIO = 0.00000000053d11         !< s^-1 T^-1                 

real(c_double), protected, bind(C, name="ELECTRON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
ELECTRON_GYROMAG__RATIO_IN_MHZ_T = 28024.9514242d0          !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_ELECTRON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
U_ELECTRON_GYROMAG__RATIO_IN_MHZ_T = 0.0000085d0              !< MHz T^-1                  

real(c_double), protected, bind(C, name="ELECTRON_HELION_MASS_RATIO") ::  & 
ELECTRON_HELION_MASS_RATIO = 1.819543074573d-4        !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_HELION_MASS_RATIO") ::  & 
U_ELECTRON_HELION_MASS_RATIO = 0.000000000079d-4        !<                           

real(c_double), protected, bind(C, name="ELECTRON_MAG__MOM") ::  & 
ELECTRON_MAG__MOM = -9.2847647043d-24        !< J T^-1                    
real(c_double), protected, bind(C, name="U_ELECTRON_MAG__MOM") ::  & 
U_ELECTRON_MAG__MOM = 0.0000000028d-24         !< J T^-1                    

real(c_double), protected, bind(C, name="ELECTRON_MAG__MOM__ANOMALY") ::  & 
ELECTRON_MAG__MOM__ANOMALY = 1.15965218128d-3         !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_MAG__MOM__ANOMALY") ::  & 
U_ELECTRON_MAG__MOM__ANOMALY = 0.00000000018d-3         !<                           

real(c_double), protected, bind(C, name="ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = -1.00115965218128d0      !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.00000000000018d0       !<                           

real(c_double), protected, bind(C, name="ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = -1838.28197188d0         !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.00000011d0             !<                           

real(c_double), protected, bind(C, name="ELECTRON_MASS") ::  & 
ELECTRON_MASS = 9.1093837015d-31         !< kg                        
real(c_double), protected, bind(C, name="U_ELECTRON_MASS") ::  & 
U_ELECTRON_MASS = 0.0000000028d-31         !< kg                        

real(c_double), protected, bind(C, name="ELECTRON_MASS_ENERGY_EQUIVALENT") ::  & 
ELECTRON_MASS_ENERGY_EQUIVALENT = 8.1871057769d-14         !< J                         
real(c_double), protected, bind(C, name="U_ELECTRON_MASS_ENERGY_EQUIVALENT") ::  & 
U_ELECTRON_MASS_ENERGY_EQUIVALENT = 0.0000000025d-14         !< J                         

real(c_double), protected, bind(C, name="ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.51099895000d0          !< MeV                       
real(c_double), protected, bind(C, name="U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000000015d0          !< MeV                       

real(c_double), protected, bind(C, name="ELECTRON_MASS_IN_U") ::  & 
ELECTRON_MASS_IN_U = 5.48579909065d-4         !< u                         
real(c_double), protected, bind(C, name="U_ELECTRON_MASS_IN_U") ::  & 
U_ELECTRON_MASS_IN_U = 0.00000000016d-4         !< u                         

real(c_double), protected, bind(C, name="ELECTRON_MOLAR_MASS") ::  & 
ELECTRON_MOLAR_MASS = 5.4857990888d-7          !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_ELECTRON_MOLAR_MASS") ::  & 
U_ELECTRON_MOLAR_MASS = 0.0000000017d-7          !< kg mol^-1                 

real(c_double), protected, bind(C, name="ELECTRON_MUON_MAG__MOM__RATIO") ::  & 
ELECTRON_MUON_MAG__MOM__RATIO = 206.7669883d0            !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_MUON_MAG__MOM__RATIO") ::  & 
U_ELECTRON_MUON_MAG__MOM__RATIO = 0.0000046d0              !<                           

real(c_double), protected, bind(C, name="ELECTRON_MUON_MASS_RATIO") ::  & 
ELECTRON_MUON_MASS_RATIO = 4.83633169d-3            !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_MUON_MASS_RATIO") ::  & 
U_ELECTRON_MUON_MASS_RATIO = 0.00000011d-3            !<                           

real(c_double), protected, bind(C, name="ELECTRON_NEUTRON_MAG__MOM__RATIO") ::  & 
ELECTRON_NEUTRON_MAG__MOM__RATIO = 960.92050d0              !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_NEUTRON_MAG__MOM__RATIO") ::  & 
U_ELECTRON_NEUTRON_MAG__MOM__RATIO = 0.00023d0                !<                           

real(c_double), protected, bind(C, name="ELECTRON_NEUTRON_MASS_RATIO") ::  & 
ELECTRON_NEUTRON_MASS_RATIO = 5.4386734424d-4          !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_NEUTRON_MASS_RATIO") ::  & 
U_ELECTRON_NEUTRON_MASS_RATIO = 0.0000000026d-4          !<                           

real(c_double), protected, bind(C, name="ELECTRON_PROTON_MAG__MOM__RATIO") ::  & 
ELECTRON_PROTON_MAG__MOM__RATIO = -658.21068789d0          !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_PROTON_MAG__MOM__RATIO") ::  & 
U_ELECTRON_PROTON_MAG__MOM__RATIO = 0.00000020d0             !<                           

real(c_double), protected, bind(C, name="ELECTRON_PROTON_MASS_RATIO") ::  & 
ELECTRON_PROTON_MASS_RATIO = 5.44617021487d-4         !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_PROTON_MASS_RATIO") ::  & 
U_ELECTRON_PROTON_MASS_RATIO = 0.00000000033d-4         !<                           

real(c_double), protected, bind(C, name="ELECTRON_RELATIVE_ATOMIC_MASS") ::  & 
ELECTRON_RELATIVE_ATOMIC_MASS = 5.48579909065d-4         !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_RELATIVE_ATOMIC_MASS") ::  & 
U_ELECTRON_RELATIVE_ATOMIC_MASS = 0.00000000016d-4         !<                           

real(c_double), protected, bind(C, name="ELECTRON_TAU_MASS_RATIO") ::  & 
ELECTRON_TAU_MASS_RATIO = 2.87585d-4               !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_TAU_MASS_RATIO") ::  & 
U_ELECTRON_TAU_MASS_RATIO = 0.00019d-4               !<                           

real(c_double), protected, bind(C, name="ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO") ::  & 
ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO = 1.370933554787d-4        !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO") ::  & 
U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO = 0.000000000045d-4        !<                           

real(c_double), protected, bind(C, name="ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO") ::  & 
ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO = 864.058257d0             !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO") ::  & 
U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO = 0.000010d0               !<                           

real(c_double), protected, bind(C, name="ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO = -658.2275971d0           !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO = 0.0000072d0              !<                           

real(c_double), protected, bind(C, name="ELECTRON_TRITON_MASS_RATIO") ::  & 
ELECTRON_TRITON_MASS_RATIO = 1.819200062251d-4        !<                           
real(c_double), protected, bind(C, name="U_ELECTRON_TRITON_MASS_RATIO") ::  & 
U_ELECTRON_TRITON_MASS_RATIO = 0.000000000090d-4        !<                           

real(c_double), protected, bind(C, name="ELECTRON_VOLT") ::  & 
ELECTRON_VOLT = 1.602176634d-19          !< J                         
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT") ::  & 
U_ELECTRON_VOLT = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP = 1.07354410233d-9         !< u                         
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.00000000032d-9         !< u                         

real(c_double), protected, bind(C, name="ELECTRON_VOLT_HARTREE_RELATIONSHIP") ::  & 
ELECTRON_VOLT_HARTREE_RELATIONSHIP = 3.6749322175655d-2       !< E_h                       
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_HARTREE_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_HARTREE_RELATIONSHIP = 0.0000000000071d-2       !< E_h                       

real(c_double), protected, bind(C, name="ELECTRON_VOLT_HERTZ_RELATIONSHIP") ::  & 
ELECTRON_VOLT_HERTZ_RELATIONSHIP = 2.417989242d14           !< Hz                        
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_HERTZ_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_HERTZ_RELATIONSHIP = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP") ::  & 
ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP = 8.065543937d5            !< m^-1                      
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP = 0.0d0                    !< m^-1                      

real(c_double), protected, bind(C, name="ELECTRON_VOLT_JOULE_RELATIONSHIP") ::  & 
ELECTRON_VOLT_JOULE_RELATIONSHIP = 1.602176634d-19          !< J                         
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_JOULE_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_JOULE_RELATIONSHIP = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="ELECTRON_VOLT_KELVIN_RELATIONSHIP") ::  & 
ELECTRON_VOLT_KELVIN_RELATIONSHIP = 1.160451812d4            !< K                         
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_KELVIN_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_KELVIN_RELATIONSHIP = 0.0d0                    !< K                         

real(c_double), protected, bind(C, name="ELECTRON_VOLT_KILOGRAM_RELATIONSHIP") ::  & 
ELECTRON_VOLT_KILOGRAM_RELATIONSHIP = 1.782661921d-36          !< kg                        
real(c_double), protected, bind(C, name="U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP") ::  & 
U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP = 0.0d0                    !< kg                        

real(c_double), protected, bind(C, name="ELEMENTARY_CHARGE") ::  & 
ELEMENTARY_CHARGE = 1.602176634d-19          !< C                         
real(c_double), protected, bind(C, name="U_ELEMENTARY_CHARGE") ::  & 
U_ELEMENTARY_CHARGE = 0.0d0                    !< C                         

real(c_double), protected, bind(C, name="ELEMENTARY_CHARGE_OVER_H_BAR") ::  & 
ELEMENTARY_CHARGE_OVER_H_BAR = 1.519267447d15           !< A J^-1                    
real(c_double), protected, bind(C, name="U_ELEMENTARY_CHARGE_OVER_H_BAR") ::  & 
U_ELEMENTARY_CHARGE_OVER_H_BAR = 0.0d0                    !< A J^-1                    

real(c_double), protected, bind(C, name="FARADAY_CONSTANT") ::  & 
FARADAY_CONSTANT = 96485.33212d0            !< C mol^-1                  
real(c_double), protected, bind(C, name="U_FARADAY_CONSTANT") ::  & 
U_FARADAY_CONSTANT = 0.0d0                    !< C mol^-1                  

real(c_double), protected, bind(C, name="FERMI_COUPLING_CONSTANT") ::  & 
FERMI_COUPLING_CONSTANT = 1.1663787d-5             !< GeV^-2                    
real(c_double), protected, bind(C, name="U_FERMI_COUPLING_CONSTANT") ::  & 
U_FERMI_COUPLING_CONSTANT = 0.0000006d-5             !< GeV^-2                    

real(c_double), protected, bind(C, name="FINE_STRUCTURE_CONSTANT") ::  & 
FINE_STRUCTURE_CONSTANT = 7.2973525693d-3          !<                           
real(c_double), protected, bind(C, name="U_FINE_STRUCTURE_CONSTANT") ::  & 
U_FINE_STRUCTURE_CONSTANT = 0.0000000011d-3          !<                           

real(c_double), protected, bind(C, name="FIRST_RADIATION_CONSTANT") ::  & 
FIRST_RADIATION_CONSTANT = 3.741771852d-16          !< W m^2                     
real(c_double), protected, bind(C, name="U_FIRST_RADIATION_CONSTANT") ::  & 
U_FIRST_RADIATION_CONSTANT = 0.0d0                    !< W m^2                     

real(c_double), protected, bind(C, name="FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE") ::  & 
FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE = 1.191042972d-16          !< W m^2 sr^-1               
real(c_double), protected, bind(C, name="U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE") ::  & 
U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE = 0.0d0                    !< W m^2 sr^-1               

real(c_double), protected, bind(C, name="HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP = 2.92126232205d-8         !< u                         
real(c_double), protected, bind(C, name="U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.00000000088d-8         !< u                         

real(c_double), protected, bind(C, name="HARTREE_ELECTRON_VOLT_RELATIONSHIP") ::  & 
HARTREE_ELECTRON_VOLT_RELATIONSHIP = 27.211386245988d0        !< eV                        
real(c_double), protected, bind(C, name="U_HARTREE_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_HARTREE_ELECTRON_VOLT_RELATIONSHIP = 0.000000000053d0         !< eV                        

real(c_double), protected, bind(C, name="HARTREE_ENERGY") ::  & 
HARTREE_ENERGY = 4.3597447222071d-18      !< J                         
real(c_double), protected, bind(C, name="U_HARTREE_ENERGY") ::  & 
U_HARTREE_ENERGY = 0.0000000000085d-18      !< J                         

real(c_double), protected, bind(C, name="HARTREE_ENERGY_IN_EV") ::  & 
HARTREE_ENERGY_IN_EV = 27.211386245988d0        !< eV                        
real(c_double), protected, bind(C, name="U_HARTREE_ENERGY_IN_EV") ::  & 
U_HARTREE_ENERGY_IN_EV = 0.000000000053d0         !< eV                        

real(c_double), protected, bind(C, name="HARTREE_HERTZ_RELATIONSHIP") ::  & 
HARTREE_HERTZ_RELATIONSHIP = 6.579683920502d15        !< Hz                        
real(c_double), protected, bind(C, name="U_HARTREE_HERTZ_RELATIONSHIP") ::  & 
U_HARTREE_HERTZ_RELATIONSHIP = 0.000000000013d15        !< Hz                        

real(c_double), protected, bind(C, name="HARTREE_INVERSE_METER_RELATIONSHIP") ::  & 
HARTREE_INVERSE_METER_RELATIONSHIP = 2.1947463136320d7        !< m^-1                      
real(c_double), protected, bind(C, name="U_HARTREE_INVERSE_METER_RELATIONSHIP") ::  & 
U_HARTREE_INVERSE_METER_RELATIONSHIP = 0.0000000000043d7        !< m^-1                      

real(c_double), protected, bind(C, name="HARTREE_JOULE_RELATIONSHIP") ::  & 
HARTREE_JOULE_RELATIONSHIP = 4.3597447222071d-18      !< J                         
real(c_double), protected, bind(C, name="U_HARTREE_JOULE_RELATIONSHIP") ::  & 
U_HARTREE_JOULE_RELATIONSHIP = 0.0000000000085d-18      !< J                         

real(c_double), protected, bind(C, name="HARTREE_KELVIN_RELATIONSHIP") ::  & 
HARTREE_KELVIN_RELATIONSHIP = 3.1577502480407d5        !< K                         
real(c_double), protected, bind(C, name="U_HARTREE_KELVIN_RELATIONSHIP") ::  & 
U_HARTREE_KELVIN_RELATIONSHIP = 0.0000000000061d5        !< K                         

real(c_double), protected, bind(C, name="HARTREE_KILOGRAM_RELATIONSHIP") ::  & 
HARTREE_KILOGRAM_RELATIONSHIP = 4.8508702095432d-35      !< kg                        
real(c_double), protected, bind(C, name="U_HARTREE_KILOGRAM_RELATIONSHIP") ::  & 
U_HARTREE_KILOGRAM_RELATIONSHIP = 0.0000000000094d-35      !< kg                        

real(c_double), protected, bind(C, name="HELION_ELECTRON_MASS_RATIO") ::  & 
HELION_ELECTRON_MASS_RATIO = 5495.88528007d0          !<                           
real(c_double), protected, bind(C, name="U_HELION_ELECTRON_MASS_RATIO") ::  & 
U_HELION_ELECTRON_MASS_RATIO = 0.00000024d0             !<                           

real(c_double), protected, bind(C, name="HELION_G_FACTOR") ::  & 
HELION_G_FACTOR = -4.255250615d0           !<                           
real(c_double), protected, bind(C, name="U_HELION_G_FACTOR") ::  & 
U_HELION_G_FACTOR = 0.000000050d0            !<                           

real(c_double), protected, bind(C, name="HELION_MAG__MOM") ::  & 
HELION_MAG__MOM = -1.074617532d-26         !< J T^-1                    
real(c_double), protected, bind(C, name="U_HELION_MAG__MOM") ::  & 
U_HELION_MAG__MOM = 0.000000013d-26          !< J T^-1                    

real(c_double), protected, bind(C, name="HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO = -1.158740958d-3          !<                           
real(c_double), protected, bind(C, name="U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.000000014d-3           !<                           

real(c_double), protected, bind(C, name="HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = -2.127625307d0           !<                           
real(c_double), protected, bind(C, name="U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.000000025d0            !<                           

real(c_double), protected, bind(C, name="HELION_MASS") ::  & 
HELION_MASS = 5.0064127796d-27         !< kg                        
real(c_double), protected, bind(C, name="U_HELION_MASS") ::  & 
U_HELION_MASS = 0.0000000015d-27         !< kg                        

real(c_double), protected, bind(C, name="HELION_MASS_ENERGY_EQUIVALENT") ::  & 
HELION_MASS_ENERGY_EQUIVALENT = 4.4995394125d-10         !< J                         
real(c_double), protected, bind(C, name="U_HELION_MASS_ENERGY_EQUIVALENT") ::  & 
U_HELION_MASS_ENERGY_EQUIVALENT = 0.0000000014d-10         !< J                         

real(c_double), protected, bind(C, name="HELION_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
HELION_MASS_ENERGY_EQUIVALENT_IN_MEV = 2808.39160743d0          !< MeV                       
real(c_double), protected, bind(C, name="U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000085d0             !< MeV                       

real(c_double), protected, bind(C, name="HELION_MASS_IN_U") ::  & 
HELION_MASS_IN_U = 3.014932247175d0         !< u                         
real(c_double), protected, bind(C, name="U_HELION_MASS_IN_U") ::  & 
U_HELION_MASS_IN_U = 0.000000000097d0         !< u                         

real(c_double), protected, bind(C, name="HELION_MOLAR_MASS") ::  & 
HELION_MOLAR_MASS = 3.01493224613d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_HELION_MOLAR_MASS") ::  & 
U_HELION_MOLAR_MASS = 0.00000000091d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="HELION_PROTON_MASS_RATIO") ::  & 
HELION_PROTON_MASS_RATIO = 2.99315267167d0          !<                           
real(c_double), protected, bind(C, name="U_HELION_PROTON_MASS_RATIO") ::  & 
U_HELION_PROTON_MASS_RATIO = 0.00000000013d0          !<                           

real(c_double), protected, bind(C, name="HELION_RELATIVE_ATOMIC_MASS") ::  & 
HELION_RELATIVE_ATOMIC_MASS = 3.014932247175d0         !<                           
real(c_double), protected, bind(C, name="U_HELION_RELATIVE_ATOMIC_MASS") ::  & 
U_HELION_RELATIVE_ATOMIC_MASS = 0.000000000097d0         !<                           

real(c_double), protected, bind(C, name="HELION_SHIELDING_SHIFT") ::  & 
HELION_SHIELDING_SHIFT = 5.996743d-5              !<                           
real(c_double), protected, bind(C, name="U_HELION_SHIELDING_SHIFT") ::  & 
U_HELION_SHIELDING_SHIFT = 0.000010d-5              !<                           

real(c_double), protected, bind(C, name="HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP = 4.4398216652d-24         !< u                         
real(c_double), protected, bind(C, name="U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.0000000013d-24         !< u                         

real(c_double), protected, bind(C, name="HERTZ_ELECTRON_VOLT_RELATIONSHIP") ::  & 
HERTZ_ELECTRON_VOLT_RELATIONSHIP = 4.135667696d-15          !< eV                        
real(c_double), protected, bind(C, name="U_HERTZ_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_HERTZ_ELECTRON_VOLT_RELATIONSHIP = 0.0d0                    !< eV                        

real(c_double), protected, bind(C, name="HERTZ_HARTREE_RELATIONSHIP") ::  & 
HERTZ_HARTREE_RELATIONSHIP = 1.5198298460570d-16      !< E_h                       
real(c_double), protected, bind(C, name="U_HERTZ_HARTREE_RELATIONSHIP") ::  & 
U_HERTZ_HARTREE_RELATIONSHIP = 0.0000000000029d-16      !< E_h                       

real(c_double), protected, bind(C, name="HERTZ_INVERSE_METER_RELATIONSHIP") ::  & 
HERTZ_INVERSE_METER_RELATIONSHIP = 3.335640951d-9           !< m^-1                      
real(c_double), protected, bind(C, name="U_HERTZ_INVERSE_METER_RELATIONSHIP") ::  & 
U_HERTZ_INVERSE_METER_RELATIONSHIP = 0.0d0                    !< m^-1                      

real(c_double), protected, bind(C, name="HERTZ_JOULE_RELATIONSHIP") ::  & 
HERTZ_JOULE_RELATIONSHIP = 6.62607015d-34           !< J                         
real(c_double), protected, bind(C, name="U_HERTZ_JOULE_RELATIONSHIP") ::  & 
U_HERTZ_JOULE_RELATIONSHIP = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="HERTZ_KELVIN_RELATIONSHIP") ::  & 
HERTZ_KELVIN_RELATIONSHIP = 4.799243073d-11          !< K                         
real(c_double), protected, bind(C, name="U_HERTZ_KELVIN_RELATIONSHIP") ::  & 
U_HERTZ_KELVIN_RELATIONSHIP = 0.0d0                    !< K                         

real(c_double), protected, bind(C, name="HERTZ_KILOGRAM_RELATIONSHIP") ::  & 
HERTZ_KILOGRAM_RELATIONSHIP = 7.372497323d-51          !< kg                        
real(c_double), protected, bind(C, name="U_HERTZ_KILOGRAM_RELATIONSHIP") ::  & 
U_HERTZ_KILOGRAM_RELATIONSHIP = 0.0d0                    !< kg                        

real(c_double), protected, bind(C, name="HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133") ::  & 
HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133 = 9192631770.0d0           !< Hz                        
real(c_double), protected, bind(C, name="U_HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133") ::  & 
U_HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133 = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="INVERSE_FINE_STRUCTURE_CONSTANT") ::  & 
INVERSE_FINE_STRUCTURE_CONSTANT = 137.035999084d0          !<                           
real(c_double), protected, bind(C, name="U_INVERSE_FINE_STRUCTURE_CONSTANT") ::  & 
U_INVERSE_FINE_STRUCTURE_CONSTANT = 0.000000021d0            !<                           

real(c_double), protected, bind(C, name="INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP = 1.33102505010d-15        !< u                         
real(c_double), protected, bind(C, name="U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.00000000040d-15        !< u                         

real(c_double), protected, bind(C, name="INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP") ::  & 
INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP = 1.239841984d-6           !< eV                        
real(c_double), protected, bind(C, name="U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP = 0.0d0                    !< eV                        

real(c_double), protected, bind(C, name="INVERSE_METER_HARTREE_RELATIONSHIP") ::  & 
INVERSE_METER_HARTREE_RELATIONSHIP = 4.5563352529120d-8       !< E_h                       
real(c_double), protected, bind(C, name="U_INVERSE_METER_HARTREE_RELATIONSHIP") ::  & 
U_INVERSE_METER_HARTREE_RELATIONSHIP = 0.0000000000088d-8       !< E_h                       

real(c_double), protected, bind(C, name="INVERSE_METER_HERTZ_RELATIONSHIP") ::  & 
INVERSE_METER_HERTZ_RELATIONSHIP = 299792458.0d0            !< Hz                        
real(c_double), protected, bind(C, name="U_INVERSE_METER_HERTZ_RELATIONSHIP") ::  & 
U_INVERSE_METER_HERTZ_RELATIONSHIP = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="INVERSE_METER_JOULE_RELATIONSHIP") ::  & 
INVERSE_METER_JOULE_RELATIONSHIP = 1.986445857d-25          !< J                         
real(c_double), protected, bind(C, name="U_INVERSE_METER_JOULE_RELATIONSHIP") ::  & 
U_INVERSE_METER_JOULE_RELATIONSHIP = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="INVERSE_METER_KELVIN_RELATIONSHIP") ::  & 
INVERSE_METER_KELVIN_RELATIONSHIP = 1.438776877d-2           !< K                         
real(c_double), protected, bind(C, name="U_INVERSE_METER_KELVIN_RELATIONSHIP") ::  & 
U_INVERSE_METER_KELVIN_RELATIONSHIP = 0.0d0                    !< K                         

real(c_double), protected, bind(C, name="INVERSE_METER_KILOGRAM_RELATIONSHIP") ::  & 
INVERSE_METER_KILOGRAM_RELATIONSHIP = 2.210219094d-42          !< kg                        
real(c_double), protected, bind(C, name="U_INVERSE_METER_KILOGRAM_RELATIONSHIP") ::  & 
U_INVERSE_METER_KILOGRAM_RELATIONSHIP = 0.0d0                    !< kg                        

real(c_double), protected, bind(C, name="INVERSE_OF_CONDUCTANCE_QUANTUM") ::  & 
INVERSE_OF_CONDUCTANCE_QUANTUM = 12906.40372d0            !< ohm                       
real(c_double), protected, bind(C, name="U_INVERSE_OF_CONDUCTANCE_QUANTUM") ::  & 
U_INVERSE_OF_CONDUCTANCE_QUANTUM = 0.0d0                    !< ohm                       

real(c_double), protected, bind(C, name="JOSEPHSON_CONSTANT") ::  & 
JOSEPHSON_CONSTANT = 483597.8484d9            !< Hz V^-1                   
real(c_double), protected, bind(C, name="U_JOSEPHSON_CONSTANT") ::  & 
U_JOSEPHSON_CONSTANT = 0.0d0                    !< Hz V^-1                   

real(c_double), protected, bind(C, name="JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP = 6.7005352565d9           !< u                         
real(c_double), protected, bind(C, name="U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.0000000020d9           !< u                         

real(c_double), protected, bind(C, name="JOULE_ELECTRON_VOLT_RELATIONSHIP") ::  & 
JOULE_ELECTRON_VOLT_RELATIONSHIP = 6.241509074d18           !< eV                        
real(c_double), protected, bind(C, name="U_JOULE_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_JOULE_ELECTRON_VOLT_RELATIONSHIP = 0.0d0                    !< eV                        

real(c_double), protected, bind(C, name="JOULE_HARTREE_RELATIONSHIP") ::  & 
JOULE_HARTREE_RELATIONSHIP = 2.2937122783963d17       !< E_h                       
real(c_double), protected, bind(C, name="U_JOULE_HARTREE_RELATIONSHIP") ::  & 
U_JOULE_HARTREE_RELATIONSHIP = 0.0000000000045d17       !< E_h                       

real(c_double), protected, bind(C, name="JOULE_HERTZ_RELATIONSHIP") ::  & 
JOULE_HERTZ_RELATIONSHIP = 1.509190179d33           !< Hz                        
real(c_double), protected, bind(C, name="U_JOULE_HERTZ_RELATIONSHIP") ::  & 
U_JOULE_HERTZ_RELATIONSHIP = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="JOULE_INVERSE_METER_RELATIONSHIP") ::  & 
JOULE_INVERSE_METER_RELATIONSHIP = 5.034116567d24           !< m^-1                      
real(c_double), protected, bind(C, name="U_JOULE_INVERSE_METER_RELATIONSHIP") ::  & 
U_JOULE_INVERSE_METER_RELATIONSHIP = 0.0d0                    !< m^-1                      

real(c_double), protected, bind(C, name="JOULE_KELVIN_RELATIONSHIP") ::  & 
JOULE_KELVIN_RELATIONSHIP = 7.242970516d22           !< K                         
real(c_double), protected, bind(C, name="U_JOULE_KELVIN_RELATIONSHIP") ::  & 
U_JOULE_KELVIN_RELATIONSHIP = 0.0d0                    !< K                         

real(c_double), protected, bind(C, name="JOULE_KILOGRAM_RELATIONSHIP") ::  & 
JOULE_KILOGRAM_RELATIONSHIP = 1.112650056d-17          !< kg                        
real(c_double), protected, bind(C, name="U_JOULE_KILOGRAM_RELATIONSHIP") ::  & 
U_JOULE_KILOGRAM_RELATIONSHIP = 0.0d0                    !< kg                        

real(c_double), protected, bind(C, name="KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP = 9.2510873014d-14         !< u                         
real(c_double), protected, bind(C, name="U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.0000000028d-14         !< u                         

real(c_double), protected, bind(C, name="KELVIN_ELECTRON_VOLT_RELATIONSHIP") ::  & 
KELVIN_ELECTRON_VOLT_RELATIONSHIP = 8.617333262d-5           !< eV                        
real(c_double), protected, bind(C, name="U_KELVIN_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_KELVIN_ELECTRON_VOLT_RELATIONSHIP = 0.0d0                    !< eV                        

real(c_double), protected, bind(C, name="KELVIN_HARTREE_RELATIONSHIP") ::  & 
KELVIN_HARTREE_RELATIONSHIP = 3.1668115634556d-6       !< E_h                       
real(c_double), protected, bind(C, name="U_KELVIN_HARTREE_RELATIONSHIP") ::  & 
U_KELVIN_HARTREE_RELATIONSHIP = 0.0000000000061d-6       !< E_h                       

real(c_double), protected, bind(C, name="KELVIN_HERTZ_RELATIONSHIP") ::  & 
KELVIN_HERTZ_RELATIONSHIP = 2.083661912d10           !< Hz                        
real(c_double), protected, bind(C, name="U_KELVIN_HERTZ_RELATIONSHIP") ::  & 
U_KELVIN_HERTZ_RELATIONSHIP = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="KELVIN_INVERSE_METER_RELATIONSHIP") ::  & 
KELVIN_INVERSE_METER_RELATIONSHIP = 69.50348004d0            !< m^-1                      
real(c_double), protected, bind(C, name="U_KELVIN_INVERSE_METER_RELATIONSHIP") ::  & 
U_KELVIN_INVERSE_METER_RELATIONSHIP = 0.0d0                    !< m^-1                      

real(c_double), protected, bind(C, name="KELVIN_JOULE_RELATIONSHIP") ::  & 
KELVIN_JOULE_RELATIONSHIP = 1.380649d-23             !< J                         
real(c_double), protected, bind(C, name="U_KELVIN_JOULE_RELATIONSHIP") ::  & 
U_KELVIN_JOULE_RELATIONSHIP = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="KELVIN_KILOGRAM_RELATIONSHIP") ::  & 
KELVIN_KILOGRAM_RELATIONSHIP = 1.536179187d-40          !< kg                        
real(c_double), protected, bind(C, name="U_KELVIN_KILOGRAM_RELATIONSHIP") ::  & 
U_KELVIN_KILOGRAM_RELATIONSHIP = 0.0d0                    !< kg                        

real(c_double), protected, bind(C, name="KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP = 6.0221407621d26          !< u                         
real(c_double), protected, bind(C, name="U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP") ::  & 
U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP = 0.0000000018d26          !< u                         

real(c_double), protected, bind(C, name="KILOGRAM_ELECTRON_VOLT_RELATIONSHIP") ::  & 
KILOGRAM_ELECTRON_VOLT_RELATIONSHIP = 5.609588603d35           !< eV                        
real(c_double), protected, bind(C, name="U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP") ::  & 
U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP = 0.0d0                    !< eV                        

real(c_double), protected, bind(C, name="KILOGRAM_HARTREE_RELATIONSHIP") ::  & 
KILOGRAM_HARTREE_RELATIONSHIP = 2.0614857887409d34       !< E_h                       
real(c_double), protected, bind(C, name="U_KILOGRAM_HARTREE_RELATIONSHIP") ::  & 
U_KILOGRAM_HARTREE_RELATIONSHIP = 0.0000000000040d34       !< E_h                       

real(c_double), protected, bind(C, name="KILOGRAM_HERTZ_RELATIONSHIP") ::  & 
KILOGRAM_HERTZ_RELATIONSHIP = 1.356392489d50           !< Hz                        
real(c_double), protected, bind(C, name="U_KILOGRAM_HERTZ_RELATIONSHIP") ::  & 
U_KILOGRAM_HERTZ_RELATIONSHIP = 0.0d0                    !< Hz                        

real(c_double), protected, bind(C, name="KILOGRAM_INVERSE_METER_RELATIONSHIP") ::  & 
KILOGRAM_INVERSE_METER_RELATIONSHIP = 4.524438335d41           !< m^-1                      
real(c_double), protected, bind(C, name="U_KILOGRAM_INVERSE_METER_RELATIONSHIP") ::  & 
U_KILOGRAM_INVERSE_METER_RELATIONSHIP = 0.0d0                    !< m^-1                      

real(c_double), protected, bind(C, name="KILOGRAM_JOULE_RELATIONSHIP") ::  & 
KILOGRAM_JOULE_RELATIONSHIP = 8.987551787d16           !< J                         
real(c_double), protected, bind(C, name="U_KILOGRAM_JOULE_RELATIONSHIP") ::  & 
U_KILOGRAM_JOULE_RELATIONSHIP = 0.0d0                    !< J                         

real(c_double), protected, bind(C, name="KILOGRAM_KELVIN_RELATIONSHIP") ::  & 
KILOGRAM_KELVIN_RELATIONSHIP = 6.509657260d39           !< K                         
real(c_double), protected, bind(C, name="U_KILOGRAM_KELVIN_RELATIONSHIP") ::  & 
U_KILOGRAM_KELVIN_RELATIONSHIP = 0.0d0                    !< K                         

real(c_double), protected, bind(C, name="LATTICE_PARAMETER_OF_SILICON") ::  & 
LATTICE_PARAMETER_OF_SILICON = 5.431020511d-10          !< m                         
real(c_double), protected, bind(C, name="U_LATTICE_PARAMETER_OF_SILICON") ::  & 
U_LATTICE_PARAMETER_OF_SILICON = 0.000000089d-10          !< m                         

real(c_double), protected, bind(C, name="LATTICE_SPACING_OF_IDEAL_SI__220") ::  & 
LATTICE_SPACING_OF_IDEAL_SI__220 = 1.920155716d-10          !< m                         
real(c_double), protected, bind(C, name="U_LATTICE_SPACING_OF_IDEAL_SI__220") ::  & 
U_LATTICE_SPACING_OF_IDEAL_SI__220 = 0.000000032d-10          !< m                         

real(c_double), protected, bind(C, name="LOSCHMIDT_CONSTANT__273_15_K__100_KPA") ::  & 
LOSCHMIDT_CONSTANT__273_15_K__100_KPA = 2.651645804d25           !< m^-3                      
real(c_double), protected, bind(C, name="U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA") ::  & 
U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA = 0.0d0                    !< m^-3                      

real(c_double), protected, bind(C, name="LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA") ::  & 
LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA = 2.686780111d25           !< m^-3                      
real(c_double), protected, bind(C, name="U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA") ::  & 
U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA = 0.0d0                    !< m^-3                      

real(c_double), protected, bind(C, name="LUMINOUS_EFFICACY") ::  & 
LUMINOUS_EFFICACY = 683.0d0                  !< lm W^-1                   
real(c_double), protected, bind(C, name="U_LUMINOUS_EFFICACY") ::  & 
U_LUMINOUS_EFFICACY = 0.0d0                    !< lm W^-1                   

real(c_double), protected, bind(C, name="MAG__FLUX_QUANTUM") ::  & 
MAG__FLUX_QUANTUM = 2.067833848d-15          !< Wb                        
real(c_double), protected, bind(C, name="U_MAG__FLUX_QUANTUM") ::  & 
U_MAG__FLUX_QUANTUM = 0.0d0                    !< Wb                        

real(c_double), protected, bind(C, name="MOLAR_GAS_CONSTANT") ::  & 
MOLAR_GAS_CONSTANT = 8.314462618d0            !< J mol^-1 K^-1             
real(c_double), protected, bind(C, name="U_MOLAR_GAS_CONSTANT") ::  & 
U_MOLAR_GAS_CONSTANT = 0.0d0                    !< J mol^-1 K^-1             

real(c_double), protected, bind(C, name="MOLAR_MASS_CONSTANT") ::  & 
MOLAR_MASS_CONSTANT = 0.99999999965d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_MOLAR_MASS_CONSTANT") ::  & 
U_MOLAR_MASS_CONSTANT = 0.00000000030d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="MOLAR_MASS_OF_CARBON_12") ::  & 
MOLAR_MASS_OF_CARBON_12 = 11.9999999958d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_MOLAR_MASS_OF_CARBON_12") ::  & 
U_MOLAR_MASS_OF_CARBON_12 = 0.0000000036d-3          !< kg mol^-1                 

real(c_double), protected, bind(C, name="MOLAR_PLANCK_CONSTANT") ::  & 
MOLAR_PLANCK_CONSTANT = 3.990312712d-10          !< J Hz^-1 mol^-1            
real(c_double), protected, bind(C, name="U_MOLAR_PLANCK_CONSTANT") ::  & 
U_MOLAR_PLANCK_CONSTANT = 0.0d0                    !< J Hz^-1 mol^-1            

real(c_double), protected, bind(C, name="MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA") ::  & 
MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA = 22.71095464d-3           !< m^3 mol^-1                
real(c_double), protected, bind(C, name="U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA") ::  & 
U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA = 0.0d0                    !< m^3 mol^-1                

real(c_double), protected, bind(C, name="MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA") ::  & 
MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA = 22.41396954d-3           !< m^3 mol^-1                
real(c_double), protected, bind(C, name="U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA") ::  & 
U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA = 0.0d0                    !< m^3 mol^-1                

real(c_double), protected, bind(C, name="MOLAR_VOLUME_OF_SILICON") ::  & 
MOLAR_VOLUME_OF_SILICON = 1.205883199d-5           !< m^3 mol^-1                
real(c_double), protected, bind(C, name="U_MOLAR_VOLUME_OF_SILICON") ::  & 
U_MOLAR_VOLUME_OF_SILICON = 0.000000060d-5           !< m^3 mol^-1                

real(c_double), protected, bind(C, name="MOLYBDENUM_X_UNIT") ::  & 
MOLYBDENUM_X_UNIT = 1.00209952d-13           !< m                         
real(c_double), protected, bind(C, name="U_MOLYBDENUM_X_UNIT") ::  & 
U_MOLYBDENUM_X_UNIT = 0.00000053d-13           !< m                         

real(c_double), protected, bind(C, name="MUON_COMPTON_WAVELENGTH") ::  & 
MUON_COMPTON_WAVELENGTH = 1.173444110d-14          !< m                         
real(c_double), protected, bind(C, name="U_MUON_COMPTON_WAVELENGTH") ::  & 
U_MUON_COMPTON_WAVELENGTH = 0.000000026d-14          !< m                         

real(c_double), protected, bind(C, name="MUON_ELECTRON_MASS_RATIO") ::  & 
MUON_ELECTRON_MASS_RATIO = 206.7682830d0            !<                           
real(c_double), protected, bind(C, name="U_MUON_ELECTRON_MASS_RATIO") ::  & 
U_MUON_ELECTRON_MASS_RATIO = 0.0000046d0              !<                           

real(c_double), protected, bind(C, name="MUON_G_FACTOR") ::  & 
MUON_G_FACTOR = -2.0023318418d0          !<                           
real(c_double), protected, bind(C, name="U_MUON_G_FACTOR") ::  & 
U_MUON_G_FACTOR = 0.0000000013d0           !<                           

real(c_double), protected, bind(C, name="MUON_MAG__MOM") ::  & 
MUON_MAG__MOM = -4.49044830d-26          !< J T^-1                    
real(c_double), protected, bind(C, name="U_MUON_MAG__MOM") ::  & 
U_MUON_MAG__MOM = 0.00000010d-26           !< J T^-1                    

real(c_double), protected, bind(C, name="MUON_MAG__MOM__ANOMALY") ::  & 
MUON_MAG__MOM__ANOMALY = 1.16592089d-3            !<                           
real(c_double), protected, bind(C, name="U_MUON_MAG__MOM__ANOMALY") ::  & 
U_MUON_MAG__MOM__ANOMALY = 0.00000063d-3            !<                           

real(c_double), protected, bind(C, name="MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = -4.84197047d-3           !<                           
real(c_double), protected, bind(C, name="U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.00000011d-3            !<                           

real(c_double), protected, bind(C, name="MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = -8.89059703d0            !<                           
real(c_double), protected, bind(C, name="U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.00000020d0             !<                           

real(c_double), protected, bind(C, name="MUON_MASS") ::  & 
MUON_MASS = 1.883531627d-28          !< kg                        
real(c_double), protected, bind(C, name="U_MUON_MASS") ::  & 
U_MUON_MASS = 0.000000042d-28          !< kg                        

real(c_double), protected, bind(C, name="MUON_MASS_ENERGY_EQUIVALENT") ::  & 
MUON_MASS_ENERGY_EQUIVALENT = 1.692833804d-11          !< J                         
real(c_double), protected, bind(C, name="U_MUON_MASS_ENERGY_EQUIVALENT") ::  & 
U_MUON_MASS_ENERGY_EQUIVALENT = 0.000000038d-11          !< J                         

real(c_double), protected, bind(C, name="MUON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
MUON_MASS_ENERGY_EQUIVALENT_IN_MEV = 105.6583755d0            !< MeV                       
real(c_double), protected, bind(C, name="U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.0000023d0              !< MeV                       

real(c_double), protected, bind(C, name="MUON_MASS_IN_U") ::  & 
MUON_MASS_IN_U = 0.1134289259d0           !< u                         
real(c_double), protected, bind(C, name="U_MUON_MASS_IN_U") ::  & 
U_MUON_MASS_IN_U = 0.0000000025d0           !< u                         

real(c_double), protected, bind(C, name="MUON_MOLAR_MASS") ::  & 
MUON_MOLAR_MASS = 1.134289259d-4           !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_MUON_MOLAR_MASS") ::  & 
U_MUON_MOLAR_MASS = 0.000000025d-4           !< kg mol^-1                 

real(c_double), protected, bind(C, name="MUON_NEUTRON_MASS_RATIO") ::  & 
MUON_NEUTRON_MASS_RATIO = 0.1124545170d0           !<                           
real(c_double), protected, bind(C, name="U_MUON_NEUTRON_MASS_RATIO") ::  & 
U_MUON_NEUTRON_MASS_RATIO = 0.0000000025d0           !<                           

real(c_double), protected, bind(C, name="MUON_PROTON_MAG__MOM__RATIO") ::  & 
MUON_PROTON_MAG__MOM__RATIO = -3.183345142d0           !<                           
real(c_double), protected, bind(C, name="U_MUON_PROTON_MAG__MOM__RATIO") ::  & 
U_MUON_PROTON_MAG__MOM__RATIO = 0.000000071d0            !<                           

real(c_double), protected, bind(C, name="MUON_PROTON_MASS_RATIO") ::  & 
MUON_PROTON_MASS_RATIO = 0.1126095264d0           !<                           
real(c_double), protected, bind(C, name="U_MUON_PROTON_MASS_RATIO") ::  & 
U_MUON_PROTON_MASS_RATIO = 0.0000000025d0           !<                           

real(c_double), protected, bind(C, name="MUON_TAU_MASS_RATIO") ::  & 
MUON_TAU_MASS_RATIO = 5.94635d-2               !<                           
real(c_double), protected, bind(C, name="U_MUON_TAU_MASS_RATIO") ::  & 
U_MUON_TAU_MASS_RATIO = 0.00040d-2               !<                           

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_ACTION") ::  & 
NATURAL_UNIT_OF_ACTION = 1.054571817d-34          !< J s                       
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_ACTION") ::  & 
U_NATURAL_UNIT_OF_ACTION = 0.0d0                    !< J s                       

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_ACTION_IN_EV_S") ::  & 
NATURAL_UNIT_OF_ACTION_IN_EV_S = 6.582119569d-16          !< eV s                      
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_ACTION_IN_EV_S") ::  & 
U_NATURAL_UNIT_OF_ACTION_IN_EV_S = 0.0d0                    !< eV s                      

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_ENERGY") ::  & 
NATURAL_UNIT_OF_ENERGY = 8.1871057769d-14         !< J                         
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_ENERGY") ::  & 
U_NATURAL_UNIT_OF_ENERGY = 0.0000000025d-14         !< J                         

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_ENERGY_IN_MEV") ::  & 
NATURAL_UNIT_OF_ENERGY_IN_MEV = 0.51099895000d0          !< MeV                       
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_ENERGY_IN_MEV") ::  & 
U_NATURAL_UNIT_OF_ENERGY_IN_MEV = 0.00000000015d0          !< MeV                       

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_LENGTH") ::  & 
NATURAL_UNIT_OF_LENGTH = 3.8615926796d-13         !< m                         
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_LENGTH") ::  & 
U_NATURAL_UNIT_OF_LENGTH = 0.0000000012d-13         !< m                         

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_MASS") ::  & 
NATURAL_UNIT_OF_MASS = 9.1093837015d-31         !< kg                        
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_MASS") ::  & 
U_NATURAL_UNIT_OF_MASS = 0.0000000028d-31         !< kg                        

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_MOMENTUM") ::  & 
NATURAL_UNIT_OF_MOMENTUM = 2.73092453075d-22        !< kg m s^-1                 
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_MOMENTUM") ::  & 
U_NATURAL_UNIT_OF_MOMENTUM = 0.00000000082d-22        !< kg m s^-1                 

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C") ::  & 
NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C = 0.51099895000d0          !< MeV/c                     
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C") ::  & 
U_NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C = 0.00000000015d0          !< MeV/c                     

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_TIME") ::  & 
NATURAL_UNIT_OF_TIME = 1.28808866819d-21        !< s                         
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_TIME") ::  & 
U_NATURAL_UNIT_OF_TIME = 0.00000000039d-21        !< s                         

real(c_double), protected, bind(C, name="NATURAL_UNIT_OF_VELOCITY") ::  & 
NATURAL_UNIT_OF_VELOCITY = 299792458.0d0            !< m s^-1                    
real(c_double), protected, bind(C, name="U_NATURAL_UNIT_OF_VELOCITY") ::  & 
U_NATURAL_UNIT_OF_VELOCITY = 0.0d0                    !< m s^-1                    

real(c_double), protected, bind(C, name="NEUTRON_COMPTON_WAVELENGTH") ::  & 
NEUTRON_COMPTON_WAVELENGTH = 1.31959090581d-15        !< m                         
real(c_double), protected, bind(C, name="U_NEUTRON_COMPTON_WAVELENGTH") ::  & 
U_NEUTRON_COMPTON_WAVELENGTH = 0.00000000075d-15        !< m                         

real(c_double), protected, bind(C, name="NEUTRON_ELECTRON_MAG__MOM__RATIO") ::  & 
NEUTRON_ELECTRON_MAG__MOM__RATIO = 1.04066882d-3            !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_ELECTRON_MAG__MOM__RATIO") ::  & 
U_NEUTRON_ELECTRON_MAG__MOM__RATIO = 0.00000025d-3            !<                           

real(c_double), protected, bind(C, name="NEUTRON_ELECTRON_MASS_RATIO") ::  & 
NEUTRON_ELECTRON_MASS_RATIO = 1838.68366173d0          !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_ELECTRON_MASS_RATIO") ::  & 
U_NEUTRON_ELECTRON_MASS_RATIO = 0.00000089d0             !<                           

real(c_double), protected, bind(C, name="NEUTRON_G_FACTOR") ::  & 
NEUTRON_G_FACTOR = -3.82608545d0            !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_G_FACTOR") ::  & 
U_NEUTRON_G_FACTOR = 0.00000090d0             !<                           

real(c_double), protected, bind(C, name="NEUTRON_GYROMAG__RATIO") ::  & 
NEUTRON_GYROMAG__RATIO = 1.83247171d8             !< s^-1 T^-1                 
real(c_double), protected, bind(C, name="U_NEUTRON_GYROMAG__RATIO") ::  & 
U_NEUTRON_GYROMAG__RATIO = 0.00000043d8             !< s^-1 T^-1                 

real(c_double), protected, bind(C, name="NEUTRON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
NEUTRON_GYROMAG__RATIO_IN_MHZ_T = 29.1646931d0             !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_NEUTRON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
U_NEUTRON_GYROMAG__RATIO_IN_MHZ_T = 0.0000069d0              !< MHz T^-1                  

real(c_double), protected, bind(C, name="NEUTRON_MAG__MOM") ::  & 
NEUTRON_MAG__MOM = -9.6623651d-27           !< J T^-1                    
real(c_double), protected, bind(C, name="U_NEUTRON_MAG__MOM") ::  & 
U_NEUTRON_MAG__MOM = 0.0000023d-27            !< J T^-1                    

real(c_double), protected, bind(C, name="NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = -1.04187563d-3           !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.00000025d-3            !<                           

real(c_double), protected, bind(C, name="NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = -1.91304273d0            !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.00000045d0             !<                           

real(c_double), protected, bind(C, name="NEUTRON_MASS") ::  & 
NEUTRON_MASS = 1.67492749804d-27        !< kg                        
real(c_double), protected, bind(C, name="U_NEUTRON_MASS") ::  & 
U_NEUTRON_MASS = 0.00000000095d-27        !< kg                        

real(c_double), protected, bind(C, name="NEUTRON_MASS_ENERGY_EQUIVALENT") ::  & 
NEUTRON_MASS_ENERGY_EQUIVALENT = 1.50534976287d-10        !< J                         
real(c_double), protected, bind(C, name="U_NEUTRON_MASS_ENERGY_EQUIVALENT") ::  & 
U_NEUTRON_MASS_ENERGY_EQUIVALENT = 0.00000000086d-10        !< J                         

real(c_double), protected, bind(C, name="NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV = 939.56542052d0           !< MeV                       
real(c_double), protected, bind(C, name="U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000054d0             !< MeV                       

real(c_double), protected, bind(C, name="NEUTRON_MASS_IN_U") ::  & 
NEUTRON_MASS_IN_U = 1.00866491595d0          !< u                         
real(c_double), protected, bind(C, name="U_NEUTRON_MASS_IN_U") ::  & 
U_NEUTRON_MASS_IN_U = 0.00000000049d0          !< u                         

real(c_double), protected, bind(C, name="NEUTRON_MOLAR_MASS") ::  & 
NEUTRON_MOLAR_MASS = 1.00866491560d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_NEUTRON_MOLAR_MASS") ::  & 
U_NEUTRON_MOLAR_MASS = 0.00000000057d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="NEUTRON_MUON_MASS_RATIO") ::  & 
NEUTRON_MUON_MASS_RATIO = 8.89248406d0             !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_MUON_MASS_RATIO") ::  & 
U_NEUTRON_MUON_MASS_RATIO = 0.00000020d0             !<                           

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MAG__MOM__RATIO") ::  & 
NEUTRON_PROTON_MAG__MOM__RATIO = -0.68497934d0            !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MAG__MOM__RATIO") ::  & 
U_NEUTRON_PROTON_MAG__MOM__RATIO = 0.00000016d0             !<                           

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MASS_DIFFERENCE") ::  & 
NEUTRON_PROTON_MASS_DIFFERENCE = 2.30557435d-30           !< kg                        
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MASS_DIFFERENCE") ::  & 
U_NEUTRON_PROTON_MASS_DIFFERENCE = 0.00000082d-30           !< kg                        

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT") ::  & 
NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT = 2.07214689d-13           !< J                         
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT") ::  & 
U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT = 0.00000074d-13           !< J                         

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV") ::  & 
NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV = 1.29333236d0             !< MeV                       
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV = 0.00000046d0             !< MeV                       

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MASS_DIFFERENCE_IN_U") ::  & 
NEUTRON_PROTON_MASS_DIFFERENCE_IN_U = 1.38844933d-3            !< u                         
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U") ::  & 
U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U = 0.00000049d-3            !< u                         

real(c_double), protected, bind(C, name="NEUTRON_PROTON_MASS_RATIO") ::  & 
NEUTRON_PROTON_MASS_RATIO = 1.00137841931d0          !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_PROTON_MASS_RATIO") ::  & 
U_NEUTRON_PROTON_MASS_RATIO = 0.00000000049d0          !<                           

real(c_double), protected, bind(C, name="NEUTRON_RELATIVE_ATOMIC_MASS") ::  & 
NEUTRON_RELATIVE_ATOMIC_MASS = 1.00866491595d0          !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_RELATIVE_ATOMIC_MASS") ::  & 
U_NEUTRON_RELATIVE_ATOMIC_MASS = 0.00000000049d0          !<                           

real(c_double), protected, bind(C, name="NEUTRON_TAU_MASS_RATIO") ::  & 
NEUTRON_TAU_MASS_RATIO = 0.528779d0               !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_TAU_MASS_RATIO") ::  & 
U_NEUTRON_TAU_MASS_RATIO = 0.000036d0               !<                           

real(c_double), protected, bind(C, name="NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO = -0.68499694d0            !<                           
real(c_double), protected, bind(C, name="U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO = 0.00000016d0             !<                           

real(c_double), protected, bind(C, name="NEWTONIAN_CONSTANT_OF_GRAVITATION") ::  & 
NEWTONIAN_CONSTANT_OF_GRAVITATION = 6.67430d-11              !< m^3 kg^-1 s^-2            
real(c_double), protected, bind(C, name="U_NEWTONIAN_CONSTANT_OF_GRAVITATION") ::  & 
U_NEWTONIAN_CONSTANT_OF_GRAVITATION = 0.00015d-11              !< m^3 kg^-1 s^-2            

real(c_double), protected, bind(C, name="NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C") ::  & 
NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C = 6.70883d-39              !< (GeV/c^2)^-2              
real(c_double), protected, bind(C, name="U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C") ::  & 
U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C = 0.00015d-39              !< (GeV/c^2)^-2              

real(c_double), protected, bind(C, name="NUCLEAR_MAGNETON") ::  & 
NUCLEAR_MAGNETON = 5.0507837461d-27         !< J T^-1                    
real(c_double), protected, bind(C, name="U_NUCLEAR_MAGNETON") ::  & 
U_NUCLEAR_MAGNETON = 0.0000000015d-27         !< J T^-1                    

real(c_double), protected, bind(C, name="NUCLEAR_MAGNETON_IN_EV_T") ::  & 
NUCLEAR_MAGNETON_IN_EV_T = 3.15245125844d-8         !< eV T^-1                   
real(c_double), protected, bind(C, name="U_NUCLEAR_MAGNETON_IN_EV_T") ::  & 
U_NUCLEAR_MAGNETON_IN_EV_T = 0.00000000096d-8         !< eV T^-1                   

real(c_double), protected, bind(C, name="NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA") ::  & 
NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA = 2.54262341353d-2         !< m^-1 T^-1                 
real(c_double), protected, bind(C, name="U_NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA") ::  & 
U_NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA = 0.00000000078d-2         !< m^-1 T^-1                 

real(c_double), protected, bind(C, name="NUCLEAR_MAGNETON_IN_K_T") ::  & 
NUCLEAR_MAGNETON_IN_K_T = 3.6582677756d-4          !< K T^-1                    
real(c_double), protected, bind(C, name="U_NUCLEAR_MAGNETON_IN_K_T") ::  & 
U_NUCLEAR_MAGNETON_IN_K_T = 0.0000000011d-4          !< K T^-1                    

real(c_double), protected, bind(C, name="NUCLEAR_MAGNETON_IN_MHZ_T") ::  & 
NUCLEAR_MAGNETON_IN_MHZ_T = 7.6225932291d0           !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_NUCLEAR_MAGNETON_IN_MHZ_T") ::  & 
U_NUCLEAR_MAGNETON_IN_MHZ_T = 0.0000000023d0           !< MHz T^-1                  

real(c_double), protected, bind(C, name="PLANCK_CONSTANT") ::  & 
PLANCK_CONSTANT = 6.62607015d-34           !< J Hz^-1                   
real(c_double), protected, bind(C, name="U_PLANCK_CONSTANT") ::  & 
U_PLANCK_CONSTANT = 0.0d0                    !< J Hz^-1                   

real(c_double), protected, bind(C, name="PLANCK_CONSTANT_IN_EV_HZ") ::  & 
PLANCK_CONSTANT_IN_EV_HZ = 4.135667696d-15          !< eV Hz^-1                  
real(c_double), protected, bind(C, name="U_PLANCK_CONSTANT_IN_EV_HZ") ::  & 
U_PLANCK_CONSTANT_IN_EV_HZ = 0.0d0                    !< eV Hz^-1                  

real(c_double), protected, bind(C, name="PLANCK_LENGTH") ::  & 
PLANCK_LENGTH = 1.616255d-35             !< m                         
real(c_double), protected, bind(C, name="U_PLANCK_LENGTH") ::  & 
U_PLANCK_LENGTH = 0.000018d-35             !< m                         

real(c_double), protected, bind(C, name="PLANCK_MASS") ::  & 
PLANCK_MASS = 2.176434d-8              !< kg                        
real(c_double), protected, bind(C, name="U_PLANCK_MASS") ::  & 
U_PLANCK_MASS = 0.000024d-8              !< kg                        

real(c_double), protected, bind(C, name="PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV") ::  & 
PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV = 1.220890d19              !< GeV                       
real(c_double), protected, bind(C, name="U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV") ::  & 
U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV = 0.000014d19              !< GeV                       

real(c_double), protected, bind(C, name="PLANCK_TEMPERATURE") ::  & 
PLANCK_TEMPERATURE = 1.416784d32              !< K                         
real(c_double), protected, bind(C, name="U_PLANCK_TEMPERATURE") ::  & 
U_PLANCK_TEMPERATURE = 0.000016d32              !< K                         

real(c_double), protected, bind(C, name="PLANCK_TIME") ::  & 
PLANCK_TIME = 5.391247d-44             !< s                         
real(c_double), protected, bind(C, name="U_PLANCK_TIME") ::  & 
U_PLANCK_TIME = 0.000060d-44             !< s                         

real(c_double), protected, bind(C, name="PROTON_CHARGE_TO_MASS_QUOTIENT") ::  & 
PROTON_CHARGE_TO_MASS_QUOTIENT = 9.5788331560d7           !< C kg^-1                   
real(c_double), protected, bind(C, name="U_PROTON_CHARGE_TO_MASS_QUOTIENT") ::  & 
U_PROTON_CHARGE_TO_MASS_QUOTIENT = 0.0000000029d7           !< C kg^-1                   

real(c_double), protected, bind(C, name="PROTON_COMPTON_WAVELENGTH") ::  & 
PROTON_COMPTON_WAVELENGTH = 1.32140985539d-15        !< m                         
real(c_double), protected, bind(C, name="U_PROTON_COMPTON_WAVELENGTH") ::  & 
U_PROTON_COMPTON_WAVELENGTH = 0.00000000040d-15        !< m                         

real(c_double), protected, bind(C, name="PROTON_ELECTRON_MASS_RATIO") ::  & 
PROTON_ELECTRON_MASS_RATIO = 1836.15267343d0          !<                           
real(c_double), protected, bind(C, name="U_PROTON_ELECTRON_MASS_RATIO") ::  & 
U_PROTON_ELECTRON_MASS_RATIO = 0.00000011d0             !<                           

real(c_double), protected, bind(C, name="PROTON_G_FACTOR") ::  & 
PROTON_G_FACTOR = 5.5856946893d0           !<                           
real(c_double), protected, bind(C, name="U_PROTON_G_FACTOR") ::  & 
U_PROTON_G_FACTOR = 0.0000000016d0           !<                           

real(c_double), protected, bind(C, name="PROTON_GYROMAG__RATIO") ::  & 
PROTON_GYROMAG__RATIO = 2.6752218744d8           !< s^-1 T^-1                 
real(c_double), protected, bind(C, name="U_PROTON_GYROMAG__RATIO") ::  & 
U_PROTON_GYROMAG__RATIO = 0.0000000011d8           !< s^-1 T^-1                 

real(c_double), protected, bind(C, name="PROTON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
PROTON_GYROMAG__RATIO_IN_MHZ_T = 42.577478518d0           !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_PROTON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
U_PROTON_GYROMAG__RATIO_IN_MHZ_T = 0.000000018d0            !< MHz T^-1                  

real(c_double), protected, bind(C, name="PROTON_MAG__MOM") ::  & 
PROTON_MAG__MOM = 1.41060679736d-26        !< J T^-1                    
real(c_double), protected, bind(C, name="U_PROTON_MAG__MOM") ::  & 
U_PROTON_MAG__MOM = 0.00000000060d-26        !< J T^-1                    

real(c_double), protected, bind(C, name="PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 1.52103220230d-3         !<                           
real(c_double), protected, bind(C, name="U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.00000000046d-3         !<                           

real(c_double), protected, bind(C, name="PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 2.79284734463d0          !<                           
real(c_double), protected, bind(C, name="U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.00000000082d0          !<                           

real(c_double), protected, bind(C, name="PROTON_MAG__SHIELDING_CORRECTION") ::  & 
PROTON_MAG__SHIELDING_CORRECTION = 2.5689d-5                !<                           
real(c_double), protected, bind(C, name="U_PROTON_MAG__SHIELDING_CORRECTION") ::  & 
U_PROTON_MAG__SHIELDING_CORRECTION = 0.0011d-5                !<                           

real(c_double), protected, bind(C, name="PROTON_MASS") ::  & 
PROTON_MASS = 1.67262192369d-27        !< kg                        
real(c_double), protected, bind(C, name="U_PROTON_MASS") ::  & 
U_PROTON_MASS = 0.00000000051d-27        !< kg                        

real(c_double), protected, bind(C, name="PROTON_MASS_ENERGY_EQUIVALENT") ::  & 
PROTON_MASS_ENERGY_EQUIVALENT = 1.50327761598d-10        !< J                         
real(c_double), protected, bind(C, name="U_PROTON_MASS_ENERGY_EQUIVALENT") ::  & 
U_PROTON_MASS_ENERGY_EQUIVALENT = 0.00000000046d-10        !< J                         

real(c_double), protected, bind(C, name="PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV = 938.27208816d0           !< MeV                       
real(c_double), protected, bind(C, name="U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000029d0             !< MeV                       

real(c_double), protected, bind(C, name="PROTON_MASS_IN_U") ::  & 
PROTON_MASS_IN_U = 1.007276466621d0         !< u                         
real(c_double), protected, bind(C, name="U_PROTON_MASS_IN_U") ::  & 
U_PROTON_MASS_IN_U = 0.000000000053d0         !< u                         

real(c_double), protected, bind(C, name="PROTON_MOLAR_MASS") ::  & 
PROTON_MOLAR_MASS = 1.00727646627d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_PROTON_MOLAR_MASS") ::  & 
U_PROTON_MOLAR_MASS = 0.00000000031d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="PROTON_MUON_MASS_RATIO") ::  & 
PROTON_MUON_MASS_RATIO = 8.88024337d0             !<                           
real(c_double), protected, bind(C, name="U_PROTON_MUON_MASS_RATIO") ::  & 
U_PROTON_MUON_MASS_RATIO = 0.00000020d0             !<                           

real(c_double), protected, bind(C, name="PROTON_NEUTRON_MAG__MOM__RATIO") ::  & 
PROTON_NEUTRON_MAG__MOM__RATIO = -1.45989805d0            !<                           
real(c_double), protected, bind(C, name="U_PROTON_NEUTRON_MAG__MOM__RATIO") ::  & 
U_PROTON_NEUTRON_MAG__MOM__RATIO = 0.00000034d0             !<                           

real(c_double), protected, bind(C, name="PROTON_NEUTRON_MASS_RATIO") ::  & 
PROTON_NEUTRON_MASS_RATIO = 0.99862347812d0          !<                           
real(c_double), protected, bind(C, name="U_PROTON_NEUTRON_MASS_RATIO") ::  & 
U_PROTON_NEUTRON_MASS_RATIO = 0.00000000049d0          !<                           

real(c_double), protected, bind(C, name="PROTON_RELATIVE_ATOMIC_MASS") ::  & 
PROTON_RELATIVE_ATOMIC_MASS = 1.007276466621d0         !<                           
real(c_double), protected, bind(C, name="U_PROTON_RELATIVE_ATOMIC_MASS") ::  & 
U_PROTON_RELATIVE_ATOMIC_MASS = 0.000000000053d0         !<                           

real(c_double), protected, bind(C, name="PROTON_RMS_CHARGE_RADIUS") ::  & 
PROTON_RMS_CHARGE_RADIUS = 8.414d-16                !< m                         
real(c_double), protected, bind(C, name="U_PROTON_RMS_CHARGE_RADIUS") ::  & 
U_PROTON_RMS_CHARGE_RADIUS = 0.019d-16                !< m                         

real(c_double), protected, bind(C, name="PROTON_TAU_MASS_RATIO") ::  & 
PROTON_TAU_MASS_RATIO = 0.528051d0               !<                           
real(c_double), protected, bind(C, name="U_PROTON_TAU_MASS_RATIO") ::  & 
U_PROTON_TAU_MASS_RATIO = 0.000036d0               !<                           

real(c_double), protected, bind(C, name="QUANTUM_OF_CIRCULATION") ::  & 
QUANTUM_OF_CIRCULATION = 3.6369475516d-4          !< m^2 s^-1                  
real(c_double), protected, bind(C, name="U_QUANTUM_OF_CIRCULATION") ::  & 
U_QUANTUM_OF_CIRCULATION = 0.0000000011d-4          !< m^2 s^-1                  

real(c_double), protected, bind(C, name="QUANTUM_OF_CIRCULATION_TIMES_2") ::  & 
QUANTUM_OF_CIRCULATION_TIMES_2 = 7.2738951032d-4          !< m^2 s^-1                  
real(c_double), protected, bind(C, name="U_QUANTUM_OF_CIRCULATION_TIMES_2") ::  & 
U_QUANTUM_OF_CIRCULATION_TIMES_2 = 0.0000000022d-4          !< m^2 s^-1                  

real(c_double), protected, bind(C, name="REDUCED_COMPTON_WAVELENGTH") ::  & 
REDUCED_COMPTON_WAVELENGTH = 3.8615926796d-13         !< m                         
real(c_double), protected, bind(C, name="U_REDUCED_COMPTON_WAVELENGTH") ::  & 
U_REDUCED_COMPTON_WAVELENGTH = 0.0000000012d-13         !< m                         

real(c_double), protected, bind(C, name="REDUCED_MUON_COMPTON_WAVELENGTH") ::  & 
REDUCED_MUON_COMPTON_WAVELENGTH = 1.867594306d-15          !< m                         
real(c_double), protected, bind(C, name="U_REDUCED_MUON_COMPTON_WAVELENGTH") ::  & 
U_REDUCED_MUON_COMPTON_WAVELENGTH = 0.000000042d-15          !< m                         

real(c_double), protected, bind(C, name="REDUCED_NEUTRON_COMPTON_WAVELENGTH") ::  & 
REDUCED_NEUTRON_COMPTON_WAVELENGTH = 2.1001941552d-16         !< m                         
real(c_double), protected, bind(C, name="U_REDUCED_NEUTRON_COMPTON_WAVELENGTH") ::  & 
U_REDUCED_NEUTRON_COMPTON_WAVELENGTH = 0.0000000012d-16         !< m                         

real(c_double), protected, bind(C, name="REDUCED_PLANCK_CONSTANT") ::  & 
REDUCED_PLANCK_CONSTANT = 1.054571817d-34          !< J s                       
real(c_double), protected, bind(C, name="U_REDUCED_PLANCK_CONSTANT") ::  & 
U_REDUCED_PLANCK_CONSTANT = 0.0d0                    !< J s                       

real(c_double), protected, bind(C, name="REDUCED_PLANCK_CONSTANT_IN_EV_S") ::  & 
REDUCED_PLANCK_CONSTANT_IN_EV_S = 6.582119569d-16          !< eV s                      
real(c_double), protected, bind(C, name="U_REDUCED_PLANCK_CONSTANT_IN_EV_S") ::  & 
U_REDUCED_PLANCK_CONSTANT_IN_EV_S = 0.0d0                    !< eV s                      

real(c_double), protected, bind(C, name="REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM") ::  & 
REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM = 197.3269804d0            !< MeV fm                    
real(c_double), protected, bind(C, name="U_REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM") ::  & 
U_REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM = 0.0d0                    !< MeV fm                    

real(c_double), protected, bind(C, name="REDUCED_PROTON_COMPTON_WAVELENGTH") ::  & 
REDUCED_PROTON_COMPTON_WAVELENGTH = 2.10308910336d-16        !< m                         
real(c_double), protected, bind(C, name="U_REDUCED_PROTON_COMPTON_WAVELENGTH") ::  & 
U_REDUCED_PROTON_COMPTON_WAVELENGTH = 0.00000000064d-16        !< m                         

real(c_double), protected, bind(C, name="REDUCED_TAU_COMPTON_WAVELENGTH") ::  & 
REDUCED_TAU_COMPTON_WAVELENGTH = 1.110538d-16             !< m                         
real(c_double), protected, bind(C, name="U_REDUCED_TAU_COMPTON_WAVELENGTH") ::  & 
U_REDUCED_TAU_COMPTON_WAVELENGTH = 0.000075d-16             !< m                         

real(c_double), protected, bind(C, name="RYDBERG_CONSTANT") ::  & 
RYDBERG_CONSTANT = 10973731.568160d0        !< m^-1                      
real(c_double), protected, bind(C, name="U_RYDBERG_CONSTANT") ::  & 
U_RYDBERG_CONSTANT = 0.000021d0               !< m^-1                      

real(c_double), protected, bind(C, name="RYDBERG_CONSTANT_TIMES_C_IN_HZ") ::  & 
RYDBERG_CONSTANT_TIMES_C_IN_HZ = 3.2898419602508d15       !< Hz                        
real(c_double), protected, bind(C, name="U_RYDBERG_CONSTANT_TIMES_C_IN_HZ") ::  & 
U_RYDBERG_CONSTANT_TIMES_C_IN_HZ = 0.0000000000064d15       !< Hz                        

real(c_double), protected, bind(C, name="RYDBERG_CONSTANT_TIMES_HC_IN_EV") ::  & 
RYDBERG_CONSTANT_TIMES_HC_IN_EV = 13.605693122994d0        !< eV                        
real(c_double), protected, bind(C, name="U_RYDBERG_CONSTANT_TIMES_HC_IN_EV") ::  & 
U_RYDBERG_CONSTANT_TIMES_HC_IN_EV = 0.000000000026d0         !< eV                        

real(c_double), protected, bind(C, name="RYDBERG_CONSTANT_TIMES_HC_IN_J") ::  & 
RYDBERG_CONSTANT_TIMES_HC_IN_J = 2.1798723611035d-18      !< J                         
real(c_double), protected, bind(C, name="U_RYDBERG_CONSTANT_TIMES_HC_IN_J") ::  & 
U_RYDBERG_CONSTANT_TIMES_HC_IN_J = 0.0000000000042d-18      !< J                         

real(c_double), protected, bind(C, name="SACKUR_TETRODE_CONSTANT__1_K__100_KPA") ::  & 
SACKUR_TETRODE_CONSTANT__1_K__100_KPA = -1.15170753706d0         !<                           
real(c_double), protected, bind(C, name="U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA") ::  & 
U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA = 0.00000000045d0          !<                           

real(c_double), protected, bind(C, name="SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA") ::  & 
SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA = -1.16487052358d0         !<                           
real(c_double), protected, bind(C, name="U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA") ::  & 
U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA = 0.00000000045d0          !<                           

real(c_double), protected, bind(C, name="SECOND_RADIATION_CONSTANT") ::  & 
SECOND_RADIATION_CONSTANT = 1.438776877d-2           !< m K                       
real(c_double), protected, bind(C, name="U_SECOND_RADIATION_CONSTANT") ::  & 
U_SECOND_RADIATION_CONSTANT = 0.0d0                    !< m K                       

real(c_double), protected, bind(C, name="SHIELDED_HELION_GYROMAG__RATIO") ::  & 
SHIELDED_HELION_GYROMAG__RATIO = 2.037894569d8            !< s^-1 T^-1                 
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_GYROMAG__RATIO") ::  & 
U_SHIELDED_HELION_GYROMAG__RATIO = 0.000000024d8            !< s^-1 T^-1                 

real(c_double), protected, bind(C, name="SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T") ::  & 
SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T = 32.43409942d0            !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T") ::  & 
U_SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T = 0.00000038d0             !< MHz T^-1                  

real(c_double), protected, bind(C, name="SHIELDED_HELION_MAG__MOM") ::  & 
SHIELDED_HELION_MAG__MOM = -1.074553090d-26         !< J T^-1                    
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_MAG__MOM") ::  & 
U_SHIELDED_HELION_MAG__MOM = 0.000000013d-26          !< J T^-1                    

real(c_double), protected, bind(C, name="SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO = -1.158671471d-3          !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.000000014d-3           !<                           

real(c_double), protected, bind(C, name="SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = -2.127497719d0           !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.000000025d0            !<                           

real(c_double), protected, bind(C, name="SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO") ::  & 
SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO = -0.7617665618d0          !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO") ::  & 
U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO = 0.0000000089d0           !<                           

real(c_double), protected, bind(C, name="SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO = -0.7617861313d0          !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO") ::  & 
U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO = 0.0000000033d0           !<                           

real(c_double), protected, bind(C, name="SHIELDED_PROTON_GYROMAG__RATIO") ::  & 
SHIELDED_PROTON_GYROMAG__RATIO = 2.675153151d8            !< s^-1 T^-1                 
real(c_double), protected, bind(C, name="U_SHIELDED_PROTON_GYROMAG__RATIO") ::  & 
U_SHIELDED_PROTON_GYROMAG__RATIO = 0.000000029d8            !< s^-1 T^-1                 

real(c_double), protected, bind(C, name="SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T = 42.57638474d0            !< MHz T^-1                  
real(c_double), protected, bind(C, name="U_SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T") ::  & 
U_SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T = 0.00000046d0             !< MHz T^-1                  

real(c_double), protected, bind(C, name="SHIELDED_PROTON_MAG__MOM") ::  & 
SHIELDED_PROTON_MAG__MOM = 1.410570560d-26          !< J T^-1                    
real(c_double), protected, bind(C, name="U_SHIELDED_PROTON_MAG__MOM") ::  & 
U_SHIELDED_PROTON_MAG__MOM = 0.000000015d-26          !< J T^-1                    

real(c_double), protected, bind(C, name="SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 1.520993128d-3           !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.000000017d-3           !<                           

real(c_double), protected, bind(C, name="SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 2.792775599d0            !<                           
real(c_double), protected, bind(C, name="U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.000000030d0            !<                           

real(c_double), protected, bind(C, name="SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD") ::  & 
SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD = 2.0200d-8                !<                           
real(c_double), protected, bind(C, name="U_SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD") ::  & 
U_SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD = 0.0020d-8                !<                           

real(c_double), protected, bind(C, name="SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT") ::  & 
SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT = 2.4140d-8                !<                           
real(c_double), protected, bind(C, name="U_SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT") ::  & 
U_SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT = 0.0020d-8                !<                           

real(c_double), protected, bind(C, name="SPEED_OF_LIGHT_IN_VACUUM") ::  & 
SPEED_OF_LIGHT_IN_VACUUM = 299792458.0d0            !< m s^-1                    
real(c_double), protected, bind(C, name="U_SPEED_OF_LIGHT_IN_VACUUM") ::  & 
U_SPEED_OF_LIGHT_IN_VACUUM = 0.0d0                    !< m s^-1                    

real(c_double), protected, bind(C, name="STANDARD_ACCELERATION_OF_GRAVITY") ::  & 
STANDARD_ACCELERATION_OF_GRAVITY = 9.80665d0                !< m s^-2                    
real(c_double), protected, bind(C, name="U_STANDARD_ACCELERATION_OF_GRAVITY") ::  & 
U_STANDARD_ACCELERATION_OF_GRAVITY = 0.0d0                    !< m s^-2                    

real(c_double), protected, bind(C, name="STANDARD_ATMOSPHERE") ::  & 
STANDARD_ATMOSPHERE = 101325.0d0               !< Pa                        
real(c_double), protected, bind(C, name="U_STANDARD_ATMOSPHERE") ::  & 
U_STANDARD_ATMOSPHERE = 0.0d0                    !< Pa                        

real(c_double), protected, bind(C, name="STANDARD_STATE_PRESSURE") ::  & 
STANDARD_STATE_PRESSURE = 100000.0d0               !< Pa                        
real(c_double), protected, bind(C, name="U_STANDARD_STATE_PRESSURE") ::  & 
U_STANDARD_STATE_PRESSURE = 0.0d0                    !< Pa                        

real(c_double), protected, bind(C, name="STEFAN_BOLTZMANN_CONSTANT") ::  & 
STEFAN_BOLTZMANN_CONSTANT = 5.670374419d-8           !< W m^-2 K^-4               
real(c_double), protected, bind(C, name="U_STEFAN_BOLTZMANN_CONSTANT") ::  & 
U_STEFAN_BOLTZMANN_CONSTANT = 0.0d0                    !< W m^-2 K^-4               

real(c_double), protected, bind(C, name="TAU_COMPTON_WAVELENGTH") ::  & 
TAU_COMPTON_WAVELENGTH = 6.97771d-16              !< m                         
real(c_double), protected, bind(C, name="U_TAU_COMPTON_WAVELENGTH") ::  & 
U_TAU_COMPTON_WAVELENGTH = 0.00047d-16              !< m                         

real(c_double), protected, bind(C, name="TAU_ELECTRON_MASS_RATIO") ::  & 
TAU_ELECTRON_MASS_RATIO = 3477.23d0                !<                           
real(c_double), protected, bind(C, name="U_TAU_ELECTRON_MASS_RATIO") ::  & 
U_TAU_ELECTRON_MASS_RATIO = 0.23d0                   !<                           

real(c_double), protected, bind(C, name="TAU_ENERGY_EQUIVALENT") ::  & 
TAU_ENERGY_EQUIVALENT = 1776.86d0                !< MeV                       
real(c_double), protected, bind(C, name="U_TAU_ENERGY_EQUIVALENT") ::  & 
U_TAU_ENERGY_EQUIVALENT = 0.12d0                   !< MeV                       

real(c_double), protected, bind(C, name="TAU_MASS") ::  & 
TAU_MASS = 3.16754d-27              !< kg                        
real(c_double), protected, bind(C, name="U_TAU_MASS") ::  & 
U_TAU_MASS = 0.00021d-27              !< kg                        

real(c_double), protected, bind(C, name="TAU_MASS_ENERGY_EQUIVALENT") ::  & 
TAU_MASS_ENERGY_EQUIVALENT = 2.84684d-10              !< J                         
real(c_double), protected, bind(C, name="U_TAU_MASS_ENERGY_EQUIVALENT") ::  & 
U_TAU_MASS_ENERGY_EQUIVALENT = 0.00019d-10              !< J                         

real(c_double), protected, bind(C, name="TAU_MASS_IN_U") ::  & 
TAU_MASS_IN_U = 1.90754d0                !< u                         
real(c_double), protected, bind(C, name="U_TAU_MASS_IN_U") ::  & 
U_TAU_MASS_IN_U = 0.00013d0                !< u                         

real(c_double), protected, bind(C, name="TAU_MOLAR_MASS") ::  & 
TAU_MOLAR_MASS = 1.90754d-3               !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_TAU_MOLAR_MASS") ::  & 
U_TAU_MOLAR_MASS = 0.00013d-3               !< kg mol^-1                 

real(c_double), protected, bind(C, name="TAU_MUON_MASS_RATIO") ::  & 
TAU_MUON_MASS_RATIO = 16.8170d0                !<                           
real(c_double), protected, bind(C, name="U_TAU_MUON_MASS_RATIO") ::  & 
U_TAU_MUON_MASS_RATIO = 0.0011d0                 !<                           

real(c_double), protected, bind(C, name="TAU_NEUTRON_MASS_RATIO") ::  & 
TAU_NEUTRON_MASS_RATIO = 1.89115d0                !<                           
real(c_double), protected, bind(C, name="U_TAU_NEUTRON_MASS_RATIO") ::  & 
U_TAU_NEUTRON_MASS_RATIO = 0.00013d0                !<                           

real(c_double), protected, bind(C, name="TAU_PROTON_MASS_RATIO") ::  & 
TAU_PROTON_MASS_RATIO = 1.89376d0                !<                           
real(c_double), protected, bind(C, name="U_TAU_PROTON_MASS_RATIO") ::  & 
U_TAU_PROTON_MASS_RATIO = 0.00013d0                !<                           

real(c_double), protected, bind(C, name="THOMSON_CROSS_SECTION") ::  & 
THOMSON_CROSS_SECTION = 6.6524587321d-29         !< m^2                       
real(c_double), protected, bind(C, name="U_THOMSON_CROSS_SECTION") ::  & 
U_THOMSON_CROSS_SECTION = 0.0000000060d-29         !< m^2                       

real(c_double), protected, bind(C, name="TRITON_ELECTRON_MASS_RATIO") ::  & 
TRITON_ELECTRON_MASS_RATIO = 5496.92153573d0          !<                           
real(c_double), protected, bind(C, name="U_TRITON_ELECTRON_MASS_RATIO") ::  & 
U_TRITON_ELECTRON_MASS_RATIO = 0.00000027d0             !<                           

real(c_double), protected, bind(C, name="TRITON_G_FACTOR") ::  & 
TRITON_G_FACTOR = 5.957924931d0            !<                           
real(c_double), protected, bind(C, name="U_TRITON_G_FACTOR") ::  & 
U_TRITON_G_FACTOR = 0.000000012d0            !<                           

real(c_double), protected, bind(C, name="TRITON_MAG__MOM") ::  & 
TRITON_MAG__MOM = 1.5046095202d-26         !< J T^-1                    
real(c_double), protected, bind(C, name="U_TRITON_MAG__MOM") ::  & 
U_TRITON_MAG__MOM = 0.0000000030d-26         !< J T^-1                    

real(c_double), protected, bind(C, name="TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 1.6223936651d-3          !<                           
real(c_double), protected, bind(C, name="U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO") ::  & 
U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO = 0.0000000032d-3          !<                           

real(c_double), protected, bind(C, name="TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 2.9789624656d0           !<                           
real(c_double), protected, bind(C, name="U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO") ::  & 
U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO = 0.0000000059d0           !<                           

real(c_double), protected, bind(C, name="TRITON_MASS") ::  & 
TRITON_MASS = 5.0073567446d-27         !< kg                        
real(c_double), protected, bind(C, name="U_TRITON_MASS") ::  & 
U_TRITON_MASS = 0.0000000015d-27         !< kg                        

real(c_double), protected, bind(C, name="TRITON_MASS_ENERGY_EQUIVALENT") ::  & 
TRITON_MASS_ENERGY_EQUIVALENT = 4.5003878060d-10         !< J                         
real(c_double), protected, bind(C, name="U_TRITON_MASS_ENERGY_EQUIVALENT") ::  & 
U_TRITON_MASS_ENERGY_EQUIVALENT = 0.0000000014d-10         !< J                         

real(c_double), protected, bind(C, name="TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV = 2808.92113298d0          !< MeV                       
real(c_double), protected, bind(C, name="U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV") ::  & 
U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV = 0.00000085d0             !< MeV                       

real(c_double), protected, bind(C, name="TRITON_MASS_IN_U") ::  & 
TRITON_MASS_IN_U = 3.01550071621d0          !< u                         
real(c_double), protected, bind(C, name="U_TRITON_MASS_IN_U") ::  & 
U_TRITON_MASS_IN_U = 0.00000000012d0          !< u                         

real(c_double), protected, bind(C, name="TRITON_MOLAR_MASS") ::  & 
TRITON_MOLAR_MASS = 3.01550071517d-3         !< kg mol^-1                 
real(c_double), protected, bind(C, name="U_TRITON_MOLAR_MASS") ::  & 
U_TRITON_MOLAR_MASS = 0.00000000092d-3         !< kg mol^-1                 

real(c_double), protected, bind(C, name="TRITON_PROTON_MASS_RATIO") ::  & 
TRITON_PROTON_MASS_RATIO = 2.99371703414d0          !<                           
real(c_double), protected, bind(C, name="U_TRITON_PROTON_MASS_RATIO") ::  & 
U_TRITON_PROTON_MASS_RATIO = 0.00000000015d0          !<                           

real(c_double), protected, bind(C, name="TRITON_RELATIVE_ATOMIC_MASS") ::  & 
TRITON_RELATIVE_ATOMIC_MASS = 3.01550071621d0          !<                           
real(c_double), protected, bind(C, name="U_TRITON_RELATIVE_ATOMIC_MASS") ::  & 
U_TRITON_RELATIVE_ATOMIC_MASS = 0.00000000012d0          !<                           

real(c_double), protected, bind(C, name="TRITON_TO_PROTON_MAG__MOM__RATIO") ::  & 
TRITON_TO_PROTON_MAG__MOM__RATIO = 1.0666399191d0           !<                           
real(c_double), protected, bind(C, name="U_TRITON_TO_PROTON_MAG__MOM__RATIO") ::  & 
U_TRITON_TO_PROTON_MAG__MOM__RATIO = 0.0000000021d0           !<                           

real(c_double), protected, bind(C, name="UNIFIED_ATOMIC_MASS_UNIT") ::  & 
UNIFIED_ATOMIC_MASS_UNIT = 1.66053906660d-27        !< kg                        
real(c_double), protected, bind(C, name="U_UNIFIED_ATOMIC_MASS_UNIT") ::  & 
U_UNIFIED_ATOMIC_MASS_UNIT = 0.00000000050d-27        !< kg                        

real(c_double), protected, bind(C, name="VACUUM_ELECTRIC_PERMITTIVITY") ::  & 
VACUUM_ELECTRIC_PERMITTIVITY = 8.8541878128d-12         !< F m^-1                    
real(c_double), protected, bind(C, name="U_VACUUM_ELECTRIC_PERMITTIVITY") ::  & 
U_VACUUM_ELECTRIC_PERMITTIVITY = 0.0000000013d-12         !< F m^-1                    

real(c_double), protected, bind(C, name="VACUUM_MAG__PERMEABILITY") ::  & 
VACUUM_MAG__PERMEABILITY = 1.25663706212d-6         !< N A^-2                    
real(c_double), protected, bind(C, name="U_VACUUM_MAG__PERMEABILITY") ::  & 
U_VACUUM_MAG__PERMEABILITY = 0.00000000019d-6         !< N A^-2                    

real(c_double), protected, bind(C, name="VON_KLITZING_CONSTANT") ::  & 
VON_KLITZING_CONSTANT = 25812.80745d0            !< ohm                       
real(c_double), protected, bind(C, name="U_VON_KLITZING_CONSTANT") ::  & 
U_VON_KLITZING_CONSTANT = 0.0d0                    !< ohm                       

real(c_double), protected, bind(C, name="WEAK_MIXING_ANGLE") ::  & 
WEAK_MIXING_ANGLE = 0.22290d0                !<                           
real(c_double), protected, bind(C, name="U_WEAK_MIXING_ANGLE") ::  & 
U_WEAK_MIXING_ANGLE = 0.00030d0                !<                           

real(c_double), protected, bind(C, name="WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT") ::  & 
WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT = 5.878925757d10           !< Hz K^-1                   
real(c_double), protected, bind(C, name="U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT") ::  & 
U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT = 0.0d0                    !< Hz K^-1                   

real(c_double), protected, bind(C, name="WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT") ::  & 
WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT = 2.897771955d-3           !< m K                       
real(c_double), protected, bind(C, name="U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT") ::  & 
U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT = 0.0d0                    !< m K                       

real(c_double), protected, bind(C, name="W_TO_Z_MASS_RATIO") ::  & 
W_TO_Z_MASS_RATIO = 0.88153d0                !<                           
real(c_double), protected, bind(C, name="U_W_TO_Z_MASS_RATIO") ::  & 
U_W_TO_Z_MASS_RATIO = 0.00017d0                !<                           

end module codata