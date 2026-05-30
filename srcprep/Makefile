include ../make.in

export PREP_DOCUMENT_DIR=./

ff=$(wildcard *.ff)
f90=$(patsubst %.ff, ../src/%.f90, $(ff))

hh=$(wildcard *.hh)
h=$(patsubst %.hh, ../include/%.h, $(hh))

cpy=$(wildcard *.cpy)
c=$(patsubst %.cpy, ../py/src/$(FPM_PYNAME)/_%.c, $(cpy))

all: example.txt sources

sources: $(f90) $(h) $(c)

../src/%.f90: %.ff
	prep $< -o $@

../include/%.h: %.hh
	prep $< -o $@

../py/src/$(FPM_PYNAME)/_%.c: %.cpy
	prep $< -o $@

example.txt: ../example/example.f90 ../example/example.c ../example/example.py
	./concatex

.PHONY:doc
doc:
	make -C doc

.PHONY:clean
clean:
	rm -f $(f90) $(h) $(c) example.txt
	make -C doc clean
