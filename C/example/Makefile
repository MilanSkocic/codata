

all: example

example: example.c
	gcc -I../include -L../build/ -lcodata $(CFLAGS_RELEASE) $(FPM_CFLAGS) $< -o $@