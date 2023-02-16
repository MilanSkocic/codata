#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){

    char year[5] = "2014";
    
    // avoid compiler complaining
    if (argc>1){
        printf("%d %s", argc, argv[1]);
    }

    /* call directly codata, the values used will be the last i.e. 2018 */
    codata_capi_print();
    char name[] = "alpha particle mass";
    printf("Codata 2018: %+23.16e\n", codata_capi_get_value(name, strlen(name)));
    printf("%s\n", codata_capi_get_year());

    /* Or set the codata values that you want */
    codata_capi_set_year(year, 4);
    printf("Codata 2014: %+23.16e\n", codata_capi_get_value(name, strlen(name)));
    printf("%s\n", codata_capi_get_year());
    
    return 0;

}
