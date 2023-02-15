import os
from setuptools import setup, find_packages, Extension
import configparser
import pycodata

def read(fname):
    return open(os.path.join(os.path.dirname(__file__), fname), 'r', encoding='utf-8').read()

cfg = configparser.ConfigParser()
cfg.read("site.cfg")

codata_include = cfg["CODATA"]["include_dirs"]
codata_link = "-l"+cfg["CODATA"]["libraries"]

pycodata_ext = Extension(name="pycodata._codata",
                                         sources=["./pycodata/_codata.c"],
                                          include_dirs=[codata_include],
                                          extra_link_args=[codata_link])

setup(name=pycodata.__package_name__,
      version=pycodata.__version__,
      maintainer=pycodata.__maintainer__,
      maintainer_email=pycodata.__maintainer_email__,
      author=pycodata.__author__,
      author_email=pycodata.__author_email__,
      description=pycodata.__package_name__,
      long_description=read('README.rst'),
      url='https://milanskocic.github.io/pycodata/index.html',
      download_url='https://github.com/MilanSkocic/pycodata/',
      packages=find_packages(),
      include_package_data=True,
      python_requires='>=3.7',
      install_requires=read('./requirements.txt').split('\n'),
      classifiers=["Development Status :: 4 - Beta",
                   "Intended Audience :: Science/Research",
                   "License :: OSI Approved :: GNU General Public License v3 (GPLv3)",
                   "Programming Language :: Python",
                   "Programming Language :: Python :: 3 :: Only",
                   "Programming Language :: Python :: 3.7",
                   "Programming Language :: Python :: 3.8",
                   "Programming Language :: Python :: 3.9",
                   "Programming Language :: Python :: 3.10",
                   "Programming Language :: Python :: 3.11",
                   "Topic :: Scientific/Engineering",
                   "Operating System :: OS Independent"],
        ext_modules=[pycodata_ext]
      )


# pypi
# >>> python setup.py sdist bdist_wheel
# >>> python -m twine upload dist/*
# >>> python -m twine upload --repository testpypi dist/*