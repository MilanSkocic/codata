#!/bin/bash

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
CFLAGS_RELEASE="-fPIC -O3 -funroll-loops"
CFLAGS_DEBUG="-fPIC -g"
DEFAULT_INSTALL_DIR="$HOME/.local"
PLATFORM="linux"
EXT=".so"


echo "Detecting platform..."
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


echo "Copying version and license..."
cp -f VERSION ./py/VERSION
cp -f LICENSE ./py/LICENSE
cp -f VERSION ./C/VERSION
cp -f LICENSE ./C/LICENSE


echo "Exporting env variables..."
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

