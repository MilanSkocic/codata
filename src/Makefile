PY=python
GEN=../scripts/gen_src.py

AST_DIR=../nist
SRC_DIR=.

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
F_MODULE = codata_constants_2010.f90 codata_constants_2014.f90 codata_constants_2018.f90 codata_constants_2022.f90
SRC_FYPP=$(wildcard *.fypp)
SRC_FYPP_F90=$(patsubst %.fypp, %.f90, $(SRC_FYPP))

.PHONY: clean

all: $(F_MODULE) $(SRC_FYPP_F90)

codata_constants_2010.f90: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.f90: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.f90: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.f90: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

%.f90: %.fypp
	fypp -I ../include $< $@

clean:
	rm -rf $(F_MODULE) $(SRC_FYPP_F90) $(STDLIB)

