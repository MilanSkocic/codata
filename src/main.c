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

struct codata_file_props{
    int n;
    int index_header_end;
};

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

static const char c_doxy_start[] = "/** \n * @file\n * @brief \n";
static const char c_doxy_middle[] = " * ";
static const char c_doxy_end[] = " */\n";
static const char f_doxy_start[] = "!> \n!! @file\n!! @brief \n";
static const char f_doxy_middle[] = "!! ";
static const char f_doxy_end[] = "!! \n";

static const char f_module_doc[] = "!>@brief Fundamental Physical Constants (CODATA).\n";

static const char c_doxy_example[] = "@example example_in_c.c\n";
static const char c_doxy_example_detail[] = "@details How to us codata in c.\n";

static const char f_doxy_example[] = "@example example_in_fortran.f90\n";
static const char f_doxy_example_detail[] = "@details How to us codata in Fortran.\n";

static const char c_type[] = "extern const double ";
static const char f90_type[] = "real(c_double), protected, ";
static const char f90_bindc_start[] = "bind(C, name=\"";
static const char f90_bindc_end[] = "\")";
static const char f90_type_column[] = " :: ";

static const char codata_path[] = "./codata.txt";

static const char type_declaration[] = "type :: t_constant\n"
"  character(len=60) :: name\n"
"  real(real64) :: value\n"
"  real(real64) :: uncertainty\n"
"  character(len=25) :: unit\n"
"end type\n\n";

static const char type_subarray_declaration[] = "\ntype(t_constant), dimension(%d), parameter, private :: codata_%d = [&\n";
static const char type_array_declaration[] = "\ntype(t_constant), dimension(%d) :: codata_constants = [&\n";
static const char type_array_declaration_end[] = "%s";
static const char initialize_constant[] = "  t_constant(\"%s\", %s, %s, \"%s\") %s\n";
static const char add_subarray[] = "codata_%d %s\n";

void format_names(char *line, char *name, int language){
    
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
                name[i] = toupper(name[i]);
                break;
            case F90:
                name[i] = toupper(name[i]);
                break;
            default:
                name[i] = toupper(name[i]);
        }
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

void clean_line(char *buf, size_t buffer_size){

    size_t i;
    for(i=0; i<=buffer_size; i++){
        buf[i] = ' ';
    }
    buf[buffer_size] = '\0';
}

int read_line(FILE *f, char *buf, size_t buffer_size){

    char c;
    size_t i = 0;
    int empty=0;
    clean_line(buf, buffer_size);
    while(((c=fgetc(f)) != '\n') & (!feof(f))){
        if(i<buffer_size){
            buf[i] = c;
            i++;
        }
    }
    if ( i <= 0){
        empty = 1;
    }

    return empty;
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
    for(i=i; i<buffer_size; i++){
        temp[j] = buf[i];
        j++;
    }
    clean_line(buf, buffer_size);
    for(i=0; i<buffer_size; i++){
        buf[i] = temp[i];
    }
    free(temp);

}

