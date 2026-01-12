# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html
import os
import sys
import tomllib
sys.path.insert(0, os.path.abspath('../../../py/src/'))
import pycodata
# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

fpath="../../../fpm.toml"
f = open(fpath, "rb")
fpm = tomllib.load(f)
f.close()

project = 'codata'
copyright = fpm["copyright"].replace("Copyright ","")
author = fpm["author"]
release = pycodata.__version__

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.mathjax',
    'myst_parser',
    #'sphinxcontrib.bibtex',
    'numpydoc', 'sphinx_fortran_domain',
    ]
#bibtex_bibfiles = ["./references/references.bib"]
bibtex_default_style = 'unsrt'
templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']

# Select a lexer (built-in: "regex")
fortran_lexer = "regex"

# Doc comment markers to recognize (comment-only lines)
fortran_doc_chars = ["!", ">"]

fortran_sources = [
	"../../../src",
    "../../../app"
]

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_theme = 'pydata_sphinx_theme'
#html_static_path = ['_static']

html_theme_options = {
    "icon_links": [
        {
            "name": "GitHub", 
            "url": "https://github.com/MilanSkocic/codata",
            "icon": "fa-brands fa-square-github",
            "type": "fontawesome",
        },
   ]
}

# If true, the current module name will be prepended to all description
# unit titles (such as .. function::).
add_module_names = False


man_pages = [
    ("index", 'codata', 'Fundamental physical constants', [author], 3),
]
