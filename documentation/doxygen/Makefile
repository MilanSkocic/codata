.PHONY: all latexpdf html dir copyhtml

all: html latexpdf copyhtml

dir:
	mkdir -p ./build
	
html: dir
	doxygen doxyfile

latexpdf: dir	
	$(MAKE) -C ./build/latex

copyhtml: html
	mkdir -p ../sphinx/build/html/doxygen
	cp -r ./build/html/* ../sphinx/build/html/doxygen
