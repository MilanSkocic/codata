# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html
import os
import sys
sys.path.insert(0, os.path.abspath('../../../py/src/'))
import pycodata
# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information



project = 'codata'
copyright = '2025, M. Skocic'
author = 'Milan Skocic'
release = pycodata.__version__

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.autosummary',
    'sphinx.ext.mathjax',
    'myst_parser',
    'sphinxcontrib.bibtex',
    'numpydoc',
    'fspx',
]
bibtex_bibfiles = ["./references/references.bib"]
bibtex_default_style = 'unsrt'
templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']

# fspx_docstring_character = ""

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
