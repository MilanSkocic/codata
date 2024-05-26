LIBNAME="libcodata"
NAME="codata"

# environment variables
FC=gfortran
BUILD_DIR="./build"
INCLUDE_DIR="./include"
FPM_FFLAGS="-std=f2008 -pedantic -Wall -Wextra"
FPM_CFLAGS="-std=c11 -pedantic -Wall -Wextra"
FPM_LDFLAGS=""
DEFAULT_INSTALL_DIR="$HOME/.local"
PLATFORM="linux"

if [[ "$OSTYPE" == "msys" ]]; then
    DEFAULT_INSTALL_DIR="${APPDATA//\\//}/local"
    PLATFORM="windows"
fi

if [[ "$OSTYPE" == "darwin"* ]];then
    PLATFORM="darwin"
fi

export LIBNAME
echo "LIBNAME=" $LIBNAME

export NAME
echo "NAME=" $NAME

export PLATFORM
echo "PLATFORM=" $PLATFORM

export FPM_FFLAGS
echo "FPM_FFLAGS=" $FPM_FFLAGS

export FPM_CFLAGS
echo "FPM_CFLAGS=" $FPM_CFLAGS

export FPM_LDFLAGS
echo "FPM_LDFLAGS=" $FPM_LDFLAGS

export DEFAULT_INSTALL_DIR
echo "DEFAULT INSTALL DIR=" $DEFAULT_INSTALL_DIR

export BUILD_DIR
echo "BUILD DIR=" $BUILD_DIR

export INCLUDE_DIR
echo "INCLUDE_DIR=" $INCLUDE_DIR

export FC
echo "FC=" $FC
