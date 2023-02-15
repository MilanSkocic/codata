import pycodata

value = pycodata.get_value("alpha particle mass")
print(value)
print(pycodata.get_year())
pycodata.set_year("2014")

value = pycodata.get_value("alpha particle mass")
print(value)
print(pycodata.get_year())
