include ../make.in


MANTXT=$(wildcard *.txt)
MAN=$(patsubst %.txt, %, $(MANTXT))
MANPDF=$(patsubst %.txt, %.pdf, $(MANTXT))

BOOKMAN=$(FPM_NAME).pdf

all: man html

.PHONY:
html:
	make -C sphinx html

.PHONY:
man: $(MAN) $(MANPDF) $(BOOKMAN)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User commands & Libary calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

%: %.txt 
	txt2man -s 1 -v "User commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

%.pdf: %
	man -l -Tpdf $< > $@


.PHONY:
clean:
	make -C sphinx clean
	rm -fv $(MAN) $(MANPDF) $(BOOKMAN)
