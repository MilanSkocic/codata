An Makefile is provided which uses `fpm <https://fpm.fortran-lang.org/en/index.html>`_ for building the library
with additional options:

* compile the source generator and generate the sources
* copy needed sources into the python wrapper folder
* build a shared library
* install the C headers 
* uninstall the library and headers

On windows, `msys2 <https://www.msys2.org>`_ needs to be installed and use 
the mingw64 or mingw32 terminals.

Build: the configuration file will set all the environmental variables necessary for the compilation

.. code-block:: bash

    source configuration
    make

Run tests

.. code-block:: bash
    
    fpm test

Install
    
.. code-block:: bash
    
    make install

Uninstall

.. code-block:: bash

    make uninstall

If a shared is needed:

.. code-block:: bash

    make shared

Then, if you need to build to Python wrapper from sources

.. code-block:: bash

    cd pywrapper
    python setup.py build_ext --inplace

