#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <error.h>
#include "codata.h"

#define VERSION_SIZE 256

struct option_t {char *s; char *l; char *help;};

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

static char *long2short(char *option, struct option_t *options){
    int i=0;
    if(option==NULL){return NULL;}
    if(strlen(option)<3){return option;}
    if(!((option[0]=='-') && (option[1]=='-'))){return option;}

    while(options[i].l!=NULL){
        if(strcmp(option, options[i].l)==0){return options[i].s;}
        else{i++;}
    }
    return option;
}


int main(int argc, char **argv){
    int i, opt;
    char *s, *pattern;
    const struct codata_constant_type *ccptr;
    int year=2022;
    
    static struct option_t loptions[]={
    {"-y", "--year YEAR",         "Codata constants: 2022, 2018, 2014, 2010."},
    {"-p", "--pattern PATTERN",   "Regex pattern for filtering the constants."},
    {"-a", "--value",             "Show only the value."},
    {"-e", "--error",             "Show only the uncertainty."},
    {"-u", "--usage",             "Show usage text and exit."},
    {"-v", "--version",           "Show version information and exit."},
    {"-h", "--help ",             "Show help text and exit."},
    {NULL, NULL,                  NULL} };

    for(i=1;i<argc;i++){
        s = long2short(argv[i], loptions);
        if(s!=NULL){argv[i]=s;}
    }

    while ((opt = getopt(argc, argv, ":y:p:aeuvh")) != -1) {
        switch (opt) {
            case 'y':
                year = atof(optarg);
                break;
            case 'p':
                pattern = optarg;
            case 'v':
      version_text();
                return EXIT_SUCCESS;
                break;
            case ':': 
                printf("Option needs a value.\n"); 
                break; 
            case '?': 
                printf("Unknown option: %c\n", opt);
                break;
            default:
                printf("Invalid year. See --help.");
                break;
        }
    }

    switch (year){
        case 2022:
            ccptr = cc;
            break;
        case 2018:
            ccptr = cc_2018;
            break;
        case 2014:
            ccptr = cc_2014;
            break;
        case 2010:
            ccptr = cc_2010;
            break;
    }

    printf("%s %e\n", ccptr[0].name, ccptr[1].value);
    

    return EXIT_SUCCESS;
}
