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
pyinstall_dir=py/src/$(FPM_PYNAME)/$(FPM_PLATFORM)

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

SRC_FYPP=$(wildcard ./source/*.fypp)
SRC_FYPP_F90=$(patsubst ./source/%.fypp, ./src/%.f90, $(SRC_FYPP))

ARCHIVE=$(FPM_NAME)-$(FPM_PLATFORM)-$(FPM_ARCH)-$(FPM_VERSION)
PYARCHIVE=$(FPM_PYNAME)-$(FPM_PLATFORM)-$(FPM_ARCH)-$(FPM_VERSION)
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
all: $(FPM_LIBNAME)

$(FPM_LIBNAME): build shared
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
.PHONY: sources 
sources: 
	make -C data
	make -C source
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
.PHONY: build
build:
	fpm build --profile $(btype)
	fpm clean --skip
	fpm build --profile $(btype)
	mkdir -p $(FPM_BUILD_DIR)/install/bin
	mkdir -p $(FPM_BUILD_DIR)/install/include
	mkdir -p $(FPM_BUILD_DIR)/install/lib
	mkdir -p $(FPM_BUILD_DIR)/install/share/man/man3
	mkdir -p $(FPM_BUILD_DIR)/install/share/man/man1
	fpm install --prefix $(FPM_BUILD_DIR)/install --profile $(btype) --no-rebuild
	cp -f $(FPM_INCLUDE_DIR)/$(FPM_NAME)*.h $(FPM_BUILD_DIR)/install/include
	cp -f docs/man/$(FPM_NAME)*.3.gz $(FPM_BUILD_DIR)/install/share/man/man3
	cp -f docs/man/$(FPM_APPNAME)*.1.gz $(FPM_BUILD_DIR)/install/share/man/man1

.PHONY: test
test:
	fpm test --profile $(btype)

.PHONY: example
example:
	fpm run --profile $(btype) --example example_in_f
	fpm run --profile $(btype) --example example_in_c
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SHARED LIBRARY
.PHONY: shared
shared: shared_$(FPM_PLATFORM)

.PHONY: shared_linux
shared_linux: 
	$(FPM_FC) -shared -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).so -Wl,--whole-archive $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a -Wl,--no-whole-archive

.PHONY: shared_darwin
shared_darwin: 
	$(FPM_FC) -dynamiclib -install_name @rpath/$(FPM_LIBNAME).dylib $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dylib -Wl,-all_load $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a

.PHONY: shared_window
shared_windows: 
	$(FPM_FC) -shared $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dll -Wl,--out-implib=$(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a -Wl,--no-whole-archive
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# INSTALLATION 
.PHONY: install
install: install_dirs

.PHONY: install_dirs
install_dirs: 
	mkdir -p $(install_dir)
	cp -rfv $(FPM_BUILD_DIR)/install/* $(install_dir)

.PHONY: uninstall
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
	rm -r $(install_dir)/share/man/man1/$(FPM_APPNAME)*.1.*
	rm -r $(install_dir)/share/man/man3/$(FPM_NAME)*.3.*
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS
.PHONY: python
python:
	mkdir -p py/$(FPM_PY_SRC)/$(FPM_PLATFORM)
	cp -rfv $(FPM_BUILD_DIR)/install/* py/$(FPM_PY_SRC)/$(FPM_PLATFORM)
	cp -rfv py/$(FPM_PY_SRC)/$(FPM_PLATFORM)/include/*.h py/$(FPM_PY_SRC)/
	cp -rfv py/$(FPM_PY_SRC)/$(FPM_PLATFORM)/lib/* py/$(FPM_PY_SRC)/
	make -C py

.PHONY: archives 
archives:
	cd ./build/install && tar -czvf ../$(ARCHIVE).tar.gz . && cd ../../
	cd ./py && [ -d wheelhouse ] && cp -rfv ./wheelhouse/*.whl ./dist/ || true && cd ./dist && tar --exclude='$(PYARCHIVE).tar.gz' -czvf $(PYARCHIVE).tar.gz *.* && cd ../../ 

.PHONY: docs
docs: 
	make -C source/doc
	mkdir -p docs/man
	mkdir -p docs/latex
	mkdir -p docs/ford
	mkdir -p docs/sphinx
	cp -rfv source/doc/man/build/* docs/man/

.PHONY: logo
logo:
	make -C media

.PHONY: clean
clean:
	rm -rf $(SRC_FYPP_F90)
	make -C data clean
	fpm clean --all
	make -C source clean
	make -C py clean
# ---------------------------------------------------------------------
