


.PHONY: headers sources build clean

all: headers sources build


headers: 
	make -C include

sources: headers
	make -C src sources

build: headers sources
	mkdir -p $(BUILD_DIR)
	make -C src

example: sources headers build
	make -C example

clean:
	make -C include clean
	make -C src clean
	make -C example clean
