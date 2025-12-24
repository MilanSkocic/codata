.PHONY: man info html pdf ford clean

all: man info pdf html ford

man:
	make -C sphinx man

info:
	make -C sphinx info

pdf:
	make -C sphinx latexpdf

html:
	make -C sphinx html

ford:
	make -C ford

clean:
	make -C sphinx clean
