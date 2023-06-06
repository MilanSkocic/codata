ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

.PHONY: all clean install uninstall

all: $(LIBNAME)

$(LIBNAME): build
	cp $(shell find ./build -type f -name lib$(LIBNAME).a) $(BUILD_DIR)
	cp $(BUILD_DIR)/lib$(LIBNAME).a $(PYW_MOD_DIR)/

build: clean
	$(MAKE) -C ./srcgen
	fpm build

shared_linux: $(LIBNAME)
	gcc -shared  -o $(BUILD_DIR)/lib$(LIBNAME).so -Wl,--whole-library $(BUILD_DIR)/lib$(LIBNAME).a -Wl,--no-whole-library

shared_darwin: $(LIBNAME)
	gcc -dynamiclib  -o $(BUILD_DIR)/lib$(LIBNAME).dylib -Wl,-all_load $(BUILD_DIR)/lib$(LIBNAME).a -Wl,-noall_load

clean:
	$(MAKE) -C ./srcgen clean
	fpm clean --all

install:
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include
	cp -f $(BUILD_DIR)/lib$(LIBNAME).so $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dylib $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/lib$(LIBNAME).dll.a $(install_dir)/lib | true
	cp -f $(BUILD_DIR)/$(LIBNAME).dll $(install_dir)/bin | true

uninstall:
	rm -f $(install_dir)/include/$(LIBNAME)*.h
	rm -f $(install_dir)/include/$(LIBNAME)*.mod
	rm -f $(install_dir)/lib/lib$(LIBNAME).a
	rm -f $(install_dir)/lib/lib$(LIBNAME).so
	rm -f $(install_dir)/lib/lib$(LIBNAME).dylib
	rm -f $(install_dir)/lib/lib$(LIBNAME).dll.a
	rm -f $(install_dir)/bin/$(LIBNAME).dll