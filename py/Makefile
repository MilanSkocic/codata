# ---------------------------------------------------------------------
# CONFIGURATION
GENPY=../scripts/gen_cpython.py

AST_SRC=$(wildcard ../data/*.toml)
PYTHON_SRC=$(patsubst ../data/%.toml, ./src/pycodata/cpy_%.c, $(AST_SRC))

SETUP=setup.py pyproject.toml
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: sources package clean test

all: package
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
sources: $(PYTHON_SRC)

src/pycodata/cpy_%.c: ../data/%.toml
	$(PYGEN) $(GENPY) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
package: python3.9 python3.10 python3.11 python3.12 python3.13

python3.13: $(SETUP)
	@echo "########### PYTHON 3.13 ##########"
	$(PY)3.13 setup.py build_ext --inplace
	$(PY)3.13 -m build --no-isolation --sdist
	$(PY)3.13 -m build --no-isolation --wheel
	$(AW)
	@echo "#################################"

python3.12: $(SETUP)
	@echo "########### PYTHON 3.12 ##########"
	$(PY)3.12 setup.py build_ext --inplace
	$(PY)3.12 -m build --no-isolation --wheel
	@echo "#################################"

python3.11: $(SETUP)
	@echo "########### PYTHON 3.11 ##########"
	$(PY)3.11 setup.py build_ext --inplace
	$(PY)3.11 -m build --no-isolation --wheel
	@echo "#################################"

python3.10: $(SETUP)
	@echo "########### PYTHON 3.10 ##########"
	$(PY)3.10 setup.py build_ext --inplace
	$(PY)3.10 -m build --no-isolation --wheel
	@echo "#################################"

python3.9: $(SETUP)
	@echo "########### PYTHON 3.9 ##########"
	$(PY)3.9 setup.py build_ext --inplace
	$(PY)3.9 -m build --no-isolation --wheel
	@echo "#################################"

test: test3.9 test3.10 test3.11 test3.12 test3.13

test3.13: 
	$(PY)3.13 -m pytest -v

test3.12: 
	$(PY)3.12 -m pytest -v

test3.11: 
	$(PY)3.11 -m pytest -v

test3.10: 
	$(PY)3.10 -m pytest -v

test3.9: 
	$(PY)3.9 -m pytest -v

example: 
	$(PY)3.13 ../example/example.py

# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS 
clean: 
	rm -rf build 
	rm -rf dist 
	rm -rf *.egg-info 
	rm -rf __pycache__ 
	rm -rf wheelhouse 
	rm -rf $(PY_SRC)/__pycache__
	rm -rf $(PYTHON_SRC)
	rm -f $(PY_SRC)/$(NAME)*.h 
	rm -f $(PY_SRC)/*.a 
	rm -f $(PY_SRC)/*.so 
	rm -f $(PY_SRC)/*.dylib 
	rm -f $(PY_SRC)/*.dll 
	rm -f $(PY_SRC)/*.dll.a 
	rm -f $(PY_SRC)/*.pyd
# ---------------------------------------------------------------------
