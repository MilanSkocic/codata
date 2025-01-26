/* EXAMPLE IN C */
#include <stdio.h>
#include "codata.h"

int main(void){
    
    printf("########## EXAMPLE IN C ##########\n");

    printf("%s\n","# VERSION");
    printf("version = %s\n", codata_get_version());
    
    printf("%s\n","# CONSTANTS");
    printf("c = %f\n", SPEED_OF_LIGHT_IN_VACUUM.value);
    
    printf("%s\n","# UNCERTAINTY");
    printf("u(c) = %f\n", SPEED_OF_LIGHT_IN_VACUUM.uncertainty);
    
    printf("%s\n","# OLDER VALUES");
    printf("Mu_2022(latest) = %23.16f\n", MOLAR_MASS_CONSTANT.value);
    printf("Mu_2018 = %23.16f\n", MOLAR_MASS_CONSTANT_2018.value);
    printf("Mu_2014 = %23.16f\n", MOLAR_MASS_CONSTANT_2014.value);
    printf("Mu_2010 = %23.16f\n", MOLAR_MASS_CONSTANT_2010.value);

    return 0;
}
