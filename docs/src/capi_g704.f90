module capi__g704
    !! Module for IAPWS G704 : C API.
    use iso_fortran_env
    use iso_c_binding, only: c_double, c_int, c_ptr, c_f_pointer, c_char, c_size_t, c_null_char, c_loc
    use iapws__g704
    implicit none
    private
    
    type, bind(C) :: c_char_p
        type(c_ptr) :: p
    end type
    type :: cgas_type
        character(kind=c_char, len=1), allocatable :: gas(:)
    end type
    type(cgas_type), allocatable, target :: c_gases(:)
    type(c_char_p), allocatable, target :: char_pp(:)
    character(len=:), allocatable, target :: c_gases_str

    public :: capi_kh, capi_kd
    public :: capi_ngases
    public :: capi_gases

contains

subroutine capi_kh(T, gas, heavywater, k, size_gas, size_T)bind(C,name="iapws_g704_kh")
    !! Compute the henry constant for a given temperature.
    implicit none
    
    ! arguments
    integer(c_int), intent(in), value :: size_gas
        !! Size of the gas string.
    integer(c_size_t), intent(in), value :: size_T
        !! Size of T and k.
    real(c_double), intent(in) :: T(size_T)
        !! Temperature in °C.
    type(c_ptr), intent(in), value :: gas
        !! Gas.
    integer(c_int), intent(in), value :: heavywater 
        !! Flag if D2O (1) is used or H2O(0).
    real(c_double), intent(inout) :: k(size_T)
        !! Henry constant. Filled with NaNs if gas not found.
    
    ! variables
    character, pointer, dimension(:) :: c2f_gas
    character(len=size_gas) :: f_gas
    integer(int32) :: i

    call c_f_pointer(gas, c2f_gas, shape=[size_gas])

    do i=1, size_gas
        f_gas(i:i) = c2f_gas(i)
    enddo
    call kh(T, f_gas, heavywater, k)    
end subroutine

subroutine capi_kd(T, gas, heavywater, k, size_gas, size_T)bind(C,name="iapws_g704_kd")
    !! Compute the vapor-liquid constant for a given temperature. 
    implicit none
    
    ! arguments
    integer(c_size_t), intent(in), value :: size_T
        !! Size of T and k.
    integer(c_int), intent(in), value :: size_gas
        !! Size of the gas string.
    real(c_double), intent(in) :: T(size_T)
        !! Temperature in °C.
    type(c_ptr), intent(in), value :: gas
        !! Gas.
    integer(c_int), intent(in), value :: heavywater 
        !! Flag if D2O (1) is used or H2O(0).
    real(c_double), intent(inout) :: k(size_T)
        !! Vapor-liquid constant. Filled with NaNs if gas not found.
    
    ! variables
    character, pointer, dimension(:) :: c2f_gas
    character(len=size_gas) :: f_gas
    integer(int32) :: i

    call c_f_pointer(gas, c2f_gas, shape=[size_gas])

    do i=1, size_gas
        f_gas(i:i) = c2f_gas(i)
    enddo
    call kd(T, f_gas, heavywater, k)    
end subroutine

pure function capi_ngases(heavywater)bind(C, name="iapws_g704_ngases")result(n)
    !! Returns the number of gases.
    implicit none
    
    ! arguments
    integer(c_int), intent(in), value :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    integer(c_int) :: n
        !! Number of gases.

    n = ngases(heavywater)
end function

function capi_gases(heavywater)bind(C, name="iapws_g704_gases")result(list_gases)
    !! Returns the list of available gases.
    implicit none

    ! arguments
    integer(c_int), intent(in), value :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    type(c_ptr) :: list_gases
        !! Available gases.
    
    ! variables
    integer(int32) :: i, j, ngas, n

    type(gas_type), pointer :: f_gases(:) => null()
    f_gases => gases(heavywater)
    ngas = size(f_gases)

    if(allocated(c_gases))then
        deallocate(c_gases)
    endif
    allocate(c_gases(ngas))

    if(allocated(char_pp))then
        deallocate(char_pp)
    endif
    allocate(char_pp(ngas))

    do i=1, ngas
        if(allocated(c_gases(i)%gas))then
            deallocate(c_gases(i)%gas)
        endif
        n = len(f_gases(i)%gas)
        allocate(c_gases(i)%gas(n+1))
        do j=1, n
            c_gases(i)%gas(j) = f_gases(i)%gas(j:j)
        enddo
        c_gases(i)%gas(n+1) = c_null_char
        char_pp(i)%p = c_loc(c_gases(i)%gas)
    enddo
    list_gases = c_loc(char_pp)
end function

function capi_gases2(heavywater)bind(C, name="iapws_g704_gases2")result(str_gases)
    !! Returns the available gases as a string.
    implicit none

    ! arguments
    integer(c_int), intent(in), value :: heavywater
        !! Flag if D2O (1) is used or H2O(0).
    type(c_ptr) :: str_gases
        !! Available gases.

    ! variables
    character(len=:), pointer :: f_gases_str => null()
    f_gases_str => gases2(heavywater)

    if(allocated(c_gases_str))then
        deallocate(c_gases_str)
    endif
    allocate(character(len=len(f_gases_str)) :: c_gases_str)

    c_gases_str = f_gases_str
    c_gases_str(len(f_gases_str):len(f_gases_str)) = c_null_char

    str_gases = c_loc(c_gases_str)

end function

end module
