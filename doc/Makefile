include ../make.in


MANPREP=$(wildcard *.prep)
MAN=$(patsubst %.prep, %, $(MANPREP))
MANPDF=$(patsubst %.prep, %.pdf, $(MANPREP))
MANTXT=$(patsubst %.prep, %.txt, $(MANPREP))
MANGZ=$(patsubst %.prep, %.gz, $(MANPREP))

BOOKMAN=$(FPM_NAME).pdf

all: man html

.PHONY:
html:
	make -C sphinx html

.PHONY:
man: $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

%.3: %.3.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

%.1: %.1.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

%.pdf: %
	man -l -Tpdf $< > $@

%.gz: %
	gzip -fk $^

%.txt: %
	man -l $< > $@


.PHONY:
clean:
	make -C sphinx clean
	rm -fv $(MANPREP) $(MAN) $(MANPDF) $(MANTXT) $(MANGZ) $(BOOKMAN)
