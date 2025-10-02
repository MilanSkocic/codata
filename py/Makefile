# ---------------------------------------------------------------------
# CONFIGURATION
GENPY=../scripts/gen_cpython.py

AST_SRC=$(wildcard ../data/*.toml)
PYTHON_SRC=$(patsubst ../data/%.toml, ./src/pycodata/_%.c, $(AST_SRC))

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

src/pycodata/_%.c: ../data/%.toml
	$(FPM_PYGEN) $(GENPY) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
package: python3.9 python3.10 python3.11 python3.12 python3.13 python3.14

python3.14: $(SETUP)
	@echo "########### PYTHON 3.14 ##########"
	$(FPM_PY)3.14 setup.py build_ext --inplace
	$(FPM_PY)3.14 -m build --no-isolation --sdist
	$(FPM_PY)3.14 -m build --no-isolation --wheel
	$(FPM_AW)
	@echo "#################################"

python3.13: $(SETUP)
	@echo "########### PYTHON 3.13 ##########"
	$(FPM_PY)3.13 setup.py build_ext --inplace
	#$(FPM_PY)3.13 -m build --no-isolation --sdist
	$(FPM_PY)3.13 -m build --no-isolation --wheel
	#$(FPM_AW)
	@echo "#################################"

python3.12: $(SETUP)
	@echo "########### PYTHON 3.12 ##########"
	$(FPM_PY)3.12 setup.py build_ext --inplace
	$(FPM_PY)3.12 -m build --no-isolation --wheel
	@echo "#################################"

python3.11: $(SETUP)
	@echo "########### PYTHON 3.11 ##########"
	$(FPM_PY)3.11 setup.py build_ext --inplace
	$(FPM_PY)3.11 -m build --no-isolation --wheel
	@echo "#################################"

python3.10: $(SETUP)
	@echo "########### PYTHON 3.10 ##########"
	$(FPM_PY)3.10 setup.py build_ext --inplace
	$(FPM_PY)3.10 -m build --no-isolation --wheel
	@echo "#################################"

python3.9: $(SETUP)
	@echo "########### PYTHON 3.9 ##########"
	$(FPM_PY)3.9 setup.py build_ext --inplace
	$(FPM_PY)3.9 -m build --no-isolation --wheel
	@echo "#################################"

test: test3.9 test3.10 test3.11 test3.12 test3.13

test3.13: 
	$(FPM_PY)3.13 -m pytest -v

test3.12: 
	$(FPM_PY)3.12 -m pytest -v

test3.11: 
	$(FPM_PY)3.11 -m pytest -v

test3.10: 
	$(FPM_PY)3.10 -m pytest -v

test3.9: 
	$(FPM_PY)3.9 -m pytest -v

example: 
	$(FPM_PY)3.13 ../example/example.py

# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS 
clean: 
	rm -rf build 
	rm -rf dist 
	rm -rf *.egg-info 
	rm -rf __pycache__ 
	rm -rf wheelhouse 
	rm -rf $(FPM_PY_SRC)/__pycache__
	rm -rf $(PYTHON_SRC)
	rm -f $(FPM_PY_SRC)/$(FPM_NAME)*.h 
	rm -f $(FPM_PY_SRC)/*.a 
	rm -f $(FPM_PY_SRC)/*.so 
	rm -f $(FPM_PY_SRC)/*.dylib 
	rm -f $(FPM_PY_SRC)/*.dll 
	rm -f $(FPM_PY_SRC)/*.dll.a 
	rm -f $(FPM_PY_SRC)/*.pyd
# ---------------------------------------------------------------------
