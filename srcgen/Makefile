py=python3.12
GENAST=gen_ast.py
GENCODE=gen_code.py

CC=gcc
FC=gfortran

RAW_DIR=./raw
AST_DIR=./ast
SRC_DIR=./src
INCLUDE_DIR=../include

RAW_SRC=$(RAW_DIR)/codata_2018.txt $(RAW_DIR)/codata_2014.txt $(RAW_DIR)/codata_2010.txt $(RAW_DIR)/codata_latest.txt

AST_SRC=$(AST_DIR)/codata_2018.toml $(AST_DIR)/codata_2014.toml $(AST_DIR)/codata_2010.toml $(AST_DIR)/codata_latest.toml

STDLIB_MODULE = $(SRC_DIR)/stdlib_codata.f90
STDLIB_TOML = $(AST_DIR)/codata_latest.toml

STDLIB_MODULE_2018 = $(SRC_DIR)/stdlib_codata_2018.f90
STDLIB_TOML_2018 = $(AST_DIR)/codata_2018.toml

STDLIB_MODULE_2014 = $(SRC_DIR)/stdlib_codata_2014.f90
STDLIB_TOML_2014 = $(AST_DIR)/codata_2014.toml

STDLIB_MODULE_2010 = $(SRC_DIR)/stdlib_codata_2010.f90
STDLIB_TOML_2010 = $(AST_DIR)/codata_2010.toml

FYPP_SRC = $(wildcard $(SRC_DIR)/*.fypp)
FYPP_f90 = $(patsubst %.fypp, %.f90, $(FYPP_SRC))

build: $(AST_SRC) $(FYPP_f90) $(STDLIB_MODULE) $(STDLIB_MODULE_2018) $(STDLIB_MODULE_2014) $(STDLIB_MODULE_2010)

$(AST_DIR)/%.toml: $(RAW_DIR)/%.txt
	$(py) $(GENAST) $< $@

$(STDLIB_MODULE): $(STDLIB_TOML)
	$(py) $(GENCODE) $< $@

$(STDLIB_MODULE_2018): $(STDLIB_TOML_2018)
	$(py) $(GENCODE) $< $@

$(STDLIB_MODULE_2014): $(STDLIB_TOML_2014)
	$(py) $(GENCODE) $< $@

$(STDLIB_MODULE_2010): $(STDLIB_TOML_2010)
	$(py) $(GENCODE) $< $@

$(SRC_DIR)/%.f90: $(SRC_DIR)/%.fypp
	fypp -I$(INCLUDE_DIR) -DWITH_QP=0 $< $@

test_f: 
	fpm build

clean:	
	rm -rf $(AST_DIR)/*.toml
	rm -rf $(STDLIB_MODULE) $(FYPP_f90)
	fpm clean
