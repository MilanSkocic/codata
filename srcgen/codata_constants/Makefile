CC=gcc
FC=gfortran
FFLAGS=-std=f2008 -Wall -Wextra -pedantic
OBJECTS=utilities.o fortran_code.o c_code.o py_code.o cpy_code.o main.o

all: generator

generator: build
	./generator

build: $(OBJECTS)
	$(FC) $^ -o generator

%.o: %.f90
	$(FC) -c $(FFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f generator
	rm -f *.mod