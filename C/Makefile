# ---------------------------------------------------------------------
# CONFIGURATION
ifeq ($(profile), debug)
	CFLAGS = $(CFLAGS_DEBUG)
else
	CFLAGS=$(CFLAGS_RELEASE)
endif
ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

PY=python
GEN_C=../scripts/gen_c.py
GEN_H=../scripts/gen_headers.py

AST_SRC=$(wildcard ../data/*.toml)
C_HEADERS=$(patsubst ../data/%.toml, ./include/%.h, $(AST_SRC))
C_SRC=$(patsubst ../data/%.toml, ./src/%.c, $(AST_SRC))
C_OBJ=$(patsubst ./src/%.c, ./build/%.o, $(C_SRC))
C_OBJ+=./build/codata_version.o

SLIB=$(BUILD_DIR)/$(LIBNAME).a
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: clean example

all: $(LIBNAME)

$(LIBNAME): build static shared
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
headers: $(C_HEADERS)

sources: headers $(C_SRC)
	mkdir -p  ./build

./src/%.c: ../data/%.toml
	$(PY) $(GEN_C) $< $@

include/%.h: ../data/%.toml
	$(PY) $(GEN_H) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
build: sources $(C_OBJ)

example: ./example/example.c build static shared
	gcc $< -I./include -L./build/ -lcodata $(CFLAGS) $(FPM_CFLAGS) -o ./build/$@ -Wl,-rpath=.

build/%.o: src/%.c
	gcc -c -I./include -fPIC $(CFLAGS) $(FPM_CFLAGS) $< -o $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# LINKING - STATIC and DYNAMIC LIBS
static: build
	ar -crs $(SLIB) $(C_OBJ)

shared: build static shared_$(PLATFORM)

shared_linux: 
	$(CC) -shared -o $(BUILD_DIR)/$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(CC) -dynamiclib -install_name @rpath/$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/$(LIBNAME).a

shared_windows: 
	$(CC) -shared $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# INSTALLATION 
install: install_dirs install_$(PLATFORM)

install_dirs: build static shared
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	cp -f $(INCLUDE_DIR)/$(NAME)*.h $(install_dir)/include
	cp -f $(BUILD_DIR)/$(LIBNAME).a $(install_dir)/lib

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
clean:
	rm -rf ./build/*
	rm -rf $(C_HEADERS)
	rm -rf codata_version.h
	rm -rf $(C_SRC) ./src/codata_version.c
# ---------------------------------------------------------------------
