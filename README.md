<h1 align="center">
<img src="./media/logo.png" width="300">
</h1><br>

`codata` is a Fortran library providing the fundamental physical
constants according to
[CODATA](https://www.nist.gov/programs-projects/codata-values-fundamental-physical-constants).

- **Documentation:** https://milanskocic.github.io/codata/
- **Source code:** https://github.com/MilanSKocic/codata
- **Python wrapper:** https://pypi.org/project/pycodata

It provides:

- codata constants 2022 (integrated in [stdlib](https://github.com/fortran-lang/stdlib/releases/tag/v0.7.0))
- codata constants 2018
- codata constants 2014
- codata constants 2010

If you need older values for the CODATA constants you can use `codata` 
within your [fpm](https://github.com/fortran-lang/fpm)
project by adding the following to your `fpm.toml` file:

```
[dependencies]
codata = { git="https://github.com/MilanSkocic/codata.git" }
```


**Note**

If you only need sources for the codata constants that you can integrate
directly in your sources you may be interested by
<https://github.com/vmagnin/fundamental_constants>.
