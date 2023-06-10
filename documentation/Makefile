.PHONY: html latexpdf ford clean upload

all: ford latexpdf html

html: 
	$(MAKE) -C ./sphinx html

latexpdf:
	$(MAKE) -C ./sphinx latexpdf

ford:
	$(MAKE) -C ./ford

clean:
	$(MAKE) -C ./sphinx clean

upload:
	rm -rf ../docs/*
	cp -r ./sphinx/build/html/* ../docs