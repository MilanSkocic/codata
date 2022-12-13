/**
 * @file
 * 
 * @brief Source code generator for Fortran module.
 * 
 * @details The raw codata from http://physics.nist.gov/constants are converted into
 * Fortran code. 
 * The generator generates:
 * - a Fortran module
 *   
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "config.h"

struct codata_file_props{
    int n;
    int index_header_end;
};

static const size_t LINE_LENGTH = 256;
static const size_t NAMES_LENGTH = 60;
static const size_t VALUES_LENGTH = 25;
static const size_t UNCERTAINTIES_LENGTH = 25;
static const size_t UNITS_LENGTH = 25;

static const char CODATA_PATH[] = "./codata.txt";

void format_names(char *line, char *name){
    
    size_t i;

    for(i=0; i<NAMES_LENGTH; i++){
        name[i] = line[i];
    }
    
    for(i=0; i<NAMES_LENGTH; i++){
        name[i] = toupper(name[i]);
    }
}

void format_values(char *line, char *value){
    size_t i;
    size_t j;
    int flag_decimal = 0;
    int flag_exponent = 0;

    char *temp = (char *)malloc(sizeof(char)*VALUES_LENGTH);
    
    for(i=0; i<VALUES_LENGTH; i++){
        temp[i] = ' ';
    }
    j = 0;
    temp[j] = line[NAMES_LENGTH];
    j++;
    for(i=(NAMES_LENGTH+1); i<(NAMES_LENGTH+VALUES_LENGTH-2);i++){
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
    for(i=0; i<VALUES_LENGTH; i++){
        value[i] = temp[i];
    }
    for(i=0; i<VALUES_LENGTH; i++){
        if(value[i] == '.'){
            flag_decimal = 1;
            break;
        }
    }
    if (flag_decimal == 0){
        for(i=(VALUES_LENGTH-1); i>=0; i--){
            if(isdigit(value[i]) > 0){
                value[i+1] = '.';
                value[i+2] = '0';
                break;
            }
        }
    }
    for(i=0; i<VALUES_LENGTH; i++){
        if (value[i]=='e'){
            value[i] = 'd';
        }
        if(value[i] == 'd'){
            flag_exponent = 1;
        }
    }
    if (flag_exponent == 0){
        for(i=(VALUES_LENGTH-1); i>=0; i--){
            if(isdigit(value[i]) > 0){
                value[i+1] = 'd';
                value[i+2] = '0';
                break;
            }
        }
    }
    free(temp);
}

void format_uncertainties(char *line, char *uncertainty){
    size_t i;
    size_t j;
    int flag_exponent = 0;

    char *temp = (char *)malloc(sizeof(char)*UNCERTAINTIES_LENGTH);
    for(i=0; i<UNCERTAINTIES_LENGTH; i++){
        temp[i] = ' ';
    }
    j = 0;
    if(line[NAMES_LENGTH+VALUES_LENGTH] != '('){
        temp[j] = line[NAMES_LENGTH+VALUES_LENGTH];
    }
    j++;
    for(i=(NAMES_LENGTH+VALUES_LENGTH+1); i<(NAMES_LENGTH+VALUES_LENGTH+UNCERTAINTIES_LENGTH-2);i++){
        if (strncmp(&line[NAMES_LENGTH+VALUES_LENGTH], "(exact)", 7)==0){
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
    for(i=0; i<UNCERTAINTIES_LENGTH; i++){
        uncertainty[i] = temp[i];
    }
    for(i=0; i<UNCERTAINTIES_LENGTH; i++){
        if (uncertainty[i]=='e'){
            uncertainty[i] = 'd';
        }
        if(uncertainty[i] == 'd'){
            flag_exponent = 1;
        }
    }
    if (flag_exponent == 0){
        for(i=(UNCERTAINTIES_LENGTH-1); i>=0; i--){
            if(isdigit(uncertainty[i]) > 0){
                uncertainty[i+1] = 'd';
                uncertainty[i+2] = '0';
                break;
            }
        }
    }

    free(temp);
}

void format_units(char *line, char *unit){
    size_t i;


    for(i=0; i<UNITS_LENGTH; i++){
        unit[i] = line[i+NAMES_LENGTH+VALUES_LENGTH+UNCERTAINTIES_LENGTH];
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
    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    int empty;

    codata =  fopen(CODATA_PATH, "r");

    props->n = 0;
    props->index_header_end = 0;
    
    while (!feof(codata)){
        read_line(codata, line, LINE_LENGTH);
        if (line[0] == '-'){
            props->index_header_end = props->index_header_end + 1 ;
            break;
        }
        props->index_header_end = props->index_header_end + 1 ;
    }
    
    while (!feof(codata)){
        empty = read_line(codata, line, LINE_LENGTH);

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

void write_file_doc(FILE *fcodata, FILE *fcode_data, FILE *fcode_array, struct codata_file_props *props){
    size_t i;
    int empty;
    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    
<<<<<<< HEAD
    fprintf(fcode_data, "%s\n", "!> @file");
    fprintf(fcode_data, "%s\n", "!! @brief Autogenerated.");
    
    fprintf(fcode_array, "%s\n", "!> @file");
    fprintf(fcode_array, "%s\n", "!! @brief Autogenerated.");
=======
    fprintf(fcode, "%s\n", "!> @file");
    fprintf(fcode, "%s\n", "!! @brief Codata module - autogenerated.");
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
    
    for (i=0; i<(props->index_header_end-2);i++){
        empty = read_line(fcodata, line, LINE_LENGTH);
        if (empty == 0){
            rtrim(line, LINE_LENGTH);
            ltrim(line, LINE_LENGTH);
            fprintf(fcode_data, "!! %s\n", line);
            fprintf(fcode_array, "!! %s\n", line);
        }
    }
<<<<<<< HEAD
    fprintf(fcode_data, "%s\n\n", "");
    fprintf(fcode_array, "%s\n\n", "");
    free(line);
}

void write_module_doc(FILE *fcode_data, FILE *fcode_array){
    fprintf(fcode_data, "!> %s\n", "@brief Codata data");
    fprintf(fcode_data, "!! %s\n", "@details Autogenerated from NIST table.");
    
    fprintf(fcode_array, "!> %s\n", "@brief Codata array");
    fprintf(fcode_array, "!! %s\n", "@details Autogenerated from NIST table.");
}

void write_module_declaration(FILE *fcode_data, FILE *fcode_array){
    fprintf(fcode_data, "%s\n", "module codata_data");
    fprintf(fcode_data, "%s\n", "use iso_fortran_env");
    fprintf(fcode_data, "%s\n", "implicit none");
    fprintf(fcode_data, "%s\n", "");
    
    fprintf(fcode_array, "%s\n", "module codata_array");
    fprintf(fcode_array, "%s\n", "use iso_fortran_env");
    fprintf(fcode_array, "%s\n", "use codata_data");
    fprintf(fcode_array, "%s\n", "implicit none");
    fprintf(fcode_array, "%s\n", "");
}

void write_type_declaration(FILE *fcode_data){
    fprintf(fcode_data, "%s\n", "type :: t_constant");
    fprintf(fcode_data, "%s\n", "  character(len=60) :: name");
    fprintf(fcode_data, "%s\n", "  real(real64) :: value");
    fprintf(fcode_data, "%s\n", "  real(real64) :: uncertainty");
    fprintf(fcode_data, "%s\n", "  character(len=25) :: unit");
    fprintf(fcode_data, "%s\n", "end type t_constant");
    fprintf(fcode_data, "%s\n", "");
=======
    fprintf(fcode, "!! %s\n", "@example example_in_fortran");
    fprintf(fcode, "%s\n\n", "");
    free(line);
}

void write_module_doc(FILE *fcode){
    fprintf(fcode, "!> %s\n", "@brief Codata constants");
    fprintf(fcode, "!! %s\n", "@details Autogenerated from NIST table.");
}

void write_module_declaration(FILE *fcode){
    fprintf(fcode, "%s\n", "module codata");
    fprintf(fcode, "%s\n", "use iso_fortran_env");
    fprintf(fcode, "%s\n", "use ieee_arithmetic");
    fprintf(fcode, "%s\n", "implicit none");
    fprintf(fcode, "%s\n", "");
}

void write_module_headers(FILE *fcode){

    fprintf(fcode, "character(len=%d), dimension(%d), parameter :: headers = [character(len=%d):: \"%s\", \"%s\", \"%s\"]\n\n",
                   60, 3, 60, "Names", "Values", "Uncertainties");
}

void write_type_declaration(FILE *fcode){
    fprintf(fcode, "%s\n", "type :: t_constant");
    fprintf(fcode, "%s\n", "  character(len=60) :: name");
    fprintf(fcode, "%s\n", "  real(real64) :: value");
    fprintf(fcode, "%s\n", "  real(real64) :: uncertainty");
    fprintf(fcode, "%s\n", "  character(len=25) :: unit");
    fprintf(fcode, "%s\n", "end type t_constant");
    fprintf(fcode, "%s\n", "");
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
}

void write_all_constants(FILE *fcodata, FILE *fcode_data, FILE *fcode_array, struct codata_file_props *props){

    int empty, i, k, imax, N;
    int subdim = 10;
    int constant_counter = 0;

    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    char *name = (char *)malloc(sizeof(char)*(NAMES_LENGTH+1));
    char *value = (char *)malloc(sizeof(char)*(VALUES_LENGTH+1));
    char *uncertainty = (char *)malloc(sizeof(char)*(UNCERTAINTIES_LENGTH+1));
    char *unit = (char *)malloc(sizeof(char)*(UNITS_LENGTH+1));

    fseek(fcodata, 0, SEEK_SET);
    for (i=0; i<props->index_header_end;i++){
        empty = read_line(fcodata, line, LINE_LENGTH);
    }

    k = 0;
    N = props->n/subdim;
    imax = N * subdim;
    k = 0;
    for(i=0; i<imax; i++){
        constant_counter += 1;
        if (i%subdim == 0){
            k += 1;
<<<<<<< HEAD
            fprintf(fcode_array, 
                    "type(t_constant), dimension(%d), parameter :: codata_%d = [&\n", 
=======
            fprintf(fcode, 
                    "type(t_constant), dimension(%d), parameter, private :: codata_%d = [&\n", 
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
                    subdim, k*subdim);
        }
        clean_line(line, LINE_LENGTH);
        clean_line(name, NAMES_LENGTH);
        clean_line(value, VALUES_LENGTH);
        clean_line(uncertainty, UNCERTAINTIES_LENGTH);
        clean_line(unit, UNITS_LENGTH);
        empty = read_line(fcodata, line, LINE_LENGTH);
        if(empty == 0){
            format_names(line, name);
            format_values(line, value);
            format_uncertainties(line, uncertainty);
            format_units(line, unit);
            rtrim(name, NAMES_LENGTH);
            rtrim(value, VALUES_LENGTH);
            rtrim(uncertainty, UNCERTAINTIES_LENGTH);
            rtrim(unit, UNITS_LENGTH);
            fprintf(fcode_data, "type(t_constant), parameter :: codata_constant_%d=", constant_counter);
            fprintf(fcode_data,"t_constant(&\n\"%s\", %s, %s, \"%s\") \n", name, value, uncertainty, unit);
            fprintf(fcode_data, "%s\n", "");
            if ((i%subdim)==(subdim-1)){
                /*fprintf(fcode_array, 
                        "  t_constant(\"%s\", %s, %s, \"%s\") %s\n",
                        name, value, uncertainty, unit, "]\n");*/
                fprintf(fcode_array, "codata_constant_%d]\n", constant_counter);
            }
            else{
                /*fprintf(fcode_array, 
                        "  t_constant(\"%s\", %s, %s, \"%s\") %s\n",
                        name, value, uncertainty, unit, ",&");*/
                fprintf(fcode_array, "codata_constant_%d,&\n", constant_counter);
            }
        }
    }
    imax = props->n - N*subdim;
    for(i=0; i<imax; i++){
        constant_counter += 1;
        if (i%imax == 0){
            k += 1;
<<<<<<< HEAD
            fprintf(fcode_array, 
                    "type(t_constant), dimension(%d), parameter :: codata_%d = [&\n", 
=======
            fprintf(fcode, 
                    "type(t_constant), dimension(%d), parameter, private :: codata_%d = [&\n", 
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
                    imax, props->n);
        }
        clean_line(line, LINE_LENGTH);
        clean_line(name, NAMES_LENGTH);
        clean_line(value, VALUES_LENGTH);
        clean_line(uncertainty, UNCERTAINTIES_LENGTH);
        clean_line(unit, UNITS_LENGTH);
        empty = read_line(fcodata, line, LINE_LENGTH);
        if(empty == 0){
            format_names(line, name);
            format_values(line, value);
            format_uncertainties(line, uncertainty);
            format_units(line, unit);
            rtrim(name, NAMES_LENGTH);
            rtrim(value, VALUES_LENGTH);
            rtrim(uncertainty, UNCERTAINTIES_LENGTH);
            rtrim(unit, UNITS_LENGTH);
            if ((i%imax)==(imax-1)){
                fprintf(fcode_array, 
                        "  t_constant(\"%s\", %s, %s, \"%s\") %s\n",
                        name, value, uncertainty, unit, "]\n");
            }
            else{
                fprintf(fcode_array, 
                        "  t_constant(\"%s\", %s, %s, \"%s\") %s\n",
                        name, value, uncertainty, unit, ",&");
            }
        }
    }
<<<<<<< HEAD
    fprintf(fcode_array, "type(t_constant), dimension(%d), public, parameter :: codata_constants = [&\n", props->n);
=======
    fprintf(fcode, "type(t_constant), dimension(%d), public :: codata_constants = [&\n", props->n);
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
    for(i=0; i<(k-1); i++){
        fprintf(fcode_array, "codata_%d %s\n", (i+1)*subdim, ",&");
    }
    fprintf(fcode_array, "codata_%d %s\n\n", props->n, "]");


    free(line);
    free(name);
    free(value);
    free(uncertainty);
    free(unit);

}

