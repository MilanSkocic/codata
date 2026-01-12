include ../make.in

# for i in doc/*.txt; do name=$(basename -s .txt $i ); echo "- :download:\`$name <../../$name>\`";done

MANTXT=$(wildcard *.txt)
MAN=$(patsubst %.txt, %, $(MANTXT))
MANPDF=$(patsubst %.txt, %.pdf, $(MANTXT))

all: $(MAN) $(MANPDF)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User commands & Libary calls" -r $(FPM_VERSION) $(MAN) > $(FPM_NAME).pdf
	make -C sphinx html

%: %.txt 
	txt2man -s 1 -v "User commands" -r $(FPM_VERSION) -t $(shell basename $@ | cut -d '.' -f 1) $< > $@

%.pdf: %
	man -l -Tpdf $< > $@

.PHONY:
clean:
	make -C sphinx clean
