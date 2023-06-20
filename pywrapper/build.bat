rd /s /q build
rd /s /q dist
rd /s /q pyiapws.egg-info
del .\pyiapws\*.pyd

py -3.11 setup.py sdist

py -3.8 setup.py build_ext --inplace
py -3.9 setup.py build_ext --inplace
py -3.10 setup.py build_ext --inplace
py -3.11 setup.py build_ext --inplace

py -3.8 setup.py bdist_wheel 
py -3.9 setup.py bdist_wheel 
py -3.10 setup.py bdist_wheel 
py -3.11 setup.py bdist_wheel 

py -3.8 -m unittest -v
py -3.9 -m unittest -v
py -3.10 -m unittest -v
py -3.11 -m unittest -v
