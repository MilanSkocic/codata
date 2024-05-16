PY=python
GEN=../scripts/gen_capi.py

AST_DIR=../nist

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_HEADER = codata_constants_2010.h codata_constants_2014.h codata_constants_2018.h codata_constants_2022.h

.PHONY: clean

all: $(C_HEADER)

codata_constants_2010.h: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.h: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.h: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.h: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

clean:
	rm -rf $(C_HEADER)
