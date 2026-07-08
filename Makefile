include make.in
# ---------------------------------------------------------------------
# CONFIGURATION
# ---------------------------------------------------------------------
#{{{
install_dir=$(PREFIX)
ifneq ($(prefix), )
	PREFIX=$(prefix)
endif

ifneq ($(type), )
	btype=$(type)
else
	btype=release
endif

install_dir=$(DESTDIR)$(PREFIX)
pyinstall_dir=py/src/$(FPM_PYNAME)/$(FPM_PLATFORM)

ARCHIVE=$(FPM_NAME)-$(FPM_PLATFORM)-$(FPM_ARCH)-$(FPM_VERSION)
PYARCHIVE=$(FPM_PYNAME)-$(FPM_PLATFORM)-$(FPM_ARCH)-$(FPM_VERSION)
#}}}
# ---------------------------------------------------------------------

all: $(FPM_LIBNAME)

$(FPM_LIBNAME): build shared


# ---------------------------------------------------------------------
# COMPILATION
# ---------------------------------------------------------------------
#{{{
.PHONY: build
build:
	fpm build --profile $(btype)
	fpm install --prefix $(FPM_BUILD_DIR)/install --profile $(btype) --no-rebuild
	install -d $(FPM_BUILD_DIR)/install/share/man/man1/ \
		       $(FPM_BUILD_DIR)/install/share/man/man3/
	install $(FPM_INCLUDE_DIR)/$(FPM_NAME)*.h $(FPM_BUILD_DIR)/install/include
	install docs/man/$(FPM_NAME)*.3.gz $(FPM_BUILD_DIR)/install/share/man/man3
	install docs/man/$(FPM_APPNAME)*.1.gz $(FPM_BUILD_DIR)/install/share/man/man1

.PHONY: test
test:
	fpm test --profile $(btype)

.PHONY: example
example:
	fpm run --profile $(btype) --example example_in_f
	fpm run --profile $(btype) --example example_in_c
#}}}
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SHARED LIBRARY
# ---------------------------------------------------------------------
# {{{
.PHONY: shared
shared: shared_$(FPM_PLATFORM)

.PHONY: shared_linux
shared_linux: 
	$(FPM_FC) -shared -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).so -Wl,--whole-archive $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a -Wl,--no-whole-archive

.PHONY: shared_darwin
shared_darwin: 
	$(FPM_FC) -dynamiclib -install_name @rpath/$(FPM_LIBNAME).dylib $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dylib -Wl,-all_load $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a

.PHONY: shared_window
shared_windows: 
	$(FPM_FC) -shared $(FPM_LDFLAGS) -o $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dll -Wl,--out-implib=$(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).dll.a,--export-all-symbols,--enable-auto-import,--whole-archive $(FPM_BUILD_DIR)/install/lib/$(FPM_LIBNAME).a -Wl,--no-whole-archive
#}}}
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# PYTHON
# ---------------------------------------------------------------------
# {{{
.PHONY: python
python:
	mkdir -p py/$(FPM_PY_SRC)/$(FPM_PLATFORM)
	cp -rfv $(FPM_BUILD_DIR)/install/* py/$(FPM_PY_SRC)/$(FPM_PLATFORM)
	cp -rfv py/$(FPM_PY_SRC)/$(FPM_PLATFORM)/include/*.h py/$(FPM_PY_SRC)/
	cp -rfv py/$(FPM_PY_SRC)/$(FPM_PLATFORM)/lib/* py/$(FPM_PY_SRC)/
	make -C py
#}}}
# ---------------------------------------------------------------------


#-----------------------------------------------------------------------
# INSTALLATION 
#-----------------------------------------------------------------------
#{{{
.PHONY: install
install: install_dirs

.PHONY: install_dirs
install_dirs: 
	mkdir -p $(install_dir)
	cp -rfv $(FPM_BUILD_DIR)/install/* $(install_dir)

.PHONY: uninstall
uninstall:
	rm -f $(install_dir)/include/$(FPM_NAME)*.h
	rm -f $(install_dir)/include/$(FPM_NAME)*.mod
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).a
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).so
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dylib
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dll.a
	rm -f $(install_dir)/lib/$(FPM_LIBNAME).dll
	rm -f $(install_dir)/bin/$(FPM_LIBNAME).dll
	rm -f $(install_dir)/bin/$(FPM_APPNAME)
	rm -f $(install_dir)/bin/$(FPM_APPNAME).exe
	rm -r $(install_dir)/share/man/man1/$(FPM_APPNAME)*.1.*
	rm -r $(install_dir)/share/man/man3/$(FPM_NAME)*.3.*
#}}}
#-----------------------------------------------------------------------


#-----------------------------------------------------------------------
# ARCHIVES
#-----------------------------------------------------------------------
#{{{
.PHONY: archives 
archives:
	cd ./build/install && tar -czvf ../$(ARCHIVE).tar.gz . && cd ../../
	cd ./py && [ -d wheelhouse ] && cp -rfv ./wheelhouse/*.whl ./dist/ || true && cd ./dist && tar --exclude='$(PYARCHIVE).tar.gz' -czvf $(PYARCHIVE).tar.gz *.* && cd ../../ 
#}}}
#-----------------------------------------------------------------------


#-----------------------------------------------------------------------
# CLEAN
#-----------------------------------------------------------------------
#{{{
.PHONY: clean
clean:
	fpm clean --all
	make -C py clean
#}}}
#-----------------------------------------------------------------------
