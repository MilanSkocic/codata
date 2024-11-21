# ---------------------------------------------------------------------
# CONFIGURATION
ifeq ($(PLATFORM), windows)
	PY=py
endif
ifeq ($(PLATFORM), linux)
	PY=python
	AW=auditwheel repair --plat manylinux_2_31_x86_64 ./dist/*.whl
endif
ifeq ($(PLATFORM), darwin)
	PY=python
endif

PY=python
GENPY=../scripts/gen_python.py

AST_SRC=$(wildcard ../data/*.toml)
PYTHON_SRC=$(patsubst ../data/%.toml, ./src/pycodata/%.py, $(AST_SRC))

SETUP=setup.py pyproject.toml
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
.PHONY: sources package clean

all: sources package
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# SOURCES
sources: $(PYTHON_SRC)

src/pycodata/%.py: ../data/%.toml
	$(PY) $(GENPY) $< $@
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# COMPILATION
package: $(SETUP)
	$(PY) -m build --no-isolation --sdist
	$(PY) -m build --no-isolation --wheel

test: sources
	$(PY) -m pytest -v
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# OTHERS 
clean: 
	rm -rf build 
	rm -rf dist 
	rm -rf *.egg-info 
	rm -rf src/*.egg-info
	rm -rf src/pycodata/__pycache__ 
	rm -rf wheelhouse 
	rm -rf src/pycodata/codata*.py
	rm -rf src/pycodata/version.py
# ---------------------------------------------------------------------
