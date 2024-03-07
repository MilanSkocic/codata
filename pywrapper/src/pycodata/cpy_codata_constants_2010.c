#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata_constants_2010.h"

PyDoc_STRVAR(module_docstring, "C extension for codata constants 2010.");

static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};

static struct PyModuleDef constants_2010 = {PyModuleDef_HEAD_INIT, "constants_2010", module_docstring, -1, myMethods};

PyMODINIT_FUNC PyInit_constants_2010(void){
    PyObject *m;
    PyObject *d;
    PyObject *v;
    m = PyModule_Create(&constants_2010);
    d = PyModule_GetDict(m);

    v = PyLong_FromLong(YEAR_2010);
    PyDict_SetItemString(d, "YEAR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(v220__LATTICE_SPACING_OF_SILICON_2010);
    PyDict_SetItemString(d, "v220__LATTICE_SPACING_OF_SILICON_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_v220__LATTICE_SPACING_OF_SILICON_2010);
    PyDict_SetItemString(d, "U_v220__LATTICE_SPACING_OF_SILICON_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_MASS_IN_U_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ALPHA_PARTICLE_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ALPHA_PARTICLE_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ALPHA_PARTICLE_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ALPHA_PARTICLE_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ANGSTROM_STAR_2010);
    PyDict_SetItemString(d, "ANGSTROM_STAR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ANGSTROM_STAR_2010);
    PyDict_SetItemString(d, "U_ANGSTROM_STAR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ACTION_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ACTION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ACTION_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ACTION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CHARGE_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CHARGE_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CHARGE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CHARGE_DENSITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_DENSITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CHARGE_DENSITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CHARGE_DENSITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_CURRENT_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CURRENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_CURRENT_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_CURRENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_FIELD_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_ENERGY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ENERGY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_ENERGY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_ENERGY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_FORCE_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_FORCE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_FORCE_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_FORCE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_LENGTH_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_LENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_LENGTH_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_LENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAG__DIPOLE_MOM_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG__DIPOLE_MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAG__DIPOLE_MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAG__FLUX_DENSITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG__FLUX_DENSITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAG__FLUX_DENSITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MAGNETIZABILITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAGNETIZABILITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MAGNETIZABILITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MAGNETIZABILITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MASS_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MASS_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_MOM_UM_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MOM_UM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_MOM_UM_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_MOM_UM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_PERMITTIVITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_PERMITTIVITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_PERMITTIVITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_PERMITTIVITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_TIME_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_TIME_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_TIME_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_TIME_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ATOMIC_UNIT_OF_VELOCITY_2010);
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_VELOCITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ATOMIC_UNIT_OF_VELOCITY_2010);
    PyDict_SetItemString(d, "U_ATOMIC_UNIT_OF_VELOCITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(AVOGADRO_CONSTANT_2010);
    PyDict_SetItemString(d, "AVOGADRO_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_AVOGADRO_CONSTANT_2010);
    PyDict_SetItemString(d, "U_AVOGADRO_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_MAGNETON_2010);
    PyDict_SetItemString(d, "BOHR_MAGNETON_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_MAGNETON_2010);
    PyDict_SetItemString(d, "U_BOHR_MAGNETON_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_MAGNETON_IN_EV_T_2010);
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_EV_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_EV_T_2010);
    PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_EV_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_MAGNETON_IN_HZ_T_2010);
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_HZ_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_HZ_T_2010);
    PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_HZ_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010);
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010);
    PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_MAGNETON_IN_K_T_2010);
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_K_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_MAGNETON_IN_K_T_2010);
    PyDict_SetItemString(d, "U_BOHR_MAGNETON_IN_K_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOHR_RADIUS_2010);
    PyDict_SetItemString(d, "BOHR_RADIUS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOHR_RADIUS_2010);
    PyDict_SetItemString(d, "U_BOHR_RADIUS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_2010);
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_2010);
    PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_EV_K_2010);
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_EV_K_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_EV_K_2010);
    PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_EV_K_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_HZ_K_2010);
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_HZ_K_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_HZ_K_2010);
    PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_HZ_K_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2010);
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2010);
    PyDict_SetItemString(d, "U_BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2010);
    PyDict_SetItemString(d, "CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2010);
    PyDict_SetItemString(d, "U_CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CLASSICAL_ELECTRON_RADIUS_2010);
    PyDict_SetItemString(d, "CLASSICAL_ELECTRON_RADIUS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CLASSICAL_ELECTRON_RADIUS_2010);
    PyDict_SetItemString(d, "U_CLASSICAL_ELECTRON_RADIUS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "U_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CONDUCTANCE_QUANTUM_2010);
    PyDict_SetItemString(d, "CONDUCTANCE_QUANTUM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CONDUCTANCE_QUANTUM_2010);
    PyDict_SetItemString(d, "U_CONDUCTANCE_QUANTUM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2010);
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2010);
    PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2010);
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2010);
    PyDict_SetItemString(d, "U_CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(CU_X_UNIT_2010);
    PyDict_SetItemString(d, "CU_X_UNIT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_CU_X_UNIT_2010);
    PyDict_SetItemString(d, "U_CU_X_UNIT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_ELECTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_ELECTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_ELECTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_G_FACTOR_2010);
    PyDict_SetItemString(d, "DEUTERON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_DEUTERON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MAG__MOM_2010);
    PyDict_SetItemString(d, "DEUTERON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MASS_2010);
    PyDict_SetItemString(d, "DEUTERON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MASS_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "DEUTERON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "DEUTERON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_DEUTERON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "DEUTERON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_DEUTERON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(DEUTERON_RMS_CHARGE_RADIUS_2010);
    PyDict_SetItemString(d, "DEUTERON_RMS_CHARGE_RADIUS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_DEUTERON_RMS_CHARGE_RADIUS_2010);
    PyDict_SetItemString(d, "U_DEUTERON_RMS_CHARGE_RADIUS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRIC_CONSTANT_2010);
    PyDict_SetItemString(d, "ELECTRIC_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRIC_CONSTANT_2010);
    PyDict_SetItemString(d, "U_ELECTRIC_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_CHARGE_TO_MASS_QUOTIENT_2010);
    PyDict_SetItemString(d, "ELECTRON_CHARGE_TO_MASS_QUOTIENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_CHARGE_TO_MASS_QUOTIENT_2010);
    PyDict_SetItemString(d, "U_ELECTRON_CHARGE_TO_MASS_QUOTIENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_DEUTERON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_DEUTERON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_DEUTERON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_DEUTERON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_DEUTERON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_DEUTERON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_G_FACTOR_2010);
    PyDict_SetItemString(d, "ELECTRON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_ELECTRON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "ELECTRON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_ELECTRON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_HELION_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_HELION_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_HELION_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_HELION_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MAG__MOM_2010);
    PyDict_SetItemString(d, "ELECTRON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MAG__MOM__ANOMALY_2010);
    PyDict_SetItemString(d, "ELECTRON_MAG__MOM__ANOMALY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__ANOMALY_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__ANOMALY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MASS_2010);
    PyDict_SetItemString(d, "ELECTRON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MASS_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "ELECTRON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "ELECTRON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MUON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_MUON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MUON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MUON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_TO_SHIELDED_HELION_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_TRITON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "ELECTRON_TRITON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_TRITON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_ELECTRON_TRITON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELEMENTARY_CHARGE_2010);
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELEMENTARY_CHARGE_2010);
    PyDict_SetItemString(d, "U_ELEMENTARY_CHARGE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(ELEMENTARY_CHARGE_OVER_H_2010);
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE_OVER_H_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_ELEMENTARY_CHARGE_OVER_H_2010);
    PyDict_SetItemString(d, "U_ELEMENTARY_CHARGE_OVER_H_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FARADAY_CONSTANT_2010);
    PyDict_SetItemString(d, "FARADAY_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FARADAY_CONSTANT_2010);
    PyDict_SetItemString(d, "U_FARADAY_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2010);
    PyDict_SetItemString(d, "FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2010);
    PyDict_SetItemString(d, "U_FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FERMI_COUPLING_CONSTANT_2010);
    PyDict_SetItemString(d, "FERMI_COUPLING_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FERMI_COUPLING_CONSTANT_2010);
    PyDict_SetItemString(d, "U_FERMI_COUPLING_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FINE_STRUCTURE_CONSTANT_2010);
    PyDict_SetItemString(d, "FINE_STRUCTURE_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FINE_STRUCTURE_CONSTANT_2010);
    PyDict_SetItemString(d, "U_FINE_STRUCTURE_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FIRST_RADIATION_CONSTANT_2010);
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FIRST_RADIATION_CONSTANT_2010);
    PyDict_SetItemString(d, "U_FIRST_RADIATION_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2010);
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2010);
    PyDict_SetItemString(d, "U_FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_ENERGY_2010);
    PyDict_SetItemString(d, "HARTREE_ENERGY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_ENERGY_2010);
    PyDict_SetItemString(d, "U_HARTREE_ENERGY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_ENERGY_IN_EV_2010);
    PyDict_SetItemString(d, "HARTREE_ENERGY_IN_EV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_ENERGY_IN_EV_2010);
    PyDict_SetItemString(d, "U_HARTREE_ENERGY_IN_EV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HARTREE_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HARTREE_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HARTREE_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HARTREE_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "HELION_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_HELION_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_G_FACTOR_2010);
    PyDict_SetItemString(d, "HELION_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_HELION_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MAG__MOM_2010);
    PyDict_SetItemString(d, "HELION_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_HELION_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MASS_2010);
    PyDict_SetItemString(d, "HELION_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MASS_2010);
    PyDict_SetItemString(d, "U_HELION_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_HELION_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MASS_IN_U_2010);
    PyDict_SetItemString(d, "HELION_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_HELION_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "HELION_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_HELION_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HELION_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "HELION_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HELION_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_HELION_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(HERTZ_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "HERTZ_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_HERTZ_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_HERTZ_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_FINE_STRUCTURE_CONSTANT_2010);
    PyDict_SetItemString(d, "INVERSE_FINE_STRUCTURE_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_FINE_STRUCTURE_CONSTANT_2010);
    PyDict_SetItemString(d, "U_INVERSE_FINE_STRUCTURE_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_METER_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "INVERSE_METER_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_METER_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_INVERSE_METER_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(INVERSE_OF_CONDUCTANCE_QUANTUM_2010);
    PyDict_SetItemString(d, "INVERSE_OF_CONDUCTANCE_QUANTUM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_INVERSE_OF_CONDUCTANCE_QUANTUM_2010);
    PyDict_SetItemString(d, "U_INVERSE_OF_CONDUCTANCE_QUANTUM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOSEPHSON_CONSTANT_2010);
    PyDict_SetItemString(d, "JOSEPHSON_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOSEPHSON_CONSTANT_2010);
    PyDict_SetItemString(d, "U_JOSEPHSON_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(JOULE_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "JOULE_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_JOULE_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_JOULE_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KELVIN_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KELVIN_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KELVIN_KILOGRAM_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KELVIN_KILOGRAM_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_HARTREE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_HARTREE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_HERTZ_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_HERTZ_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_INVERSE_METER_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_INVERSE_METER_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_JOULE_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_JOULE_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(KILOGRAM_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "KILOGRAM_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_KILOGRAM_KELVIN_RELATIONSHIP_2010);
    PyDict_SetItemString(d, "U_KILOGRAM_KELVIN_RELATIONSHIP_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(LATTICE_PARAMETER_OF_SILICON_2010);
    PyDict_SetItemString(d, "LATTICE_PARAMETER_OF_SILICON_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_LATTICE_PARAMETER_OF_SILICON_2010);
    PyDict_SetItemString(d, "U_LATTICE_PARAMETER_OF_SILICON_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(LOSCHMIDT_CONSTANT__273_15_K__100_KPA_2010);
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT__273_15_K__100_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA_2010);
    PyDict_SetItemString(d, "U_LOSCHMIDT_CONSTANT__273_15_K__100_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "U_LOSCHMIDT_CONSTANT__273_15_K__101_325_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MAG__CONSTANT_2010);
    PyDict_SetItemString(d, "MAG__CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MAG__CONSTANT_2010);
    PyDict_SetItemString(d, "U_MAG__CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MAG__FLUX_QUANTUM_2010);
    PyDict_SetItemString(d, "MAG__FLUX_QUANTUM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MAG__FLUX_QUANTUM_2010);
    PyDict_SetItemString(d, "U_MAG__FLUX_QUANTUM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_GAS_CONSTANT_2010);
    PyDict_SetItemString(d, "MOLAR_GAS_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_GAS_CONSTANT_2010);
    PyDict_SetItemString(d, "U_MOLAR_GAS_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_MASS_CONSTANT_2010);
    PyDict_SetItemString(d, "MOLAR_MASS_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_MASS_CONSTANT_2010);
    PyDict_SetItemString(d, "U_MOLAR_MASS_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_MASS_OF_CARBON_12_2010);
    PyDict_SetItemString(d, "MOLAR_MASS_OF_CARBON_12_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_MASS_OF_CARBON_12_2010);
    PyDict_SetItemString(d, "U_MOLAR_MASS_OF_CARBON_12_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_PLANCK_CONSTANT_2010);
    PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_PLANCK_CONSTANT_2010);
    PyDict_SetItemString(d, "U_MOLAR_PLANCK_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_PLANCK_CONSTANT_TIMES_C_2010);
    PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT_TIMES_C_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_PLANCK_CONSTANT_TIMES_C_2010);
    PyDict_SetItemString(d, "U_MOLAR_PLANCK_CONSTANT_TIMES_C_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA_2010);
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA_2010);
    PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__100_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_IDEAL_GAS__273_15_K__101_325_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MOLAR_VOLUME_OF_SILICON_2010);
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_SILICON_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MOLAR_VOLUME_OF_SILICON_2010);
    PyDict_SetItemString(d, "U_MOLAR_VOLUME_OF_SILICON_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MO_X_UNIT_2010);
    PyDict_SetItemString(d, "MO_X_UNIT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MO_X_UNIT_2010);
    PyDict_SetItemString(d, "U_MO_X_UNIT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "U_MUON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_MUON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "MUON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_G_FACTOR_2010);
    PyDict_SetItemString(d, "MUON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_MUON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MAG__MOM_2010);
    PyDict_SetItemString(d, "MUON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_MUON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MAG__MOM__ANOMALY_2010);
    PyDict_SetItemString(d, "MUON_MAG__MOM__ANOMALY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MAG__MOM__ANOMALY_2010);
    PyDict_SetItemString(d, "U_MUON_MAG__MOM__ANOMALY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MASS_2010);
    PyDict_SetItemString(d, "MUON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MASS_2010);
    PyDict_SetItemString(d, "U_MUON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_MUON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "MUON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_MUON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "MUON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_MUON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "MUON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "MUON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "MUON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(MUON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "MUON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_MUON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_MUON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_ACTION_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ACTION_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ACTION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_ACTION_IN_EV_S_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_IN_EV_S_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ACTION_IN_EV_S_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ACTION_IN_EV_S_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_ENERGY_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ENERGY_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ENERGY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_ENERGY_IN_MEV_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_ENERGY_IN_MEV_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_ENERGY_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_LENGTH_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_LENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_LENGTH_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_LENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_MASS_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MASS_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_MOM_UM_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOM_UM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MOM_UM_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MOM_UM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_MOM_UM_IN_MEV_C_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOM_UM_IN_MEV_C_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_MOM_UM_IN_MEV_C_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_MOM_UM_IN_MEV_C_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_TIME_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_TIME_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_TIME_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_TIME_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NATURAL_UNIT_OF_VELOCITY_2010);
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_VELOCITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NATURAL_UNIT_OF_VELOCITY_2010);
    PyDict_SetItemString(d, "U_NATURAL_UNIT_OF_VELOCITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "U_NEUTRON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_ELECTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_ELECTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_ELECTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_G_FACTOR_2010);
    PyDict_SetItemString(d, "NEUTRON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_NEUTRON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "NEUTRON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_NEUTRON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MAG__MOM_2010);
    PyDict_SetItemString(d, "NEUTRON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MASS_2010);
    PyDict_SetItemString(d, "NEUTRON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MASS_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "NEUTRON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "NEUTRON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_NEUTRON_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEWTONIAN_CONSTANT_OF_GRAVITATION_2010);
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEWTONIAN_CONSTANT_OF_GRAVITATION_2010);
    PyDict_SetItemString(d, "U_NEWTONIAN_CONSTANT_OF_GRAVITATION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2010);
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2010);
    PyDict_SetItemString(d, "U_NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NUCLEAR_MAGNETON_2010);
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_2010);
    PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_EV_T_2010);
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_EV_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_EV_T_2010);
    PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_EV_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010);
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010);
    PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_K_T_2010);
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_K_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_K_T_2010);
    PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_K_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(NUCLEAR_MAGNETON_IN_MHZ_T_2010);
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_MHZ_T_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_NUCLEAR_MAGNETON_IN_MHZ_T_2010);
    PyDict_SetItemString(d, "U_NUCLEAR_MAGNETON_IN_MHZ_T_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_CONSTANT_2010);
    PyDict_SetItemString(d, "PLANCK_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_CONSTANT_2010);
    PyDict_SetItemString(d, "U_PLANCK_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_CONSTANT_IN_EV_S_2010);
    PyDict_SetItemString(d, "PLANCK_CONSTANT_IN_EV_S_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_CONSTANT_IN_EV_S_2010);
    PyDict_SetItemString(d, "U_PLANCK_CONSTANT_IN_EV_S_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_CONSTANT_OVER_2_PI_2010);
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_CONSTANT_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_PLANCK_CONSTANT_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2010);
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2010);
    PyDict_SetItemString(d, "U_PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2010);
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2010);
    PyDict_SetItemString(d, "U_PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_LENGTH_2010);
    PyDict_SetItemString(d, "PLANCK_LENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_LENGTH_2010);
    PyDict_SetItemString(d, "U_PLANCK_LENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_MASS_2010);
    PyDict_SetItemString(d, "PLANCK_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_MASS_2010);
    PyDict_SetItemString(d, "U_PLANCK_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2010);
    PyDict_SetItemString(d, "PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2010);
    PyDict_SetItemString(d, "U_PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_TEMPERATURE_2010);
    PyDict_SetItemString(d, "PLANCK_TEMPERATURE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_TEMPERATURE_2010);
    PyDict_SetItemString(d, "U_PLANCK_TEMPERATURE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PLANCK_TIME_2010);
    PyDict_SetItemString(d, "PLANCK_TIME_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PLANCK_TIME_2010);
    PyDict_SetItemString(d, "U_PLANCK_TIME_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_CHARGE_TO_MASS_QUOTIENT_2010);
    PyDict_SetItemString(d, "PROTON_CHARGE_TO_MASS_QUOTIENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_CHARGE_TO_MASS_QUOTIENT_2010);
    PyDict_SetItemString(d, "U_PROTON_CHARGE_TO_MASS_QUOTIENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "U_PROTON_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_G_FACTOR_2010);
    PyDict_SetItemString(d, "PROTON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_PROTON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "PROTON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "PROTON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_PROTON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MAG__MOM_2010);
    PyDict_SetItemString(d, "PROTON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_PROTON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MAG__SHIELDING_CORRECTION_2010);
    PyDict_SetItemString(d, "PROTON_MAG__SHIELDING_CORRECTION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MAG__SHIELDING_CORRECTION_2010);
    PyDict_SetItemString(d, "U_PROTON_MAG__SHIELDING_CORRECTION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MASS_2010);
    PyDict_SetItemString(d, "PROTON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MASS_2010);
    PyDict_SetItemString(d, "U_PROTON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_PROTON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "PROTON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_PROTON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "PROTON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_PROTON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "PROTON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_NEUTRON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_NEUTRON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_RMS_CHARGE_RADIUS_2010);
    PyDict_SetItemString(d, "PROTON_RMS_CHARGE_RADIUS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_RMS_CHARGE_RADIUS_2010);
    PyDict_SetItemString(d, "U_PROTON_RMS_CHARGE_RADIUS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(PROTON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "PROTON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_PROTON_TAU_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_PROTON_TAU_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(QUANTUM_OF_CIRCULATION_2010);
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_QUANTUM_OF_CIRCULATION_2010);
    PyDict_SetItemString(d, "U_QUANTUM_OF_CIRCULATION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(QUANTUM_OF_CIRCULATION_TIMES_2_2010);
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_TIMES_2_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_QUANTUM_OF_CIRCULATION_TIMES_2_2010);
    PyDict_SetItemString(d, "U_QUANTUM_OF_CIRCULATION_TIMES_2_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(RYDBERG_CONSTANT_2010);
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_2010);
    PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_C_IN_HZ_2010);
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_C_IN_HZ_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_C_IN_HZ_2010);
    PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_C_IN_HZ_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_HC_IN_EV_2010);
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_EV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_HC_IN_EV_2010);
    PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_HC_IN_EV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(RYDBERG_CONSTANT_TIMES_HC_IN_J_2010);
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_J_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_RYDBERG_CONSTANT_TIMES_HC_IN_J_2010);
    PyDict_SetItemString(d, "U_RYDBERG_CONSTANT_TIMES_HC_IN_J_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SACKUR_TETRODE_CONSTANT__1_K__100_KPA_2010);
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT__1_K__100_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA_2010);
    PyDict_SetItemString(d, "U_SACKUR_TETRODE_CONSTANT__1_K__100_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA_2010);
    PyDict_SetItemString(d, "U_SACKUR_TETRODE_CONSTANT__1_K__101_325_KPA_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SECOND_RADIATION_CONSTANT_2010);
    PyDict_SetItemString(d, "SECOND_RADIATION_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SECOND_RADIATION_CONSTANT_2010);
    PyDict_SetItemString(d, "U_SECOND_RADIATION_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_TO_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_HELION_TO_SHIELDED_PROTON_MAG__MOM__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_PROTON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_PROTON_GYROMAG__RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_PROTON_GYROMAG__RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_PROTON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_PROTON_GYROMAG__RATIO_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_SHIELDED_PROTON_GYROMAG__RATIO_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM_2010);
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_SHIELDED_PROTON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(SPEED_OF_LIGHT_IN_VACUUM_2010);
    PyDict_SetItemString(d, "SPEED_OF_LIGHT_IN_VACUUM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_SPEED_OF_LIGHT_IN_VACUUM_2010);
    PyDict_SetItemString(d, "U_SPEED_OF_LIGHT_IN_VACUUM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(STANDARD_ACCELERATION_OF_GRAVITY_2010);
    PyDict_SetItemString(d, "STANDARD_ACCELERATION_OF_GRAVITY_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_STANDARD_ACCELERATION_OF_GRAVITY_2010);
    PyDict_SetItemString(d, "U_STANDARD_ACCELERATION_OF_GRAVITY_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(STANDARD_ATMOSPHERE_2010);
    PyDict_SetItemString(d, "STANDARD_ATMOSPHERE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_STANDARD_ATMOSPHERE_2010);
    PyDict_SetItemString(d, "U_STANDARD_ATMOSPHERE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(STANDARD_STATE_PRESSURE_2010);
    PyDict_SetItemString(d, "STANDARD_STATE_PRESSURE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_STANDARD_STATE_PRESSURE_2010);
    PyDict_SetItemString(d, "U_STANDARD_STATE_PRESSURE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(STEFAN_BOLTZMANN_CONSTANT_2010);
    PyDict_SetItemString(d, "STEFAN_BOLTZMANN_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_STEFAN_BOLTZMANN_CONSTANT_2010);
    PyDict_SetItemString(d, "U_STEFAN_BOLTZMANN_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_COMPTON_WAVELENGTH_2010);
    PyDict_SetItemString(d, "U_TAU_COMPTON_WAVELENGTH_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_COMPTON_WAVELENGTH_OVER_2_PI_2010);
    PyDict_SetItemString(d, "U_TAU_COMPTON_WAVELENGTH_OVER_2_PI_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TAU_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TAU_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MASS_2010);
    PyDict_SetItemString(d, "TAU_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MASS_2010);
    PyDict_SetItemString(d, "U_TAU_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_TAU_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MASS_IN_U_2010);
    PyDict_SetItemString(d, "TAU_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_TAU_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "TAU_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_TAU_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TAU_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_MUON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TAU_MUON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TAU_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_NEUTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TAU_NEUTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TAU_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TAU_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TAU_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TAU_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(THOMSON_CROSS_SECTION_2010);
    PyDict_SetItemString(d, "THOMSON_CROSS_SECTION_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_THOMSON_CROSS_SECTION_2010);
    PyDict_SetItemString(d, "U_THOMSON_CROSS_SECTION_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TRITON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_ELECTRON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TRITON_ELECTRON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_G_FACTOR_2010);
    PyDict_SetItemString(d, "TRITON_G_FACTOR_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_G_FACTOR_2010);
    PyDict_SetItemString(d, "U_TRITON_G_FACTOR_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MAG__MOM_2010);
    PyDict_SetItemString(d, "TRITON_MAG__MOM_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MAG__MOM_2010);
    PyDict_SetItemString(d, "U_TRITON_MAG__MOM_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_TRITON_MAG__MOM__TO_BOHR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010);
    PyDict_SetItemString(d, "U_TRITON_MAG__MOM__TO_NUCLEAR_MAGNETON_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MASS_2010);
    PyDict_SetItemString(d, "TRITON_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MASS_2010);
    PyDict_SetItemString(d, "U_TRITON_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MASS_ENERGY_EQUIVALENT_2010);
    PyDict_SetItemString(d, "U_TRITON_MASS_ENERGY_EQUIVALENT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010);
    PyDict_SetItemString(d, "U_TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "TRITON_MASS_IN_U_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MASS_IN_U_2010);
    PyDict_SetItemString(d, "U_TRITON_MASS_IN_U_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "TRITON_MOLAR_MASS_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_MOLAR_MASS_2010);
    PyDict_SetItemString(d, "U_TRITON_MOLAR_MASS_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(TRITON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "TRITON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_TRITON_PROTON_MASS_RATIO_2010);
    PyDict_SetItemString(d, "U_TRITON_PROTON_MASS_RATIO_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(UNIFIED_ATOMIC_MASS_UNIT_2010);
    PyDict_SetItemString(d, "UNIFIED_ATOMIC_MASS_UNIT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_UNIFIED_ATOMIC_MASS_UNIT_2010);
    PyDict_SetItemString(d, "U_UNIFIED_ATOMIC_MASS_UNIT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(VON_KLITZING_CONSTANT_2010);
    PyDict_SetItemString(d, "VON_KLITZING_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_VON_KLITZING_CONSTANT_2010);
    PyDict_SetItemString(d, "U_VON_KLITZING_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(WEAK_MIXING_ANGLE_2010);
    PyDict_SetItemString(d, "WEAK_MIXING_ANGLE_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_WEAK_MIXING_ANGLE_2010);
    PyDict_SetItemString(d, "U_WEAK_MIXING_ANGLE_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2010);
    PyDict_SetItemString(d, "WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2010);
    PyDict_SetItemString(d, "U_WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2010", v);
    Py_INCREF(v);

    v = PyFloat_FromDouble(WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2010);
    PyDict_SetItemString(d, "WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2010", v);
    Py_INCREF(v);
    v = PyFloat_FromDouble(U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2010);
    PyDict_SetItemString(d, "U_WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2010", v);
    Py_INCREF(v);

    return m;
}
