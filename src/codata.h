/**
 * @file
 * 
 * @brief C header for the codata library.
 * @example example_in_c.c 
 */


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
 * @brief Get the value of the constant by index 
 * @param[in] index Index of the position.
 * @return value or NaN if not found.
 */
extern double codata_capi_get_value_by_index(int index);