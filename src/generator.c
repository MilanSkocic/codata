/**
 * @file
 * 
 * @brief Generator for Fortran module.
 * @details The raw data from NIST are parsed line by line
 * where the columns name, value, uncertainty and unit are formatted to be conform to Fortran.
 * The formatted (as strings) names, values, uncertainties and units are then inserted in a 
 * derived type in the generated Fortran module.
 * The raw codata from http://physics.nist.gov/constants are converted into
 * Fortran code. 
 *   
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief  Properties of the file for the codata raw data.
 * 
 */
struct codata_file_props{
    size_t n; /**< Number of lines.*/
    size_t index_header_end; /**< Number of lines for the header.*/
    char codata_path[18]; /**< Filepath to the raw codata constants.*/
    char year[5]; /**< Year of release of the codata constants.*/
    char fmodule_path[18]; /**< Filepath of the generated Fortran module.*/

};

static const size_t LINE_LENGTH = 256; /**< Length of line.*/
static const size_t NAMES_LENGTH = 60; /**< Length of column name*/
static const size_t VALUES_LENGTH = 25; /**< Length of column value*/
static const size_t UNCERTAINTIES_LENGTH = 25; /**< Length of column uncertainty*/
static const size_t UNITS_LENGTH = 25; /**< Length of column unit*/

/**
 * @brief Format names simply by copying them.
 * 
 * @param line Line to be parsed.
 * @param name String where the name will be copied.
 */
void format_names(char *line, char *name){
    
    size_t i;

    for(i=0; i<NAMES_LENGTH; i++){
        if(!isalnum(line[i])){
            name[i] = '_';
        }else{
            name[i] = line[i];
        }
    }

    for(i=0; i<NAMES_LENGTH; i++){
        if(name[NAMES_LENGTH-1-i]!='_'){
            break;
        }
        name[NAMES_LENGTH-1-i] = ' ';
    }
    
    for(i=0; i<NAMES_LENGTH; i++){
        name[i] = toupper(name[i]);
    }
}

/**
 * @brief Format values to be conform to Fortran double precision.
 * 
 * @param line Line to be parsed.
 * @param value String where the value will be copied.
 */
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
    for(i=0; i<VALUES_LENGTH; i++){
        if (value[i]=='e'){
            value[i] = 'd';
        }
        if(value[i] == 'd'){
            flag_exponent = 1;
        }
    }
    if ((flag_decimal == 0)&(flag_exponent == 0)){
        for(i=0; i<VALUES_LENGTH; i++){
            if(isdigit(value[VALUES_LENGTH-1-i]) > 0){
                value[VALUES_LENGTH-1-i+1] = '.';
                value[VALUES_LENGTH-1-i+2] = '0';
                break;
            }
        }
    }
    if (flag_exponent == 0){
        for(i=0; i<VALUES_LENGTH; i++){
            if(isdigit(value[VALUES_LENGTH-1-i]) > 0){
                value[VALUES_LENGTH-1-i+1] = 'd';
                value[VALUES_LENGTH-1-i+2] = '0';
                break;
            }
        }
    }
    free(temp);
}

/**
 * @brief Format the uncertainties to be conform to Fortran double precsion.
 * 
 * @param line Line to be parsed.
 * @param uncertainty String where the uncertainty will be copied.
 */
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
        for(i=0; i<UNCERTAINTIES_LENGTH; i++){
            if(isdigit(uncertainty[UNCERTAINTIES_LENGTH-1-i]) > 0){
                uncertainty[UNCERTAINTIES_LENGTH-1-i+1] = 'd';
                uncertainty[UNCERTAINTIES_LENGTH-1-i+2] = '0';
                break;
            }
        }
    }

    free(temp);
}

/**
 * @brief Format the units to be conform to Fortran strings.
 * 
 * @param line Line to be parsed.
 * @param unit String where the unit will be copied.
 */
