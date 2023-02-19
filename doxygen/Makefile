

all: install.md license.md requirements.md
	doxygen doxyfile
	rm -r ../docs/*
	cp -r build/html/* ../docs/

install.md: ../INSTALL.txt
	cp $< introduction/$@

license.md: ../LICENSE.txt
	cp $< introduction/$@

requirements.md: ../REQUIREMENTS.TXT
	cp $< introduction/$@

