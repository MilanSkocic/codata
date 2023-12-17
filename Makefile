ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

.PHONY: clean install uninstall copy_h copy_a shared_linux shared_windows shared_darwin

all: clean $(LIBNAME)

$(LIBNAME): build copy_a shared copy_h copy_shared

generator:
	make -C srcgen generator

build: generator
	fpm build --profile=release

build_debug: generator
	fpm build --profile=debug

test: build
	fpm test --profile=release
	
test_debug: build_debug
	fpm test --profile=debug

example: build
	fpm run --profile=release --example --all

example_debug: build_debug
	fpm run --profile=debug --example --all
	
shared: shared_$(PLATFORM)

copy_shared: copy_shared_$(PLATFORM)

shared_linux:
	$(FC) -shared -o $(BUILD_DIR)/lib$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/lib$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	$(FC) -dynamiclib -install_name @rpath/lib$(LIBNAME).dylib $(FPM_LDFLAGS) -o $(BUILD_DIR)/lib$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/lib$(LIBNAME).a

shared_windows: 
	$(FC) -shared $(FPM_LDFLAGS) -o $(BUILD_DIR)/lib$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/lib$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/lib$(LIBNAME).a -Wl,--no-whole-archive

copy_a:
	cp -f $(shell find ./build -type f -name lib$(LIBNAME).a) $(BUILD_DIR)
	cp -f $(BUILD_DIR)/lib$(LIBNAME).a $(BUILD_DIR)/lib$(LIBNAME)-$(PLATFORM)-$(ARCH)-$(VERSION).a

copy_h: 
	cp -f $(INCLUDE_DIR)/$(LIBNAME)*.h $(PYW_MOD_DIR)/

copy_shared_linux:
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(BUILD_DIR)/lib$(LIBNAME)-$(PLATFORM)-$(ARCH)-$(VERSION).so
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(PYW_MOD_DIR)

copy_shared_darwin:
	cp $(BUILD_DIR)/lib$(LIBNAME).dylib $(BUILD_DIR)/lib$(LIBNAME)-$(PLATFORM)-$(ARCH)-$(VERSION).dylib
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dylib $(PYW_MOD_DIR)

copy_shared_windows:
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll $(BUILD_DIR)/lib$(LIBNAME)-$(PLATFORM)-$(ARCH)-$(VERSION).dll
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(BUILD_DIR)/lib$(LIBNAME)-$(PLATFORM)-$(ARCH)-$(VERSION).dll.a
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll $(PYW_MOD_DIR)
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(PYW_MOD_DIR)

clean:
	fpm clean --all
	rm -f src/*.mod
	make -C srcgen clean
	make -C $(PYW_MOD_DIR) clean

install: install_dirs install_$(PLATFORM)

install_dirs: 
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include

install_linux:
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(install_dir)/lib

install_darwin:
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dylib $(install_dir)/lib

install_windows:
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(install_dir)/lib
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll $(install_dir)/bin

uninstall:
	rm -f $(install_dir)/include/$(LIBNAME)*.h
	rm -f $(install_dir)/include/$(LIBNAME)*.mod
	rm -f $(install_dir)/lib/lib$(LIBNAME).a
	rm -f $(install_dir)/lib/lib$(LIBNAME).so
	rm -f $(install_dir)/lib/lib$(LIBNAME).dylib
	rm -f $(install_dir)/lib/lib$(LIBNAME).dll.a
	rm -f $(install_dir)/bin/lib$(LIBNAME).dll