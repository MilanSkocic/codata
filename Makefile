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

all: $(LIBNAME)

$(LIBNAME): build copy_a shared

generator:
	make -C srcgen generator

build: generator
	fpm build --profile=$(btype)

test: build
	fpm test --profile=$(btype)
	
example: build
	fpm run --profile=$(btype) --example --all

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
	fpm clean --all
	rm -f src/*.mod
	make -C srcgen clean

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

