

all: install.md license.md requirements.md
	doxygen doxyfile
	make -C build/latex
	cp build/latex/refman.pdf build/html
	rm -rf ../docs/*
	cp -r build/html/* ../docs/

install.md: ../INSTALL.txt
	cp $< introduction/$@

license.md: ../LICENSE.txt
	cp $< introduction/$@

requirements.md: ../REQUIREMENTS.txt
	cp $< introduction/$@

html: 
	doxygen doxyfile
	
pdf: 
	make -C build/latex
	cp build/latex/refman.pdf build/html

pywrapper:
	make -C ../pywrapper/sphinx latexpdf
	make -C ../pywrapper/sphinx html 
	rm -rf ../docs/pycodata/*
	cp -r ../pywrapper/sphinx/build/html/* ../docs/pycodata/