# ---------------------------------------------------------------------
# CONFIGURATION
ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(FPM_DEFAULT_INSTALL_DIR)
endif

ifneq ($(type), )
	btype=$(type)
else
	btype=release
endif


GEN_F=./scripts/gen_fortran.py
GEN_C=./scripts/gen_capi.py
GEN_HEADERS=./scripts/gen_headers.py
GEN_HEADER=./scripts/gen_header.py
GEN_STDLIB=./scripts/gen_stdlib.py

AST_SRC=$(wildcard ./data/*.toml)
F_SRC=$(patsubst ./data/%.toml, ./src/%.f90, $(AST_SRC))
C_SRC=$(patsubst ./data/%.toml, ./src/%_capi.f90, $(AST_SRC))
C_HEADERS=$(patsubst ./data/%.toml, ./include/%.txt, $(AST_SRC))
C_HEADER=./include/$(NAME).h
SRC_FYPP=$(wildcard ./src/*.fypp)
SRC_FYPP_F90=$(patsubst ./src/%.fypp, ./src/%.f90, $(SRC_FYPP))
STDLIB=./stdlib/stdlib_codata.f90
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: build sources stdlib references doc docs clean logo

all: $(FPM_LIBNAME)

$(FPM_LIBNAME): sources build copy_a shared
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
sources: $(SRC_FYPP_F90) $(F_SRC) $(C_SRC) $(C_HEADERS) $(C_HEADER) $(STDLIB)

./src/%.f90: ./data/%.toml
	$(FPM_PYGEN) $(GEN_F) $< $@

./src/%_capi.f90: ./data/%.toml
	$(FPM_PYGEN) $(GEN_C) $< $@

./include/%.txt: ./data/%.toml
	$(FPM_PYGEN) $(GEN_HEADERS) $< $@

$(C_HEADER):
	$(FPM_PYGEN) $(GEN_HEADER) $(C_HEADERS) -o $@

./src/%.f90: ./src/%.fypp
	fypp -I ./include $< $@

./stdlib/stdlib_codata.f90: ./src/codata_constants_2022.f90
	$(FPM_PYGEN) $(GEN_STDLIB) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
build:
	fpm build --profile=$(btype)

test: build
	fpm test --profile=$(btype)

example: build
	fpm run --profile=$(btype) --example example_in_f
	fpm run --profile=$(btype) --example example_in_c
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# LINKING - STATIC and DYNAMIC LIBS
copy_a: 
	cp -f $(shell find ./build/gfortran* -type f -name $(FPM_LIBNAME).a) $(FPM_BUILD_DIR)

shared: shared_$(FPM_PLATFORM)

shared_linux: 
	$(FPM_FC) -shared -o $(FPM_BUILD_DIR)/$(FPM_LIBNAME).so -Wl,--whole-archive $(FPM_BUILD_DIR)/$(FPM_LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(FPM_FC) -dynamiclib -install_name @rpath/$(FPM_LIBNAME).dylib $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dylib -Wl,-all_load $(FPM_BUILD_DIR)/$(FPM_LIBNAME).a

shared_windows: 
	$(FPM_FC) -shared $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dll -Wl,--out-implib=$(FPM_BUILD_DIR)/$(FPM_LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(FPM_BUILD_DIR)/$(FPM_LIBNAME).a -Wl,--no-whole-archive
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# INSTALLATION 
install: install_dirs install_$(FPM_PLATFORM)

install_dirs: 
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	fpm install --prefix=$(install_dir) --profile=$(btype)
	cp -f $(FPM_INCLUDE_DIR)/$(FPM_NAME)*.h $(install_dir)/include

install_linux: 
	cp -f $(FPM_BUILD_DIR)/$(FPM_LIBNAME).so $(install_dir)/lib

install_darwin: 
	cp -f $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dylib $(install_dir)/lib

install_windows:
	cp -f $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dll.a $(install_dir)/lib
	cp -f $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dll $(install_dir)/lib
	cp -f $(FPM_BUILD_DIR)/$(FPM_LIBNAME).dll $(install_dir)/bin

uninstall:
	rm -f $(install_dir)/include/$(FPM_NAME)*.h
	rm -f $(install_dir)/include/$(FPM_NAME)*.mod
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).a
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).so
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dylib
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dll.a
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dll
	rm -f $(install_dir)/bin/$(FPM_LIBNAME).dll
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
doc:
	make -C doc/sphinx html

docs:
	rm -rf docs/*
	cp -rf doc/sphinx/build/html/* ./docs/

logo:
	make -C media

clean:
	rm -rf $(F_SRC) $(C_SRC) $(C_HEADERS) $(C_HEADER) ./src/codata_version.f90 $(SRC_FYPP_F90) $(STDLIB)
	fpm clean --all
	make -C doc clean
# ---------------------------------------------------------------------
