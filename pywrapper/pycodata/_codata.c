#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>
#include <string.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "C extension wrapping the (Modern Fortran) codata constants.");

static PyMethodDef myMethods[] = {
    { NULL, NULL, 0, NULL }
};

// Our Module Definition struct
static struct PyModuleDef _codata = {
    PyModuleDef_HEAD_INIT,
    "_codata",
    module_docstring,
    -1,
    myMethods
};

// Initializes our module using our above struct
PyMODINIT_FUNC PyInit__codata(void)
{
    return PyModule_Create(&_codata);
}


