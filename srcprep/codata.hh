/* SPDX-License-Identifier: MIT */

#ifndef CODATA_H
#define CODATA_H
#if _MSC_VER
#define ADD_IMPORT __declspec(dllimport)
#else
#define ADD_IMPORT
#endif

extern char* codata_get_version(void);
extern char* codata_version(void); 

typedef struct codata_constant_type{
    char name[65];
    double value;
    double uncertainty;
    char unit[33];
}cct;

//----------------------------------------------------------------------
// CODATA_CONSTANTS_2010
//----------------------------------------------------------------------
//{{{
$INCLUDE ../data/build/codata_constants_2010.h
//}}}

//----------------------------------------------------------------------
// CODATA_CONSTANTS_2014
//----------------------------------------------------------------------
//{{{
$INCLUDE ../data/build/codata_constants_2014.h
//}}}

//----------------------------------------------------------------------
// CODATA_CONSTANTS_2018
//----------------------------------------------------------------------
//{{{
$INCLUDE ../data/build/codata_constants_2018.h
//}}}

//----------------------------------------------------------------------
// CODATA_CONSTANTS_2022
//----------------------------------------------------------------------
//{{{
$INCLUDE ../data/build/codata_constants_2022.h
//}}}

#endif
