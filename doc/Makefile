.PHONY: man info html pdf clean

all: man pdf html

man:
	make -C sphinx man
	cp -f sphinx/build/man/* man/

info:
	make -C sphinx info
	mkdir -p info
	cp -rf sphinx/build/texinfo/* info/

pdf:
	make -C sphinx latexpdf
	mkdir -p pdf
	cp -f sphinx/build/latex/*.pdf pdf/

html:
	make -C sphinx html

clean:
	make -C sphinx clean
