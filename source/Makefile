include ../make.in

export PREP_DOCUMENT_DIR=.

SRC_FYPP=$(wildcard codata*.fypp)
SRC_FYPP_F90=$(patsubst %.fypp, ../src/%.f90, $(SRC_FYPP))

ff=$(wildcard codata*.ff)
f90=$(patsubst %.ff, ../src/%.f90, $(ff))

hh=$(wildcard *.hh)
h=$(patsubst %.hh, ../include/%.h, $(hh))

cpy=$(wildcard *.cpy)
c=$(patsubst %.cpy, ../py/src/$(FPM_PYNAME)/_%.c, $(cpy))

all: example.txt sources man

sources: $(f90) $(h) $(c) $(SRC_FYPP_F90) main

../src/%.f90: %.fypp
	fypp -I ../include $< $@

../src/%.f90: %.ff
	prep $< -o $@

../include/%.h: %.hh
	prep $< -o $@

../py/src/$(FPM_PYNAME)/_%.c: %.cpy
	prep $< -o $@

example.txt: ../example/example.f90 ../example/example.c ../example/example.py
	./concatex

.PHONY: main
main:
	prep main.ff -o ../app/main.f90

.PHONY: man
man:
	mv -fv ./doc/*.man ./doc/man/src/

.PHONY:clean
clean:
	rm -f $(f90) $(h) $(c) $(SRC_FYPP_F90) example.txt
	make -C doc clean
