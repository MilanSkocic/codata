PNG_FOLDER=./
BUILD_FOLDER=build
SRC_FOLDER=src
ICO_FOLDER=./

TEX=pdflatex
TEX_OPTIONS=-output-directory=$(BUILD_FOLDER) -interaction=batchmode

CONVERT=magick convert
CONVERT_DENSITY=-density 300
CONVERT_RESIZE=

TEX_SRC=$(wildcard $(SRC_FOLDER)/*.tex)
OUTPUTS=$(patsubst $(SRC_FOLDER)/%.tex, $(PNG_FOLDER)/%.png, $(TEX_SRC)) $(patsubst $(SRC_FOLDER)/%.tex, $(PNG_FOLDER)/%.ico, $(TEX_SRC))


all: $(OUTPUTS) 

$(BUILD_FOLDER)/%.pdf: $(SRC_FOLDER)/%.tex
	$(TEX) $(TEX_OPTIONS) $<

$(PNG_FOLDER)/%.png: $(BUILD_FOLDER)/%.pdf
	$(CONVERT) $(CONVERT_DENSITY) $< $(CONVERT_RESIZE) $@

$(ICO_FOLDER)/%.ico: $(PNG_FOLDER)/%.png
	$(CONVERT) -background transparent $< -define icon:auto-resize=64 $@

clean:
	rm -rf $(BUILD_FOLDER)/*
