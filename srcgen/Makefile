CC=gcc
FC=gfortran

.PHONY: generate

all: srcgen

srcgen: generator
	./generator

generator: main.o
	$(CC) $^ -o generator

main.o: main.c
	$(CC) -c $< -o $@

clean:
	rm -f *.o
	rm -f generator
	rm -f *.mod