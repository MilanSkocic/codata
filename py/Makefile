ifeq ($(PLATFORM), windows)
	PY=py -
endif
ifeq ($(PLATFORM), linux)
	PY=python
	AW=auditwheel repair --plat manylinux_2_17_x86_64 ./dist/*.whl
endif
ifeq ($(PLATFORM), darwin)
	PY=python
endif

SETUP=setup.py pyproject.toml

all: python3.8 python3.9 python3.10 python3.11 python3.12

python3.12: $(SETUP)
	@echo "########### PYTHON 3.12 ##########"
	$(PY)3.12 setup.py build_ext --inplace
	$(PY)3.12 -m build --no-isolation --sdist
	$(PY)3.12 -m build --no-isolation --wheel
	$(PY)3.12 -m unittest -v
	$(AW)
	@echo "#################################"

python3.11: $(SETUP)
	@echo "########### PYTHON 3.11 ##########"
	$(PY)3.11 setup.py build_ext --inplace
	$(PY)3.11 -m build --no-isolation --wheel
	$(PY)3.11 -m unittest -v
	@echo "#################################"

python3.10: $(SETUP)
	@echo "########### PYTHON 3.10 ##########"
	$(PY)3.10 setup.py build_ext --inplace
	$(PY)3.10 -m build --no-isolation --wheel
	$(PY)3.10 -m unittest -v
	@echo "#################################"

python3.9: $(SETUP)
	@echo "########### PYTHON 3.9 ##########"
	$(PY)3.9 setup.py build_ext --inplace
	$(PY)3.9 -m build --no-isolation --wheel
	$(PY)3.9 -m unittest -v
	@echo "#################################"

python3.8: $(SETUP)
	@echo "########### PYTHON 3.8 ##########"
	$(PY)3.8 setup.py build_ext --inplace
	$(PY)3.8 -m build --no-isolation --wheel
	$(PY)3.8 -m unittest -v
	@echo "#################################"

clean: 
	rm -rf build 
	rm -rf dist 
	rm -rf *.egg-info 
	rm -rf __pycache__ 
	rm -rf wheelhouse 
	rm -rf $(PY_SRC)/__pycache__
	rm -f $(PY_SRC)/$(NAME)*.h 
	rm -f $(PY_SRC)/*.a 
	rm -f $(PY_SRC)/*.so 
	rm -f $(PY_SRC)/*.dylib 
	rm -f $(PY_SRC)/*.dll 
	rm -f $(PY_SRC)/*.dll.a 
	rm -f $(PY_SRC)/*.pyd
	rm -rf $(PY_SRC)/bin
	rm -rf $(PY_SRC)/include
	rm -rf $(PY_SRC)/lib
