from pycodata import codata


value = codata.get_value("ALPHA PARTICLE MASS")
print(value)


print(codata.as_dict())