/**
 * @file
 * 
 * @brief Source code generator for Fortran module and C header.
 * 
 * @details The raw codata from http://physics.nist.gov/constants are converted into
 * C and Fortran code. 
 * The generator generates:
 * - a Fortran module
 * - a C header
 *   
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "config.h"

#define C 0
#define F90 1

static const size_t BUFFER_SIZE = 256;
static const size_t NAMES_SIZE = 60;
static const size_t VALUES_SIZE = 25;
static const size_t UNCERTAINTIES_SIZE = 25;
static const size_t UNITS_SIZE = 25;

static const char newline[2] = "\n\0";

static const char c_end[2] = ";\0";
static const char f90_end[1] = "\0";

static const char c_equal[4] = " = \0";
static const char f90_equal[4] = " = \0";

static const char c_comment[3] = "//\0";
static const char f90_comment[3] = "!!\0";

static const char c_doxy_inline_start[] = "/**< ";
static const char c_doxy_inline_end[] = " */";
static const char f_doxy_inline_start[] = "!< ";
static const char f_doxy_inline_end[] = " ";

static const char c_doxy_start[] = "/** \n * @file\n";
static const char c_doxy_middle[] = " * ";
static const char c_doxy_end[] = " */\n";
static const char f_doxy_start[] = "!> \n";
static const char f_doxy_middle[] = "!! ";
static const char f_doxy_end[] = "!! \n";

static const char c_doxy_example[] = "@example example_in_c.c\n";
static const char c_doxy_example_detail[] = "@details How to us ccodata in c.\n";

static const char f_doxy_example[] = "@example example_in_fortran.f90\n";
static const char f_doxy_example_detail[] = "@details How to us ccodata in Fortran.\n";

static const char c_type[] = "extern const double ";
static const char f90_type[] = "real(c_double), bind(C), protected :: ";

static const char c_header[] = "#include \"codata.h\"";
static const char f90_header[49] = "module codata\nuse iso_c_binding\nimplicit none\0";

static const char c_footer[1] = "\0";
static const char f90_footer[18] = "end module codata\0";

static const char codata_path[] = "./codata.txt";

void format_names(char *line, char *name, char *dname, int language){
    
    size_t i;

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
                name[i] = tolower(name[i]);
                break;
            case F90:
                name[i] = tolower(name[i]);
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
    int flag_exponent = 0;

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
                if(value[i] == 'd'){
                    flag_exponent = 1;
                }
            
            }
            if (flag_exponent == 0){
                for(i=(VALUES_SIZE-1); i>=0; i--){
                    if(isdigit(value[i]) > 0){
                        value[i+1] = 'd';
                        value[i+2] = '0';
                        break;
                    }
                }
            }
            break;
    }
    free(temp);
}

