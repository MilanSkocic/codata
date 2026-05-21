include ../make.in


MANPREP=$(wildcard man/*.prep)
MAN=$(patsubst man/%.prep, man/%, $(MANPREP))
MANPDF=$(patsubst man/%.prep, man/%.pdf, $(MANPREP))
MANTXT=$(patsubst man/%.prep, man/%.txt, $(MANPREP))
MANGZ=$(patsubst man/%.prep, man/%.gz, $(MANPREP))

BOOKMAN=man/$(FPM_NAME)-bookman.pdf

all: man html latex cleanprep

.PHONY: html
html:
	make -C sphinx html
	make -C ford

.PHONY: sphinx
sphinx:
	make -C sphinx html

.PHONY: ford
ford:
	make -C ford

.PHONY:
man: $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

man/%.3: man/%.3.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

man/%.1: man/%.1.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

man/%.pdf: man/%
	man -l -Tpdf $< > $@

man/%.gz: man/%
	gzip -fk $^

man/%.txt: man/%
	man -l $< > $@

.PHONY: latex
latex:
	make -C latex

.PHONY: cleanprep
cleanprep:
	rm -fv $(MANPREP)

.PHONY: clean
clean:
	rm -fv $(MANPREP) $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)
	make -C sphinx clean
	make -C ford clean
