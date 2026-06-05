include ../make.in

export PREP_DOCUMENT_DIR=.


ff=$(wildcard codata*.ff)
f90=$(patsubst %.ff, ../src/%.f90, $(ff))

hh=$(wildcard *.hh)
h=$(patsubst %.hh, ../include/%.h, $(hh))

cpy=$(wildcard *.cpy)
c=$(patsubst %.cpy, ../py/src/$(FPM_PYNAME)/_%.c, $(cpy))

all: example.txt sources sphinx

sources: $(f90) $(h) $(c) main

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

.PHONY: sphinx
sphinx:
	cp -fv ./doc/*.md ../docs/source/man/

.PHONY:clean
clean:
	rm -f $(f90) $(h) $(c) example.txt ./doc/*
