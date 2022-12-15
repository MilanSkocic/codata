#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){

    codata_capi_print();
    char name[] = "ALPHA PARTICLE MASS";
    printf("%+23.16e\n", codata_capi_get_value(name, strlen(name)));
    return 0;
}