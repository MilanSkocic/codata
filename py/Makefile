ifeq ($(PLATFORM), windows)
	PY=py -
endif
ifeq ($(PLATFORM), linux)
	PY=python
	AW=auditwheel repair --plat manylinux_2_31_x86_64 ./dist/*.whl
endif
ifeq ($(PLATFORM), darwin)
	PY=python
endif

SETUP=setup.py pyproject.toml

all: sources package

sources: 
	make -C src/pycodata 

package: $(SETUP)
	$(PY) -m build --no-isolation --sdist
	$(PY) -m build --no-isolation --wheel
	$(PY) -m pytest -v

clean: 
	rm -rf build 
	rm -rf dist 
	rm -rf *.egg-info 
	rm -rf __pycache__ 
	rm -rf wheelhouse 
	make -C src/pycodata clean
