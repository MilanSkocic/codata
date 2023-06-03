program example_in_f
    use iso_fortran_env
    use codata
    implicit none
    
    print *, "c=",  speed_of_light_in_vacuum
    print *, "u(c)=", u_speed_of_light_in_vacuum
end program