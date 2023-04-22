

all: 
	make imports
	make html
	make pdf
	rm -rf ../docs/*
	cp -r build/html/* ../docs/

imports:
	cp ../INSTALL.txt getting_started/INSTALL.md
	cp ../LICENSE.txt getting_started/LICENSE.md
	cp ../REQUIREMENTS.txt getting_started/REQUIREMENTS.md

html:
	doxygen doxyfile

pdf: 
	make -C build/latex
	cp build/latex/refman.pdf build/html