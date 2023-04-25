#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata.h"


PyDoc_STRVAR(module_docstring, "C extension for codata constants.");

static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};

static struct PyModuleDef codata = {PyModuleDef_HEAD_INIT, "codata", module_docstring, -1, myMethods};

PyMODINIT_FUNC PyInit_codata(void){
	PyObject *m;
	PyObject *d;
	PyObject *v;
	m = PyModule_Create(&codata);
	d = PyModule_GetDict(m);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_IN_U);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_IN_U);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_MOLAR_MASS);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MOLAR_MASS);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ANGSTROM_STAR);
	PyDict_SetItemString(d, "ANGSTROM_STAR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ANGSTROM_STAR);
	PyDict_SetItemString(d, "U_ANGSTROM_STAR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT);
	PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ACTION);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ACTION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ACTION);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ACTION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CHARGE);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CHARGE);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CHARGE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CHARGE_DENSITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_DENSITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CHARGE_DENSITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CHARGE_DENSITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CURRENT);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CURRENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CURRENT);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CURRENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_FIELD);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_FIELD);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_FIELD", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ENERGY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ENERGY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ENERGY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ENERGY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_FORCE);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_FORCE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_FORCE);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_FORCE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_LENGTH);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_LENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_LENGTH);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_LENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAG__DIPOLE_MOM);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG__DIPOLE_MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAG__FLUX_DENSITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG__FLUX_DENSITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAGNETIZABILITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAGNETIZABILITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAGNETIZABILITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAGNETIZABILITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MASS);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MASS);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MOMENTUM);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MOMENTUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MOMENTUM);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MOMENTUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_PERMITTIVITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_PERMITTIVITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_PERMITTIVITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_PERMITTIVITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_TIME);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_TIME", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_TIME);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_TIME", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ATOMIC_UNIT_OF_VELOCITY);
	PyDict_SetItemString(d, "ATOMIC_UNIT_OF_VELOCITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_VELOCITY);
	PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_VELOCITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(AVOGADRO_CONSTANT);
	PyDict_SetItemString(d, "AVOGADRO_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_AVOGADRO_CONSTANT);
	PyDict_SetItemString(d, "U_AVOGADRO_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_MAGNETON);
	PyDict_SetItemString(d, "BOHR_MAGNETON", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_MAGNETON);
	PyDict_SetItemString(d, "U_BOHR_MAGNETON", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_MAGNETON_IN_EV_T);
	PyDict_SetItemString(d, "BOHR_MAGNETON_IN_EV_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_EV_T);
	PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_EV_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_MAGNETON_IN_HZ_T);
	PyDict_SetItemString(d, "BOHR_MAGNETON_IN_HZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_HZ_T);
	PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_HZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA);
	PyDict_SetItemString(d, "BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA);
	PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_MAGNETON_IN_K_T);
	PyDict_SetItemString(d, "BOHR_MAGNETON_IN_K_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_K_T);
	PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_K_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOHR_RADIUS);
	PyDict_SetItemString(d, "BOHR_RADIUS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOHR_RADIUS);
	PyDict_SetItemString(d, "U_BOHR_RADIUS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOLTZMANN_CONSTANT);
	PyDict_SetItemString(d, "BOLTZMANN_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT);
	PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_EV_K);
	PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_EV_K", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_EV_K);
	PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_EV_K", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_HZ_K);
	PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_HZ_K", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_HZ_K);
	PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_HZ_K", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN);
	PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN);
	PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CHARACTERISTIC_IMPEDANCE_OF_VACUUM);
	PyDict_SetItemString(d, "CHARACTERISTIC_IMPEDANCE_OF_VACUUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM);
	PyDict_SetItemString(d, "U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CLASSICAL_ELECTRON_RADIUS);
	PyDict_SetItemString(d, "CLASSICAL_ELECTRON_RADIUS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CLASSICAL_ELECTRON_RADIUS);
	PyDict_SetItemString(d, "U_CLASSICAL_ELECTRON_RADIUS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONDUCTANCE_QUANTUM);
	PyDict_SetItemString(d, "CONDUCTANCE_QUANTUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONDUCTANCE_QUANTUM);
	PyDict_SetItemString(d, "U_CONDUCTANCE_QUANTUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_AMPERE_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_AMPERE_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_AMPERE_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_AMPERE_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_COULOMB_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_COULOMB_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_COULOMB_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_COULOMB_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_FARAD_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_FARAD_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_FARAD_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_FARAD_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_HENRY_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_HENRY_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_HENRY_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_HENRY_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_OHM_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_OHM_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_OHM_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_OHM_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_VOLT_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VOLT_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_VOLT_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_VOLT_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_WATT_90);
	PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_WATT_90", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_WATT_90);
	PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_WATT_90", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(COPPER_X_UNIT);
	PyDict_SetItemString(d, "COPPER_X_UNIT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_COPPER_X_UNIT);
	PyDict_SetItemString(d, "U_COPPER_X_UNIT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_ELECTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "DEUTERON_ELECTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_ELECTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_ELECTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "DEUTERON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_G_FACTOR);
	PyDict_SetItemString(d, "DEUTERON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_G_FACTOR);
	PyDict_SetItemString(d, "U_DEUTERON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MAG__MOM);
	PyDict_SetItemString(d, "DEUTERON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM);
	PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MASS);
	PyDict_SetItemString(d, "DEUTERON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MASS);
	PyDict_SetItemString(d, "U_DEUTERON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_DEUTERON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MASS_IN_U);
	PyDict_SetItemString(d, "DEUTERON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MASS_IN_U);
	PyDict_SetItemString(d, "U_DEUTERON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_MOLAR_MASS);
	PyDict_SetItemString(d, "DEUTERON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_DEUTERON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "DEUTERON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "DEUTERON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "DEUTERON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_DEUTERON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "DEUTERON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_DEUTERON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(DEUTERON_RMS_CHARGE_RADIUS);
	PyDict_SetItemString(d, "DEUTERON_RMS_CHARGE_RADIUS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_DEUTERON_RMS_CHARGE_RADIUS);
	PyDict_SetItemString(d, "U_DEUTERON_RMS_CHARGE_RADIUS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_CHARGE_TO_MASS_QUOTIENT);
	PyDict_SetItemString(d, "ELECTRON_CHARGE_TO_MASS_QUOTIENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_CHARGE_TO_MASS_QUOTIENT);
	PyDict_SetItemString(d, "U_ELECTRON_CHARGE_TO_MASS_QUOTIENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_DEUTERON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_DEUTERON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_DEUTERON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_DEUTERON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_DEUTERON_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_DEUTERON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_DEUTERON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_DEUTERON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_G_FACTOR);
	PyDict_SetItemString(d, "ELECTRON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_G_FACTOR);
	PyDict_SetItemString(d, "U_ELECTRON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "ELECTRON_GYROMAG__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_GYROMAG__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "ELECTRON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "U_ELECTRON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_HELION_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_HELION_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_HELION_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_HELION_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MAG__MOM);
	PyDict_SetItemString(d, "ELECTRON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM);
	PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MAG__MOM__ANOMALY);
	PyDict_SetItemString(d, "ELECTRON_MAG__MOM__ANOMALY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__ANOMALY);
	PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__ANOMALY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MASS);
	PyDict_SetItemString(d, "ELECTRON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MASS);
	PyDict_SetItemString(d, "U_ELECTRON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_ELECTRON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MASS_IN_U);
	PyDict_SetItemString(d, "ELECTRON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MASS_IN_U);
	PyDict_SetItemString(d, "U_ELECTRON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MOLAR_MASS);
	PyDict_SetItemString(d, "ELECTRON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_ELECTRON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MUON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_MUON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MUON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_MUON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_MUON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_MUON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "ELECTRON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_ELECTRON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_TAU_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_TAU_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_TRITON_MASS_RATIO);
	PyDict_SetItemString(d, "ELECTRON_TRITON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_TRITON_MASS_RATIO);
	PyDict_SetItemString(d, "U_ELECTRON_TRITON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT);
	PyDict_SetItemString(d, "ELECTRON_VOLT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELECTRON_VOLT_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "ELECTRON_VOLT_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELEMENTARY_CHARGE);
	PyDict_SetItemString(d, "ELEMENTARY_CHARGE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELEMENTARY_CHARGE);
	PyDict_SetItemString(d, "U_ELEMENTARY_CHARGE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(ELEMENTARY_CHARGE_OVER_H_BAR);
	PyDict_SetItemString(d, "ELEMENTARY_CHARGE_OVER_H_BAR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_ELEMENTARY_CHARGE_OVER_H_BAR);
	PyDict_SetItemString(d, "U_ELEMENTARY_CHARGE_OVER_H_BAR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(FARADAY_CONSTANT);
	PyDict_SetItemString(d, "FARADAY_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_FARADAY_CONSTANT);
	PyDict_SetItemString(d, "U_FARADAY_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(FERMI_COUPLING_CONSTANT);
	PyDict_SetItemString(d, "FERMI_COUPLING_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_FERMI_COUPLING_CONSTANT);
	PyDict_SetItemString(d, "U_FERMI_COUPLING_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(FINE_STRUCTURE_CONSTANT);
	PyDict_SetItemString(d, "FINE_STRUCTURE_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_FINE_STRUCTURE_CONSTANT);
	PyDict_SetItemString(d, "U_FINE_STRUCTURE_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(FIRST_RADIATION_CONSTANT);
	PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_FIRST_RADIATION_CONSTANT);
	PyDict_SetItemString(d, "U_FIRST_RADIATION_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE);
	PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE);
	PyDict_SetItemString(d, "U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_ENERGY);
	PyDict_SetItemString(d, "HARTREE_ENERGY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_ENERGY);
	PyDict_SetItemString(d, "U_HARTREE_ENERGY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_ENERGY_IN_EV);
	PyDict_SetItemString(d, "HARTREE_ENERGY_IN_EV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_ENERGY_IN_EV);
	PyDict_SetItemString(d, "U_HARTREE_ENERGY_IN_EV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HARTREE_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "HARTREE_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HARTREE_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HARTREE_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "HELION_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_HELION_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_G_FACTOR);
	PyDict_SetItemString(d, "HELION_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_G_FACTOR);
	PyDict_SetItemString(d, "U_HELION_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MAG__MOM);
	PyDict_SetItemString(d, "HELION_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MAG__MOM);
	PyDict_SetItemString(d, "U_HELION_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MASS);
	PyDict_SetItemString(d, "HELION_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MASS);
	PyDict_SetItemString(d, "U_HELION_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_HELION_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MASS_IN_U);
	PyDict_SetItemString(d, "HELION_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MASS_IN_U);
	PyDict_SetItemString(d, "U_HELION_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_MOLAR_MASS);
	PyDict_SetItemString(d, "HELION_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_MOLAR_MASS);
	PyDict_SetItemString(d, "U_HELION_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "HELION_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_HELION_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "HELION_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_HELION_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HELION_SHIELDING_SHIFT);
	PyDict_SetItemString(d, "HELION_SHIELDING_SHIFT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HELION_SHIELDING_SHIFT);
	PyDict_SetItemString(d, "U_HELION_SHIELDING_SHIFT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HERTZ_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "HERTZ_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HERTZ_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_HERTZ_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133);
	PyDict_SetItemString(d, "HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133);
	PyDict_SetItemString(d, "U_HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_FINE_STRUCTURE_CONSTANT);
	PyDict_SetItemString(d, "INVERSE_FINE_STRUCTURE_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_FINE_STRUCTURE_CONSTANT);
	PyDict_SetItemString(d, "U_INVERSE_FINE_STRUCTURE_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_METER_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "INVERSE_METER_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_METER_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_INVERSE_METER_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(INVERSE_OF_CONDUCTANCE_QUANTUM);
	PyDict_SetItemString(d, "INVERSE_OF_CONDUCTANCE_QUANTUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_INVERSE_OF_CONDUCTANCE_QUANTUM);
	PyDict_SetItemString(d, "U_INVERSE_OF_CONDUCTANCE_QUANTUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOSEPHSON_CONSTANT);
	PyDict_SetItemString(d, "JOSEPHSON_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOSEPHSON_CONSTANT);
	PyDict_SetItemString(d, "U_JOSEPHSON_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(JOULE_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "JOULE_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_JOULE_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_JOULE_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KELVIN_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "KELVIN_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KELVIN_KILOGRAM_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KELVIN_KILOGRAM_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_HARTREE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_HARTREE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_HERTZ_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_HERTZ_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_INVERSE_METER_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_INVERSE_METER_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_JOULE_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_JOULE_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(KILOGRAM_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "KILOGRAM_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_KILOGRAM_KELVIN_RELATIONSHIP);
	PyDict_SetItemString(d, "U_KILOGRAM_KELVIN_RELATIONSHIP", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(LATTICE_PARAMETER_OF_SILICON);
	PyDict_SetItemString(d, "LATTICE_PARAMETER_OF_SILICON", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_LATTICE_PARAMETER_OF_SILICON);
	PyDict_SetItemString(d, "U_LATTICE_PARAMETER_OF_SILICON", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(LATTICE_SPACING_OF_IDEAL_SI__220);
	PyDict_SetItemString(d, "LATTICE_SPACING_OF_IDEAL_SI__220", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_LATTICE_SPACING_OF_IDEAL_SI__220);
	PyDict_SetItemString(d, "U_LATTICE_SPACING_OF_IDEAL_SI__220", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(LOSCHMIDT_CONSTANT__273_15_K__100_KPA);
	PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT__273_15_K__100_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA);
	PyDict_SetItemString(d, "U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA);
	PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA);
	PyDict_SetItemString(d, "U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(LUMINOUS_EFFICACY);
	PyDict_SetItemString(d, "LUMINOUS_EFFICACY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_LUMINOUS_EFFICACY);
	PyDict_SetItemString(d, "U_LUMINOUS_EFFICACY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MAG__FLUX_QUANTUM);
	PyDict_SetItemString(d, "MAG__FLUX_QUANTUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MAG__FLUX_QUANTUM);
	PyDict_SetItemString(d, "U_MAG__FLUX_QUANTUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_GAS_CONSTANT);
	PyDict_SetItemString(d, "MOLAR_GAS_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_GAS_CONSTANT);
	PyDict_SetItemString(d, "U_MOLAR_GAS_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_MASS_CONSTANT);
	PyDict_SetItemString(d, "MOLAR_MASS_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_MASS_CONSTANT);
	PyDict_SetItemString(d, "U_MOLAR_MASS_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_MASS_OF_CARBON_12);
	PyDict_SetItemString(d, "MOLAR_MASS_OF_CARBON_12", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_MASS_OF_CARBON_12);
	PyDict_SetItemString(d, "U_MOLAR_MASS_OF_CARBON_12", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_PLANCK_CONSTANT);
	PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_PLANCK_CONSTANT);
	PyDict_SetItemString(d, "U_MOLAR_PLANCK_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA);
	PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA);
	PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA);
	PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA);
	PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLAR_VOLUME_OF_SILICON);
	PyDict_SetItemString(d, "MOLAR_VOLUME_OF_SILICON", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_SILICON);
	PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_SILICON", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MOLYBDENUM_X_UNIT);
	PyDict_SetItemString(d, "MOLYBDENUM_X_UNIT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MOLYBDENUM_X_UNIT);
	PyDict_SetItemString(d, "U_MOLYBDENUM_X_UNIT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_MUON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "MUON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_MUON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_G_FACTOR);
	PyDict_SetItemString(d, "MUON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_G_FACTOR);
	PyDict_SetItemString(d, "U_MUON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MAG__MOM);
	PyDict_SetItemString(d, "MUON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MAG__MOM);
	PyDict_SetItemString(d, "U_MUON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MAG__MOM__ANOMALY);
	PyDict_SetItemString(d, "MUON_MAG__MOM__ANOMALY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MAG__MOM__ANOMALY);
	PyDict_SetItemString(d, "U_MUON_MAG__MOM__ANOMALY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MASS);
	PyDict_SetItemString(d, "MUON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MASS);
	PyDict_SetItemString(d, "U_MUON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_MUON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MASS_IN_U);
	PyDict_SetItemString(d, "MUON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MASS_IN_U);
	PyDict_SetItemString(d, "U_MUON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_MOLAR_MASS);
	PyDict_SetItemString(d, "MUON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_MUON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "MUON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_MUON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "MUON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_MUON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "MUON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_MUON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(MUON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "MUON_TAU_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_MUON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "U_MUON_TAU_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_ACTION);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ACTION);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ACTION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_ACTION_IN_EV_S);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_IN_EV_S", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ACTION_IN_EV_S);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ACTION_IN_EV_S", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_ENERGY);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ENERGY);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ENERGY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_ENERGY_IN_MEV);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ENERGY_IN_MEV);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ENERGY_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_LENGTH);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_LENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_LENGTH);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_LENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_MASS);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MASS);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_MOMENTUM);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMENTUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MOMENTUM);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MOMENTUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_TIME);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_TIME", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_TIME);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_TIME", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NATURAL_UNIT_OF_VELOCITY);
	PyDict_SetItemString(d, "NATURAL_UNIT_OF_VELOCITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_VELOCITY);
	PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_VELOCITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_NEUTRON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_ELECTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "NEUTRON_ELECTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_ELECTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_ELECTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "NEUTRON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_G_FACTOR);
	PyDict_SetItemString(d, "NEUTRON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_G_FACTOR);
	PyDict_SetItemString(d, "U_NEUTRON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "NEUTRON_GYROMAG__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_GYROMAG__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "NEUTRON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "U_NEUTRON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MAG__MOM);
	PyDict_SetItemString(d, "NEUTRON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM);
	PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MASS);
	PyDict_SetItemString(d, "NEUTRON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MASS);
	PyDict_SetItemString(d, "U_NEUTRON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_NEUTRON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MASS_IN_U);
	PyDict_SetItemString(d, "NEUTRON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MASS_IN_U);
	PyDict_SetItemString(d, "U_NEUTRON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MOLAR_MASS);
	PyDict_SetItemString(d, "NEUTRON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_NEUTRON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "NEUTRON_MUON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_MUON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_IN_U);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "NEUTRON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_NEUTRON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "NEUTRON_TAU_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_TAU_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEWTONIAN_CONSTANT_OF_GRAVITATION);
	PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEWTONIAN_CONSTANT_OF_GRAVITATION);
	PyDict_SetItemString(d, "U_NEWTONIAN_CONSTANT_OF_GRAVITATION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C);
	PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C);
	PyDict_SetItemString(d, "U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NUCLEAR_MAGNETON);
	PyDict_SetItemString(d, "NUCLEAR_MAGNETON", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON);
	PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_EV_T);
	PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_EV_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_EV_T);
	PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_EV_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA);
	PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA);
	PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_K_T);
	PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_K_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_K_T);
	PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_K_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_MHZ_T);
	PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_MHZ_T);
	PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_CONSTANT);
	PyDict_SetItemString(d, "PLANCK_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_CONSTANT);
	PyDict_SetItemString(d, "U_PLANCK_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_CONSTANT_IN_EV_HZ);
	PyDict_SetItemString(d, "PLANCK_CONSTANT_IN_EV_HZ", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_CONSTANT_IN_EV_HZ);
	PyDict_SetItemString(d, "U_PLANCK_CONSTANT_IN_EV_HZ", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_LENGTH);
	PyDict_SetItemString(d, "PLANCK_LENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_LENGTH);
	PyDict_SetItemString(d, "U_PLANCK_LENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_MASS);
	PyDict_SetItemString(d, "PLANCK_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_MASS);
	PyDict_SetItemString(d, "U_PLANCK_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV);
	PyDict_SetItemString(d, "PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV);
	PyDict_SetItemString(d, "U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_TEMPERATURE);
	PyDict_SetItemString(d, "PLANCK_TEMPERATURE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_TEMPERATURE);
	PyDict_SetItemString(d, "U_PLANCK_TEMPERATURE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PLANCK_TIME);
	PyDict_SetItemString(d, "PLANCK_TIME", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PLANCK_TIME);
	PyDict_SetItemString(d, "U_PLANCK_TIME", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_CHARGE_TO_MASS_QUOTIENT);
	PyDict_SetItemString(d, "PROTON_CHARGE_TO_MASS_QUOTIENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_CHARGE_TO_MASS_QUOTIENT);
	PyDict_SetItemString(d, "U_PROTON_CHARGE_TO_MASS_QUOTIENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_PROTON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "PROTON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_PROTON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_G_FACTOR);
	PyDict_SetItemString(d, "PROTON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_G_FACTOR);
	PyDict_SetItemString(d, "U_PROTON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "PROTON_GYROMAG__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "U_PROTON_GYROMAG__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "PROTON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "U_PROTON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MAG__MOM);
	PyDict_SetItemString(d, "PROTON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MAG__MOM);
	PyDict_SetItemString(d, "U_PROTON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MAG__SHIELDING_CORRECTION);
	PyDict_SetItemString(d, "PROTON_MAG__SHIELDING_CORRECTION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MAG__SHIELDING_CORRECTION);
	PyDict_SetItemString(d, "U_PROTON_MAG__SHIELDING_CORRECTION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MASS);
	PyDict_SetItemString(d, "PROTON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MASS);
	PyDict_SetItemString(d, "U_PROTON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_PROTON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MASS_IN_U);
	PyDict_SetItemString(d, "PROTON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MASS_IN_U);
	PyDict_SetItemString(d, "U_PROTON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MOLAR_MASS);
	PyDict_SetItemString(d, "PROTON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_PROTON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "PROTON_MUON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "U_PROTON_MUON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "PROTON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_NEUTRON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_PROTON_NEUTRON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "PROTON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_PROTON_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "PROTON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_PROTON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_RMS_CHARGE_RADIUS);
	PyDict_SetItemString(d, "PROTON_RMS_CHARGE_RADIUS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_RMS_CHARGE_RADIUS);
	PyDict_SetItemString(d, "U_PROTON_RMS_CHARGE_RADIUS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(PROTON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "PROTON_TAU_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_PROTON_TAU_MASS_RATIO);
	PyDict_SetItemString(d, "U_PROTON_TAU_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(QUANTUM_OF_CIRCULATION);
	PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_QUANTUM_OF_CIRCULATION);
	PyDict_SetItemString(d, "U_QUANTUM_OF_CIRCULATION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(QUANTUM_OF_CIRCULATION_TIMES_2);
	PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_TIMES_2", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_QUANTUM_OF_CIRCULATION_TIMES_2);
	PyDict_SetItemString(d, "U_QUANTUM_OF_CIRCULATION_TIMES_2", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "REDUCED_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_REDUCED_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_MUON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "REDUCED_MUON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_MUON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_REDUCED_MUON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_NEUTRON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "REDUCED_NEUTRON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_NEUTRON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_REDUCED_NEUTRON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_PLANCK_CONSTANT);
	PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_PLANCK_CONSTANT);
	PyDict_SetItemString(d, "U_REDUCED_PLANCK_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_PLANCK_CONSTANT_IN_EV_S);
	PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT_IN_EV_S", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_PLANCK_CONSTANT_IN_EV_S);
	PyDict_SetItemString(d, "U_REDUCED_PLANCK_CONSTANT_IN_EV_S", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM);
	PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM);
	PyDict_SetItemString(d, "U_REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_PROTON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "REDUCED_PROTON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_PROTON_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_REDUCED_PROTON_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(REDUCED_TAU_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "REDUCED_TAU_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_REDUCED_TAU_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_REDUCED_TAU_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(RYDBERG_CONSTANT);
	PyDict_SetItemString(d, "RYDBERG_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_RYDBERG_CONSTANT);
	PyDict_SetItemString(d, "U_RYDBERG_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_C_IN_HZ);
	PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_C_IN_HZ", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_C_IN_HZ);
	PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_C_IN_HZ", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_HC_IN_EV);
	PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_EV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_HC_IN_EV);
	PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_HC_IN_EV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_HC_IN_J);
	PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_J", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_HC_IN_J);
	PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_HC_IN_J", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SACKUR_TETRODE_CONSTANT__1_K__100_KPA);
	PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT__1_K__100_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA);
	PyDict_SetItemString(d, "U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA);
	PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA);
	PyDict_SetItemString(d, "U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SECOND_RADIATION_CONSTANT);
	PyDict_SetItemString(d, "SECOND_RADIATION_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SECOND_RADIATION_CONSTANT);
	PyDict_SetItemString(d, "U_SECOND_RADIATION_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_GYROMAG__RATIO);
	PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_GYROMAG__RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_GYROMAG__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM);
	PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_PROTON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_PROTON_GYROMAG__RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_PROTON_GYROMAG__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T);
	PyDict_SetItemString(d, "U_SHIELDED_PROTON_GYROMAG__RATIO_IN_MHZ_T", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM);
	PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM);
	PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD);
	PyDict_SetItemString(d, "SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD);
	PyDict_SetItemString(d, "U_SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT);
	PyDict_SetItemString(d, "SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT);
	PyDict_SetItemString(d, "U_SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(SPEED_OF_LIGHT_IN_VACUUM);
	PyDict_SetItemString(d, "SPEED_OF_LIGHT_IN_VACUUM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_SPEED_OF_LIGHT_IN_VACUUM);
	PyDict_SetItemString(d, "U_SPEED_OF_LIGHT_IN_VACUUM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(STANDARD_ACCELERATION_OF_GRAVITY);
	PyDict_SetItemString(d, "STANDARD_ACCELERATION_OF_GRAVITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_STANDARD_ACCELERATION_OF_GRAVITY);
	PyDict_SetItemString(d, "U_STANDARD_ACCELERATION_OF_GRAVITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(STANDARD_ATMOSPHERE);
	PyDict_SetItemString(d, "STANDARD_ATMOSPHERE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_STANDARD_ATMOSPHERE);
	PyDict_SetItemString(d, "U_STANDARD_ATMOSPHERE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(STANDARD_STATE_PRESSURE);
	PyDict_SetItemString(d, "STANDARD_STATE_PRESSURE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_STANDARD_STATE_PRESSURE);
	PyDict_SetItemString(d, "U_STANDARD_STATE_PRESSURE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(STEFAN_BOLTZMANN_CONSTANT);
	PyDict_SetItemString(d, "STEFAN_BOLTZMANN_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_STEFAN_BOLTZMANN_CONSTANT);
	PyDict_SetItemString(d, "U_STEFAN_BOLTZMANN_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_COMPTON_WAVELENGTH);
	PyDict_SetItemString(d, "U_TAU_COMPTON_WAVELENGTH", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "TAU_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TAU_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "TAU_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_TAU_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_MASS);
	PyDict_SetItemString(d, "TAU_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_MASS);
	PyDict_SetItemString(d, "U_TAU_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_TAU_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_MASS_IN_U);
	PyDict_SetItemString(d, "TAU_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_MASS_IN_U);
	PyDict_SetItemString(d, "U_TAU_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_MOLAR_MASS);
	PyDict_SetItemString(d, "TAU_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_MOLAR_MASS);
	PyDict_SetItemString(d, "U_TAU_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "TAU_MUON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_MUON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TAU_MUON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "TAU_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_NEUTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TAU_NEUTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TAU_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "TAU_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TAU_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TAU_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(THOMSON_CROSS_SECTION);
	PyDict_SetItemString(d, "THOMSON_CROSS_SECTION", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_THOMSON_CROSS_SECTION);
	PyDict_SetItemString(d, "U_THOMSON_CROSS_SECTION", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "TRITON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_ELECTRON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TRITON_ELECTRON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_G_FACTOR);
	PyDict_SetItemString(d, "TRITON_G_FACTOR", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_G_FACTOR);
	PyDict_SetItemString(d, "U_TRITON_G_FACTOR", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MAG__MOM);
	PyDict_SetItemString(d, "TRITON_MAG__MOM", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MAG__MOM);
	PyDict_SetItemString(d, "U_TRITON_MAG__MOM", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO);
	PyDict_SetItemString(d, "U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MASS);
	PyDict_SetItemString(d, "TRITON_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MASS);
	PyDict_SetItemString(d, "U_TRITON_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MASS_ENERGY_EQUIVALENT);
	PyDict_SetItemString(d, "U_TRITON_MASS_ENERGY_EQUIVALENT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV);
	PyDict_SetItemString(d, "U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MASS_IN_U);
	PyDict_SetItemString(d, "TRITON_MASS_IN_U", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MASS_IN_U);
	PyDict_SetItemString(d, "U_TRITON_MASS_IN_U", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_MOLAR_MASS);
	PyDict_SetItemString(d, "TRITON_MOLAR_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_MOLAR_MASS);
	PyDict_SetItemString(d, "U_TRITON_MOLAR_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "TRITON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_PROTON_MASS_RATIO);
	PyDict_SetItemString(d, "U_TRITON_PROTON_MASS_RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "TRITON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_RELATIVE_ATOMIC_MASS);
	PyDict_SetItemString(d, "U_TRITON_RELATIVE_ATOMIC_MASS", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(TRITON_TO_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "TRITON_TO_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_TRITON_TO_PROTON_MAG__MOM__RATIO);
	PyDict_SetItemString(d, "U_TRITON_TO_PROTON_MAG__MOM__RATIO", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(UNIFIED_ATOMIC_MASS_UNIT);
	PyDict_SetItemString(d, "UNIFIED_ATOMIC_MASS_UNIT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_UNIFIED_ATOMIC_MASS_UNIT);
	PyDict_SetItemString(d, "U_UNIFIED_ATOMIC_MASS_UNIT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(VACUUM_ELECTRIC_PERMITTIVITY);
	PyDict_SetItemString(d, "VACUUM_ELECTRIC_PERMITTIVITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_VACUUM_ELECTRIC_PERMITTIVITY);
	PyDict_SetItemString(d, "U_VACUUM_ELECTRIC_PERMITTIVITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(VACUUM_MAG__PERMEABILITY);
	PyDict_SetItemString(d, "VACUUM_MAG__PERMEABILITY", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_VACUUM_MAG__PERMEABILITY);
	PyDict_SetItemString(d, "U_VACUUM_MAG__PERMEABILITY", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(VON_KLITZING_CONSTANT);
	PyDict_SetItemString(d, "VON_KLITZING_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_VON_KLITZING_CONSTANT);
	PyDict_SetItemString(d, "U_VON_KLITZING_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(WEAK_MIXING_ANGLE);
	PyDict_SetItemString(d, "WEAK_MIXING_ANGLE", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_WEAK_MIXING_ANGLE);
	PyDict_SetItemString(d, "U_WEAK_MIXING_ANGLE", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT);
	PyDict_SetItemString(d, "WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT);
	PyDict_SetItemString(d, "U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT);
	PyDict_SetItemString(d, "WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT);
	PyDict_SetItemString(d, "U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT", v);
	Py_INCREF(v);

	v = PyFloat_FromDouble(W_TO_Z_MASS_RATIO);
	PyDict_SetItemString(d, "W_TO_Z_MASS_RATIO", v);
	Py_INCREF(v);
	v = PyFloat_FromDouble(U_W_TO_Z_MASS_RATIO);
	PyDict_SetItemString(d, "U_W_TO_Z_MASS_RATIO", v);
	Py_INCREF(v);

	return m;
}