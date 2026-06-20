include ../make.in

MAN=$(wildcard ./src/*)
MANBUILD=$(patsubst ./src/%, build/%, $(MAN))
MANPDF=$(patsubst ./src/%, build/%.pdf, $(MAN))
MANTXT=$(patsubst ./src/%, build/%.txt, $(MAN))
MANGZ=$(patsubst ./src/%, build/%.gz, $(MAN))
MANHTML=$(patsubst ./src/%, build/%.html, $(MAN))

BOOKMAN=build/$(FPM_NAME)-bookman.pdf

all: dir $(MANBUILD) $(MANPDF) $(MANTXT) $(MANGZ) $(MANHTML) $(BOOKMAN)

.PHONY: dir
dir:
	mkdir -p build

$(BOOKMAN): $(MANBUILD)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

build/%: src/%
	cp -fv $^ $@

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
