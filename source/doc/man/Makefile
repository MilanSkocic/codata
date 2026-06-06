include ../../../make.in

MANPREP=$(wildcard ./src/*.man)
MAN=$(patsubst ./src/%.man, build/%, $(MANPREP))
MANPDF=$(patsubst ./src/%.man, build/%.pdf, $(MANPREP))
MANTXT=$(patsubst ./src/%.man, build/%.txt, $(MANPREP))
MANGZ=$(patsubst ./src/%.man, build/%.gz, $(MANPREP))
MANTEX=$(patsubst ./src/%.man, build/%.tex, $(MANPREP))
MANHTML=$(patsubst ./src/%.man, build/%.html, $(MANPREP))

BOOKMAN=build/$(FPM_NAME)-bookman.pdf

all: dir $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(MANTEX) $(MANHTML) $(BOOKMAN)

.PHONY: dir
dir:
	mkdir -p build

$(BOOKMAN): $(MAN)
	@echo $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

build/%.1: src/%.1.man
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.3: src/%.3.man
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.pdf: build/%
	man -l -Tpdf $< > $@

build/%.html: build/%
	man -l -Thtml $< > $@

build/%.gz: build/%
	gzip -fk $^

build/%.txt: build/%
	man -l $< > $@

build/%.tex: src/%.man
	txt2latex --man $< > $@

.PHONY: clean
clean:
	rm -rf build/*
	rm -rf src/*