void format_units(char *line, char *unit){
    size_t i;


    for(i=0; i<UNITS_LENGTH; i++){
        unit[i] = line[i+NAMES_LENGTH+VALUES_LENGTH+UNCERTAINTIES_LENGTH];
    }
}
/**
 * @brief Convert power symbol d to e for C code
 * @param value Value to be converted.
 */
void convert_value_to_c(char *value){
    size_t i;
    for(i=0; i<VALUES_LENGTH; i++){
        if(value[i] == 'd'){
            value[i] = 'e';
        }
    }
}

/**
 * @brief Fill the buffer with white space.
 * 
 * @param buf Line to be cleaned
 * @param buffer_size Size of the line.
 */
void clean_line(char *buf, size_t buffer_size){

    size_t i;
    for(i=0; i<=buffer_size; i++){
        buf[i] = ' ';
    }
    buf[buffer_size] = '\0';
}

/**
 * @brief Read the line from f and copy in  buf.
 * 
 * @param f File pointer where the line will be parsed.
 * @param buf String where the line will be copied.
 * @param buffer_size Size of the buffer.
 * @return int Flag if the line is empty(=1) or not empty(=0).
 */
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

/**
 * @brief Remove all white space from the left.
 * 
 * @param buf Line to be left trimmed.
 * @param buffer_size Size of the line.
 */
void ltrim(char *buf, size_t buffer_size){
    size_t i, j, k;
    i = 0;
    j = 0;
    k = 0;
    char *temp = (char *)malloc(sizeof(char)*(buffer_size+1));
    for(i=0; i<buffer_size; i++){
        if(isalnum(buf[i])>0){
            k = i;
            break;
        }
    }
    clean_line(temp, buffer_size);
    for(i=k; i<buffer_size; i++){
        temp[j] = buf[i];
        j++;
    }
    clean_line(buf, buffer_size);
    for(i=0; i<buffer_size; i++){
        buf[i] = temp[i];
    }
    free(temp);

}

/**
 * @brief Remove all white space from the right.
 * 
 * @param buf Line to be right trimmed.
 * @param buffer_size Size of the line.
 */
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

/**
 * @brief Test if the line is a blank line.
 * 
 * @param buf Line to be tested.
 * @param buffer_size Size of the line.
 * @return int Flag indicating if blank(=1) or not (=0).
 */
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

/**
 * @brief Get the properties of the codata file.
 * 
 * @param props Properties of the codata file.
 */
