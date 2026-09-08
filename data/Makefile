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
# Reviewed map of quantities NIST renamed between adjustments. Checked in, not
# generated during a build: a change to it must be looked at by a human.
RENAMES=./renames.tsv
# ---------------------------------------------------------------------

# ---------------------------------------------------------------------
# TARGETS
.PHONY: clean

all: dirs $(AST_SRC) check_renames $(MAN_SRC) \
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

build/%.man: build/%.toml toml2man common $(RENAMES)
	./toml2man $< > $@

build/%.f90: build/%.toml toml2f90 common $(RENAMES)
	./toml2f90 $< > $@

../src/%.f90: build/%.f90
	cp -fv $^ $@

build/%.h: ./build/%.toml toml2h common $(RENAMES)
	./toml2h $< > $@

../include/$(FPM_NAME).h: $(C_HEADERS) $(FPM_NAME).1.h $(FPM_NAME).2.h
	cat $(FPM_NAME).1.h $(C_HEADERS) $(FPM_NAME).2.h > $@

./build/stdlib_codata.f90: ./build/codata_constants_$(LATEST_YEAR).f90 stdlib
	./stdlib $< > $@

./build/%.py: ./build/%.toml toml2py common $(RENAMES)
	./toml2py $< > $@

./build/_%.c: ./build/%.toml $(GEN_CPY) $(RENAMES)
	$(FPM_PYGEN) $(GEN_CPY) $< $@

../py/src/$(FPM_PYNAME)/_%.c: ./build/_%.c
	cp -fv $^ $@

./build/%.c: ./build/%.toml toml2c common $(RENAMES)
	./toml2c $< > $@

../src/%.c: ./build/%.c
	cp -fv $^ $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# RENAME MAP
# ---------------------------------------------------------------------
# The alias set is reviewed, not inferred: check_renames fails if the map
# checked in no longer matches what the adjustments themselves imply.
.PHONY: check_renames update_renames
check_renames: $(AST_SRC) renames $(RENAMES)
	@./renames $(AST_SRC) | diff -u $(RENAMES) - > /dev/null || { \
		echo "ERROR: $(RENAMES) does not match the adjustments." >&2 ; \
		./renames $(AST_SRC) | diff -u $(RENAMES) - >&2 ; \
		echo "Review the difference, then run: make -C data update_renames" >&2 ; \
		exit 1 ; }

update_renames: $(AST_SRC) renames
	./renames $(AST_SRC) > $(RENAMES)
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

