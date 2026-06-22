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

all: dir $(MANBUILD) $(BOOKMAN) $(MANGZ) $(MANPDF) $(MANTXT) $(MANHTML)

.PHONY: dir
dir:
	mkdir -p build

.PHONY: copy
copy:
	cp -rf build/* ../../man/

$(BOOKMAN): $(MANBUILD)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MANBUILD) > $(BOOKMAN)

build/codata.3: src/codata.3 
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > build/tmp
	cat build/tmp \
		   ../../../data/build/codata_constants_2022.man \
		   ../../../data/build/codata_constants_2018.man \
		   ../../../data/build/codata_constants_2014.man \
           ../../../data/build/codata_constants_2010.man \
		   > $@
	rm -fv build/tmp

build/codata_cli.1: src/codata_cli.1
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

build/codata_version.3: src/codata_version.3
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

build/codata_constant_type.3: src/codata_constant_type.3
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

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
