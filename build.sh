#!/bin/bash

. configure.sh

echo ""
echo "BUILD LIBS"
d=./build/install
make
make install prefix=$d

# echo ""
# echo "DEPLOY GFORTRAN LIBS"
# for lib in ${LIBS[@]}; do
#     if [ -f $ROOT$lib$EXT ]; then
#         cp -v $ROOT$lib$EXT $d/lib/
#     else
#         echo -n $lib$EXT" -> "
#         echo "Not found."
#     fi
# done

echo ""
echo "DEPLOY LIBS TO PYTHON"
cp -vf $d/bin/* py/$PY_SRC/
cp -vf $d/include/$NAME*.h py/$PY_SRC/
cp -vf $d/lib/* py/$PY_SRC/


# if [[ $PLATFORM == "darwin" ]]; then
#     echo ""
#     echo "CHECK RPATHS FOR DARWIN"
#     # in case od shared libs: change rpaths for dependencies
#     for lib in ${LIBS[@]}; do
#         install_name_tool -change /usr/local/opt/gcc@10/lib/gcc/10/$lib$EXT @loader_path/$lib$EXT $d/lib/$LIBNAME$EXT
#         install_name_tool -change /usr/local/opt/gcc@10/lib/gcc/10/$lib$EXT @loader_path/$lib$EXT py/$PY_SRC/$LIBNAME$EXT
#     done
#     otool -L $d/lib/$LIBNAME$EXT
# fi

echo ""
echo "ZIP LIBS"
cd $d/
zip -r $NAME-$PLATFORM-$ARCH-$VERSION.zip .
cd ../../
mv $d/$NAME-$PLATFORM-$ARCH-$VERSION.zip ./build/

echo ""
echo "BUILD PYTHON WRAPPER"
make -C py
cd ./py
if [[ $PLATFORM == "linux" ]]; then
    cp ./wheelhouse/*.whl ./dist/
fi
cd ./dist
zip $PYNAME-$PLATFORM-$ARCH-$VERSION.zip *.*
cd ..
cd ..