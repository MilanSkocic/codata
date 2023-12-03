CC=gcc
FC=gfortran
FFLAGS=-std=f2008 -Wall -Wextra -pedantic

.PHONY: generate

all: srcgen

srcgen: generator
	./generator

generator: core.o fortran.o cheader.o python.o main.o
	$(FC) $^ -o generator

%.o: %.f90
	$(FC) -c $(FFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f generator*
	rm -f *.mod