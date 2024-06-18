module iapws__r797
    !! Module for IAPWS R7-97
    use iso_fortran_env
    use ieee_arithmetic
    implicit none
    private

    public :: iapws_r797_v

    
!! Parameters from IAPWS R7-97
real(real64), parameter :: T_KELVIN = 273.15d0
!! critical temperature of water in K
real(real64), parameter ::  Tc = 647.096d0 
!! critical pressure of the water in MPa
real(real64), parameter ::  pc = 22.064d0 
!! critical density of the water in kg.m-3.
real(real64), parameter :: rhoc = 322.0d0
!! Specific gas constant 0.461 526 kJ.kg-1.K-1
real(real64), parameter :: R = 0.461526d0
    
real(real64), parameter :: r1_ps = 16.53d0
real(real64), parameter :: r1_ts = 1386.0d0

!! IJn_r1f
real(real64) :: IJn_r1f(9, 3) = transpose(reshape([&
0.0d0, -2.0d0, 0.146d0, &
0.0d0, -1.0d0, -0.84548187169114d0, &
0.0d0, 0.0d0, -0.37563672040d1, &
0.0d0, 1.0d0, 0.33855169168385d1, &
0.0d0, 2.0d0, -0.95791963387872d0,&
0.0d0, 3.0d0, 0.15772038513228d0, &
0.0d0, 4.0d0, -0.16616417199501d-1, &
0.0d0, 5.0d0, -0.81214629983568d-3, &
1.0d0, -9.0d0, -0.28319080123804d-3], &
[3, 9]))

contains

pure elemental function gamma_(P, T)result(res)
    implicit none

    real(real64), intent(in) :: P
    real(real64), intent(in) :: T
    
    real(real64) :: pi
    real(real64) :: tau
    real(real64) :: res

    pi = (T+T_KELVIN)/r1_ts
    tau = P/r1_ps
    
    res = sum(IJn_r1f(:,3) * (7.1d0-pi)**IJn_r1f(:,1) * (tau-1.222d0)**IJn_r1f(:, 2))

end function

pure elemental function gamma_pi(P, T)result(res)
    implicit none
    
    real(real64), intent(in) :: P
    real(real64), intent(in) :: T
    
    real(real64) :: pi
    real(real64) :: tau
    real(real64) :: res

    pi = (T+T_KELVIN)/r1_ts
    tau = P/r1_ps

    res = sum(IJn_r1f(:,3) * IJn_r1f(:,1) * (7.1d0-pi)**(IJn_r1f(:,1)-1.0d0) * (tau-1.222d0)**IJn_r1f(:, 2))

end function

pure elemental function iapws_r797_v(P, T)result(res)
    implicit none
    
    real(real64), intent(in) :: P
    real(real64), intent(in) :: T

    real(real64) :: res
    
    res = R*(T+T_KELVIN)/P * gamma_pi(P,T)
    
end function


end module