void get_props(struct codata_file_props *props){

    FILE *codata;
    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    int empty;

    codata = fopen(props->codata_path, "r");

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

/**
 * @brief Print the codata file properties.
 * 
 * @param props Properties of the codata file.
 */
void print_props(struct codata_file_props *props){
    printf("Header ends at index: %zu\n", props->index_header_end);
    printf("Number of constants: %zu\n", props->n);
}

/**
 * @brief Generate the Fortran file documentation
 * 
 * @param fcode File pointer of the Fortran module.
 */
void write_file_doc(FILE *fcode){
    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    
    fprintf(fcode, "%s\n", "!> @file");
    fprintf(fcode, "%s\n", "!! @brief Codata module - autogenerated.");
    fprintf(fcode, "%s\n\n", "");
    free(line);
}

/**
 * @brief Generate the Fortran module documentation. 
 * 
 * @param fcode File pointer of the Fortran module.
 */
void write_module_doc(FILE *fcode){
    fprintf(fcode, "!> %s\n", "@brief Codata constants - autogenerated.");
}

/**
 * @brief Generate the Fortran module declaration.
 * 
 * @param fcode File pointer of the Fortran module.
 * @param props Properties of the codata file. 
 */
void write_module_declaration(FILE *fcode){
    fprintf(fcode, "module codata\n");
    fprintf(fcode, "%s\n", "use iso_c_binding");
    fprintf(fcode, "%s\n", "implicit none");
    fprintf(fcode, "%s\n", "");
}
/**
 * @brief Generate the documentation for the C header.
 * @param fcode File pointer to the C header.
 */
void write_cheader_doc(FILE *fcode){
    fprintf(fcode, "/**\n* %s\n", "@file");
    fprintf(fcode, "%s\n", "* @brief Codata module - autogenerated.");
    fprintf(fcode, "%s\n\n", "*/");
}

/**
 * @brief Generate all constants in the Fortran module.
 * 
 * @param fcodata File pointer to the codata file.
 * @param fcode File pointer to the Fortran module.
 * @param props Properties of the codata file.
 */
void write_all_constants(FILE *fcodata, FILE *fcode, FILE *cheader, struct codata_file_props *props){

    int empty;
    size_t i;

    char *line = (char *)malloc(sizeof(char)*(LINE_LENGTH+1));
    char *name = (char *)malloc(sizeof(char)*(NAMES_LENGTH+1));
    char *value = (char *)malloc(sizeof(char)*(VALUES_LENGTH+1));
    char *uncertainty = (char *)malloc(sizeof(char)*(UNCERTAINTIES_LENGTH+1));
    char *unit = (char *)malloc(sizeof(char)*(UNITS_LENGTH+1));

    fseek(fcodata, 0, SEEK_SET);
    for (i=0; i<props->index_header_end;i++){
        empty = read_line(fcodata, line, LINE_LENGTH);
    }

    for(i=0; i<props->n; i++){
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

            // fortran code
            fprintf(fcode, "real(c_double), protected, bind(C,name=\"%s\") :: &\n%s=%s !< %s\n", name, name, value, unit);
            fprintf(fcode, "real(c_double), protected, bind(C,name=\"U_%s\") :: &\nU_%s=%s !< %s\n", name, name, uncertainty, unit);
            fprintf(fcode, "\n");

            // C code
            convert_value_to_c(value);
            convert_value_to_c(uncertainty);
            fprintf(cheader, "extern const double %s;/**< %s */\n", name, unit);
            fprintf(cheader, "extern const double U_%s;/**< %s */\n", name, unit);
            fprintf(cheader, "\n");
        }
    }

    free(line);
    free(name);
    free(value);
    free(uncertainty);
    free(unit);

}

/**
 * @brief Generate the end of the Fortran module.
 * 
 * @param fcode File pointer to the Fortran module.
 * @param props Properties of the codata file.
 */
void write_module_end(FILE *fcode){
    fprintf(fcode, "end module codata\n");
}

/**
 * @brief Generated Fortran module.
 * 
 * @param argc Number of arguments
 * @param argv List of arguments
 * @return int Exit flag.
 */
int main(int argc, char **argv){

    FILE *fcodata;
    FILE *fcode;
    FILE *cheader;
    struct codata_file_props *props;

    struct codata_file_props props_current = {0, 0, "./codata_2018.txt", "", "codata.f90"}; 
    //struct codata_file_props props_2018 = {0, 0, "./codata_2018.txt", "2018", "codata_2018.f90"}; 
    //struct codata_file_props props_2014 = {0, 0, "./codata_2014.txt", "2014", "codata_2014.f90"}; 
    //struct codata_file_props props_2010 = {0, 0, "./codata_2010.txt", "2010", "codata_2010.f90"}; 

    // avoid compiler complaining
    if (argc>1){
        printf("%d %s", argc, argv[1]);
    }    

    /* Codata current (2018)*/
    props = &props_current;
    fcodata =  fopen(props->codata_path, "r");
    fcode = fopen(props->fmodule_path, "w");
    cheader = fopen("codata.h", "w");
    get_props(props);
    write_file_doc(fcode);
    write_module_doc(fcode);
    write_module_declaration(fcode);
    write_cheader_doc(cheader);
    write_all_constants(fcodata, fcode, cheader, props);
    write_module_end(fcode);
    fclose(fcode);
    fclose(fcodata);


    return EXIT_SUCCESS;
}
