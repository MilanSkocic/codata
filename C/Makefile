C_SRC=$(wildcard src/*.c)
C_OBJ=$(patsubst src/%.c, $(BUILD_DIR)/%.o, $(C_SRC))

SLIB=$(BUILD_DIR)/$(LIBNAME).a

.PHONY: headers sources build static shared clean

all: headers sources build static shared


headers: 
	make -C include

sources: headers
	make -C src sources

build: headers sources
	mkdir -p $(BUILD_DIR)
	make -C src

example: sources headers build
	make -C example

static: build
	ar -crs $(SLIB) $(C_OBJ)

shared: build static shared_$(PLATFORM)

shared_linux: 
	$(CC) -shared -o $(BUILD_DIR)/$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(CC) -dynamiclib -install_name @rpath/$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/$(LIBNAME).a

shared_windows: 
	$(CC) -shared $(FPM_LDFLAGS) -o $(BUILD_DIR)/$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/$(LIBNAME).a -Wl,--no-whole-archive

clean:
	rm -rf ./build/*
	make -C include clean
	make -C src clean