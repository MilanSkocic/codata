ifneq ($(prefix), )
	install_dir=$(prefix)
else
	install_dir=$(DEFAULT_INSTALL_DIR)
endif

.PHONY: all clean install uninstall

all: $(LIBNAME)

$(LIBNAME): build
	cp $(shell find ./build -type f -name "lib$(LIBNAME)*.a") $(PYW_MOD_DIR)/

build: clean
	$(MAKE) -C ./srcgen
	fpm build

clean:
	$(MAKE) -C ./srcgen clean
	fpm clean --all

install:
	fpm install --prefix=$(install_dir)
	cp -f ./include/*.h $(install_dir)/include

uninstall:
	rm -f $(install_dir)/include/=$(LIBNAME)*.h
	rm -f $(install_dir)/include/$(LIBNAME)*.mod
	rm -f $(install_dir)/lib/lib$(LIBNAME).a