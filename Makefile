ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

.PHONY: all clean install uninstall

all: $(LIBNAME)

$(LIBNAME): build
	cp $(shell find ./build -type f -name lib$(LIBNAME).a) $(PYW_MOD_DIR)/

build: clean
	$(MAKE) -C ./srcgen
	fpm build

shared_linux: build
	gcc -shared -o $(dir $(shell find ./build -type f -name lib$(LIBNAME).a))lib$(LIBNAME).so -Wl,--whole-archive $(shell find ./build -type f -name lib$(LIBNAME).a) -Wl,--no-whole-archive

shared_darwin: build
	gcc -shared -o $(dir $(shell find ./build -type f -name lib$(LIBNAME).a))lib$(LIBNAME).dylib -Wl,-all_load $(shell find ./build -type f -name lib$(LIBNAME).a) -Wl, -noall_load

shared_windows:
	gcc -shared -o $(dir $(shell find ./build -type f -name lib$(LIBNAME).a))$(LIBNAME).dll -Wl,out-implib=lib$(LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(shell find ./build -type f -name lib$(LIBNAME).a) -Wl,--no-whole-archive 

clean:
	$(MAKE) -C ./srcgen clean
	fpm clean --all

install:
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include

uninstall:
	rm -f $(install_dir)/include/=$(LIBNAME)*.h
	rm -f $(install_dir)/include/$(LIBNAME)*.mod
	rm -f $(install_dir)/lib/lib$(LIBNAME)$(STATIC_EXT)