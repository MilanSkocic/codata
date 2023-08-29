.PHONY: html latexpdf ford clean upload logo

all: logo ford latexpdf html

logo: 
	cp ../media/logo-codata.png ./sphinx/source/media

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