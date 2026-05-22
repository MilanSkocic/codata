export PREP_DOCUMENT_DIR=./

f90prep=$(wildcard *.f90)
f90=$(patsubst %.f90, ../src/%.f90, $(f90prep))


all: example.txt $(f90)

../src/%.f90: %.f90
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
