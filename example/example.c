#include <stdio.h>
#include "codata.h"
int main(void){
int i, n;
const enum codata_dataset *ds;
printf("########## EXAMPLE IN C ##########\n");
printf("%s\n","# VERSION");
printf("version = %s\n", codata_version());
printf("%s\n","# CONSTANTS");
printf("c = %f\n", SPEED_OF_LIGHT_IN_VACUUM.value);
printf("%s\n","# UNCERTAINTY");
printf("u(c) = %f\n", SPEED_OF_LIGHT_IN_VACUUM.uncertainty);
printf("%s\n","# OLDER VALUES");
printf("Mu_2022(latest) = %23.16f\n", MOLAR_MASS_CONSTANT.value);
printf("Mu_2018 = %23.16f\n", MOLAR_MASS_CONSTANT_2018.value);
printf("Mu_2014 = %23.16f\n", MOLAR_MASS_CONSTANT_2014.value);
printf("Mu_2010 = %23.16f\n", MOLAR_MASS_CONSTANT_2010.value);
printf("%s\n","# SELECTING THE ADJUSTMENT AT RUN TIME");
ds = codata_datasets(&n);
for(i=0;i<n;i++){
    printf("Mu_%d = %23.16f\n", (int)ds[i], codata_value(ds[i], CODATA_Q_MOLAR_MASS_CONSTANT));
}
printf("%s\n","# A QUANTITY AN OLDER ADJUSTMENT DOES NOT CONTAIN");
printf("defined in 2018 = %d\n", codata_defined(CODATA_2018, CODATA_Q_HELION_SHIELDING_SHIFT));
printf("defined in 2010 = %d\n", codata_defined(CODATA_2010, CODATA_Q_HELION_SHIELDING_SHIFT));
printf("%s\n","# A QUANTITY NIST RENAMED IN 2018");
printf("eps0_2014 via either name = %.11e %.11e\n",
       ELECTRIC_CONSTANT_2014.value, VACUUM_ELECTRIC_PERMITTIVITY_2014.value);
return 0;
}
