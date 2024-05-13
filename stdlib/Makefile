py=python
GENAST=gen_ast.py
GENCODE=gen_code.py

CC=gcc
FC=gfortran

RAW_DIR=.
AST_DIR=.
SRC_DIR=.
INCLUDE_DIR=./include

RAW_SRC=$(RAW_DIR)/codata_2022.txt

AST_SRC=$(AST_DIR)/codata_2022.toml

F_MODULE = $(SRC_DIR)/stdlib_codata.f90

.PHONY: build example ford clean cleanall copy

all: $(AST_SRC) $(FYPP_f90) $(F_MODULE) build example

$(AST_SRC): $(RAW_SRC)
	$(py) $(GENAST) $< $@

$(F_MODULE): $(AST_SRC)
	$(py) $(GENCODE) $< $@

copy:
	cp $(F_MODULE) ../../stdlib/src/

clean:	
	rm $(F_MODULE)

cleanall: clean
	rm *.toml
