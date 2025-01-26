cp _README.md README.md
echo "" >> README.md

echo "\`\`\`" >> README.md && cat LICENSE >> README.md && echo "\`\`\`" >> README.md

echo "" >> README.md && echo "" >> README.md
echo "# Examples" >> README.md
echo "## Fortran" >> README.md
echo "\`\`\`Fortran" >> README.md && cat ./example/example.f90 >> README.md && echo "\`\`\`" >> README.md

echo "## C" >> README.md
echo "\`\`\`C" >> README.md && cat ./example/example.c >> README.md && echo "\`\`\`" >> README.md

echo "## Python" >> README.md
echo "\`\`\`Python" >> README.md && cat ./example/example.py >> README.md && echo "\`\`\`" >> README.md

echo "" >> README.md && echo "" >> README.md
echo "# References" >> README.md
cat REFERENCES.md >> README.md

