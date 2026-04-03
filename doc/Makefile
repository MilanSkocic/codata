include ../make.in


MANPREP=$(wildcard manpages/*.prep)
MAN=$(patsubst manpages/%.prep, manpages/%, $(MANPREP))
MANGZ=$(patsubst manpages/%.prep, manpages/%.gz, $(MANPREP))
MANPDF=$(patsubst manpages/%.prep, manpages/%.pdf, $(MANPREP))
MANTXT=$(patsubst manpages/%.prep, manpages/%.txt, $(MANPREP))
MANRST=$(patsubst manpages/%.prep, sphinx/source/man/%.rst, $(MANPREP))
MANLATEX=$(patsubst manpages/%.prep, latex/src/mainmatter/%.tex, $(MANPREP))

BOOKMAN=$(FPM_NAME).pdf

all: man pdf html cleanprep

.PHONY:
html:
	make -C sphinx html

.PHONY:
pdf: 
	make -C latex

.PHONY:
man: $(MAN) $(MANGZ) $(MANRST) $(MANLATEX)

.PHONY:
$(BOOKMAN): $(MAN)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

manpages/%.3: manpages/%.3.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "Library Calls" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

manpages/%.1: manpages/%.1.prep 
	txt2man -s $(shell basename $@ | cut -d '.' -f 2) -v "User Commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

manpages/%.pdf: manpages/%
	man -l -Tpdf $< > $@

manpages/%.gz: manpages/%
	gzip -fk $^

manpages/%.txt: manpages/%
	man -l $< > $@

sphinx/source/man/%.rst: manpages/%
	pandoc --from man --to rst --shift-heading-level-by=1 $< -o $@

latex/src/mainmatter/%.tex: manpages/%
	pandoc --from man --to latex $< -o $@

.PHONY:
cleanprep:
	rm -fv $(MANPREP)

.PHONY:
clean:
	make -C sphinx clean
	rm -fv manpages/$(FPM_NAME)* 
	rm -fv latex/src/mainmatter/$(FPM_NAME)*.tex 
	rm -fv sphinx/source/man/$(FPM_NAME)*.rst
