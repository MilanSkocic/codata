# 2.3.1 {#section .unnumbered}

-   Refactoring the `configure.sh` script.

-   Remove support for 3.14t. No official release on python.org.

-   If binaries for Python 3.14t are needed you need to compile them by
    yourself.

# 2.3.0 {#section-1 .unnumbered}

-   Remove support for Python 3.9 and add support for Python 3.14(t).

[Full changelog](https://github.com/MilanSkocic/codata/releases)

# 2.2.0 {#section-2 .unnumbered}

-   Switch to UCRT64 for Windows binaries.

-   Switch to sphinx documentation using
    [fspx](https://github.com/jalvesz/fspx).

-   Update references with publication for codata 2022.

-   Update compilation flags for compatibility with `stdlib`.

[Full changelog](https://github.com/MilanSkocic/codata/releases)

# 2.1.1 {#section*-3 .unnumbered}

-   No code change.

-   Code refractoring and cleaning

-   Update CI/CD workflows.

[Full changelog](https://github.com/MilanSkocic/codata/releases)

# 2.1.0 {#section-3 .unnumbered}

-   Roll back to C API in Fortran code: easier maintenance.

-   Roll back to compiled C extension for python: easier maintenance.

Full changelog available at
[github](https://github.com/milanskocic/codata/releases)

# 2.0.1 {#section-4 .unnumbered}

-   Fix bug in version for Fortran code.

Full changelog available at
[github](https://github.com/milanskocic/codata/releases)

# 2.0.0 {#section-5 .unnumbered}

-   Drop compiled extensions for Python.

-   Pure Python code for constants auto-generated as it is the case for
    the Fortran code.

-   Pure C code for constants auto-generated as it is the case for the
    Fortran code.

-   API break:

    -   No more C API in the Fortran code.

    -   Use the pure C code to build a C library.

Full changelog available at
[github](https://github.com/milanskocic/codata/releases)

# 1.2.2 {#section-6 .unnumbered}

-   Fix conflict that could occur with C API modules. Add prefix in
    module names.

-   Cleanup and refractoring.

-   Documentation update.

# 1.2.1 {#section-7 .unnumbered}

-   Refractoring

-   Merge back C API and python wrapper.

Full changelog available at
[github](https://github.com/milanskocic/codata/releases)

# 1.2.0 {#section-8 .unnumbered}

-   Refractoring

-   Documentation update.

Full changelog available at
[github](https://github.com/milanskocic/codata/releases)

# 1.1.0 {#section-9 .unnumbered}

-   C API and Python wrapper moved to their own repositories.

    -   [C wrapper](https://github.com/MilanSkocic/codata-capi)

    -   [Python wrapper](https://github.com/MilanSkocic/codata-py)

-   API break: C API is no more provided by default. Use the optional C
    wrapper.

-   Code cleanup

-   Documentation update

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

# 1.0.0 {#section-10 .unnumbered}

-   Add codata values for 2010, 2014 and 2018.

-   Code refractoring and code cleaning.

-   Documentation update and switch to only FORD documentation.

-   Rewrite code generators in python.

-   Generate source code for stdlib.

-   API break: constants are defined as DT like in stdlib.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.10.0 {#section-11 .unnumbered}

-   Remove remove generation of the version module.

-   Add tests using the test-drive framework.

-   Explicit parameter constants for Fortran and protected constants for
    C API.

-   Minor fixes in documentation.

-   Code cleanup.

-   Merge of all code for autogeneration in one file.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.9.0 {#section-12 .unnumbered}

-   No API changes.

-   Automatic generation of the version module.

-   Generic Makefiles for automatic the building process of the library
    and the pywrapper.

-   Add targets: build, build_debug, test, test_debug.

-   Minor fixes in documentation.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.8.2 {#section-13 .unnumbered}

-   No API changes.

-   Improve Makefile for generating the source code at each compilation.

-   Source generator rewritten in Fortran.

-   Switch to pyproject.toml for the Python wrapper.

-   Minor fixes in documentation.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.8.1 {#section-14 .unnumbered}

-   Use shared library in python wrapper.

-   Minor fixes in documentation.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.8.0 {#section-15 .unnumbered}

-   Back to the approach with a library.

-   Compatible with fpm.

-   Configuration file for setting all the environmental variables.

-   Global makefile for building a static library (through fpm) and a
    shared library.

-   Automatic copy of the necessary sources for the python wrapper.

-   Python wrapper built with the static library

    -   no dependency on a shared library.

    -   sources and static library embeded in the python wrapper.

-   FORD for documenting the Fortran code.

-   Integration of the FORD documentation into the main documentation
    with sphinx.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.7.1 {#section-16 .unnumbered}

-   Minor fixes in generator code

-   Add automatic copy of c sources for the python wrapper.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.7.0 {#section-17 .unnumbered}

-   Migrate documentation from doxygen to sphinx+breathe.

-   Add YEAR constant indicating the year of the codata constants.

-   Refractoring

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.6.0 {#section-18 .unnumbered}

-   Created documentation.

-   Fixed missing uncertainties for Cpython.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.5.0 {#section-19 .unnumbered}

-   Changed the complete approach by not generating a library but only
    source files for different languages.

-   Available languages: Fortran, C, python, CPython

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.4.0 {#section-20 .unnumbered}

-   Bring back pywrapper in the codata repository to sync versions.

-   Improvements of the documentation.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.3.0 {#section-21 .unnumbered}

-   Only last codata constants.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.2.1 {#section-22 .unnumbered}

-   Integration of Intel Fortran compiler and MSVC in cmake scripts.

-   Add specifications and instructions for compiling on Windows

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.2.0 {#section-23 .unnumbered}

-   Bug fixes for the codata 2010.

-   Bug fixes in the tests linked to the codata 2010.

-   Add python wrapper for the number of constants method.

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).

# 0.1.0 {#section-24 .unnumbered}

Implementation of:

-   the parser of the codata raw data

-   the generator of the Fortran modules

-   the C API and C header

-   the python wrapper (will be moved to its repository next release).

Full changelog available at
[github](https://github.com/MilanSkocic/codata/releases)

Python wrapper available at [pypi](https://pypi.org/project/pycodata).
