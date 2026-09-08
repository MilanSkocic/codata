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
# Enumerator ordering for the quantity key. Append-only; see quantities.txt.
QUANTITIES=./quantities.txt
Q_HEADER=./build/codata_quantity.h
Q_FOR=./build/codata_quantity.f90
Q_PY=./build/quantity.py
L_HEADER=./build/codata_lookup.h
L_SRC=./build/codata_lookup.c
L_FOR=./build/codata_lookup.f90
L_PY=./build/lookup.py
# ---------------------------------------------------------------------

# ---------------------------------------------------------------------
# TARGETS
.PHONY: clean

all: dirs $(AST_SRC) check_renames check_quantities $(MAN_SRC) \
	      $(FOR_SRC_) $(FOR_SRC) \
	      $(Q_HEADER) $(Q_FOR) ../src/codata_quantity.f90 \
	      $(Q_PY) ../py/src/$(FPM_PYNAME)/quantity.py \
	      $(L_HEADER) $(L_SRC) ../src/codata_lookup.c \
	      $(L_FOR) ../src/codata_lookup.f90 \
	      $(L_PY) ../py/src/$(FPM_PYNAME)/lookup.py \
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

../include/$(FPM_NAME).h: $(C_HEADERS) $(Q_HEADER) $(L_HEADER) $(FPM_NAME).1.h $(FPM_NAME).2.h
	cat $(FPM_NAME).1.h $(C_HEADERS) $(Q_HEADER) $(L_HEADER) $(FPM_NAME).2.h > $@

LOOKUP_DEPS=gen_lookup $(QUANTITIES) $(RENAMES) $(AST_SRC)

$(L_HEADER): $(LOOKUP_DEPS)
	./gen_lookup h $(QUANTITIES) $(RENAMES) $(AST_SRC) > $@

$(L_SRC): $(LOOKUP_DEPS)
	./gen_lookup c $(QUANTITIES) $(RENAMES) $(AST_SRC) > $@

../src/codata_lookup.c: $(L_SRC)
	cp -fv $^ $@

$(L_FOR): $(LOOKUP_DEPS)
	./gen_lookup f90 $(QUANTITIES) $(RENAMES) $(AST_SRC) > $@

../src/codata_lookup.f90: $(L_FOR)
	cp -fv $^ $@

$(L_PY): $(LOOKUP_DEPS)
	./gen_lookup py $(QUANTITIES) $(RENAMES) $(AST_SRC) > $@

../py/src/$(FPM_PYNAME)/lookup.py: $(L_PY)
	cp -fv $^ $@

$(Q_HEADER): gen_quantities $(QUANTITIES) $(RENAMES)
	./gen_quantities c > $@

$(Q_FOR): gen_quantities $(QUANTITIES) $(RENAMES)
	./gen_quantities f90 > $@

../src/codata_quantity.f90: $(Q_FOR)
	cp -fv $^ $@

$(Q_PY): gen_quantities $(QUANTITIES) $(RENAMES)
	./gen_quantities py > $@

../py/src/$(FPM_PYNAME)/quantity.py: $(Q_PY)
	cp -fv $^ $@

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

# quantities.txt is append-only: the position of a name is its enumerator
# value, so a name may never be removed or reordered.
.PHONY: check_quantities update_quantities
check_quantities: $(AST_SRC) quantities $(QUANTITIES) $(RENAMES)
	@./quantities $(QUANTITIES) $(RENAMES) $(AST_SRC) > build/.q.new
	@if [ -s build/.q.new ] ; then \
		echo "ERROR: $(QUANTITIES) does not cover every quantity:" >&2 ; \
		cat build/.q.new >&2 ; \
		echo "Run: make -C data update_quantities" >&2 ; \
		exit 1 ; \
	fi

update_quantities: $(AST_SRC) quantities $(QUANTITIES) $(RENAMES)
	@./quantities $(QUANTITIES) $(RENAMES) $(AST_SRC) > build/.q.new
	cat build/.q.new >> $(QUANTITIES)
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
clean:
	rm -rf build/*
	rm -f ../src/codata_quantity.f90
	rm -f ../src/codata_lookup.c
	rm -f ../src/codata_lookup.f90
	rm -f ../py/src/$(FPM_PYNAME)/quantity.py
	rm -f ../py/src/$(FPM_PYNAME)/lookup.py
	rm $(CPY_SRC)
	rm $(C_HEADER)
	rm $(C_SRC)
	rm $(FOR_SRC)
# ---------------------------------------------------------------------

