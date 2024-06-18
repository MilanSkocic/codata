module iapws__g704
    !! Module for IAPWS G7-04
    use stdlib_kinds, only: dp, int32
    use ieee_arithmetic, only: ieee_value, ieee_quiet_nan
    use iapws__r283
    implicit none
    private

integer(int32), parameter :: lengas = 5
integer(int32), parameter :: ngas_H2O = 14
integer(int32), parameter :: ngas_D2O = 7

type :: gas_type
    !! Derived type containing a allocatable string for representing a gas.
    character(len=:), allocatable :: gas !! Gas
end type
type(gas_type), allocatable, target :: f_gases(:)
character(len=:), allocatable, target :: f_gases_str

real(dp), parameter ::  T_KELVIN = 273.15_dp !! Absolute temperature in KELVIN 

real(dp), parameter ::  Tc1_H2O = Tc_H2O
real(dp), parameter ::  pc1_H2O = pc_H2O
real(dp), parameter ::  Tc1_D2O = Tc_D2O
real(dp), parameter ::  pc1_D2O = pc_D2O

real(dp), parameter :: q_H2O = -0.023767_dp !! solvent coefficient for kd in water
real(dp), parameter :: q_D2O = -0.024552_dp !! solvent coefficient for kd in heavywater

!! ABC coefficients for gases in water.
type :: abc_t
    character(len=lengas) :: gas !! Gas
    real(dp) :: A !! A Column
    real(dp) :: B !! B Column
    real(dp) :: C !! C Column
end type

!! EFGH coefficients for gases in heavywater.
type :: efgh_t
    character(len=lengas) :: gas !! Gas
    real(dp) :: E !! E Column
    real(dp) :: F !! F Column
    real(dp) :: G !! G Column
    real(dp) :: H !! H Column
end type

!! ai and bi coefficients for water
real(dp), dimension(6, 2), parameter :: aibi_H2O = reshape([&
-7.85951783_dp, 1.84408259_dp, -11.78664970_dp, 22.68074110_dp, -15.96187190_dp, 1.80122502_dp,&
1.000_dp, 1.500_dp, 3.000_dp, 3.500_dp, 4.000_dp, 7.500_dp], [6,2])

!! ai and bi coefficients for heavywater
real(dp), dimension(5, 2), parameter :: aibi_D2O = reshape([&
-7.8966570_dp, 24.7330800_dp, -27.8112800_dp,  9.3559130_dp, -9.2200830_dp, &
1.00_dp, 1.89_dp, 2.00_dp, 3.00_dp, 3.60_dp], [5, 2])

!! ABC constants water.
type(abc_t), dimension(ngas_H2O), parameter :: abc_H2O = &
    [abc_t("He", -3.52839_dp, 7.12983_dp, 4.47770_dp),&
     abc_t("Ne", -3.18301_dp, 5.31448_dp, 5.43774_dp),&
     abc_t("Ar", -8.40954_dp, 4.29587_dp, 10.52779_dp),&
     abc_t("Kr", -8.97358_dp, 3.61508_dp, 11.29963_dp),&
     abc_t("Xe", -14.21635_dp, 4.00041_dp, 15.60999_dp),&
     abc_t("H2", -4.73284_dp, 6.08954_dp, 6.06066_dp),&
     abc_t("N2", -9.67578_dp, 4.72162_dp, 11.70585_dp),&
     abc_t("O2", -9.44833_dp, 4.43822_dp, 11.42005_dp),&
     abc_t("CO", -10.52862_dp, 5.13259_dp, 12.01421_dp),&
     abc_t("CO2", -8.55445_dp, 4.01195_dp, 9.52345_dp),&
     abc_t("H2S", -4.51499_dp, 5.23538_dp, 4.42126_dp),&
     abc_t("CH4", -10.44708_dp, 4.66491_dp, 12.12986_dp),&
     abc_t("C2H6", -19.67563_dp, 4.51222_dp, 20.62567_dp),&
     abc_t("SF6", -16.56118_dp, 2.15289_dp, 20.35440_dp)]

