# Installation 

## Create build directory

* mkdir build

* cd build

## Generate a makefile

* On Unix-like OS: `cmake -G "Unix Makefiles" -S .. -DCMAKE_BUILD_TYPE=release -DCMAKE_INSTALL_PREFIX=/path/to/folder`

* On windows with MSYS2: `cmake -G "Unix Makefiles" -S .. -DCMAKE_BUILD_TYPE=release -DCMAKE_INSTALL_PREFIX=/path/to/folder`


## Build either with cmake

    cmake --build . 

## Run tests

    ctest

## Install
    
    cmake --install .