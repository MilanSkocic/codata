#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "codata.h"
#include "utilities.h"
 
 
int main(int argc, char **argv){

    int precision;
    double value, ref;
    char name[60] = "";
    char year[5] = "";

    // avoid compiler complaining
    if (argc>1){
        printf("%d %s", argc, argv[1]);
    }
    
    printf("Test CODATA 2018\n");
    strcpy(name, "alpha particle mass");
    value = codata_capi_get_value(name, strlen(name)); 
    ref = 6.6446573357e-27;
    precision = 37;
    printf("value=%+23.16e / ref=%+23.16e / precision=%d\n", value, ref, precision);
    if (roundn(value, precision) != roundn(ref, precision)){
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