!! ABC constants for heavywater
type(abc_t), dimension(ngas_D2O), parameter :: abc_D2O = &
    [abc_t("He", -0.72643_dp, 7.02134_dp, 2.04433_dp),&
     abc_t("Ne", -0.91999_dp, 5.65327_dp, 3.17247_dp),&
     abc_t("Ar", -7.17725_dp, 4.48177_dp, 9.31509_dp),&
     abc_t("Kr", -8.47059_dp, 3.91580_dp, 10.69433_dp),&
     abc_t("Xe", -14.46485_dp, 4.42330_dp, 15.60919_dp),&
     abc_t("D2", -5.33843_dp, 6.15723_dp, 6.53046_dp),&
     abc_t("CH4", -10.01915_dp, 4.73368_dp, 11.75711_dp)]

!! ci and di coefficients for water
real(dp), dimension(6, 2), parameter :: cidi_H2O = reshape([&
1.99274064_dp, 1.09965342_dp, -0.510839303_dp, -1.75493479_dp, -45.5170352_dp, -6.7469445d5,&
1.0_dp/3.0_dp, 2.0_dp/3.0_dp, 5.0_dp/3.0_dp, 16.0_dp/3.0_dp, 43.0_dp/3.0_dp, 110.0_dp/3.0_dp], [6,2])

!! ci and di coefficients for heavywater
real(dp), dimension(4, 2), parameter :: cidi_D2O = reshape([&
2.7072_dp, 0.58662_dp, -1.3069_dp, -45.663_dp, &
0.374_dp, 1.45_dp, 2.6_dp, 12.3_dp], [4,2])

!! EFGH constants for water
type(efgh_t), dimension(ngas_H2O), parameter :: efgh_H2O = &
[efgh_t("He", 2267.4082_dp, -2.9616_dp, -3.2604_dp, 7.8819_dp),&
 efgh_t("Ne", 2507.3022_dp, -38.6955_dp, 110.3992_dp, -71.9096_dp),&
 efgh_t("Ar", 2310.5463_dp, -46.7034_dp, 160.4066_dp, -118.3043_dp),&
 efgh_t("Kr", 2276.9722_dp, -61.1494_dp, 214.0117_dp, -159.0407_dp),&
 efgh_t("Xe", 2022.8375_dp, 16.7913_dp, -61.2401_dp, 41.9236_dp),&
 efgh_t("H2", 2286.4159_dp, 11.3397_dp, -70.7279_dp, 63.0631_dp),&
 efgh_t("N2", 2388.8777_dp, -14.9593_dp, 42.0179_dp, -29.4396_dp),&
 efgh_t("O2", 2305.0674_dp, -11.3240_dp, 25.3224_dp, -15.6449_dp),&
 efgh_t("CO", 2346.2291_dp, -57.6317_dp, 204.5324_dp, -152.6377_dp),&
 efgh_t("CO2", 1672.9376_dp, 28.1751_dp, -112.4619_dp, 85.3807_dp),&
 efgh_t("H2S", 1319.1205_dp, 14.1571_dp, -46.8361_dp, 33.2266_dp),&
 efgh_t("CH4", 2215.6977_dp, -0.1089_dp, -6.6240_dp, 4.6789_dp),&
 efgh_t("C2H6", 2143.8121_dp, 6.8859_dp, -12.6084_dp, 0.0_dp),&
 efgh_t("SF6", 2871.7265_dp, -66.7556_dp, 229.7191_dp, -172.7400_dp)]

 !! EFGH constants for heavywater
