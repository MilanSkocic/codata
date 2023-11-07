CC=gcc
FC=gfortran
FFLAGS=-std=f2008 -Wall -Wextra -pedantic

.PHONY: generate

all: srcgen srcgenf

srcgen: generator
	./generator

srcgenf: generatorf
	./generatorf

generatorf: fmain.o utilities.o
	$(FC) $^ -o generatorf

generator: main.o
	$(CC) $^ -o generator

main.o: main.c
	$(CC) -c $< -o $@

%.o: %.f90
	$(FC) -c $(FFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f generator
	rm -f *.mod