#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata.h"


PyDoc_STRVAR(module_docstring, "C extension for codata version.");

static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};
static struct PyModuleDef version= {PyModuleDef_HEAD_INIT, "version", module_docstring, -1, myMethods};

PyMODINIT_FUNC PyInit_version(void){
    PyObject *m;
    PyObject *d;
    PyObject *v;
    m = PyModule_Create(&version);
    d = PyModule_GetDict(m);
    v = PyUnicode_FromFormat("%s", codata_get_version());
    PyDict_SetItemString(d, "__version__", v);
    Py_INCREF(v);
    return m;
}
