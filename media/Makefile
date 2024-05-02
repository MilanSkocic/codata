include ./make.in

all: $(OUTPUTS)

$(BUILD_FOLDER)/%.pdf: $(SRC_FOLDER)/%.tex
	$(TEX) $(TEX_OPTIONS) $<

$(PNG_FOLDER)/%.png: $(BUILD_FOLDER)/%.pdf
	$(CONVERT) $(CONVERT_DENSITY) $< $(CONVERT_RESIZE) $@

clean:
	rm -rf $(BUILD_FOLDER)/*

cleanall:
	rm -rf $(PNG_FOLDER)/*