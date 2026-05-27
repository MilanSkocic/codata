export PREP_DOCUMENT_DIR=./

ff=$(wildcard *.ff)
f90=$(patsubst %.ff, ../src/%.f90, $(ff))


all: example.txt sources

sources: $(f90)

../src/%.f90: %.ff
	prep $< -o $@

example.txt: ../example/example.f90 ../example/example.c ../example/example.py
	./concatex

.PHONY:doc
doc:
	make -C doc

.PHONY:clean
clean:
	rm -f $(f90) example.txt
	make -C doc clean
