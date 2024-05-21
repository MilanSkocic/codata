PY=python
GEN=../../../scripts/gen_cpython.py

AST_DIR=../../../nist

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
CPYTHON = cpy_codata_constants_2010.c cpy_codata_constants_2014.c cpy_codata_constants_2018.c cpy_codata_constants_2022.c

.PHONY: clean

all: $(CPYTHON)

cpy_codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2014.c: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2018.c: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2022.c: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

clean:
	rm -rf $(CPYTHON)

