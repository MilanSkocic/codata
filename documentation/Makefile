.PHONY: html latexpdf doxygen clean upload logo

all: logo doxygen latexpdf html

logo: 
	cp ../media/logo-codata.png ./sphinx/source/media

html: 
	$(MAKE) -C ./sphinx html

latexpdf:
	$(MAKE) -C ./sphinx latexpdf

doxygen:
	mkdir -p ./sphinx/build/html/doxygen
	$(MAKE) -C ./doxygen

clean:
	$(MAKE) -C ./sphinx clean

upload:
	rm -rf ../docs/*
	cp -r ./sphinx/build/html/* ../docs