type(efgh_t), dimension(ngas_D2O), parameter :: efgh_D2O = &
[efgh_t("He", 2293.2474_dp, -54.7707_dp, 194.2924_dp, -142.1257), &
 efgh_t("Ne", 2439.6677_dp, -93.4934_dp, 330.7783_dp, -243.0100_dp),&
 efgh_t("Ar", 2269.2352_dp, -53.6321_dp, 191.8421_dp, -143.7659_dp),&
 efgh_t("Kr", 2250.3857_dp, -42.0835_dp, 140.7656_dp, -102.7592_dp),&
 efgh_t("Xe", 2038.3656_dp, 68.1228_dp, -271.3390_dp, 207.7984_dp),& 
 efgh_t("D2", 2141.3214_dp, -1.9696_dp, 1.6136_dp, 0.0_dp),&
 efgh_t("CH4", 2216.0181_dp, -40.7666_dp, 152.5778_dp, -117.7430_dp)] 
    
public :: gas_type
public :: kh, kd
public :: ngases
public :: gases, gases2

contains

pure function findgas_abc(gas, abc)result(value)
    !! Find the index of the gas in the ABC table.
    implicit none
    character(len=*), intent(in) :: gas
        !! Gas.
    type(abc_t), dimension(:), intent(in) :: abc
        !! ABC table.
    integer(int32) :: value
        !! index of the gas.
    
    !! local variables
    integer(int32) :: i

    value = 0

    do i=1, size(abc)
        if(trim(gas) .eq. abc(i)%gas)then
            value = i
            exit
        endif
    end do
end function

pure function findgas_efgh(gas, efgh)result(value)
    !! Find the index of the gas in the ABC table.
    implicit none
    character(len=*), intent(in) :: gas
        !! Gas.
    type(efgh_t), dimension(:), intent(in) :: efgh
        !! EFGH table.
    integer(int32) :: value
        !! index of gas.
    integer(int32) :: i

    value = 0

    do i=1, size(efgh)
        if(trim(gas) .eq. efgh(i)%gas)then
            value = i
            exit
        endif
    end do
end function

pure elemental function f_p1star_H2O(T)result(value)
    !! Compute p1* in H2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    real(dp) :: value
        !! p1* in MPa.
    
    real(dp) :: Tr
    real(dp) :: tau

    Tr = (T+T_KELVIN)/Tc1_H2O
    tau = 1 - Tr
    value = exp(1/(Tr) * sum(aibi_H2O(:,1)*tau**(aibi_H2O(:,2)))) * pc1_H2O
end function

pure elemental function f_p1star_D2O(T)result(value)
    !! Compute p1* in D2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    real(dp) :: value
        !! p1* in MPa.
    
    real(dp) :: Tr
    real(dp) :: tau

    Tr = (T+T_KELVIN)/Tc1_D2O
    tau = 1 - Tr
    value = exp(1/(Tr) * sum(aibi_D2O(:,1)*tau**(aibi_D2O(:,2)))) * pc1_D2O
end function

pure elemental function f_kh_p1star_H2O(T, abc)result(value)
    !! Compute kh/p1* in H2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(abc_t), intent(in) :: abc
        !! ABC coefficients.
    real(dp) :: value
        !! kH/p1* adimensional.
    
    real(dp) :: Tr
    real(dp) :: tau

    Tr = (T+T_KELVIN)/Tc1_H2O
    tau = 1 - Tr
    value = exp(abc%A/Tr + abc%B*(tau**0.355_dp)/Tr + abc%C*exp(tau)*Tr**(-0.41_dp))
end function

pure elemental function f_kh_p1star_D2O(T, abc)result(value)
    !! Compute kh/p1* in D2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(abc_t), intent(in) :: abc
        !! ABC coefficients.
    real(dp) :: value
        !! kh/p1* adimensional.
    
    real(dp) :: Tr
    real(dp) :: tau

    Tr = (T+T_KELVIN)/Tc1_D2O
    tau = 1 - Tr
    value = exp(abc%A/Tr + abc%B*(tau**0.355_dp)/Tr + abc%C*exp(tau)*Tr**(-0.41_dp))
end function

