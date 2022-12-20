#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <string.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "Codata constants.");

PyDoc_STRVAR(codata_print_doc, 
"print() --> None \n\n"
"Print all codata constants.");

PyDoc_STRVAR(codata_get_value_doc, 
"get_value(name) --> float \n\n"
"Get the value of the constant defined by name. If not found returns NaN");

static PyObject *_codata_print(PyObject *self, PyObject *args)
{
    codata_capi_print();
    Py_RETURN_NONE;
}

static PyObject *_codata_get_value(PyObject *self, PyObject *args){
    
    char *name;
    double value;

    if(!PyArg_ParseTuple(args, "s", &name)){
        PyErr_SetString(PyExc_TypeError, "name must be of type str.");
        return NULL;
    }

    value = codata_capi_get_value(name, strlen(name));

    return Py_BuildValue("d", value);
}


static PyMethodDef myMethods[] = {
    { "print", (PyCFunction) _codata_print, METH_NOARGS, codata_print_doc },
    {"get_value", (PyCFunction) _codata_get_value, METH_VARARGS, codata_get_value_doc},
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


