from pycodata import codata


value = codata.get_value("alpha particle mass")
print(value)
print(codata.get_year())
codata.set_year("2014")

value = codata.get_value("alpha particle mass")
print(value)
print(codata.get_year())
