#include <stdio.h>
#include "config.h"


 int main(int argc, char **argv){

     printf("%s v.%s.\n%s\n", PROJECT_NAME, PROJECT_VERSION, PROJECT_DESCRIPTION);

     printf("prefix = %s\n", INSTALL_PREFIX);

     printf("libs = %s\n", LIBS);
     
     printf("cflags = %s\n", CFLAGS);

    return 0;
 }