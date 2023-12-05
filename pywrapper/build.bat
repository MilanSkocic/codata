rd /s /q build
rd /s /q dist
rd /s /q *egg-info

py -3.8 setup.py build_ext --inplace
py -3.9 setup.py build_ext --inplace
py -3.10 setup.py build_ext --inplace
py -3.11 setup.py build_ext --inplace
py -3.12 setup.py build_ext --inplace

py -3.12 -m build --no-isolation --sdist

py -3.8 -m build --no-isolation --wheel 
py -3.9 -m build --no-isolation --wheel 
py -3.10 -m build --no-isolation --wheel 
py -3.11 -m build --no-isolation --wheel 
py -3.12 -m build --no-isolation --wheel 

py -3.8 -m unittest -v
py -3.9 -m unittest -v
py -3.10 -m unittest -v
py -3.11 -m unittest -v
py -3.12 -m unittest -v
