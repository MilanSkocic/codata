


.PHONY: headers sources clean

all: headers sources


headers: 
	make -C include

sources:
	make -C src sources

build:
	mkdir -p $(BUILD_DIR)

clean:
	make -C include clean
	make -C src clean
