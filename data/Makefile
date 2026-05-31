include ../make.in

# ---------------------------------------------------------------------
# CONFIGURATION
GENAST=./gen_ast.py
GEN_F=./gen_fortran.py
GEN_HEADERS=./gen_headers.py
GEN_HEADER=./gen_header.py
GEN_STDLIB=./gen_stdlib.py
GEN_PY=./gen_python.py
GEN_C=./gen_c.py
GEN_CPY=./gen_cpython.py

RAW_SRC=$(wildcard ./src/*.txt)
AST_SRC=$(patsubst ./src/%.txt, ./build/%.toml, $(RAW_SRC))
FOR_SRC=$(patsubst ./src/%.txt, ./build/%.f90, $(RAW_SRC))
MAN_SRC=$(patsubst ./src/%.txt, ./build/%.man, $(RAW_SRC))

C_HEADERS=$(patsubst ./src/%.txt, ./build/%.h, $(RAW_SRC))

PY_SRC=$(patsubst ./src/%.txt, ./build/%.py, $(RAW_SRC))
CPY_SRC=$(patsubst ./src/%.txt, ./build/_%.c, $(RAW_SRC))

C_SRC=$(patsubst ./src/%.txt, ./build/%.c, $(RAW_SRC))

STDLIB=./build/stdlib_codata.f90
# ---------------------------------------------------------------------

# ---------------------------------------------------------------------
# TARGETS
.PHONY: clean

all: dirs $(AST_SRC) $(FOR_SRC) $(MAN_SRC) $(C_HEADERS) $(C_HEADER) $(STDLIB) $(PY_SRC) $(C_SRC) $(CPY_SRC)
# ---------------------------------------------------------------------

# ----------------------------------------------------------------------
.PHONY: dirs
dirs:
	mkdir -p build
# ----------------------------------------------------------------------

# ---------------------------------------------------------------------
# COMPILATION
build/%.toml: ./src/%.txt
	./txt2toml $< > $@

build/%.man: build/%.toml
	./toml2man $< > $@

build/%.f90: build/%.toml
	$(FPM_PYGEN) $(GEN_F) $< $@

build/%.h: ./build/%.toml
	$(FPM_PYGEN) $(GEN_HEADERS) $< $@

./build/stdlib_codata.f90: ./build/codata_constants_2022.f90
	./stdlib $< > $@

./build/%.py: ./build/%.toml
	$(FPM_PYGEN) $(GEN_PY) $< $@

./build/_%.c: ./build/%.toml
	$(FPM_PYGEN) $(GEN_CPY) $< $@

./build/%.c: ./build/%.toml
	$(FPM_PYGEN) $(GEN_C) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
clean:
	rm -rf build/*
# ---------------------------------------------------------------------

