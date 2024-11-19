


.PHONY: headers sources build clean

all: headers sources


headers: 
	make -C include

sources: headers
	make -C src sources

build:
	mkdir -p $(BUILD_DIR)
	make -C src build

clean:
	make -C include clean
	make -C src clean
