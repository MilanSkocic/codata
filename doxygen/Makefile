

all: install.md license.md requirements.md
	doxygen doxyfile
	rm -r ../docs/*
	cp -r html/* ../docs/

install.md: ../INSTALL.txt
	cp $< $@

license.md: ../LICENSE.txt
	cp $< $@

requirements.md: ../REQUIREMENTS.TXT
	cp $< $@

