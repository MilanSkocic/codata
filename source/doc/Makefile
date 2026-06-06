all: man latex sphinx ford


.PHONY: man
man:
	make -C man

.PHONY: latex
latex:
	make -C latex

.PHONY: ford
ford:
	make -C ford

.PHONY: sphinx
sphinx:
	make -C sphinx html

.PHONY:
clean:
	make -C man clean
	make -C latex clean
	make -C sphinx clean
	make -C ford clean
