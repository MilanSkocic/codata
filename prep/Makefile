include ../make.in
SRCDIR=../src
PYSRCDIR=../py/src/pycodata
FFSRC=$(wildcard *.FF)
PYSRC=$(wildcard *.PY)
PYCSRC=$(wildcard cpy_*.CC)

f90=$(patsubst %.FF, %.f90, $(FFSRC))

all: dirs sources
	mv -fv $(f90) $(SRCDIR)

.PHONY: dirs
dirs:
	mkdir -p doc

sources: $(f90)

%.f90: %.FF
	prep $< -o $@

%.c: %.CC
	prep $< -o $@

%.py: %.PY
	prep $< -o $@

%.f90: %.tex
	prep $< -o $@

%.f90: %.md
	prep $< -o $@

clean:
	rm -f $(f90)
	rm -f doc/*

