.PHONY: man info html pdf clean

all: man pdf html

man:
	make -C man
	mkdir -p man
	cp sphinx/build/man/* man/

info:
	make -C sphinx info
	mkdir -p info
	cp sphinx/build/texinfo/* info/

pdf:
	make -C sphinx latexpdf
	mkdir -p pdf
	cp sphinx/build/latex/*.pdf pdf/

html:
	make -C sphinx html

clean:
	make -C sphinx clean
