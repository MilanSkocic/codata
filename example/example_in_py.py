r"""Example in python."""
import sys
sys.path.insert(0, "../pywrapper/src/")
import pycodata

print("########## VERSION ##########")
print(f"version = {pycodata.__version__}")

print("########## constants ##########")
print(f"c = {pycodata.SPEED_OF_LIGHT_IN_VACUUM}")

print("########## UNCERTAINTY ##########")
print(f"u(c) = {pycodata.U_SPEED_OF_LIGHT_IN_VACUUM}")

print("########## OLDER VALUES ##########")
print(f"Mu_2022 = {pycodata.constants_2018.MOLAR_MASS_CONSTANT_2022:23.16f}")
print(f"Mu_2018 = {pycodata.constants_2018.MOLAR_MASS_CONSTANT_2018:23.16f}")
print(f"Mu_2014 = {pycodata.constants_2014.MOLAR_MASS_CONSTANT_2014:23.16f}")
print(f"Mu_2010 = {pycodata.constants_2010.MOLAR_MASS_CONSTANT_2010:23.16f}")
