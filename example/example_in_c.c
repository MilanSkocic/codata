#include <stdio.h>
#include "codata.h"

int main(void){
    printf("version = %s\n", codata_version_capi_version);
    printf("c=%f\n", SPEED_OF_LIGHT_IN_VACUUM);
    printf("U(c)=%f\n", U_SPEED_OF_LIGHT_IN_VACUUM);
    return 0;
}