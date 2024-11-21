# ---------------------------------------------------------------------
# CONFIGURATION
ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

ifneq ($(type), )
	btype=$(type)
else
	btype=release
endif

PY=python
GEN_F=./scripts/gen_fortran.py
GEN_STDLIB=./scripts/gen_stdlib.py

AST_SRC=$(wildcard ./data/*.toml)
F_SRC=$(patsubst ./data/%.toml, ./src/%.f90, $(AST_SRC))
SRC_FYPP=$(wildcard ./src/*.fypp)
SRC_FYPP_F90=$(patsubst ./src/%.fypp, ./src/%.f90, $(SRC_FYPP))
STDLIB=./stdlib/stdlib_codata.f90
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: build sources stdlib doc docs clean logo

all: $(LIBNAME)

$(LIBNAME): sources build copy_a shared
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
sources: $(SRC_FYPP_F90) $(F_SRC) $(STDLIB)

./src/%.f90: ./data/%.toml
	$(PY) $(GEN_F) $< $@

./src/%.f90: ./src/%.fypp
	fypp -I ./include $< $@

./stdlib/stdlib_codata.f90: ./src/codata_constants_2022.f90
	$(PY) $(GEN_STDLIB) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
build: sources 
	fpm build --profile=$(btype)

test: build
	fpm test --profile=$(btype)

example: build
	fpm run --profile=$(btype) --example example_in_f
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# LINKING - STATIC and DYNAMIC LIBS
copy_a: 
	cp -f $(shell find ./build/gfortran* -type f -name $(LIBNAME).a) $(BUILD_DIR)

shared: shared_$(PLATFORM)

shared_linux: 
	$(FC) -shared -o $(BUILD_DIR)/$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(FC) -dynamiclib -install_name @rpath/$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/$(LIBNAME).a

shared_windows: 
	$(FC) -shared $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# INSTALLATION 
install: install_dirs install_$(PLATFORM)

install_dirs: 
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	fpm install --prefix=$(install_dir) --profile=$(btype)
	cp -f $(INCLUDE_DIR)/$(NAME)*.h $(install_dir)/include

install_linux: 
	cp -f $(BUILD_DIR)/$(LIBNAME).so $(install_dir)/lib

install_darwin: 
	cp -f $(BUILD_DIR)/$(LIBNAME).dylib $(install_dir)/lib

install_windows:
	cp -f $(BUILD_DIR)/$(LIBNAME).dll.a $(install_dir)/lib
	cp -f $(BUILD_DIR)/$(LIBNAME).dll $(install_dir)/lib
	cp -f $(BUILD_DIR)/$(LIBNAME).dll $(install_dir)/bin

uninstall:
	rm -f $(install_dir)/include/$(NAME)*.h
	rm -f $(install_dir)/include/$(NAME)*.mod
	rm -f $(install_dir)/lib/$(LIBNAME).a
	rm -f $(install_dir)/lib/$(LIBNAME).so
	rm -f $(install_dir)/lib/$(LIBNAME).dylib
	rm -f $(install_dir)/lib/$(LIBNAME).dll.a
	rm -f $(install_dir)/lib/$(LIBNAME).dll
	rm -f $(install_dir)/bin/$(LIBNAME).dll
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
doc:
	ford API-doc-FORD-file.md

docs:
	rm -rf docs/*
	cp -rf API-doc/* ./docs/

logo:
	make -C media

clean:
	rm -rf $(F_SRC) $(SRC_FYPP_F90) $(STDLIB)
	fpm clean --all
	rm -rf API-doc/*
# ---------------------------------------------------------------------
