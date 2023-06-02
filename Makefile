
.PHONY: all clean

all: 
	$(MAKE) -C ./srcgen
	fpm build
	cp $(shell find ./build -type f -name "lib$(codata)*.a") ./pywrapper/pycodata/


clean:
	$(MAKE) -C ./srcgen clean
	fpm clean --all