<<<<<<< HEAD
void write_module_end(FILE *fcode_data, FILE *fcode_array){
    fprintf(fcode_data, "%s\n", "end module codata_data");
    fprintf(fcode_array, "%s\n", "end module codata_array");
=======
void write_module_contains(FILE *fcode){
    fprintf(fcode, "%s\n\n", "contains");
}

void write_module_func_print(FILE *fcode){
    fprintf(fcode, "%s\n", "subroutine codata_print() bind(C)");
    fprintf(fcode, "%s\n", "  integer :: i");
    fprintf(fcode, "%s\n", "  print \"(A60, 4X, A23, 4X, A23)\", headers(:)");
    fprintf(fcode, "%s\n", "  do i=1, size(codata_constants)");
    fprintf(fcode, "%s\n", "    print \"(A60, 4X, SP, ES23.16E2, 4X, ES23.16E2, 4X, A25)\", codata_constants(i)\%name, &\n    codata_constants(i)\%value,&\n    codata_constants(i)%uncertainty,&\n    codata_constants(i)%unit");
    fprintf(fcode, "%s\n", "  enddo");
    fprintf(fcode, "%s\n", "end subroutine codata_print");
}

void write_module_end(FILE *fcode){
    fprintf(fcode, "%s\n", "end module codata");
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)
}

