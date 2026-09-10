include make.in
# ---------------------------------------------------------------------
# CONFIGURATION
SETUP=setup.py pyproject.toml
# ---------------------------------------------------------------------


# ---------------------------------------------------------------------
# TARGETS
all: build

.PHONY: build
build: $(SETUP)
	$(FPM_PY) -m build --no-isolation --sdist
	$(FPM_PY) -m build --no-isolation --wheel

test: build
	$(FPM_PY) -m pytest -v

example: build
	$(FPM_PY) ../example/example.py
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
# ---------------------------------------------------------------------