pure elemental function ft_H2O(tau)result(value)
    !! Compute f(t) for H2O.
    implicit none
    real(dp), intent(in) :: tau
        !! tau = 1-T/Tr.
    real(dp) :: value
        !! f(t) is adimensional.
    value = sum(cidi_H2O(:,1) * tau**(cidi_H2O(:,2)))
end function

pure elemental function ft_D2O(tau)result(value)
    !! Compute f(t) for D2O.
    implicit none
    real(dp), intent(in) :: tau
        !! tau = 1-T/Tr.
    real(dp) :: value
        !! f(t) is adimensional.
    value = sum(cidi_D2O(:,1) * tau**(cidi_D2O(:,2)))
end function

pure elemental function f_kh_H2O(T, abc)result(value)
    !! Compute kH in H2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(abc_t), intent(in) :: abc
        !! ABC coefficients.
    real(dp) :: value
        !! kH in MPa.
    value = f_kh_p1star_H2O(T, abc) * f_p1star_H2O(T)
end function

pure elemental function f_kh_D2O(T, abc)result(value)
    !! Compute kH in D2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(abc_t), intent(in) :: abc
        !! ABC coefficients.
    real(dp) :: value
        !! kH in MPa.
    value = f_kh_p1star_D2O(T, abc) * f_p1star_D2O(T)
end function

pure elemental function f_kd_H2O(T, efgh) result(value)
    !! Compute kd in H2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(efgh_t), intent(in) :: efgh
        !! EFGH coefficients.
    real(dp) :: value
        !! kD adimensional.
    
    real(dp) :: Tr
    real(dp) :: tau
    real(dp) :: p1
    real(dp) :: p2
    real(dp) :: p3
    real(dp) :: p4
    
    Tr = (T+T_KELVIN)/Tc1_H2O
    tau  = 1-Tr
    
    p1 = q_H2O*efgh%F
    p2 = efgh%E/(T+T_KELVIN)*ft_H2O(tau)
    p3 = (efgh%F + efgh%G*tau**(2.0_dp/3.0_dp) + efgh%H*tau)
    p4 = exp(-T/100.0_dp)

    value = exp(p1 + p2 + p3 * p4)

end function

pure elemental function f_kd_D2O(T, efgh) result(value)
    !! Compute kd in D2O.
    implicit none
    real(dp), intent(in) :: T
        !! Temperature in °C.
    type(efgh_t), intent(in) :: efgh
        !! EFGH coefficients.
    real(dp) :: value
        !! kD adimensional.
    
    real(dp) :: Tr
    real(dp) :: tau
    real(dp) :: p1
    real(dp) :: p2
    real(dp) :: p3
    real(dp) :: p4
    
    Tr = (T+T_KELVIN)/Tc1_D2O
    tau  = 1-Tr
    
    p1 = q_D2O*efgh%F
    p2 = efgh%E/(T+T_KELVIN)*ft_D2O(tau)
    p3 = (efgh%F + efgh%G*tau**(2.0_dp/3.0_dp) + efgh%H*tau)
    p4 = exp(-T/100.0_dp)

    value = exp(p1 + p2 + p3 * p4)

end function

pure subroutine kh(T, gas, heavywater, k)
    !! Compute the henry constant for a given temperature.
    implicit none
    
    ! arguments
    real(dp), intent(in) :: T(:)
        !! Temperature in °C.
    character(len=*), intent(in) :: gas
        !! Gas.
    integer(int32), intent(in) :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    real(dp), intent(out) :: k(:)
        !! Henry constant. Filled with NaNs if gas not found.
    
    ! variables
    integer(int32) :: i
    
    if(heavywater > 0)then
        i = findgas_abc(gas, abc_D2O)
        if(i==0)then
            k = ieee_value(1.0_dp, ieee_quiet_nan)
        else
            k =  f_kh_D2O(T, abc_D2O(i))
        endif
    else
        i = findgas_abc(gas, abc_H2O)
        if(i==0)then
            k = ieee_value(1.0_dp, ieee_quiet_nan)
        else
            k = f_kh_H2O(T, abc_H2O(i))
        endif
    endif

