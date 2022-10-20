
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "config.h"

#define C 0
#define F90 1
#define PY3 2

static const size_t BUFFER_SIZE = 200;
static const size_t NAMES_SIZE = 60;
static const size_t VALUES_SIZE = 25;
static const size_t UNCERTAINTIES_SIZE = 25;
static const size_t UNITS_SIZE = 25;

static const char newline[2] = "\n\0";

static const char c_end[2] = ";\0";
static const char f90_end[1] = "\0";
static const char py3_end[1] = "\0";

static const char c_equal[4] = " = \0";
static const char f90_equal[4] = " = \0";
static const char py3_equal[4] = " = \0";


static const char c_comment[3] = "//\0";
static const char f90_comment[3] = "!!\0";
static const char py3_comment[3] = "# \0";

static const char c_type[14] = "const double \0";
static const char f90_type[30] = "real(c_double), parameter :: \0";
static const char py3_type[30] = "\0";

static const char c_header[1] = "\0";
static const char f90_header[49] = "module codata\nuse iso_c_binding\nimplicit none\0";
static const char py3_header[20] = "r\"\"\"Codata\"\"\"\0";

static const char c_footer[1] = "\0";
static const char f90_footer[18] = "end module codata\0";
static const char py3_footer[1] = "\0";


void format_names(char *buffer, char *name, char *dname, int language){
    
    size_t i;

    char *line = &buffer[0];

    for(i=0; i<NAMES_SIZE; i++){
        if(!isalnum(line[i])){
            name[i] = '_';
        }else{
            name[i] = line[i];
        }
    }
    
    for(i=(NAMES_SIZE-1); i>=0; i--){
        if(name[i]!='_'){
            break;
        }
        name[i] = ' ';
    }
    for(i=0; i<NAMES_SIZE; i++){
        switch(language){
            case C:
                name[i] = toupper(name[i]);
                break;
            case F90:
                name[i] = toupper(name[i]);
                break;
            case PY3:
                name[i] = toupper(name[i]);
                break;
            default:
                name[i] = toupper(name[i]);
        }
    }
    switch(language){
        case C:
            dname[0] = 'D';
            break;
        case F90:
            dname[0] = 'D';
            break;
        case PY3:
            dname[0] = 'D';
            break;
    }
    dname[1] = '_';
    for(i=2; i<NAMES_SIZE; i++){
        dname[i] = name[i-2];
    }
}

void format_values(char *line, char *value, int language){
    size_t i;
    size_t j;
    int flag_decimal = 0;

    char *temp = (char *)malloc(sizeof(char)*VALUES_SIZE);
    
    for(i=0; i<VALUES_SIZE; i++){
        temp[i] = ' ';
    }
    j = 0;
    temp[j] = line[NAMES_SIZE];
    j++;
    for(i=(NAMES_SIZE+1); i<(NAMES_SIZE+VALUES_SIZE-2);i++){
        if(isdigit(line[i])){
            temp[j] = line[i];
            j++;
        }
        if((line[i]=='.') & (isdigit(line[i-1])>0) & (isdigit(line[i+1])>0)){
            temp[j] = line[i];
            j++;
        }
        if(line[i]=='e'){
            temp[j] = line[i];
            j++;
        }
        if((line[i]=='-') | (line[i]=='+')){
            temp[j] = line[i];
            j++;
        }
    }
    j = 0;
    for(i=0; i<VALUES_SIZE; i++){
        value[i] = temp[i];
    }
    for(i=0; i<VALUES_SIZE; i++){
        if(value[i] == '.'){
            flag_decimal = 1;
            break;
        }
    }
    if (flag_decimal == 0){
        for(i=(VALUES_SIZE-1); i>=0; i--){
            if(isdigit(value[i]) > 0){
                value[i+1] = '.';
                value[i+2] = '0';
                break;
            }
        }
    }
    switch(language){
        case F90:
            for(i=0; i<VALUES_SIZE; i++){
                if (value[i]=='e'){
                    value[i] = 'd';
                }
            }
    }
    free(temp);
}

void format_uncertainties(char *line, char *uncertainty, int language){
    size_t i;
    size_t j;

    char *temp = (char *)malloc(sizeof(char)*UNCERTAINTIES_SIZE);
    for(i=0; i<UNCERTAINTIES_SIZE; i++){
        temp[i] = ' ';
    }
    j = 0;
    if(line[NAMES_SIZE+VALUES_SIZE] != '('){
        temp[j] = line[NAMES_SIZE+VALUES_SIZE];
    }
    j++;
    for(i=(NAMES_SIZE+VALUES_SIZE+1); i<(NAMES_SIZE+VALUES_SIZE+UNCERTAINTIES_SIZE-2);i++){
        if (strncmp(&line[NAMES_SIZE+VALUES_SIZE], "(exact)", 7)==0){
            temp[0] = '0';
            temp[1] = '.';
            temp[2] = '0';
            break;
        }

        if(isdigit(line[i])){
            temp[j] = line[i];
            j++;
        }
        if((line[i]=='.') & (isdigit(line[i-1])>0) & (isdigit(line[i+1])>0)){
            temp[j] = line[i];
            j++;
        }
        if(line[i]=='e'){
            temp[j] = line[i];
            j++;
        }
        if((line[i]=='-') | (line[i]=='+')){
            temp[j] = line[i];
            j++;
        }
    }
    j = 0;
    for(i=0; i<UNCERTAINTIES_SIZE; i++){
        uncertainty[i] = temp[i];
    }
    if(j == UNCERTAINTIES_SIZE){
        uncertainty[0] = '0';
        uncertainty[1] = '.';
        uncertainty[2] = '0';
    }
    switch(language){
        case F90:
            for(i=0; i<UNCERTAINTIES_SIZE; i++){
                if (uncertainty[i]=='e'){
                    uncertainty[i] = 'd';
                }
            }
    }

    free(temp);
}

