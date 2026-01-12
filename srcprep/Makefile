export PREP_DOCUMENT_DIR=../

f90prep=$(wildcard *.f90)
f90=$(patsubst %.f90, ../src/%.f90, $(f90prep))


all: $(f90)

../src/%.f90: %.f90
	prep $< -o $@

clean:
	rm -f $(f90)
