PY=python
GEN_FORTRAN=../scripts/gen_fortran.py
GEN_CAPI=../scripts/gen_capi.py

AST_DIR=../data
SRC_DIR=.

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
F_MODULE = codata_constants_2010.f90 codata_constants_2014.f90 codata_constants_2018.f90 codata_constants_2022.f90
CAPI_MODULE = capi_constants_2010.f90 capi_constants_2014.f90 capi_constants_2018.f90 capi_constants_2022.f90
SRC_FYPP=$(wildcard *.fypp)
SRC_FYPP_F90=$(patsubst %.fypp, %.f90, $(SRC_FYPP))

.PHONY: clean

all: $(F_MODULE) $(CAPI_MODULE) $(SRC_FYPP_F90)

%.f90: $(AST_DIR)/%.toml
	$(PY) $(GEN_FORTRAN) $< $@

%.f90: %.fypp
	fypp -I ../include $< $@

clean:
	rm -rf $(F_MODULE) $(SRC_FYPP_F90) $(CAPI_MODULE) $(STDLIB)

