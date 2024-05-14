PY=python
GENCODE=gen_code.py

AST_DIR=../nist
SRC_DIR=.

AST_SRC=$(AST_DIR)/codata_2022.toml
F_MODULE = $(SRC_DIR)/stdlib_codata.f90

.PHONY: clean copy

all: $(F_MODULE)

$(F_MODULE): $(AST_SRC)
	$(PY) $(GENCODE) $< $@

copy:
	cp $(F_MODULE) ../../stdlib/src/

clean:	
	rm -f $(F_MODULE)
