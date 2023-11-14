CC=gcc
FC=gfortran
FFLAGS=-std=f2008 -Wall -Wextra -pedantic

.PHONY: generate

all: srcgen srcgenf

srcgen: generator
	./generator

generator: utilities.o fortran_code.o c_code.o py_code.o cpy_code.o fmain.o
	$(FC) $^ -o generatorf

%.o: %.f90
	$(FC) -c $(FFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f generator
	rm -f *.mod