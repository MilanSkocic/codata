#!/usr/bin/env bash

fpath="./example.txt"

echo "" > $fpath

echo "    Example in Fortran" >> $fpath
echo "" >> $fpath
while IFS="" read -r line; do
    echo "        $line" >> $fpath
done < "../example/example.f90"
echo "" >> $fpath

echo "    Example in C"       >> $fpath
echo "" >> $fpath
while IFS="" read -r line; do
    echo "        $line" >> $fpath
done < "../example/example.c"
echo "" >> $fpath

echo "    Example in Python"  >> $fpath
echo "" >> $fpath
while IFS="" read -r line; do
    echo "        $line" >> $fpath
done < "../example/example.py"
echo "" >> $fpath
