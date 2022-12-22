#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){

    codata_capi_print();
    char name[] = "alpha particle mass";
    printf("%+23.16e\n", codata_capi_get_value(name, strlen(name)));

    printf("%s\n", codata_capi_get_unit_by_index(1));

    return 0;
}