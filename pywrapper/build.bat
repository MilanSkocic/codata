rd /s /q build
rd /s /q dist
rd /s /q codata.egg-info
del .\codata\*.pyd

py -3.8 setup.py build_ext --inplace
py -3.9 setup.py build_ext --inplace
py -3.10 setup.py build_ext --inplace
py -3.11 setup.py build_ext --inplace
py -3.12 setup.py build_ext --inplace

py -3.8 -m build 
py -3.9 -m build 
py -3.10 -m build 
py -3.11 -m build 
py -3.12 -m build 

py -3.8 -m unittest -v
py -3.9 -m unittest -v
py -3.10 -m unittest -v
py -3.11 -m unittest -v
py -3.12 -m unittest -v
