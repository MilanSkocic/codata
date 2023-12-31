/**
* @file
* @brief Version
*/

#ifndef codata_VERSION_H
#define codata_VERSION_H
#if _MSC_VER
#define ADD_IMPORT __declspec(dllimport)
#else
#define ADD_IMPORT
#endif
extern char* capi_get_version(void);
#endif

