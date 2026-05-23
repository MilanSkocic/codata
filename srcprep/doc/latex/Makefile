include ../../../make.in

FNAME=main
OUTNAME=codata-refman
TEX=pdflatex
BIB=biber
VIEWER=sumatrapdf 
NCL=makeindex
BUILD_FOLDER=build
SRC_FOLDER=src
BIN_FOLDER=$(BUILD_FOLDER)/pdf
HTML_FOLDER=$(BUILD_FOLDER)/html
MK4BUILD=html.mk4
MK4CFG=html.cfg

README=../../../README

.ONESHELL:

.PHONY: all dirs tex biber bibtex index link copy clean html

all: dirs tex biber index link copy html

dirs:
	mkdir -p $(HTML_FOLDER)
	mkdir -p $(BIN_FOLDER)

tex:
	$(TEX) -output-directory=./$(BUILD_FOLDER) -synctex=1 $(SRC_FOLDER)/$(FNAME).tex
	
biber:
	$(BIB) ./$(BUILD_FOLDER)/$(FNAME).bcf --output-file ./$(BUILD_FOLDER)/$(FNAME).bbl

bibtex:
	cp $(SRC_FOLDER)/references.bib $(BUILD_FOLDER)/
	cd $(BUILD_FOLDER)
	$(BIB) $(FNAME).aux 
	cd ..

link:
	$(TEX) -output-directory=./$(BUILD_FOLDER) -synctex=1 $(SRC_FOLDER)/$(FNAME).tex
	$(TEX) -output-directory=./$(BUILD_FOLDER) -synctex=1 $(SRC_FOLDER)/$(FNAME).tex

index: 
	$(NCL) ./$(BUILD_FOLDER)/$(FNAME).nlo -s nomencl.ist -o ./$(BUILD_FOLDER)/$(FNAME).nls
	$(NCL) ./$(BUILD_FOLDER)/$(FNAME).idx

copy: 
	cp -rf $(BUILD_FOLDER)/$(FNAME).pdf $(BIN_FOLDER)/$(OUTNAME).pdf
	cp ./$(BUILD_FOLDER)/$(FNAME).idx ./$(BUILD_FOLDER)/$(FNAME).4idx

html: 
	make4ht -c $(MK4CFG) -d $(HTML_FOLDER) -B $(BUILD_FOLDER) -e $(MK4BUILD) $(SRC_FOLDER)/$(FNAME).tex -a info
	cp $(HTML_FOLDER)/$(FNAME).html $(HTML_FOLDER)/index.html

clean:
	rm -rf $(BUILD_FOLDER)/*
	rm -rf $(BIN_FOLDER)/*
	rm -rf $(HTML_FOLDER)/*


