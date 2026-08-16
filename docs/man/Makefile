include ../../make.in

MANSRC=codata.1.man \
	   codata_lib.3.man \
	   codata_version.3.man \
	   codata_constant_type.3.man
MAN=$(patsubst %.man, %, $(MANSRC))
MANPDF=$(patsubst %, %.pdf, $(MAN))
MANTXT=$(patsubst %, %.txt, $(MAN))
MANGZ=$(patsubst %, %.gz, $(MAN))
MANHTML=$(patsubst %, %.html, $(MAN))

all: $(MAN)  $(MANGZ) $(MANPDF) $(MANTXT) $(MANHTML)

$(BOOKMAN): $(MANBUILD)
	bookman -p -a "$(FPM_AUTHOR)" -t $(FPM_NAME) -v "User Commands & Libary Calls" -r $(FPM_VERSION) $(MAN) > $(BOOKMAN)

codata_lib.3: codata_lib.3.man
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" $< > tmp
	cat $< examples.man seealso.man > tmp
	cat tmp \
		   ../../data/build/codata_constants_2022.man \
		   ../../data/build/codata_constants_2018.man \
		   ../../data/build/codata_constants_2014.man \
           ../../data/build/codata_constants_2010.man \
		   > $@
	rm -fv tmp

codata.1: codata.1.man
	cat $< seealso.man > tmp
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" tmp > $@
	rm -rfv tmp

codata_version.3: codata_version.3.man
	cat $< seealso.man > tmp
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" tmp > $@
	rm -rfv tmp

codata_constant_type.3: codata_constant_type.3.man
	cat $< seealso.man > tmp
	sed -E "s/@VERSION@/$(FPM_VERSION)/g;s/@DATE@/$(shell date +'%d %B %Y')/g" tmp > $@
	rm -rfv tmp

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
	rm -fv $(MAN) $(MANGZ) $(MANPDF) $(MANTXT) $(MANHTML)

