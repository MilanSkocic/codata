PY=python
GEN=../../scripts/gen_c.py

AST_DIR=../../data

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_SRC = codata_constants_2010.c codata_constants_2014.c codata_constants_2018.c codata_constants_2022.c 

.PHONY: clean

all: sources

sources: $(SRC)

codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

