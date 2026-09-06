include ../make.in

# ---------------------------------------------------------------------
# CONFIGURATION
GEN_F=./gen_fortran.py
GEN_PY=./gen_python.py
GEN_C=./gen_c.py
GEN_CPY=./gen_cpython.py

RAW_SRC=$(wildcard ./src/*.txt)
# Latest available adjustment, derived the same way as common:gly().
LATEST_YEAR=$(lastword $(sort $(patsubst ./src/codata_constants_%.txt, %, $(RAW_SRC))))
AST_SRC=$(patsubst ./src/%.txt, ./build/%.toml, $(RAW_SRC))
MAN_SRC=$(patsubst ./src/%.txt, ./build/%.man, $(RAW_SRC))

FOR_SRC_=$(patsubst ./src/%.txt, ./build/%.f90, $(RAW_SRC))
FOR_SRC=$(patsubst ./build/%.f90, ../src/%.f90, $(FOR_SRC_))

C_HEADERS=$(patsubst ./src/%.txt, ./build/%.h, $(RAW_SRC))
C_HEADER=../include/$(FPM_NAME).h

PY_SRC=$(patsubst ./src/%.txt, ./build/%.py, $(RAW_SRC))
CPY_SRC_=$(patsubst ./src/%.txt, ./build/_%.c, $(RAW_SRC))
CPY_SRC=$(patsubst ./build/_%.c, ../py/src/$(FPM_PYNAME)/_%.c, $(CPY_SRC_))

C_SRC_=$(patsubst ./src/%.txt, ./build/%.c, $(RAW_SRC))
C_SRC=$(patsubst ./build/%.c, ../src/%.c, $(C_SRC_))

STDLIB=./build/stdlib_codata.f90
# ---------------------------------------------------------------------

# ---------------------------------------------------------------------
# TARGETS
.PHONY: clean

all: dirs $(AST_SRC) $(MAN_SRC) \
	      $(FOR_SRC_) $(FOR_SRC) \
	      $(C_HEADERS) $(C_HEADER) \
		  $(STDLIB) \
		  $(C_SRC_) $(C_SRC) \
		  $(PY_SRC) $(CPY_SRC_) $(CPY_SRC)
# ---------------------------------------------------------------------

# ----------------------------------------------------------------------
.PHONY: dirs
dirs:
	mkdir -p build
# ----------------------------------------------------------------------

# ---------------------------------------------------------------------
# COMPILATION
build/%.toml: ./src/%.txt txt2toml common
	./txt2toml $< > $@

build/%.man: build/%.toml toml2man common
	./toml2man $< > $@

build/%.f90: build/%.toml toml2f90 common
	./toml2f90 $< > $@

../src/%.f90: build/%.f90
	cp -fv $^ $@

build/%.h: ./build/%.toml toml2h common
	./toml2h $< > $@

../include/$(FPM_NAME).h: $(C_HEADERS) $(FPM_NAME).1.h $(FPM_NAME).2.h
	cat $(FPM_NAME).1.h $(C_HEADERS) $(FPM_NAME).2.h > $@

./build/stdlib_codata.f90: ./build/codata_constants_$(LATEST_YEAR).f90 stdlib
	./stdlib $< > $@

./build/%.py: ./build/%.toml toml2py common
	./toml2py $< > $@

./build/_%.c: ./build/%.toml $(GEN_CPY)
	$(FPM_PYGEN) $(GEN_CPY) $< $@

../py/src/$(FPM_PYNAME)/_%.c: ./build/_%.c
	cp -fv $^ $@

./build/%.c: ./build/%.toml toml2c common
	./toml2c $< > $@

../src/%.c: ./build/%.c
	cp -fv $^ $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
clean:
	rm -rf build/*
	rm $(CPY_SRC)
	rm $(C_HEADER)
	rm $(C_SRC)
	rm $(FOR_SRC)
# ---------------------------------------------------------------------

