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
 * @return value or NaN if not found
 */
extern double codata_capi_get_value(char *name, int length);