void rtrim(char *buf, size_t buffer_size){
    size_t i;
    for(i=0; i<buffer_size; i++){
        if(isalnum(buf[buffer_size-i])>0){
            break;
        }else{
            buf[buffer_size-i] = ' ';
        }
    }
    buf[buffer_size-i+1]= '\0';
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

void get_props(struct codata_file_props *props){

    FILE *codata;
    char *line = (char *)malloc(sizeof(char)*(BUFFER_SIZE+1));
    int header_end, empty;

    codata =  fopen(codata_path, "r");

    props->n = 0;
    props->index_header_end = 0;
    
    while (!feof(codata)){
        read_line(codata, line, BUFFER_SIZE);
        if (line[0] == '-'){
            props->index_header_end = props->index_header_end + 1 ;
            break;
        }
        props->index_header_end = props->index_header_end + 1 ;
    }
    
    while (!feof(codata)){
        empty = read_line(codata, line, BUFFER_SIZE);

        if (empty == 0){
            props->n = props->n + 1 ;
        }
    }

    fclose(codata);
    free(line);

}

void print_props(struct codata_file_props *props){
    printf("Header ends at index: %d\n", props->index_header_end);
    printf("Number of constants: %d\n", props->n);
}

void write_all_constants(FILE *fcodata, FILE *fcode, struct codata_file_props *props){

    int empty, i, k, imax, N;
    int subdim = 10;

    char *line = (char *)malloc(sizeof(char)*(BUFFER_SIZE+1));
    char *name = (char *)malloc(sizeof(char)*(NAMES_SIZE+1));
    char *dname = (char *)malloc(sizeof(char)*(NAMES_SIZE+1));
    char *value = (char *)malloc(sizeof(char)*(VALUES_SIZE+1));
    char *uncertainty = (char *)malloc(sizeof(char)*(UNCERTAINTIES_SIZE+1));
    char *unit = (char *)malloc(sizeof(char)*(UNITS_SIZE+1));

    for (i=0; i<props->index_header_end;i++){
        empty = read_line(fcodata, line, BUFFER_SIZE);

    }

    k = 0;
    N = props->n/subdim;
    imax = N * subdim;
    k = 0;
    for(i=0; i<imax; i++){
        if (i%subdim == 0){
            k += 1;
            fprintf(fcode, type_subarray_declaration, subdim, k*subdim);
        }
        clean_line(line, BUFFER_SIZE);
        clean_line(name, NAMES_SIZE);
        clean_line(value, VALUES_SIZE);
        clean_line(uncertainty, UNCERTAINTIES_SIZE);
        clean_line(unit, UNITS_SIZE);
        empty = read_line(fcodata, line, BUFFER_SIZE);
        if(empty == 0){
            format_names(line, name, F90);
            format_values(line, value, F90);
            format_uncertainties(line, uncertainty, F90);
            format_units(line, unit, F90);
            rtrim(name, NAMES_SIZE);
            rtrim(value, VALUES_SIZE);
            rtrim(uncertainty, UNCERTAINTIES_SIZE);
            rtrim(unit, UNITS_SIZE);
            if ((i%subdim)==(subdim-1)){
                fprintf(fcode, initialize_constant, name, value, uncertainty, unit, "]");
            }
            else{
                fprintf(fcode, initialize_constant, name, value, uncertainty, unit, ",&");
            }
        }
    }
    imax = props->n - N*subdim;
    for(i=0; i<imax; i++){
        if (i%imax == 0){
            k += 1;
            fprintf(fcode, type_subarray_declaration, imax, props->n);
        }
        clean_line(line, BUFFER_SIZE);
        clean_line(name, NAMES_SIZE);
        clean_line(value, VALUES_SIZE);
        clean_line(uncertainty, UNCERTAINTIES_SIZE);
        clean_line(unit, UNITS_SIZE);
        empty = read_line(fcodata, line, BUFFER_SIZE);
        if(empty == 0){
            format_names(line, name, F90);
            format_values(line, value, F90);
            format_uncertainties(line, uncertainty, F90);
            format_units(line, unit, F90);
            rtrim(name, NAMES_SIZE);
            rtrim(value, VALUES_SIZE);
            rtrim(uncertainty, UNCERTAINTIES_SIZE);
            rtrim(unit, UNITS_SIZE);
            if ((i%imax)==(imax-1)){
                fprintf(fcode, initialize_constant, name, value, uncertainty, unit, "]");
            }
            else{
                fprintf(fcode, initialize_constant, name, value, uncertainty, unit, ",&");
            }
        }
    }
    fprintf(fcode, type_array_declaration, props->n);
    for(i=0; i<(k-1); i++){
        fprintf(fcode, add_subarray, (i+1)*subdim, ",&");
    }
    fprintf(fcode, add_subarray, props->n, "]");


    free(line);
    free(name);
    free(value);
    free(uncertainty);
    free(unit);

}

int main(int argc, char **argv){

    FILE *codata;
    FILE *fcode;
    char *code_path;
    int n, i;
    struct codata_file_props props = {0, 0}; 
    
    
    n = strlen(PROJECT_NAME);
    code_path = (char *)malloc(sizeof(char)*(n+1+10));
    strcpy(code_path, PROJECT_NAME);
    strcpy(&code_path[n], ".f90");
    
    get_props(&props);
    print_props(&props);
    
    codata =  fopen(codata_path, "r");
    fcode = fopen(code_path, "w");

    fprintf(fcode, "%s\n%s\n%s\n", 
    "module codata", "use iso_fortran_env", "implicit none\n");
    fprintf(fcode, "%s", type_declaration);
    //fprintf(fcode, type_array_declaration, props.n);

    write_all_constants(codata, fcode, &props);

    fprintf(fcode, "\n%s", "end module");

    fclose(fcode);
    fclose(codata);
    

    free(code_path);


    return EXIT_SUCCESS;
}