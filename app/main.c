#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codata.h"

#define VERSION_SIZE 256

static void version_text(){
    char v[VERSION_SIZE];
    strcpy(v, "codata ");
    strcat(v, codata_version());
    strcat(v, "\n\n");
    strcat(v, "Copyright (c) 2022 Milan Skocic\n");
    strcat(v, "License MIT\n");
    strcat(v, "\n");
    strcat(v, "Wrtten by Milan Skocic\n");
    printf("%s\n", v);
}



int main(int argc, char **argv){
    struct codata_constant_type *ccp = cc_2010; 
    
    version_text();
    printf("%s\n", cc[1].name);

    return EXIT_SUCCESS;
}
