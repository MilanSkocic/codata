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
    printf("Codata %s: %+23.16e\n", codata_capi_get_year(), codata_capi_get_value(name, strlen(name)));
    printf("%s\n", codata_capi_get_year());

    
    return 0;

}
