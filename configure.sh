#!/bin/bash

function prepare_readme () {

    local fpath_readme_tpl="$1"
    local fpath_readme="$2"
    local fpath_example_in_f="$3"
    local fpath_example_in_c="$4"
    local fpath_example_in_py="$5"

    echo "" > $fpath_readme
    while read line
    do
        set -f
        echo $line >> $fpath_readme
        set +f
    done < $fpath_readme_tpl

    echo "\`\`\`Fortran" >> $fpath_readme
    while read line
    do
        echo $line >> $fpath_readme
    done < $fpath_example_in_f
    echo "\`\`\`" >> $fpath_readme
    
    echo "\`\`\`C" >> $fpath_readme
    while read line
    do
        echo $line >> $fpath_readme
    done < $fpath_example_in_c
    echo "\`\`\`" >> $fpath_readme
    
    echo "\`\`\`Python" >> $fpath_readme
    while read line
    do
        echo $line >> $fpath_readme
    done < $fpath_example_in_py
    echo "\`\`\`" >> $fpath_readme
}

NAME="codata"
LIBNAME="lib$NAME"
PYNAME="py$NAME"
PY_SRC="./src/$PYNAME"

# environment variables
FC=gfortran
CC=gcc
PY=python
BUILD_DIR="./build"
INCLUDE_DIR="./include"
FPM_FFLAGS="-std=f2008 -pedantic -Wall -Wextra"
FPM_CFLAGS="-std=c11 -pedantic -Wall -Wextra"
FPM_LDFLAGS=""
DEFAULT_INSTALL_DIR="$HOME/.local"
PLATFORM="linux"
EXT=".so"


echo -n "Detecting platform..."
if [[ "$OSTYPE" == "msys" ]]; then
    PY=py -
    DEFAULT_INSTALL_DIR="${APPDATA//\\//}/local"
    PLATFORM="windows"
    ROOT=$ROOTWINDOWS
    EXT=".dll"
    LIBS=( "${LIBSWINDOWS[@]}" )
fi

if [[ "$OSTYPE" == "darwin"* ]];then
    PLATFORM="darwin"
    ROOT=$ROOTDARWIN
    EXT=".dylib"
    LIBS=( "${LIBSDARWIN[@]}" )
fi
echo "OK"

echo -n "Exporting env variables..."
export LIBNAME
export NAME
export PLATFORM
export FPM_FFLAGS
export FPM_CFLAGS
export FPM_LDFLAGS
export DEFAULT_INSTALL_DIR
export BUILD_DIR
export INCLUDE_DIR
export PY_SRC
export FC
export CC
export PY
export EXT
echo "OK"

echo "##### COMMON SETTINGS #####"
echo "* LIBNAME=" $LIBNAME
echo "* NAME=" $NAME
echo "* PLATFORM=" $PLATFORM

echo "##### FPM SETTINGS #####"
echo "* FPM_FFLAGS=" $FPM_FFLAGS
echo "* FPM_CFLAGS=" $FPM_CFLAGS
echo "* FPM_LDFLAGS=" $FPM_LDFLAGS

echo "##### INSTALLATION SETTINGS #####"
echo "* DEFAULT INSTALL DIR=" $DEFAULT_INSTALL_DIR
echo "* BUILD DIR=" $BUILD_DIR
echo "* INCLUDE_DIR=" $INCLUDE_DIR

echo "##### PYTHON SETTINGS #####"
echo "* PY_SRC=" $PY_SRC

echo "##### COMPILERS #####"
echo "* FC=" $FC
echo "* CC=" $CC
echo "* PY=" $PY


echo -n "Copying version and license for python..."
cp -f VERSION ./py/VERSION
cp -f LICENSE ./py/LICENSE
echo "OK"

echo -n "Generating examples in README..."
fpath_readme_tpl="./README_TEMPLATE.txt"
fpath_readme="./README.md"
fpath_example_in_f="./example/example.f90"
fpath_example_in_c="./example/example.c"
fpath_example_in_py="./example/example.py"
prepare_readme $fpath_readme_tpl $fpath_readme $fpath_example_in_f $fpath_example_in_c $fpath_example_in_py
echo "OK"

