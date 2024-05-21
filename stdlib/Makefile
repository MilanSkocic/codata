PY=python
GEN=../scripts/gen_stdlib.py

SRC_DIR=../src

STDLIB=stdlib_codata.f90

.PHONY: clean

all: $(STDLIB)

stdlib_codata.f90: $(SRC_DIR)/codata_constants_2022.f90
	$(PY) $(GEN) $< $@

clean:
	rm -rf $(STDLIB)

