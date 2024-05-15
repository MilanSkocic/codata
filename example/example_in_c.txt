#include <stdio.h>
#include "codata.h"

int main(void){
    
    printf("########## EXAMPLE IN C ##########\n");

    printf("%s\n","########## VERSION ##########");
    printf("version = %s\n", codata_get_version());
    
    printf("%s\n","########## CONSTANTS ##########");
    printf("c = %f\n", SPEED_OF_LIGHT_IN_VACUUM);
    
    printf("%s\n","########## UNCERTAINTY ##########");
    printf("u(c) = %f\n", U_SPEED_OF_LIGHT_IN_VACUUM);
    
    printf("%s\n","########## OLDER VALUES ##########");
    printf("Mu_2018 = %23.16f\n", MOLAR_MASS_CONSTANT_2018);
    printf("Mu_2014 = %23.16f\n", MOLAR_MASS_CONSTANT_2014);
    printf("Mu_2010 = %23.16f\n", MOLAR_MASS_CONSTANT_2010);

    return 0;
}
