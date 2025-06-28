#!/usr/bin/env bash

update_version () {
    local mod=$1
    local v=$2
    
    f="./src/"$mod"_version.f90"
    echo "module "$mod"__version"           > $f
    echo "    !! Version"                   >> $f
    echo "    implicit none"                >> $f
    echo "    private"                      >> $f
    echo "    character(len=*), parameter, public :: version = \"$v\"" >> $f
    echo "end module "$mod"__version" >> $f
    
    echo -n $FPM_VERSION > ./py/VERSION
}

export FPM_NAME=$(cat fpm.toml | grep -m 1 "name =" | awk -F '=' '{print $2}' | sed -E 's/[ "]//g')
export FPM_VERSION=$(tr -d '\r' < VERSION | tr -d '\n')
export FPM_LIBNAME="lib$FPM_NAME"
export FPM_PYNAME="py$FPM_NAME"
export FPM_PY_SRC="./src/$FPM_PYNAME"
export FPM_AW="auditwheel repair --plat manylinux_2_35_x86_64 ./dist/*.whl"

update_version $FPM_NAME $FPM_VERSION

# environment variables
export FPM_FC=gfortran
export FPM_CC=gcc
export FPM_PY=python
export FPM_PYGEN=python
export FPM_BUILD_DIR="./build"
export FPM_INCLUDE_DIR="./include"
export FPM_FFLAGS="-fPIC -pedantic -Wall -Wextra"
export FPM_CFLAGS="-fPIC -pedantic -Wall -Wextra"
export FPM_LDFLAGS=""
export FPM_DEFAULT_INSTALL_DIR="$HOME/.local"
export FPM_PLATFORM="linux"
export FPM_ARCH=$(uname -m)
export FPM_EXT=".so"

# libs
# export FPM_LIBSLINUX=("libgfortran.so.5" "libquadmath.so.0")
export FPM_LIBSLINUX=""
export FPM_LIBSDARWIN=("libgfortran.5" "libquadmath.0" "libgcc_s.1.1")
export FPM_LIBSWINDOWS=("libgfortran-5" "libquadmath-0" "libgcc_s_seh-1" "libwinpthread-1")

export FPM_ROOT="/usr/lib/x86_64-linux-gnu/"
export FPM_LIBS="${LIBSLINUX[@]}"

if [[ "$OSTYPE" == "msys" ]]; then
    FPM_DEFAULT_INSTALL_DIR="${APPDATA//\\//}/local"
    FPM_PLATFORM="windows"
    FPM_ARCH=$MSYSTEM_CARCH
    FPM_ROOT=$(dirname $(where gfortran))"\\"
    FPM_EXT=".dll"
    FPM_LIBS=( "${LIBSWINDOWS[@]}" )
    FPM_PY="py -"
    FPM_PYGEN="py"
    FPM_LDFLAGS="-static"
    FPM_AW=""
fi

if [[ "$OSTYPE" == "darwin"* ]];then
    FPM_PLATFORM="darwin"
    FPM_ROOT="/usr/local/opt/gcc/lib/gcc/current/"
    FPM_EXT=".dylib"
    FPM_LIBS=( "${LIBSDARWIN[@]}" )
    FPM_LDFLAGS="-static-libgfortran -static-libquadmath -static-libgcc"
    FPM_AW=""
fi

if [[ "$FPM_VERSION" == *"dev"* ]]; then
    export FPM_VERSION=$(git rev-parse --short HEAD)
fi

for i in "$(printenv | grep ^FPM_)"; do
    echo $i
done

cp -vf LICENSE ./py/LICENSE
