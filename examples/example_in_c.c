#include <stdio.h>
#include <string.h>
#include "codata.h"

int main(int argc, char **argv){
    if(argc>1){
        printf("%s", argv[0]);
    }
    printf("ALPHA PARTICLE MASS = %+23.16e\n", ALPHA_PARTICLE_MASS);
    return 0;

}
