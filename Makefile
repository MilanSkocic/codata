ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

.PHONY: all clean install uninstall copy_h copy_a shared_linux shared_windows shared_darwin

all: $(LIBNAME)

$(LIBNAME): build copy_h copy_a shared copy_shared

build: clean
	fpm build --profile=release

shared: shared_$(PLATFORM)

shared_linux:
	gfortran -shared -o $(BUILD_DIR)/lib$(LIBNAME).so -Wl,--whole-archive $(BUILD_DIR)/lib$(LIBNAME).a -Wl,--no-whole-archive

shared_darwin: 
	gfortran -dynamiclib -install_name @rpath/lib$(LIBNAME).dylib -static-libgfortran -static-libquadmath -static-libgcc -o $(BUILD_DIR)/lib$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/lib$(LIBNAME).a -Wl,-noall_load

shared_windows: 
	gfortran -shared -static -o $(BUILD_DIR)/lib$(LIBNAME).dll -Wl,--out-implib=$(BUILD_DIR)/lib$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(BUILD_DIR)/lib$(LIBNAME).a -Wl,--no-whole-archive

copy_a:
	cp $(shell find ./build -type f -name lib$(LIBNAME).a) $(BUILD_DIR)

copy_h: 
	cp $(INCLUDE_DIR)/$(LIBNAME)*.h $(PYW_MOD_DIR)/

copy_shared: copy_a
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(PYW_MOD_DIR) | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dylib $(PYW_MOD_DIR) | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll $(PYW_MOD_DIR) | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(PYW_MOD_DIR) | true

clean:
	fpm clean --all

install:
	mkdir -p $(install_dir)/bin
	mkdir -p $(install_dir)/include
	mkdir -p $(install_dir)/lib
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dylib $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll $(install_dir)/bin | true

uninstall:
	rm -f $(install_dir)/include/$(LIBNAME)*.h
	rm -f $(install_dir)/include/$(LIBNAME)*.mod
	rm -f $(install_dir)/lib/lib$(LIBNAME).a
	rm -f $(install_dir)/lib/lib$(LIBNAME).so
	rm -f $(install_dir)/lib/lib$(LIBNAME).dylib
	rm -f $(install_dir)/lib/lib$(LIBNAME).dll.a
	rm -f $(install_dir)/bin/lib$(LIBNAME).dll