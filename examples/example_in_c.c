#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){

    set_codata_capi("2018", 4);
    codata_capi_print();
    char name[] = "alpha particle mass";
    printf("%+23.16e\n", codata_capi_get_value(name, strlen(name)));
    return 0;
}