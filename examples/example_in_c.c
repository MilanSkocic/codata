#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){

    char year[5] = "2014";

    /* call directly codata, the values used will be the last i.e. 2018 */
    codata_capi_print();
    char name[] = "alpha particle mass";
    printf("%+23.16e\n", codata_capi_get_value(name, strlen(name)));
    return 0;

    /* Or set the codata values that you want */
    set_codata_capi(year, 4);
    printf("%+23.16e\n", codata_capi_get_value(name, strlen(name)));
    return 0;

}