include ../../make.in

MANSRC=codata.3.man \
	   codata_cli.1.man \
	   codata_version.3.man \
	   codata_constant_type.3.man
MAN=$(patsubst %.man, %, $(MANSRC))
MANPDF=$(patsubst %, %.pdf, $(MAN))
MANTXT=$(patsubst %, %.txt, $(MAN))
MANGZ=$(patsubst %, %.gz, $(MAN))
MANHTML=$(patsubst %, %.html, $(MAN))

BOOKMAN=$(FPM_NAME)-bookman.pdf

FOLDER="../../data"
CODATA_CONSTANTS_XXXX=" \
					  $(FOLDER)/codata_constants_2022.man \
					  $(FOLDER)/codata_constants_2018.man \
					  $(FOLDER)/codata_constants_2014.man \
					  $(FOLDER)/codata_constants_2010.man \
                      "


all: $(MAN) $(BOOKMAN) $(MANGZ) $(MANPDF) $(MANTXT) $(MANHTML)

$(BOOKMAN): $(MANBUILD)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

codata.3: codata.3.man
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > tmp
	cat tmp \
		   ../../data/build/codata_constants_2022.man \
		   ../../data/build/codata_constants_2018.man \
		   ../../data/build/codata_constants_2014.man \
           ../../data/build/codata_constants_2010.man \
		   > $@
	rm -fv tmp

codata_cli.1: codata_cli.1.man
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

codata_version.3: codata_version.3.man
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

codata_constant_type.3: codata_constant_type.3.man
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > $@

%.pdf: %
	man -l -Tpdf $< > $@

%.html: %
	man -l -Thtml $< > $@

%.gz: %
	gzip -fk $^ > $@

%.txt: %
	man -l $< > $@

.PHONY: clean
clean:
	rm -fv $(MAN) $(BOOKMAN) $(MANGZ) $(MANPDF) $(MANTXT) $(MANHTML)

