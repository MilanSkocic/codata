A Makefile is provided, which uses `fpm <https://fpm.fortran-lang.org>`_, for building the library.

On windows, `msys2 <https://www.msys2.org>`_ needs to be installed. The MSVC compiler is only necessary
for compiling the python wrapper. 
Add the msys2 binary (usually C:\msys64\usr\bin) to the path in order to be able to use make.

On Darwin, the `gcc <https://formulae.brew.sh/formula/gcc>`_ toolchain needs to be installed.

Build: the configuration file will set all the environmental variables necessary for the compilation

.. code-block:: bash

    chmod +x configure.sh
    . ./configure.sh
    make

Run tests

.. code-block:: bash
    
    make test

Install
    
.. code-block:: bash
    
    make install

Uninstall

.. code-block:: bash

    make uninstall

If building the python wrapper is needed:

.. code-block:: bash

    cd pywrapper
    make clean
    make plat=(windows, linux or darwin)