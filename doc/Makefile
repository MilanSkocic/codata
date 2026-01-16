include ../make.in


MANPREP=$(wildcard *.prep)
MAN=$(patsubst %.prep, %, $(MANPREP))
MANPDF=$(patsubst %.prep, %.pdf, $(MANPREP))

BOOKMAN=$(FPM_NAME).pdf

all: man html

.PHONY:
html:
	make -C sphinx html

.PHONY:
man: $(MAN) $(MANPDF)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User commands & Libary calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

%: %.prep 
	txt2man -s 1 -v "Library calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

%.pdf: %
	man -l -Tpdf $< > $@


.PHONY:
clean:
	make -C sphinx clean
	rm -fv $(MANPREP) $(MAN) $(MANPDF) $(BOOKMAN)
