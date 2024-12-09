#!/bin/bash

function prepare_readme () {

    local fpath_readme_tpl="$1"
    local fpath_readme="$2"
    local fpath_example="$3"
    local lang="$4"

    echo "" > $fpath_readme
    while read line
    do
        echo $line >> $fpath_readme
    done < $fpath_readme_tpl

    echo "\`\`\`$lang" >> $fpath_readme
    while read line
    do
        echo $line >> $fpath_readme
    done < $fpath_example
    echo "\`\`\`" >> $fpath_readme
}

LIBNAME="libcodata"
NAME="codata"
PYNAME="py$NAME"
PY_SRC="./src/$PYNAME"
C_SRC="./C/src/"

# environment variables
FC=gfortran
CC=gcc
BUILD_DIR="./build"
INCLUDE_DIR="./include"
FPM_FFLAGS="-std=f2008 -pedantic -Wall -Wextra"
FPM_CFLAGS="-std=c11 -pedantic -Wall -Wextra"
FPM_LDFLAGS=""
CFLAGS_RELEASE="-O3 -funroll-loops -fmax-errors=1"
CFLAGS_DEBUG="-g -fmax-errors=1"
DEFAULT_INSTALL_DIR="$HOME/.local"
PLATFORM="linux"
EXT=".so"


echo -n "Detecting platform..."
if [[ "$OSTYPE" == "msys" ]]; then
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
export CFLAGS_DEBUG
export CFLAGS_RELEASE
export DEFAULT_INSTALL_DIR
export BUILD_DIR
export INCLUDE_DIR
export PY_SRC
export C_SRC
export FC
export CC
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
echo "* CFLAGS_DEBUG=" $CFLAGS_DEBUG
echo "* CFLAGS_RELEASE=" $CFLAGS_RELEASE

echo "##### INSTALLATION SETTINGS #####"
echo "* DEFAULT INSTALL DIR=" $DEFAULT_INSTALL_DIR
echo "* BUILD DIR=" $BUILD_DIR
echo "* INCLUDE_DIR=" $INCLUDE_DIR

echo "##### PYTHON SETTINGS #####"
echo "* PY_SRC=" $PY_SRC

echo "##### COMPILERS #####"
echo "* FC=" $FC
echo "* CC=" $CC


echo -n "Copying version and license for C..."
cp -f VERSION ./C/VERSION
cp -f LICENSE ./C/LICENSE
echo "OK"

echo -n "Copying version and license for python..."
cp -f VERSION ./py/VERSION
cp -f LICENSE ./py/LICENSE
echo "OK"

echo -n "Generating README for fortran..."
fpath_example="./example/example.f90"
fpath_readme_tpl="./README_TEMPLATE.txt"
fpath_readme="./README.md"
lang="Fortran"
prepare_readme $fpath_readme_tpl $fpath_readme $fpath_example $lang
echo "OK"

echo -n "Generating README for C..."
fpath_example="./C/example/example.c"
fpath_readme_tpl="./C/README_TEMPLATE.txt"
fpath_readme="./C/README.md"
lang="C"
prepare_readme $fpath_readme_tpl $fpath_readme $fpath_example $lang
echo "OK"

echo -n "Generating README for python..."
fpath_example="./py/example/example.py"
fpath_readme_tpl="./py/README_TEMPLATE.txt"
fpath_readme="./py/README.md"
lang="python"
prepare_readme $fpath_readme_tpl $fpath_readme $fpath_example $lang
echo "OK"