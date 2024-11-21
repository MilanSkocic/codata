r"""Example in python."""
import sys
sys.path.insert(0, "../src/")
import pycodata

print("########## VERSION ##########")
print(f"version = {pycodata.__version__}")

print("########## constants ##########")
print(f"c =", pycodata.SPEED_OF_LIGHT_IN_VACUUM["value"])

print("########## UNCERTAINTY ##########")
print(f"u(c) = ", pycodata.SPEED_OF_LIGHT_IN_VACUUM["uncertainty"])

print("########## OLDER VALUES ##########")
print(f"Mu_2022 = ", pycodata.MOLAR_MASS_CONSTANT["value"])
print(f"Mu_2018 = ", pycodata.codata_constants_2018.MOLAR_MASS_CONSTANT_2018["value"])
print(f"Mu_2014 = ", pycodata.codata_constants_2014.MOLAR_MASS_CONSTANT_2014["value"])
print(f"Mu_2010 = ", pycodata.codata_constants_2010.MOLAR_MASS_CONSTANT_2010["value"])