int main(int argc, char **argv){

    FILE *fcodata;
    FILE *fcode_array, *fcode_data;
    char *code_path;
    int n;
    struct codata_file_props props = {0, 0}; 
    
    fcodata =  fopen(CODATA_PATH, "r");
    
    n = strlen(PROJECT_NAME);
    code_path = (char *)malloc(sizeof(char)*(n+1+10));
    
    strcpy(code_path, PROJECT_NAME);
    strcpy(&code_path[n], "_array.f90");
    fcode_array = fopen(code_path, "w");
    
    strcpy(code_path, PROJECT_NAME);
<<<<<<< HEAD
    strcpy(&code_path[n], "_data.f90");
    fcode_data = fopen(code_path, "w");
    
    get_props(&props);

    write_file_doc(fcodata, fcode_data, fcode_array, &props);
    write_module_doc(fcode_data, fcode_array);
    write_module_declaration(fcode_data, fcode_array);
    write_type_declaration(fcode_data);
    write_all_constants(fcodata, fcode_data, fcode_array, &props);
    write_module_end(fcode_data, fcode_array);
=======
    strcpy(&code_path[n], ".f90");
    
    get_props(&props);
    print_props(&props);
    
    fcodata =  fopen(CODATA_PATH, "r");
    fcode = fopen(code_path, "w");

    write_file_doc(fcodata, fcode, &props);
    write_module_doc(fcode);
    write_module_declaration(fcode);
    write_module_headers(fcode);
    write_type_declaration(fcode);
    write_all_constants(fcodata, fcode, &props);
    write_module_contains(fcode);
    write_module_func_print(fcode);
    write_module_end(fcode);
>>>>>>> parent of 5d3cbbf (DEV: Split data and functions.)

    fclose(fcode_array);
    fclose(fcodata);
    

    free(code_path);


    return EXIT_SUCCESS;
}