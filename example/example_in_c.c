#include <stdio.h>
#include "codata.h"

int main(void){
    
    printf("%s\n","########## VERSION ##########");
    printf("version = %s\n", codata_get_version());
    
    printf("%s\n","########## CONSTANTS ##########");
    printf("c=%f\n", SPEED_OF_LIGHT_IN_VACUUM);
    
    printf("%s\n","########## UNCERTAINTY ##########");
    printf("u(c)=%f\n", U_SPEED_OF_LIGHT_IN_VACUUM);

    return 0;
}
