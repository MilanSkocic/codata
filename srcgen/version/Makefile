CC=gcc
FC=gfortran
FFLAGS=-std=f2008 -Wall -Wextra -pedantic
OBJECTS=core.o fortran.o cheader.o python.o main.o

all: generator

generator: build
	./generator

build: $(OBJECTS)
	$(FC) $^ -o generator

%.o: %.f90
	$(FC) -c $(FFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f generator*
	rm -f *.mod