end subroutine

pure subroutine kd(T, gas, heavywater, k)
    !! Compute the vapor-liquid constant for a given temperature. 
    implicit none
    
    ! arguments
    real(dp), intent(in) :: T(:)
        !! Temperature in °C.
    character(len=*), intent(in) :: gas
        !! Gas.
    integer(int32), intent(in) :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    real(dp), intent(out) :: k(:)
        !! Vapor-liquid constant. Filled with NaNs if gas not found.
    
    ! variables
    integer(int32) :: i
    
    if(heavywater > 0)then
        i = findgas_efgh(gas, efgh_D2O)
        if(i==0)then
            k = ieee_value(1.0_dp, ieee_quiet_nan)
        else
            k =  f_kd_D2O(T, efgh_D2O(i))
        endif
    else
        i = findgas_efgh(gas, efgh_H2O)
        if(i==0)then
            k = ieee_value(1.0_dp, ieee_quiet_nan)
        else
            k = f_kd_H2O(T, efgh_H2O(i))
        endif
    endif

end subroutine

pure function ngases(heavywater)result(n)
    !! Returns the number of gases.
    implicit none
    
    ! arguments
    integer(int32), intent(in) :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    integer(int32) :: n
        !! Number of gases.

    if(heavywater > 0)then
        n = ngas_D2O
    else
        n = ngas_H2O
    endif
end function

function gases(heavywater)result(list_gases)
    !! Returns the list of available gases.
    implicit none

    ! arguments
    integer(int32), intent(in) :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    type(gas_type), pointer :: list_gases(:)
        !! Available gases.
    
    ! variables
    integer(int32) :: i, n

    if(allocated(f_gases))then
        deallocate(f_gases)
    endif

    if(heavywater > 0)then
        allocate(f_gases(ngas_D2O))
        do i=1, ngas_D2O
            if(allocated(f_gases(i)%gas))then
                deallocate(f_gases(i)%gas)
            endif
            n = len(trim(abc_D2O(i)%gas))
            allocate(character(len=n) :: f_gases(i)%gas)
            f_gases(i)%gas = trim(abc_D2O(i)%gas)
        enddo
    else
        allocate(f_gases(ngas_H2O))
        do i=1, ngas_H2O
            if(allocated(f_gases(i)%gas))then
                deallocate(f_gases(i)%gas)
            endif
            n = len(trim(abc_H2O(i)%gas))
            allocate(character(len=n) :: f_gases(i)%gas)
            f_gases(i)%gas = trim(abc_H2O(i)%gas)
        enddo
    endif
    list_gases => f_gases
end function

function gases2(heavywater)result(str_gases)
    !! Returns the available gases as a string.
    implicit none

    ! arguments
    integer(int32), intent(in) :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    character(len=:), pointer :: str_gases
        !! Available gases

    ! variables
    integer(int32) :: i, j, k, ngas
    type(gas_type), pointer :: f_gases_list(:)
    
    f_gases_list => gases(heavywater)
    ngas = size(f_gases_list)

    k = 0
    do i=1, ngas
        k = k + len(f_gases_list(i)%gas)
    enddo

    if(allocated(f_gases_str))then
        deallocate(f_gases_str)
    endif
    allocate(character(len=k+ngas) :: f_gases_str)

    i = 1
    j = 1
    k = 1
    do i=1, ngas
        do j=1, len(f_gases_list(i)%gas)
            f_gases_str(k:k) = f_gases_list(i)%gas(j:j)
            k = k + 1
        enddo
        f_gases_str(k:k) = ","
        k = k + 1
    enddo
    f_gases_str(len(f_gases_str):len(f_gases_str)) = ""
    str_gases => f_gases_str

end function

end module
