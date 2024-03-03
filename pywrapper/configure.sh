PYW_SRC="./src/py$HEADER_PREFIX"
LIB_INCLUDE_DIR="../include"
LIB_BUILD_DIR="../build"

EXT=".so"

LIBS=("libgfortran.5" "libquadmath.0" "libgcc_s.1.1")
LIBSWINDOWS=("libwinpthread")

ROOTLINUX=/usr/lib/
ROOTDARWIN=/usr/local/opt/gcc/lib/gcc/current
ROOTWINDOWS=/C/msys64/mingw64/bin
ROOT=$ROOTLINUX

export PYW_SRC
echo "PYW_SRC=" $PYW_SRC

export LIB_INCLUDE_DIR
echo "LIB_INCLUDE_DIR=" $LIB_INCLUDE_DIR

export LIB_BUILD_DIR
echo "LIB_BUILD_DIR=" $LIB_BUILD_DIR


if [ "$PLATFORM" = "darwin" ]; then
    ROOT=$ROOTDARWIN
    EXT=".dylib"
fi

if [ "$PLATFORM" = "windows" ]; then
    ROOT=$ROOTWINDOWS
    EXT=".dll"
    LIBS+=$LIBSWINDOWS
fi

if ! [ -z $1 ]; then
    ROOT=$1
fi

# LIBRARY
echo "$LIBNAME folder: $LIB_BUILD_DIR"
fpath=$LIB_BUILD_DIR/$LIBNAME$EXT 
if [ -f $fpath ]; then
    echo -n "    $fpath exists."
    cp $fpath $PYW_SRC
    echo " Copied."
    if [ "$PLATFORM" = "windows" ]; then
        cp $fpath.a $PYW_SRC
    fi
else
    echo "    $fpath does not exist."
fi


# C HEADERS
echo "Include folder: $LIB_INCLUDE_DIR"
for header in "$LIB_INCLUDE_DIR"/*; do
   echo -n "    $header."
   cp $LIB_INCLUDE_DIR/$header $PYW_SRC
   echo  " Copied."
done


# GFORTRAN LIBRARIES
echo "Gfortran libraries: $ROOT"
for lib in ${LIBS[@]}; do
    fpath=$ROOT/$lib$EXT
    if [ -f "$fpath" ]; then
        echo -n "   $fpath exists."
        cp "$fpath" $PYW_SRC
        if [ "$PLATFORM" = "darwin" ]; then
            install_name_tool -change "$fpath" "@loader_path/$lib$EXT" $PYW_SRC/$LIBNAME$EXT
            echo " Copied. Changed rpath in $LIBNAME$EXT."
        else
            echo " Copied."
        fi
    else
        echo "   $fpath does not exist."
    fi
done


if [ "$PLATFORM" = "darwin" ]; then
    echo "Check rpaths:"
    otool -L $PYW_SRC/$LIBNAME$EXT
fi
