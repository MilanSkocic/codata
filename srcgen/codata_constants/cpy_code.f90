module cpy_code
    !! Functions for writing the cpython code
    use iso_fortran_env
    implicit none

contains

subroutine write_cpython_extension_declaration(fcode)
    !! Generate the cpython module declaration.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the Python module.

    write(fcode, "(A)") "#define PY_SSIZE_T_CLEAN"
    write(fcode, "(A)") "#include <Python.h>"
    write(fcode, "(A)") '#include "codata.h"'
    write(fcode, "(A)") ""
    write(fcode, "(A)") 'PyDoc_STRVAR(module_docstring, "C extension for codata constants.");'
    write(fcode, "(A)") ""
    write(fcode, "(A)") "static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};"
    write(fcode, "(A)") ""
    write(fcode, "(A)") 'static struct PyModuleDef codata = {PyModuleDef_HEAD_INIT, "codata", module_docstring, -1, myMethods};'
    write(fcode, "(A)") ""
    write(fcode, "(A)") "PyMODINIT_FUNC PyInit_codata(void){"
    write(fcode, "(4X, A)") "PyObject *m;"
    write(fcode, "(4X, A)") "PyObject *d;"
    write(fcode, "(4X, A)") "PyObject *v;"
    write(fcode, "(4X, A)") "m = PyModule_Create(&codata);"
    write(fcode, "(4X, A)") "d = PyModule_GetDict(m);"
    write(fcode, "(A)") ""
end subroutine

subroutine write_cpython_extension_end(fcode)
    !! Generate the cpython module end.
    implicit none
    integer(int32), intent(in) :: fcode
        !! File unit of the Python module.
    write(fcode, "(4X, A)") "return m;"
    write(fcode, "(A)") "}"
end subroutine

end module