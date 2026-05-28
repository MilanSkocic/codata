include make.in
# ---------------------------------------------------------------------
# CONFIGURATION
install_dir=$(PREFIX)
ifneq ($(prefix), )
	PREFIX=$(prefix)
endif

ifneq ($(type), )
	btype=$(type)
else
	btype=release
endif

install_dir=$(DESTDIR)$(PREFIX)

MANDIR=srcprep/doc/man/build
LATEXDIRPDF=srcprep/doc/latex/build/pdf
LATEXDIRHTML=srcprep/doc/latex/build/html
SPHINXDIRHTML=srcprep/doc/sphinx/build/html
FORDDIRHTML=srcprep/doc/ford/build

GEN_F=./scripts/gen_fortran.py
GEN_C=./scripts/gen_capi.py
GEN_HEADERS=./scripts/gen_headers.py
GEN_HEADER=./scripts/gen_header.py
GEN_STDLIB=./scripts/gen_stdlib.py

SRC_FYPP=$(wildcard ./src/*.fypp)
SRC_FYPP_F90=$(patsubst ./src/%.fypp, ./src/%.f90, $(SRC_FYPP))
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: prep build sources stdlib references doc docs clean logo

all: $(FPM_LIBNAME)

$(FPM_LIBNAME): build copy_a shared
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
sources: $(SRC_FYPP_F90) prep

./src/%.f90: ./src/%.fypp
	fypp -I ./include $< $@

prep:
	make -C data
	make -C srcprep
	fpm run --profile release --target $(FPM_APPNAME) -- --help > srcprep/doc/man/src/$(FPM_APPNAME).1.prep

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
	mkdir -p $(install_dir)/share/man/man3
	mkdir -p $(install_dir)/share/man/man1
	fpm install --prefix=$(install_dir) --profile=$(btype)
	cp -f $(FPM_INCLUDE_DIR)/$(FPM_NAME)*.h $(install_dir)/include
	cp -f $(MANDIR)/$(FPM_NAME)*.3.gz $(install_dir)/share/man/man3
	cp -f $(MANDIR)/$(FPM_APPNAME)*.1.gz $(install_dir)/share/man/man1

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
	rm -f $(install_dir)/bin/$(FPM_APPNAME)
	rm -f $(install_dir)/bin/$(FPM_APPNAME).exe
	rm -r $(install_dir)/share/man1/$(FPM_APPNAME)*.1
	rm -r $(install_dir)/share/man3/$(FPM_NAME)*.3
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
doc:
	make -C srcprep doc

docs:
	rm -rf docs/sphinx/*
	rm -rf docs/ford/*
	rm -rf docs/latex/*
	rm -rf docs/man/*
	mkdir -p docs/sphinx
	mkdir -p docs/ford
	mkdir -p docs/latex
	mkdir -p docs/man
	cp -rf $(MANDIR)/* ./docs/man
	cp -rf $(LATEXDIRPDF)/* ./docs/latex
	cp -rf $(SPHINXDIRHTML)/* ./docs/sphinx
	cp -rf $(FORDDIRHTML)/* ./docs/ford
	cp -rf $(LATEXDIRHTML)/* ./docs

logo:
	make -C media

clean:
	rm -rf $(SRC_FYPP_F90)
	fpm clean --all
	make -C srcprep clean
# ---------------------------------------------------------------------
