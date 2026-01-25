include make.in
# ---------------------------------------------------------------------
# CONFIGURATION
GENPY=../scripts/gen_cpython.py

AST_SRC=$(wildcard ../data/*.toml)
PYTHON_SRC=$(patsubst ../data/%.toml, ./src/pycodata/_%.c, $(AST_SRC))

SETUP=setup.py pyproject.toml
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: sources package clean

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
package: python3.10 python3.11 python3.12 python3.13 python3.14 sdist auditwheel

auditwheel: $(SETUP)
	$(FPM_AW)

sdist: $(SETUP)
	$(FPM_PY)3.14 -m build --no-isolation --sdist

python3.14: $(SETUP)
	@echo "########### PYTHON 3.14 ##########"
	$(FPM_PY)3.14 setup.py build_ext --inplace
	$(FPM_PY)3.14 -m build --no-isolation --wheel
	@echo "#################################"

python3.13: $(SETUP)
	@echo "########### PYTHON 3.13 ##########"
	$(FPM_PY)3.13 setup.py build_ext --inplace
	$(FPM_PY)3.13 -m build --no-isolation --wheel
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

test: test3.10 test3.11 test3.12 test3.13 test3.14

test3.14: python3.14
	$(FPM_PY)3.14 -m pytest -v

test3.13: python3.13 
	$(FPM_PY)3.13 -m pytest -v

test3.12: python3.12
	$(FPM_PY)3.12 -m pytest -v

test3.11: python3.11
	$(FPM_PY)3.11 -m pytest -v

test3.10: python3.10
	$(FPM_PY)3.10 -m pytest -v

example: python3.14
	$(FPM_PY)3.14 ../example/example.py

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
	rm -f $(FPM_PY_SRC)/$(FPM_NAME)*.h 
	rm -f $(FPM_PY_SRC)/_$(FPM_NAME)_constants*.c 
	rm -f $(FPM_PY_SRC)/$(FPM_NAME)
	rm -f $(FPM_PY_SRC)/$(FPM_NAME).exe
	rm -f $(FPM_PY_SRC)/*.a 
	rm -f $(FPM_PY_SRC)/*.so 
	rm -f $(FPM_PY_SRC)/*.dylib 
	rm -f $(FPM_PY_SRC)/*.dll 
	rm -f $(FPM_PY_SRC)/*.dll.a 
	rm -f $(FPM_PY_SRC)/*.pyd
# ---------------------------------------------------------------------
