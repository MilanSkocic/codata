#ifndef CODATA_CONSTANTS_TYPE_H
#define CODATA_CONSTANTS_TYPE_H

struct codata_constant_type{
    char name[65];
    double value;
    double uncertainty;
    char unit[33];
};

#endif
