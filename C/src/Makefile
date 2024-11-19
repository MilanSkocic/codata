PY=python
GEN=../../scripts/gen_c.py

AST_DIR=../../data
CBUILD_DIR = ../build

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_SRC = codata_constants_2010.c codata_constants_2014.c codata_constants_2018.c codata_constants_2022.c 
C_OBJ=$(patsubst %.c, $(CBUILD_DIR)/%.o, $(C_SRC))
DLIB=$(CBUILD_DIR)/$(LIBNAME)$(EXT)

.PHONY: clean

all: sources

sources: $(C_SRC)

build: $(C_OBJ) $(DLIB)

codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.c: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.c: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.c: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

$(CBUILD_DIR)/%.o: %.c
	gcc -c -I ../include $(CFLAGS_RELEASE) $(FPM_CFLAGS) $< -o $@

$(CBUILD_DIR)/$(LIBNAME)$(EXT): $(C_OBJ)
	gcc -shared $(C_OBJ) -o $@

clean:
	rm -rf $(C_SRC)
	rm -rf $(CBUILD_DIR)/*
