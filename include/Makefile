PY=python
GEN=../scripts/gen_headers.py
CONC=../scripts/gen_header.py

AST_DIR=../nist

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_HEADER = codata_constants_2010.h codata_constants_2014.h codata_constants_2018.h codata_constants_2022.h
MAIN_HEADER = codata.h

.PHONY: clean concatenate

all: $(MAIN_HEADER) 

codata_constants_2010.h: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.h: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.h: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.h: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

$(MAIN_HEADER): $(C_HEADER)
	$(PY) $(CONC) $^ -o $@
	rm -f $(C_HEADER)
	
clean:
	rm -rf $(C_HEADER)
	rm -rf $(MAIN_HEADER)

