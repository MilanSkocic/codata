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

GENAST=gen_ast.py
GENSTDLIB=gen_stdlib.py

NIST_SRC=$(wildcard $(NIST_DIR)/*.txt)
TOML_SRC=$(patsubst %.txt, %.toml, $(NIST_SRC))

FYPP_SRC=$(wildcard $(SRC_DIR)/*.fypp)
FYPP_f90=$(patsubst %.fypp, %.f90, $(FYPP_SRC))

STDLIB_MODULE = $(STDLIB_DIR)/stdlib_codata.f90
STDLIB_TOML = $(NIST_DIR)/codata_latest.toml

STDLIB_MODULE_2018 = $(STDLIB_DIR)/stdlib_codata_2018.f90
STDLIB_TOML_2018 = $(NIST_DIR)/codata_2018.toml

STDLIB_MODULE_2014 = $(STDLIB_DIR)/stdlib_codata_2014.f90
STDLIB_TOML_2014 = $(NIST_DIR)/codata_2014.toml

STDLIB_MODULE_2010 = $(STDLIB_DIR)/stdlib_codata_2010.f90
STDLIB_TOML_2010 = $(NIST_DIR)/codata_2010.toml

all: $(TOML_SRC) $(FYPP_f90) $(LIBNAME)

$(LIBNAME): build copy_a shared

generator:
	make -C srcgen generator

stdlib: $(FYPP_f90) $(STDLIB_MODULE) $(STDLIB_MODULE_2018) $(STDLIB_MODULE_2014) $(STDLIB_MODULE_2010)

$(STDLIB_MODULE): $(STDLIB_TOML)
	$(PY) $(GENSTDLIB) $< $@

$(STDLIB_MODULE_2018): $(STDLIB_TOML_2018)
	$(PY) $(GENSTDLIB) $< $@

$(STDLIB_MODULE_2014): $(STDLIB_TOML_2014)
	$(PY) $(GENSTDLIB) $< $@

$(STDLIB_MODULE_2010): $(STDLIB_TOML_2010)
	$(PY) $(GENSTDLIB) $< $@

build: generator
	fpm build --profile=$(btype)

$(NIST_DIR)/%.toml: $(NIST_DIR)/%.txt
	$(PY) $(GENAST) $< $@

$(SRC_DIR)/%.f90: $(SRC_DIR)/%.fypp
	$(FYPP) -I$(INCLUDE_DIR) -DWITH_QP=0 $< $@

test: build
	fpm test --profile=$(btype)

example: build
	fpm run --profile=$(btype) --example example_in_f
	fpm run --profile=$(btype) --example example_in_c

copy_a: 
	cp -f $(shell find ./build/gfortran* -type f -name $(LIBNAME).a) $(BUILD_DIR)

shared: shared_$(PLATFORM)

shared_linux: 
	$(FC) -shared -o $(BUILD_DIR)/$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(FC) -dynamiclib -install_name @rpath/$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/$(LIBNAME).a

shared_windows: 
	$(FC) -shared $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

clean:
	rm -f $(TOML_SRC)
	rm -f $(STDLIB_DIR)/stdlib*.f90
	fpm clean --all
	rm -f src/*.mod

install: install_dirs install_$(PLATFORM)

install_dirs: 
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include

install_linux: 
	cp -f $(BUILD_DIR)/$(LIBNAME).so $(install_dir)/lib

install_darwin: 
	cp -f $(BUILD_DIR)/$(LIBNAME).dylib $(install_dir)/lib

install_windows:
	cp -f $(BUILD_DIR)/$(LIBNAME).dll.a $(install_dir)/lib
	cp -f $(BUILD_DIR)/$(LIBNAME).dll $(install_dir)/bin

uninstall:
	rm -f $(install_dir)/include/$(HEADER_PREFIX)*.h
	rm -f $(install_dir)/include/$(HEADER_PREFIX)*.mod
	rm -f $(install_dir)/lib/$(LIBNAME).a
	rm -f $(install_dir)/lib/$(LIBNAME).so
	rm -f $(install_dir)/lib/$(LIBNAME).dylib
	rm -f $(install_dir)/lib/$(LIBNAME).dll.a
	rm -f $(install_dir)/bin/$(LIBNAME).dll

