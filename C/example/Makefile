CFLAGS=-O3 -funroll-loops -fmax-errors=1

.PHONY: clean

all: example

example: example.c
	gcc $< -I../include -L../build/ -lcodata $(CFLAGS) $(FPM_CFLAGS) -o ../build/$@ -Wl,-rpath=.

clean:
	rm -rf ./build/example*
