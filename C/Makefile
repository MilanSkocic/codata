PY=python
GEN_C=../scripts/gen_c.py
GEN_H=../scripts/gen_headers.py

AST_SRC=$(wildcard ../data/*.toml)
C_HEADERS=$(patsubst ../data/%.toml, ./include/%.h, $(AST_SRC))
C_SRC=$(patsubst ../data/%.toml, ./src/%.c, $(AST_SRC))
C_OBJ=$(patsubst ./src/%.c, ./build/%.o, $(C_SRC))

SLIB=$(BUILD_DIR)/$(LIBNAME).a

.PHONY: headers sources clean

all: build static shared


# ---------------------------------------------------------------------
# SOURCES
headers: $(C_HEADERS)

sources: headers $(C_SRC)

./src/%.c: ../data/%.toml
	$(PY) $(GEN_C) $< $@

include/%.h: ../data/%.toml
	$(PY) $(GEN_H) $< $@

src/%.c: ../data/%.toml
	$(PY) $(GEN_C) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
build: $(C_OBJ)
	mkdir -p $(BUILD_DIR)

example: sources headers build
	make -C example

build/%.o: src/%.c
	gcc -c -I./include $(CFLAGS_RELEASE) $(FPM_CFLAGS) $< -o $@
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



clean:
	rm -rf ./build/*
	rm -rf $(C_HEADERS)
	rm -rf codata_version.h
	rm -rf $(C_SRC)
