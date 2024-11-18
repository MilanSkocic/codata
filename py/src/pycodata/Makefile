PY=python
GEN=../../../scripts/gen_cpython.py
GENPY=../../../scripts/gen_python.py

AST_DIR=../../../nist

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
CPYTHON = cpy_codata_constants_2010.c cpy_codata_constants_2014.c cpy_codata_constants_2018.c cpy_codata_constants_2022.c
PYTHON = constants_2010.py constants_2014.py constants_2018.py constants_2022.py

.PHONY: clean

all: $(CPYTHON) $(PYTHON)

cpy_codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2014.c: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2018.c: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

cpy_codata_constants_2022.c: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

constants_2010.py: $(AST_DIR)/codata_2010.toml
	$(PY) $(GENPY) $< $@

constants_2014.py: $(AST_DIR)/codata_2014.toml
	$(PY) $(GENPY) $< $@

constants_2018.py: $(AST_DIR)/codata_2018.toml
	$(PY) $(GENPY) $< $@

constants_2022.py: $(AST_DIR)/codata_2022.toml
	$(PY) $(GENPY) $< $@

clean:
	rm -rf $(CPYTHON)
	rm -rf $(PYTHON)

