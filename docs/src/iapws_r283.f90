module iapws__r283
    !! Module for IAPWS R283
    use stdlib_kinds, only: dp
    implicit none
    private
    
    real(dp), parameter :: Tc_H2O = 647.096_dp !! Critical temperature for H2O in K
    real(dp), parameter :: Tc_D2O = 643.847_dp !! Critical temperature for D2O in K
    
    real(dp), parameter :: pc_H2O = 22.064_dp !! Critical pressure for H2O in MPa
    real(dp), parameter :: pc_D2O = 21.671_dp !! Critical pressure for H2O in MPa
    
    real(dp), parameter :: rhoc_H2O = 322.0_dp !! Critical density for H2O in kg.m-3
    real(dp), parameter :: rhoc_D2O = 356.0_dp !! Critical density for H2O in kg.m-3
    
    
    public :: Tc_H2O, Tc_D2O, pc_H2O, pc_D2O, rhoc_H2O, rhoc_D2O
    
end module
