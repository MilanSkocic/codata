include ../../../make.in

MAN=./src/codata.3 \
	./src/codata_cli.1 \
	./src/codata_version.3 \
	./src/codata_constant_type.3
MANBUILD=$(patsubst ./src/%, build/%, $(MAN))
MANPDF=$(patsubst ./src/%, build/%.pdf, $(MAN))
MANTXT=$(patsubst ./src/%, build/%.txt, $(MAN))
MANGZ=$(patsubst ./src/%, build/%.gz, $(MAN))
MANHTML=$(patsubst ./src/%, build/%.html, $(MAN))

BOOKMAN=build/$(FPM_NAME)-bookman.pdf

all: dir $(MANBUILD) $(MANPDF) $(MANTXT) $(MANGZ) $(MANHTML) $(BOOKMAN) copy

.PHONY: dir
dir:
	mkdir -p build

.PHONY: copy
copy:
	cp -rf build/* ../../man/

$(BOOKMAN): $(MANBUILD)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

build/codata.3: src/codata.3 
	cat $< \
		   ../../../data/build/codata_constants_2022.man \
		   ../../../data/build/codata_constants_2018.man \
		   ../../../data/build/codata_constants_2014.man \
           ../../../data/build/codata_constants_2010.man \
		   > $@

build/codata_cli.1: src/codata_cli.1
	cp $< $@

build/codata_version.3: src/codata_version.3
	cp $< $@

build/codata_constant_type.3: src/codata_constant_type.3
	cp $< $@

build/%.pdf: build/%
	man -l -Tpdf $< > $@

build/%.html: build/%
	man -l -Thtml $< > $@

build/%.gz: build/%
	gzip -fk $^ > $@

build/%.txt: build/%
	man -l $< > $@

.PHONY: clean
clean:
	rm -rf build/*
