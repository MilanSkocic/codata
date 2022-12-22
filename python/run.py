from pycodata import codata


value = codata.get_value("ALPHA PARTICLE MASS")
print(value)

value = codata.get_unit("TRITON RELATIVE ATOMIC MASS")
print(len(value))
