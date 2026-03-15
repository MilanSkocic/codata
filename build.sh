#!/usr/bin/env bash

. configure.sh

echo ""
echo "BUILD LIBS"
d=./build/install
make
make install prefix=$d

echo ""
echo "DEPLOY LIBS TO PYTHON"
cp -vf $d/bin/* py/$FPM_PY_SRC/
cp -vf $d/include/$FPM_NAME*.h py/$FPM_PY_SRC/
cp -vf $d/lib/* py/$FPM_PY_SRC/

echo ""
echo "ZIP LIBS"
cd $d/
zip -r $FPM_NAME-$FPM_PLATFORM-$FPM_ARCH-$FPM_VERSION.zip .
cd ../../
mv $d/$FPM_NAME-$FPM_PLATFORM-$FPM_ARCH-$FPM_VERSION.zip ./build/

echo ""
echo "BUILD PYTHON WRAPPER"
make -C py
cd ./py
if [[ $FPM_PLATFORM == "linux" ]]; then
    cp ./wheelhouse/*.whl ./dist/
fi
cd ./dist
zip $FPM_PYNAME-$FPM_PLATFORM-$FPM_ARCH-$FPM_VERSION.zip *.*
cd ..
cd ..
