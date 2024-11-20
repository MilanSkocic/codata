CFLAGS=-O3 -funroll-loops -fmax-errors=1

all: example

example: example.c
	gcc -I../include -L../build/ -lcodata $(CFLAGS) $(FPM_CFLAGS) $< -o ../build/$@