void format_units(char *line, char *unit, int language){
    size_t i;


    for(i=0; i<UNITS_SIZE; i++){
        unit[i] = line[i+NAMES_SIZE+VALUES_SIZE+UNCERTAINTIES_SIZE];
    }
}

int read_line(FILE *f, char *buf){

    char c;
    size_t i = 0;
    int eof=0;

    while((c=fgetc(f)) != '\n'){
        if(c==EOF){
            eof=1;
            break;
        }
        else{
            if(i<BUFFER_SIZE){
                buf[i] = c;
                i++;
                eof=0;
            }
        }
    }
    return eof;
}

void clean_line(char *buf, size_t buffer_size){

    size_t i;
    for(i=0; i<=buffer_size; i++){
        buf[i] = ' ';
    }
    buf[buffer_size] = '\0';
}

void write_output(FILE *codata, FILE *output, int language){
    
    int i=0;
    int eof=0;

    const char *end;
    const char *equal;
    const char *comment;
    const char *type;
    const char *header;
    const char *footer;

    
    char *line = (char *)malloc(sizeof(char)*(BUFFER_SIZE+1));
    char *name = (char *)malloc(sizeof(char)*(NAMES_SIZE+1));
    char *dname = (char *)malloc(sizeof(char)*(NAMES_SIZE+1));
    char *value = (char *)malloc(sizeof(char)*(VALUES_SIZE+1));
    char *uncertainty = (char *)malloc(sizeof(char)*(UNCERTAINTIES_SIZE+1));
    char *unit = (char *)malloc(sizeof(char)*(UNITS_SIZE+1));

    switch(language){
        case C:
            printf("Generating C code\n");
            end = c_end;
            equal = c_equal;
            comment = c_comment;
            type = c_type;
            header = c_header;
            footer = c_footer;
            break;
        case F90:
            printf("Generating F90 code\n");
            end = f90_end;
            equal = f90_equal;
            comment = f90_comment;
            type = f90_type;
            header = f90_header;
            footer = f90_footer;
            break;
        case PY3:
            printf("Generating PY3 code\n");
            end = py3_end;
            equal = py3_equal;
            comment = py3_comment;
            type = py3_type;
            header = py3_header;
            footer = py3_footer;
            break;
    }
    while(eof==0){
        clean_line(line, BUFFER_SIZE);
        clean_line(name, NAMES_SIZE);
        clean_line(dname, NAMES_SIZE);
        clean_line(value, VALUES_SIZE);
        clean_line(value, UNCERTAINTIES_SIZE);
        clean_line(unit, UNITS_SIZE);
        eof = read_line(codata, line);
        if(i>10){
            format_names(line, name, dname, language);
            format_values(line, value, language);
            format_uncertainties(line, uncertainty, language);
            format_units(line, unit, language);
            if(eof==0){
                fputs(type, output);
                fputs(name, output);
                fputs(equal, output);
                fputs(value, output);
                fputs(end, output);
                fputs(comment, output);
                fputs(unit, output);
                fputs(newline, output);

                fputs(type, output);
                fputs(dname, output);
                fputs(equal, output);
                fputs(uncertainty, output);
                fputs(end, output);
                fputs(comment, output);
                fputs(unit, output);
                fputs(newline, output);
                
                fputs(newline, output);
            }
        }else{
            fputs(comment, output);
            fputs(line, output);
            fputs(newline, output);
            if (i==10){
                fputs(header, output);
                fputs(newline, output);
            }
        }
        i++;
    }
    fputs(footer, output);
    free(line);
}

int main(int argc, char **argv){

    printf("%s v.%s.\n%s\n", PROJECT_NAME, PROJECT_VERSION, PROJECT_DESCRIPTION);

    FILE *codata;
    FILE *code;

    codata =  fopen("./codata.txt", "r");
    code = fopen("electrox_codata.h", "w");
    write_output(codata, code, C);
    fclose(code);
    fclose(codata);
    
    codata =  fopen("./codata.txt", "r");
    code = fopen("electrox_codata.f90", "w");
    write_output(codata, code, F90);
    fclose(code);
    fclose(codata);
    
    codata =  fopen("./codata.txt", "r");
    code = fopen("electrox_codata.py", "w");
    write_output(codata, code, PY3);
    fclose(code);
    fclose(codata);

    return EXIT_SUCCESS;
}