#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "codata.h"
#include "common.h"

void test_constants(void){
    
    double value;
    double expected;
    double diff;
    double fac;
    
    printf("    %s", "ATOMIC MASS CONSTANT...");

    fac = pow(10.0, 27);
    expected = 1.66053906660e-27 * fac;
    value = ATOMIC_MASS_CONSTANT * fac;
    diff = value - expected;
    diff = roundn(diff, 11);
    if(!assertEqual(diff, 0.0, 11)){
        printf("%s\n", "Failed");
        printf("    %23.16e%s%23.16e%s%23.16e\n", value, "/", expected, "/", diff);
        exit(1);
    }else{
        printf("%s\n", "OK");
    }
    
    printf("    %s", "SPEED OF LIGHT IN VACUUM...");

    fac = pow(10.0, 27);
    expected = 299792458.0 * fac;
    value = SPEED_OF_LIGHT_IN_VACUUM * fac;
    diff = value - expected;
    diff = roundn(diff, 1);
    if(!assertEqual(diff, 0.0, 1)){
        printf("%s\n", "Failed");
        printf("    %23.16e%s%23.16e%s%23.16e\n", value, "/", expected, "/", diff);
        exit(1);
    }else{
        printf("%s\n", "OK");
    }
}

int main(void){

    printf("%s\n", "***** TESTING C API CODE FOR CONSTANTS *****");
    test_constants();
    return EXIT_SUCCESS;
}
