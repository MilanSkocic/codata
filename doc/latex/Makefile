include ../../make.in


all:
	mkdir -p build
	pdflatex -output-directory=./build/ -synctex=1 $(FPM_NAME)-refman.tex
	biber ./build/$(FPM_NAME)-refman.bcf --output-file ./build/$(FPM_NAME)-refman.bbl
	pdflatex -output-directory=./build/ -synctex=1 $(FPM_NAME)-refman.tex
	pdflatex -output-directory=./build/ -synctex=1 $(FPM_NAME)-refman.tex
	cp -f build/$(FPM_NAME)-refman.pdf ./
