import pycodata

name = "alpha particle mass"

value = pycodata.get_value(name)
uncertainty = pycodata.get_uncertainty(name)
unit = pycodata.get_unit(name)
year = pycodata.get_year()

print(f"{year} - {name} - {value} +/- {uncertainty}, unit")

