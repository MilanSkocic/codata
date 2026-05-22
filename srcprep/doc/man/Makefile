include ../../../make.in

MANPREP=$(wildcard src/*.prep)
MAN=$(patsubst src/%.prep, build/%, $(MANPREP))
MANPDF=$(patsubst src/%.prep, build/%.pdf, $(MANPREP))
MANTXT=$(patsubst src/%.prep, build/%.txt, $(MANPREP))
MANGZ=$(patsubst src/%.prep, build/%.gz, $(MANPREP))

BOOKMAN=build/$(FPM_NAME)-bookman.pdf

all: $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

build/%.3: src/%.3.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.1: src/%.1.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

build/%.pdf: build/%
	man -l -Tpdf $< > $@

build/%.gz: build/%
	gzip -fk $^

build/%.txt: build/%
	man -l $< > $@

.PHONY: clean
clean:
	rm -fv $(MANPREP) $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)
