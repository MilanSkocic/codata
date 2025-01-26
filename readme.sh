# README 
FOLDER=.

cp $FOLDER/_README.md $FOLDER/README.md
echo "" >> README.md

echo "\`\`\`" >> $FOLDER/README.md && cat $FOLDER/LICENSE >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md

echo "" >> $FOLDER/README.md && echo "" >> $FOLDER/README.md
echo "# Examples" >> $FOLDER/README.md
echo "## Fortran" >> $FOLDER/README.md
echo "\`\`\`Fortran" >> $FOLDER/README.md && cat ./example/example.f90 >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md

echo "## C" >> $FOLDER/README.md
echo "\`\`\`C" >> $FOLDER/README.md && cat ./example/example.c >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md

echo "## Python" >> $FOLDER/README.md
echo "\`\`\`Python" >> $FOLDER/README.md && cat ./example/example.py >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md

echo "" >> $FOLDER/README.md && echo "" >> $FOLDER/README.md
echo "# References" >> $FOLDER/README.md
cat $FOLDER/REFERENCES.md >> $FOLDER/README.md

echo "" >> $FOLDER/README.md && echo "" >> $FOLDER/README.md
echo "# Changelog" >> $FOLDER/README.md
cat $FOLDER/CHANGELOG.md | sed 's/# /## /g' >> README.md



# README PYTHON
FOLDER=py

cp $FOLDER/_README.md $FOLDER/README.md
echo "" >> README.md

echo "\`\`\`" >> $FOLDER/README.md && cat $FOLDER/LICENSE >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md

echo "" >> $FOLDER/README.md && echo "" >> $FOLDER/README.md
echo "# Examples" >> $FOLDER/README.md

echo "\`\`\`Python" >> $FOLDER/README.md && cat ./example/example.py >> $FOLDER/README.md && echo "\`\`\`" >> $FOLDER/README.md



