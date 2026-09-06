import sys
sys.path.insert(0, "../py/src/")
import pycodata
from pycodata import Quantity
print("########## EXAMPLE IN PYTHON ##########")
print("# VERSION")
print(f"version = {pycodata.__version__}")
print("# Constants")
print("c =", pycodata.SPEED_OF_LIGHT_IN_VACUUM["value"])
print("# UNCERTAINTY")
print("u(c) = ", pycodata.SPEED_OF_LIGHT_IN_VACUUM["uncertainty"])
print("# OLDER VALUES")
print("Mu_2022 = ", pycodata.MOLAR_MASS_CONSTANT["value"])
print("Mu_2018 = ", pycodata.MOLAR_MASS_CONSTANT_2018["value"])
print("Mu_2014 = ", pycodata.MOLAR_MASS_CONSTANT_2014["value"])
print("Mu_2010 = ", pycodata.MOLAR_MASS_CONSTANT_2010["value"])
print("# SELECTING THE ADJUSTMENT AT RUN TIME")
for ds in pycodata.CODATA_DATASETS:
    print(f"Mu_{ds} = ", pycodata.value(ds, Quantity.MOLAR_MASS_CONSTANT))
print("# A QUANTITY AN OLDER ADJUSTMENT DOES NOT CONTAIN")
print("defined in 2018 = ", pycodata.defined(2018, Quantity.HELION_SHIELDING_SHIFT))
print("defined in 2010 = ", pycodata.defined(2010, Quantity.HELION_SHIELDING_SHIFT))
print("# A QUANTITY NIST RENAMED IN 2018")
print("eps0_2014 via either name = ",
      pycodata.ELECTRIC_CONSTANT_2014["value"],
      pycodata.VACUUM_ELECTRIC_PERMITTIVITY_2014["value"])