void format_uncertainties(char *line, char *uncertainty, int language){
    size_t i;
    size_t j;
    int flag_exponent = 0;

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
    for(i=0; i<UNCERTAINTIES_SIZE; i++){
        uncertainty[i] = temp[i];
    }
    switch(language){
        case F90:
            for(i=0; i<UNCERTAINTIES_SIZE; i++){
                if (uncertainty[i]=='e'){
                    uncertainty[i] = 'd';
                }
                if(uncertainty[i] == 'd'){
                    flag_exponent = 1;
                }
            }
            if (flag_exponent == 0){
                for(i=(UNCERTAINTIES_SIZE-1); i>=0; i--){
                    if(isdigit(uncertainty[i]) > 0){
                        uncertainty[i+1] = 'd';
                        uncertainty[i+2] = '0';
                        break;
                    }
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
    int empty=0;

    while(((c=fgetc(f)) != '\n') & (!feof(f))){
        if(i<BUFFER_SIZE){
            buf[i] = c;
            i++;
        }
    }
    if ( i <= 0){
        empty = 1;
    }

    return empty;
}

void clean_line(char *buf, size_t buffer_size){

    size_t i;
    for(i=0; i<=buffer_size; i++){
        buf[i] = ' ';
    }
    buf[buffer_size] = '\0';
}

void ltrim(char *buf, size_t buffer_size){
    size_t i, j;
    i = 0;
    j = 0;
    char *temp = (char *)malloc(sizeof(char)*(buffer_size+1));
    for(i=0; i<buffer_size; i++){
        if(isalnum(buf[i])>0){
            break;
        }
    }
    clean_line(temp, buffer_size);
    for(i; i<buffer_size; i++){
        temp[j] = buf[i];
        j++;
    }
    clean_line(buf, buffer_size);
    for(i=0; i<buffer_size; i++){
        buf[i] = temp[i];
    }
    free(temp);

}

int is_blank_line(char *buf, size_t buffer_size){
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    for(i=0; i<buffer_size; i++){
        if(isalnum(buf[i])>0){
            j++;
        }
    }
    if(j>0){
        return 0;
    }
    else{
        return 1;
    }
}

char **get_table(size_t rows, size_t line_buffer_size){
    
    size_t i;
    char **table = (char **)malloc(sizeof(char *)*rows);
    for(i=0; i<rows; i++){
        table[i] = (char *)malloc(sizeof(char)*(line_buffer_size+1));
    }
    return table;
}

void free_table(char **table, size_t rows, size_t line_buffer_size){
    
    size_t i;
    for(i=0; i<rows; i++){
        free(table[i]);
    }
    free(table);
}

void print_table(char **table, size_t rows, size_t line_buffer_size){
    
    size_t i;
    for(i=0; i<rows; i++){
        printf("%3ld - %s\n", i, table[i]);
    }
}

void init_table(char **table, size_t rows, size_t line_buffer_size){
    
    size_t i;
    for(i=0; i<rows; i++){
        strcpy(table[i], "struct codata_constant END\0");
    }
}

void write_output(FILE *codata, FILE *fcode, FILE *fheader, int language){
   
    size_t i=0;
    int empty = 0;
    int n;

    const char *end;
    const char *equal;
    const char *comment;
    const char *type;
    const char *header;
    const char *footer;
    const char *doxy_inline_start;
    const char *doxy_inline_end;
    const char *doxy_start;
    const char *doxy_middle;
    const char *doxy_end;
    const char *doxy_example;
    const char *doxy_example_detail;

    
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
            doxy_start = c_doxy_start;
            doxy_middle = c_doxy_middle;
            doxy_end = c_doxy_end;
            doxy_inline_start = c_doxy_inline_start;
            doxy_inline_end = c_doxy_inline_end;
            doxy_example = c_doxy_example;
            doxy_example_detail = c_doxy_example_detail;
            break;
        case F90:
            printf("Generating F90 code\n");
            end = f90_end;
            equal = f90_equal;
            comment = f90_comment;
            type = f90_type;
            header = f90_header;
            footer = f90_footer;
            doxy_start = f_doxy_start;
            doxy_middle = f_doxy_middle;
            doxy_end = f_doxy_end;
            doxy_inline_start = f_doxy_inline_start;
            doxy_inline_end = f_doxy_inline_end;
            doxy_example = f_doxy_example;
            doxy_example_detail = f_doxy_example_detail;
            break;
        default:
            printf("Generating C code\n");
            end = c_end;
            equal = c_equal;
            comment = c_comment;
            type = c_type;
            header = c_header;
            footer = c_footer;
    }
    
    /* Copy header from codata */
    fputs(doxy_start, fcode);
    if(language == C){
        fputs(doxy_start, fheader);
    }
    for(i=0; i<=10; i++){
        clean_line(line, BUFFER_SIZE);
        read_line(codata, line);
        if((i<9) & (is_blank_line(line, BUFFER_SIZE)<=0)){
            fputs(doxy_middle, fcode);
            ltrim(line, BUFFER_SIZE);
            fputs(line, fcode);
            fputs(newline, fcode);
        }
    }
    fputs(doxy_middle, fcode);
    fputs(doxy_example, fcode);
    fputs(doxy_middle, fcode);
    fputs(doxy_example_detail, fcode);
    fputs(doxy_end, fcode);
    if(language == C){
        fputs(doxy_end, fheader);
    }

    /* Write header for each language */
    fputs(header, fcode);
    fputs(newline, fcode);
    i = 11;
    while(!feof(codata)){
        clean_line(line, BUFFER_SIZE);
        clean_line(name, NAMES_SIZE);
        clean_line(dname, NAMES_SIZE);
        clean_line(value, VALUES_SIZE);
        clean_line(uncertainty, UNCERTAINTIES_SIZE);
        clean_line(unit, UNITS_SIZE);
        empty = read_line(codata, line);
        if(empty == 0){
            format_names(line, name, dname, language);
            format_values(line, value, language);
            format_uncertainties(line, uncertainty, language);
            format_units(line, unit, language);

            if(language == C){
                fputs(type, fheader);
                fputs(name, fheader);
                fputs(end, fheader);
                fputs(doxy_inline_start, fheader);
                fputs(unit, fheader);
                fputs(doxy_inline_end, fheader);
                fputs(newline, fheader);
                fputs(type, fheader);
                fputs(dname, fheader);
                fputs(end, fheader);
                fputs(doxy_inline_start, fheader);
                fputs(unit, fheader);
                fputs(doxy_inline_end, fheader);
                fputs(newline, fheader);
                fputs(newline, fheader);
                
                fputs(type, fcode);
                fputs(name, fcode);
                fputs(equal, fcode);
                fputs(value, fcode);
                fputs(end, fcode);
                fputs(doxy_inline_start, fcode);
                fputs(unit, fcode);
                fputs(doxy_inline_end, fcode);
                fputs(newline, fcode);
                fputs(type, fcode);
                fputs(dname, fcode);
                fputs(equal, fcode);
                fputs(uncertainty, fcode);
                fputs(end, fcode);
                fputs(doxy_inline_start, fcode);
                fputs(unit, fcode);
                fputs(doxy_inline_end, fcode);
                fputs(newline, fcode);
                fputs(newline, fcode);
            }else{
                fputs(type, fcode);
                fputs(name, fcode);
                fputs(equal, fcode);
                fputs(value, fcode);
                fputs(end, fcode);
                fputs(doxy_inline_start, fcode);
                fputs(unit, fcode);
                fputs(doxy_inline_end, fcode);
                fputs(newline, fcode);
            
                fputs(type, fcode);
                fputs(dname, fcode);
                fputs(equal, fcode);
                fputs(uncertainty, fcode);
                fputs(end, fcode);
                fputs(doxy_inline_start, fcode);
                fputs(unit, fcode);
                fputs(doxy_inline_end, fcode);
                fputs(newline, fcode);

                fputs(newline, fcode);
            }
        }
        i++;
    }
    fputs(footer, fcode);
    free(line);
    free(name);
    free(dname);
    free(value);
    free(uncertainty);
    free(unit);
}

int main(int argc, char **argv){

    FILE *codata;
    FILE *code;
    FILE *header;
    char *code_path;

    int n;
    
    n = strlen(PROJECT_NAME);
    code_path = (char *)malloc(sizeof(char)*(n+1+10));
    strcpy(code_path, PROJECT_NAME);

    /* C Header */
    codata =  fopen(codata_path, "r");
    strcpy(&code_path[n], ".c");
    code = fopen(code_path, "w");
    strcpy(&code_path[n], ".h");
    header = fopen(code_path, "w");
    write_output(codata, code, header, C);
    fclose(code);
    fclose(header);
    fclose(codata);
    
    /* F90 Header */
    codata =  fopen(codata_path, "r");
    strcpy(&code_path[n], ".f90");
    code = fopen(code_path, "w");
    header = NULL;
    write_output(codata, code, header, F90);
    fclose(code);
    fclose(codata);
    

    free(code_path);

    return EXIT_SUCCESS;
}