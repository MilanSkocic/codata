include ../../make.in

all: man latex sphinx ford

.PHONY: man
man:
	make -C man

.PHONY: latex
latex:
	make -C latex

.PHONY: sphinx
sphinx:
	make -C sphinx html

.PHONY: ford
ford:
	make -C ford

.PHONY: clean
clean:
	make -C man clean
	make -C latex clean
	make -C sphinx clean
	make -C ford clean
