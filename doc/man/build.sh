#!/usr/bin/env bash

PREP_DOC_DIR=../../prep/doc
DOC_BUILD_DIR=.
DOC_NAME="${FPM_NAME:-codata}"

echo "Generating man pages..."
files=$(ls $PREP_DOC_DIR/*.prepdoc)
for file in $files; do
    man_name=$(basename -s .prepdoc $file)
    man_section=$(echo $man_name | cut -d "." -f 2)
    man_name_nosec=$(echo $man_name | cut -d "." -f 1)
    man_title=$(echo $man_name_nosec | sed "s/$DOC_NAME\_//g")
    man_number=${man_section:0:1}
    
    fp_man=$( echo $file | sed "s/.prepdoc//g")
    fp_man=$( echo $fp_man | sed "s:$PREP_DOC_DIR:$DOC_BUILD_DIR:g")
    
    fp_mantxt="$fp_man.txt"
    
    fp_manhtml="$fp_man.html"
    
    fp_manpdf="$fp_man.pdf"
    
    fp_manrst="$fp_man.rst"
   
    # man
    echo "$file -> $fp_man"
    txt2man -s $man_section -t $man_title -r $DOC_NAME -v "Library Functions Manual"  $file > $fp_man
    rm $FLAGS_RM "$fp_man.gz" >/dev/null 2>&1
    gzip -k $fp_man
    
    # txt
    echo "$fp_man -> $fp_mantxt"
    man $fp_man > $fp_mantxt
    
    # html 
    echo "$fp_man -> $fp_manhtml"
    man -Thtml -l $fp_man > $fp_manhtml
    
    # pdf
    echo "$fp_man -> $fp_manpdf"
    man -Tpdf -l $fp_man > $fp_manpdf

    # rst
    echo "$fp_man -> $fp_manrst"
    pandoc --shift-heading-level-by=1 --from man --to rst $fp_man -o $fp_manrst
done
echo "done."

