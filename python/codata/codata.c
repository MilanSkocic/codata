#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "Codata constants.");

PyDoc_STRVAR(codata_print_doc, "Print all codata constants.");

static PyObject *_codata_print(PyObject *self, PyObject *args)
{
    codata_print();
    Py_RETURN_NONE;
}


static PyMethodDef myMethods[] = {
    { "print", (PyCFunction) _codata_print, METH_NOARGS, codata_print_doc },
    { NULL, NULL, 0, NULL }
};

// Our Module Definition struct
static struct PyModuleDef codata = {
    PyModuleDef_HEAD_INIT,
    "codata",
    module_docstring,
    -1,
    myMethods
};

// Initializes our module using our above struct
PyMODINIT_FUNC PyInit_codata(void)
{
    return PyModule_Create(&codata);
}


