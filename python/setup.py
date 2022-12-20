from setuptools import setup, find_packages, Extension
import configparser

cfg = configparser.ConfigParser()
cfg.read("site.cfg")

codata_include = cfg["CODATA"]["include_dirs"]
codata_link = "-l"+cfg["CODATA"]["libraries"]

capi_buffer_protocol_example = Extension(name="pycodata.codata",
                                         sources=["./pycodata/codata.c"],
                                          include_dirs=[codata_include],
                                          extra_link_args=[codata_link])

setup(
    name="C Extension Demo",
    version="0.1.0",
    packages=find_packages(),
    include_package_data=True,
    ext_modules=[capi_buffer_protocol_example])


# pypi
# >>> python setup.py sdist bdist_wheel
# >>> python -m twine upload dist/*
# >>> python -m twine upload --repository testpypi dist/*