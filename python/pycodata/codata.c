#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>
#include <string.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "Codata constants from NIST.");

PyDoc_STRVAR(codata_set_year_doc, 
"set_year(year=last) --> None \n\n"
"Set the revision year for the codata constants.");

PyDoc_STRVAR(codata_get_year_doc, 
"get_year() --> str \n\n"
"Get the revision year for the codata constants.");

PyDoc_STRVAR(codata_print_doc, 
"print() --> None \n\n"
"Print all codata constants.");

PyDoc_STRVAR(codata_get_value_doc, 
"get_value(name) --> float \n\n"
"Get the value of the constant defined by name. If not found returns NaN");

PyDoc_STRVAR(codata_get_unit_doc, 
"get_unit(name) --> float \n\n"
"Get the unit of the constant defined by name. If not found returns \"None\"");

PyDoc_STRVAR(codata_as_dict_doc, 
"as_dict() --> dict \n\n"
"Return all constants available in a dictionnary");

static PyObject *_codata_set_year(PyObject *self, PyObject *args, PyObject *kwargs){
    
    static char *kwlist[] = {"year", NULL};
    char _year[5] = "XXXX";
    char *year = _year;
    
    if(!PyArg_ParseTupleAndKeywords(args, kwargs, "|s", kwlist, &year)){
        PyErr_SetString(PyExc_TypeError, "year must be of type str.");
        return NULL;
    }

    codata_capi_set_year(year, strlen(year));

    Py_RETURN_NONE;

}

static PyObject *_codata_get_year(PyObject *self, PyObject *args)
{
    char *year; 
    year = codata_capi_get_year();
    return Py_BuildValue("s", year);
}

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

static PyObject *_codata_get_unit(PyObject *self, PyObject *args){
    
    char *name;
    char *value;

    if(!PyArg_ParseTuple(args, "s", &name)){
        PyErr_SetString(PyExc_TypeError, "name must be of type str.");
        return NULL;
    }

    value = codata_capi_get_unit(name, strlen(name));

    return Py_BuildValue("s", value);
}

static PyObject *_codata_constants_as_dict(PyObject *self, PyObject *args){

    PyObject *dict = PyDict_New();
    PyObject *subdict;
    PyObject *str;
    double value;
    double uncertainty;
    int i;
    int n;
    char *name;
    char *unit;

    n = codata_capi_get_number_constants();

    for(i=0; i<n; i++){
        subdict = PyDict_New();
        unit = codata_capi_get_unit_by_index(i);
        str = PyUnicode_FromString(unit);
        value = codata_capi_get_value_by_index(i);
        uncertainty = codata_capi_get_uncertainty_by_index(i);
        

        PyDict_SetItemString(subdict, "Value", PyFloat_FromDouble(value));
        PyDict_SetItemString(subdict, "Uncertainty", PyFloat_FromDouble(uncertainty));
        PyDict_SetItemString(subdict, "Unit", str);
        
        name = codata_capi_get_name_by_index(i);
        str = PyUnicode_FromString(name);
        PyDict_SetItemString(dict, name, subdict);
    }
    return dict;

}

static PyMethodDef myMethods[] = {
    {"set_year", (PyCFunction) _codata_set_year, METH_VARARGS|METH_KEYWORDS, codata_set_year_doc },
    {"get_year", (PyCFunction) _codata_get_year, METH_NOARGS, codata_get_year_doc },
    {"print", (PyCFunction) _codata_print, METH_NOARGS, codata_print_doc },
    {"get_value", (PyCFunction) _codata_get_value, METH_VARARGS, codata_get_value_doc},
    {"get_unit", (PyCFunction) _codata_get_unit, METH_VARARGS, codata_get_unit_doc},
    {"as_dict", (PyCFunction) _codata_constants_as_dict, METH_NOARGS, codata_as_dict_doc},
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


