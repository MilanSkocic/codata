#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "codata.h"
 
 
 /**
 * @brief Round off a value with n digits
 * @param x Value to be rounded
 * @param n Number of digits
 * @return Rounded x.
 */
double roundn(double x, int n)
{

  double rounded_x;
  double fac = pow(10, n);

  rounded_x = round(x * fac) / fac;

  return rounded_x;
}

int main(int argc, char **argv){

    int precision;
    double value, ref;
    char name[60] = "";


    strcpy(name, "ALPHA PARTICLE MASS");
    value = codata_capi_get_value(name, strlen(name)); 
    ref = 6.6446573357e-27;
    precision = 10;
    printf("value=%+23.16e / ref=%+23.16e / precision=%d\n", value, ref, precision);
    if (roundn(value, precision) != roundn(ref, precision)){
        return 1;
    }

    return 0;
}