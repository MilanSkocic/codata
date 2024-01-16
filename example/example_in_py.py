r"""Example in python."""
import sys
sys.path.append("../pywrapper")
import pycodata

print("########## VERSION ##########")
print(pycodata.__version__)

print("########## CONSTANTS ##########")
print(pycodata.SPEED_OF_LIGHT_IN_VACUUM)

print("########## UNCERTAINTY ##########")
print(pycodata.U_SPEED_OF_LIGHT_IN_VACUUM)
