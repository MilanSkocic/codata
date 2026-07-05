#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "codata.h"
#include "re.h"

#define VERSION_SIZE 256

struct option_t {char *s; char *l; char *arg; char *help;};
static const char fmt_all[] = "%-60s%-+24.16e%5s%-+24.16e%-15s\n";
static const char fmt_a[] = "%-+24.16e\n";
static const char fmt_e[] = "%-+24.16e\n";

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

static void usage_text(){
    printf("%s\n", "codata [-y|--year] [-p|--pattern] [-a|--value] [-e|--error] [-u|--usage] [-v|--version] [-h|--help]");
}

static void help_text(struct option_t *options){
    int i=0;
    char buf[64];
    printf("%s\n", "Usage: codata [OPTION]...");
    printf("%s\n", "codata - fundamental physical constants.");
    printf("%s\n", "");
    while(options[i].s != NULL){
        buf[0] = '\0';
        strcat(buf, options[i].s);

        if(options[i].l != NULL){
            strcat(buf, ", ");
            strcat(buf, options[i].l);
        }
        if(options[i].arg != NULL){
            strcat(buf, " ");
            strcat(buf, options[i].arg);
        }
        printf("  %-32s", buf);
        printf("%-s\n", options[i].help);
        i++;
    }
    printf("%s\n", "");
}

static char *long2short(char *option, struct option_t *options){
    int i=0;
    if(option==NULL){return NULL;}
    if(strlen(option)<3){return option;}
    if(!((option[0]=='-') && (option[1]=='-'))){return option;}

    while(options[i].s!=NULL){
        if(strcmp(option, options[i].l)==0){return options[i].s;}
        else{i++;}
    }
    return option;
}

static void print_all(const struct codata_constant_type **cc, const char *pattern, int *a, int *e){
    int i=0; 
    int len;
    const char *fmt;

    fmt = fmt_all;
    if(*a){fmt=fmt_a;}
    if(*e){fmt=fmt_e;}

    while(cc[i]!=NULL){
        if(pattern == NULL){
            if(*a){
                printf(fmt, cc[i]->value);
            }else if(*e){
                printf(fmt, cc[i]->uncertainty);
            }else{
                printf(fmt, cc[i]->name, cc[i]->value, " +/- ", cc[i]->uncertainty, cc[i]->unit);
            }
        }else{
            if(re_match(pattern, cc[i]->name, &len) != -1) {
                if(*a){
                    printf(fmt, cc[i]->value);
                }else if(*e){
                    printf(fmt, cc[i]->uncertainty);
                }else{
                    printf(fmt, cc[i]->name, cc[i]->value, " +/- ", cc[i]->uncertainty, cc[i]->unit);
                }
            }
        }
        i++;
    }
}

int main(int argc, char **argv){
    int i, opt;
    char *s=NULL;
    const struct codata_constant_type **ccptr;

    int year=2022;
    char *pattern=NULL;
    int a = 0;
    int e = 0;
    
    static struct option_t loptions[]={
    {"-y", "--year" ,   "YEAR",      "Codata constants: 2022, 2018, 2014, 2010."},
    {"-p", "--pattern", "PATTERN",   "Regex pattern for filtering the constants."},
    {"-a", "--value",   NULL,        "Show only the value."},
    {"-e", "--error",   NULL,        "Show only the uncertainty."},
    {"-u", "--usage",   NULL,        "Show usage text and exit."},
    {"-v", "--version", NULL,        "Show version information and exit."},
    {"-h", "--help ",   NULL,        "Show help text and exit."},
    {NULL, NULL,        NULL,        NULL} };

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
                break;
            case 'a':
                a=1;
                break;
            case 'e':
                e=1;
                break;
            case 'v':
                version_text();
                return EXIT_SUCCESS;
                break;
            case 'u':
                usage_text();
                return EXIT_SUCCESS;
                break;
            case 'h':
                help_text(loptions);
                return EXIT_SUCCESS;
                break;
            case ':': 
                fprintf(stderr, "Option needs a value.\n"); 
                break; 
            case '?': 
                fprintf(stderr, "Unknown option: %c\n", opt);
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
            default:
                fprintf(stderr, "Invalid year. See --help.");
                break;
    }
    print_all(ccptr, pattern, &a, &e);

    return EXIT_SUCCESS;
}
