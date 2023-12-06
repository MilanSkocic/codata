LIBNAME="codata"

# environment variables
FC=gfortran
PYW_DIR="./pywrapper"
BUILD_DIR="./build"
INCLUDE_DIR="./include"
PYW_MOD_DIR="$PYW_DIR/py$LIBNAME"
FPM_FFLAGS="-std=f2008 -pedantic -Wall -Wextra"
FPM_CFLAGS="-std=c11 -pedantic -Wall -Wextra"
FPM_LDFLAGS="-static"
DEFAULT_INSTALL_DIR="$HOME/.local"
PLATFORM="linux"

IFS='-'
tmp=$(gcc -dumpmachine)
read -a tmp_arr <<< "$tmp"
ARCH="${tmp_arr[0]}"

IFS="="
while read -r line; do
    # Reading line by line
    if [[ $line == "version"* ]] 
    then
        read -a tmp_arr <<< "$line"
        VERSION=${tmp_arr[1]:2:5}
        break
    fi
done < "fpm.toml"

if [[ "$OSTYPE" == "msys" ]]; then
    DEFAULT_INSTALL_DIR="${APPDATA//\\//}/local"
    PLATFORM="windows"
fi

if [[ "$OSTYPE" == "darwin"* ]];then
    FPM_LDFLAGS="-static-libgfortran -static-libquadmath -static-libgcc"
    PLATFORM="darwin"
fi

export FPM_FFLAGS
export FPM_CFLAGS
export FPM_LDFLAGS
export DEFAULT_INSTALL_DIR
export LIBNAME
export PYW_DIR
export PYW_MOD_DIR
export BUILD_DIR
export INCLUDE_DIR
export PLATFORM
export ARCH
export VERSION
export FC

echo "OS TYPE=" $OSTYPE
echo "PLATFORM=" $PLATFORM
echo "ARCH=" $ARCH
echo "VERSION=" $VERSION
echo "DEFAULT INSTALL DIR=" $DEFAULT_INSTALL_DIR
echo "FPM_FLAGS=" $FPM_FFLAGS
echo "FPM_CFLAGS=" $FPM_CFLAGS
echo "FPM_LDFLAGS=" $FPM_LDFLAGS
echo "PYW DIR=" $PYW_DIR
echo "PYW MOD DIR=" $PYW_MOD_DIR
echo "BUILD DIR=" $BUILD_DIR
echo "INCLUDE_DIR=" $INCLUDE_DIR
echo "FC=" $FC