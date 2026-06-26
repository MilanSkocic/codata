#include <stdio.h>
#include <stdlib.h>
#include "codata.h"



int main(){
    
    struct codata_constant_type *ccp = cc_2010; 

    printf("%s\n", cc[1].name);

    return EXIT_SUCCESS;
}
