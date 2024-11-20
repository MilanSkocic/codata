PY=python
GEN=../../scripts/gen_c.py

AST_DIR=../../data
CBUILD_DIR = ../build

AST_SRC=$(wildcard $(AST_DIR)/*.toml)
C_SRC = codata_constants_2010.c codata_constants_2014.c codata_constants_2018.c codata_constants_2022.c codata_version.c
C_OBJ=$(patsubst %.c, $(CBUILD_DIR)/%.o, $(C_SRC))
DLIB=$(CBUILD_DIR)/$(LIBNAME).a

.PHONY: clean

all: sources build shared

sources: $(C_SRC)

build: $(C_OBJ) $(DLIB)

codata_constants_2010.c: $(AST_DIR)/codata_2010.toml
	$(PY) $(GEN) $< $@

codata_constants_2014.c: $(AST_DIR)/codata_2014.toml
	$(PY) $(GEN) $< $@

codata_constants_2018.c: $(AST_DIR)/codata_2018.toml
	$(PY) $(GEN) $< $@

codata_constants_2022.c: $(AST_DIR)/codata_2022.toml
	$(PY) $(GEN) $< $@

$(CBUILD_DIR)/%.o: %.c
	gcc -c -I../include $(CFLAGS_RELEASE) $(FPM_CFLAGS) $< -o $@

$(CBUILD_DIR)/$(LIBNAME).a: $(C_OBJ)
	ar -crs $@ $^

shared: build shared_$(PLATFORM)

shared_linux: 
	$(CC) -shared -o $(CBUILD_DIR)/$(LIBNAME).so -Wl,--whole-archive $(CBUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(CC) -dynamiclib -install_name @rpath/$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(CBUILD_DIR)/$(LIBNAME).dylib -Wl,-all_load $(CBUILD_DIR)/$(LIBNAME).a

shared_windows: 
	$(CC) -shared $(FPM_LDFLAGS) -o $(CBUILD_DIR)/$(LIBNAME).dll -Wl,--out-implib=$(CBUILD_DIR)/$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(CBUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

clean:
	rm -rf $(C_SRC)
	rm -rf $(CBUILD_DIR)/*
