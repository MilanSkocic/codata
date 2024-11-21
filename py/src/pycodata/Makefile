PY=python
GEN=../../../scripts/gen_cpython.py
GENPY=../../../scripts/gen_python.py

AST_DIR=../../../data

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
CPYTHON = cpy_codata_constants_2010.c cpy_codata_constants_2014.c cpy_codata_constants_2018.c cpy_codata_constants_2022.c
PYTHON = codata_constants_2010.py codata_constants_2014.py codata_constants_2018.py codata_constants_2022.py

.PHONY: clean

# all: $(CPYTHON) $(PYTHON)
all: $(PYTHON)


%.py: $(AST_DIR)/%.toml
	$(PY) $(GENPY) $< $@

clean:
	rm -rf $(CPYTHON)
	rm -rf $(PYTHON)
	rm -rf version.py
	rm -rf __pycache__

