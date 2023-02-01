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
    char *unit;

    strcpy(year, "2018");
    codata_set_year_capi(year, 4);
    strcpy(name, "alpha particle masss");
    value = codata_capi_get_value(name, strlen(name)); 
    ref = NAN;
    precision = 37;
    printf("value=%+23.16e / ref=%+23.16e / precision=%d\n", value, ref, precision);
    if (isnan(value)==0){
        return -1;
    }
    
    strcpy(year, "2018");
    codata_set_year_capi(year, 4);
    strcpy(name, "alpha particle masss");
    unit = codata_capi_get_unit(name, strlen(name)); 
    ref = NAN;
    precision = 37;
    printf("value=%s / ref=%s / precision=%d\n", unit, "None", precision);
    if (strcmp(unit, "None")>0){
        return -1;
    }

    return 0;
}