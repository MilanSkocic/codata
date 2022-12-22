/**
 * @file
 * 
 * @brief C header for the codata library.
 * @example example_in_c.c 
 */

/**
 * @brief Get the number of constants
 * @return Number of the constants.
 */
extern int codata_capi_get_number_constants();


/**
 * @brief Display all constants
 */
extern void codata_capi_print();


/**
 *  @brief Get the value of the constant by name
 * @param[in] name Name of the constant
 * @param[in] length Length of the string
 * @return value or NaN if not found
 */
extern double codata_capi_get_value(char *name, int length);

/**
 *  @brief Get the uncertainty of the constant by name
 * @param[in] name Name of the constant
 * @param[in] length Length of the string
 * @return value or NaN if not found
 */
extern double codata_capi_get_uncertainty(char *name, int length);

/**
 *  @brief Get the unit of the constant by name
 * @param[in] name Name of the constant
 * @param[in] length Length of the string
 * @return unit or None if not found
 */
extern char * codata_capi_get_unit(char *name, int length);

/**
 * @brief Get the value of the constant by index 
 * @param[in] index Index of the position.
 * @return value or NaN if not found.
 */
extern double codata_capi_get_value_by_index(int index);

/**
 * @brief Get the uncertainty of the constant by index 
 * @param[in] index Index of the position.
 * @return value or NaN if not found.
 */
extern double codata_capi_get_uncertainty_by_index(int index);


/**
 * @brief Get the name of the constant by index 
 * @param[in] index Index of the position.
 * @return name or None if not found.
 */
extern char* codata_capi_get_name_by_index(int index);

/**
 * @brief Get the unit of the constant by index 
 * @param[in] index Index of the position.
 * @return unit or None if not found.
 */
extern char* codata_capi_get_unit_by_index(int index);