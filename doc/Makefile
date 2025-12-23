.PHONY: man html pdf clean

all: man pdf html

man:
	make -C man

pdf:
	make -C sphinx latexpdf

html:
	make -C sphinx html

clean:
	make -C sphinx clean
