PY=python
GEN=../../scripts/gen_c.py

AST_DIR=../../data
CBUILD_DIR = ../build

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_SRC = codata_constants_2010.c codata_constants_2014.c codata_constants_2018.c codata_constants_2022.c codata_version.c
C_OBJ=$(patsubst %.c, $(CBUILD_DIR)/%.o, $(C_SRC))


.PHONY: clean

all: sources build

sources: $(C_SRC)

build: $(C_OBJ)

codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.c: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.c: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.c: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

$(CBUILD_DIR)/%.o: %.c
	gcc -c -I../include $(CFLAGS_RELEASE) $(FPM_CFLAGS) $< -o $@


clean:
	rm -rf $(C_SRC)