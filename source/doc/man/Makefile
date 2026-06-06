include ../../../make.in

MANPREP=$(wildcard ./src/*.man)
MAN=$(patsubst ./src/%.man, build/%, $(MANPREP))
MANPDF=$(patsubst ./src/%.man, build/%.pdf, $(MANPREP))
MANTXT=$(patsubst ./src/%.man, build/%.txt, $(MANPREP))
MANGZ=$(patsubst ./src/%.man, build/%.gz, $(MANPREP))
MANRST=$(patsubst ./src/%.man, build/%.rst, $(MANPREP))

BOOKMAN=build/$(FPM_NAME)-bookman.pdf

all: dir $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)

.PHONY: dir
dir:
	mkdir -p build

$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

build/%.1: src/%.1.man
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.3: src/%.3.man
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.pdf: build/%
	man -l -Tpdf $< > $@

build/%.gz: build/%
	gzip -fk $^

build/%.txt: build/%
	man -l $< > $@

build/%.tex: build/%
	txt2latex --man $< > $@

.PHONY: clean
clean:
	rm -rf build/*
