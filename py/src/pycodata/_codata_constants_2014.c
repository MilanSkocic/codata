#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "C extension for constants 2014.");

static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};

static struct PyModuleDef constants_2014 = {PyModuleDef_HEAD_INIT, "constants_2014", module_docstring, -1, myMethods};
PyMODINIT_FUNC PyInit_constants_2014(void){
    PyObject *m;
    PyObject *d;
    PyObject *v;
    PyObject *constant;
    m = PyModule_Create(&constants_2014);
    d = PyModule_GetDict(m);

    v = PyLong_FromLong(YEAR_2014);
    PyDict_SetItemString(d, "YEAR_2014", v);
    Py_INCREF(v);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LATTICE_SPACING_OF_SILICON_2014.name,
    "value", LATTICE_SPACING_OF_SILICON_2014.value,
    "uncertainty", LATTICE_SPACING_OF_SILICON_2014.uncertainty,
    "unit", LATTICE_SPACING_OF_SILICON_2014.unit
    );
    PyDict_SetItemString(d, "LATTICE_SPACING_OF_SILICON_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2014.name,
    "value", ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_2014.name,
    "value", ALPHA_PARTICLE_MASS_2014.value,
    "uncertainty", ALPHA_PARTICLE_MASS_2014.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_IN_U_2014.name,
    "value", ALPHA_PARTICLE_MASS_IN_U_2014.value,
    "uncertainty", ALPHA_PARTICLE_MASS_IN_U_2014.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MOLAR_MASS_2014.name,
    "value", ALPHA_PARTICLE_MOLAR_MASS_2014.value,
    "uncertainty", ALPHA_PARTICLE_MOLAR_MASS_2014.uncertainty,
    "unit", ALPHA_PARTICLE_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_PROTON_MASS_RATIO_2014.name,
    "value", ALPHA_PARTICLE_PROTON_MASS_RATIO_2014.value,
    "uncertainty", ALPHA_PARTICLE_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", ALPHA_PARTICLE_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ANGSTROM_STAR_2014.name,
    "value", ANGSTROM_STAR_2014.value,
    "uncertainty", ANGSTROM_STAR_2014.uncertainty,
    "unit", ANGSTROM_STAR_2014.unit
    );
    PyDict_SetItemString(d, "ANGSTROM_STAR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT_2014.name,
    "value", ATOMIC_MASS_CONSTANT_2014.value,
    "uncertainty", ATOMIC_MASS_CONSTANT_2014.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2014.name,
    "value", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2014.name,
    "value", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2014.name,
    "value", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2014.name,
    "value", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ACTION_2014.name,
    "value", ATOMIC_UNIT_OF_ACTION_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ACTION_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ACTION_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ACTION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CHARGE_2014.name,
    "value", ATOMIC_UNIT_OF_CHARGE_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_CHARGE_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_CHARGE_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CHARGE_DENSITY_2014.name,
    "value", ATOMIC_UNIT_OF_CHARGE_DENSITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_CHARGE_DENSITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_CHARGE_DENSITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_DENSITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CURRENT_2014.name,
    "value", ATOMIC_UNIT_OF_CURRENT_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_CURRENT_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_CURRENT_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CURRENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_FIELD_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_FIELD_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_FIELD_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_FIELD_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2014.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ENERGY_2014.name,
    "value", ATOMIC_UNIT_OF_ENERGY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_ENERGY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_ENERGY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ENERGY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_FORCE_2014.name,
    "value", ATOMIC_UNIT_OF_FORCE_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_FORCE_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_FORCE_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_FORCE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_LENGTH_2014.name,
    "value", ATOMIC_UNIT_OF_LENGTH_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_LENGTH_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_LENGTH_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_LENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM_2014.name,
    "value", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG_DIPOLE_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY_2014.name,
    "value", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG_FLUX_DENSITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAGNETIZABILITY_2014.name,
    "value", ATOMIC_UNIT_OF_MAGNETIZABILITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_MAGNETIZABILITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAGNETIZABILITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAGNETIZABILITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MASS_2014.name,
    "value", ATOMIC_UNIT_OF_MASS_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_MASS_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_MASS_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MOMUM_2014.name,
    "value", ATOMIC_UNIT_OF_MOMUM_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_MOMUM_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_MOMUM_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MOMUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_PERMITTIVITY_2014.name,
    "value", ATOMIC_UNIT_OF_PERMITTIVITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_PERMITTIVITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_PERMITTIVITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_PERMITTIVITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_TIME_2014.name,
    "value", ATOMIC_UNIT_OF_TIME_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_TIME_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_TIME_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_TIME_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_VELOCITY_2014.name,
    "value", ATOMIC_UNIT_OF_VELOCITY_2014.value,
    "uncertainty", ATOMIC_UNIT_OF_VELOCITY_2014.uncertainty,
    "unit", ATOMIC_UNIT_OF_VELOCITY_2014.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_VELOCITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", AVOGADRO_CONSTANT_2014.name,
    "value", AVOGADRO_CONSTANT_2014.value,
    "uncertainty", AVOGADRO_CONSTANT_2014.uncertainty,
    "unit", AVOGADRO_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "AVOGADRO_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_2014.name,
    "value", BOHR_MAGNETON_2014.value,
    "uncertainty", BOHR_MAGNETON_2014.uncertainty,
    "unit", BOHR_MAGNETON_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_EV_T_2014.name,
    "value", BOHR_MAGNETON_IN_EV_T_2014.value,
    "uncertainty", BOHR_MAGNETON_IN_EV_T_2014.uncertainty,
    "unit", BOHR_MAGNETON_IN_EV_T_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_EV_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_HZ_T_2014.name,
    "value", BOHR_MAGNETON_IN_HZ_T_2014.value,
    "uncertainty", BOHR_MAGNETON_IN_HZ_T_2014.uncertainty,
    "unit", BOHR_MAGNETON_IN_HZ_T_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_HZ_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.name,
    "value", BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.value,
    "uncertainty", BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.uncertainty,
    "unit", BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_K_T_2014.name,
    "value", BOHR_MAGNETON_IN_K_T_2014.value,
    "uncertainty", BOHR_MAGNETON_IN_K_T_2014.uncertainty,
    "unit", BOHR_MAGNETON_IN_K_T_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_K_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_RADIUS_2014.name,
    "value", BOHR_RADIUS_2014.value,
    "uncertainty", BOHR_RADIUS_2014.uncertainty,
    "unit", BOHR_RADIUS_2014.unit
    );
    PyDict_SetItemString(d, "BOHR_RADIUS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_2014.name,
    "value", BOLTZMANN_CONSTANT_2014.value,
    "uncertainty", BOLTZMANN_CONSTANT_2014.uncertainty,
    "unit", BOLTZMANN_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_EV_K_2014.name,
    "value", BOLTZMANN_CONSTANT_IN_EV_K_2014.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_EV_K_2014.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_EV_K_2014.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_EV_K_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_HZ_K_2014.name,
    "value", BOLTZMANN_CONSTANT_IN_HZ_K_2014.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_HZ_K_2014.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_HZ_K_2014.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_HZ_K_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2014.name,
    "value", BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2014.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2014.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2014.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_INVERSE_METERS_PER_KELVIN_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2014.name,
    "value", CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2014.value,
    "uncertainty", CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2014.uncertainty,
    "unit", CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2014.unit
    );
    PyDict_SetItemString(d, "CHARACTERISTIC_IMPEDANCE_OF_VACUUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CLASSICAL_ELECTRON_RADIUS_2014.name,
    "value", CLASSICAL_ELECTRON_RADIUS_2014.value,
    "uncertainty", CLASSICAL_ELECTRON_RADIUS_2014.uncertainty,
    "unit", CLASSICAL_ELECTRON_RADIUS_2014.unit
    );
    PyDict_SetItemString(d, "CLASSICAL_ELECTRON_RADIUS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", COMPTON_WAVELENGTH_2014.name,
    "value", COMPTON_WAVELENGTH_2014.value,
    "uncertainty", COMPTON_WAVELENGTH_2014.uncertainty,
    "unit", COMPTON_WAVELENGTH_2014.unit
    );
    PyDict_SetItemString(d, "COMPTON_WAVELENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", COMPTON_WAVELENGTH_OVER_2_PI_2014.name,
    "value", COMPTON_WAVELENGTH_OVER_2_PI_2014.value,
    "uncertainty", COMPTON_WAVELENGTH_OVER_2_PI_2014.uncertainty,
    "unit", COMPTON_WAVELENGTH_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "COMPTON_WAVELENGTH_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONDUCTANCE_QUANTUM_2014.name,
    "value", CONDUCTANCE_QUANTUM_2014.value,
    "uncertainty", CONDUCTANCE_QUANTUM_2014.uncertainty,
    "unit", CONDUCTANCE_QUANTUM_2014.unit
    );
    PyDict_SetItemString(d, "CONDUCTANCE_QUANTUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2014.name,
    "value", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2014.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2014.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2014.name,
    "value", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2014.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2014.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CU_X_UNIT_2014.name,
    "value", CU_X_UNIT_2014.value,
    "uncertainty", CU_X_UNIT_2014.uncertainty,
    "unit", CU_X_UNIT_2014.unit
    );
    PyDict_SetItemString(d, "CU_X_UNIT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_ELECTRON_MAG_MOM_RATIO_2014.name,
    "value", DEUTERON_ELECTRON_MAG_MOM_RATIO_2014.value,
    "uncertainty", DEUTERON_ELECTRON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", DEUTERON_ELECTRON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_ELECTRON_MASS_RATIO_2014.name,
    "value", DEUTERON_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", DEUTERON_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", DEUTERON_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_G_FACTOR_2014.name,
    "value", DEUTERON_G_FACTOR_2014.value,
    "uncertainty", DEUTERON_G_FACTOR_2014.uncertainty,
    "unit", DEUTERON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM_2014.name,
    "value", DEUTERON_MAG_MOM_2014.value,
    "uncertainty", DEUTERON_MAG_MOM_2014.uncertainty,
    "unit", DEUTERON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_2014.name,
    "value", DEUTERON_MASS_2014.value,
    "uncertainty", DEUTERON_MASS_2014.uncertainty,
    "unit", DEUTERON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", DEUTERON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", DEUTERON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", DEUTERON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_IN_U_2014.name,
    "value", DEUTERON_MASS_IN_U_2014.value,
    "uncertainty", DEUTERON_MASS_IN_U_2014.uncertainty,
    "unit", DEUTERON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MOLAR_MASS_2014.name,
    "value", DEUTERON_MOLAR_MASS_2014.value,
    "uncertainty", DEUTERON_MOLAR_MASS_2014.uncertainty,
    "unit", DEUTERON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_NEUTRON_MAG_MOM_RATIO_2014.name,
    "value", DEUTERON_NEUTRON_MAG_MOM_RATIO_2014.value,
    "uncertainty", DEUTERON_NEUTRON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", DEUTERON_NEUTRON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_NEUTRON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_PROTON_MAG_MOM_RATIO_2014.name,
    "value", DEUTERON_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", DEUTERON_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", DEUTERON_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_PROTON_MASS_RATIO_2014.name,
    "value", DEUTERON_PROTON_MASS_RATIO_2014.value,
    "uncertainty", DEUTERON_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", DEUTERON_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_RMS_CHARGE_RADIUS_2014.name,
    "value", DEUTERON_RMS_CHARGE_RADIUS_2014.value,
    "uncertainty", DEUTERON_RMS_CHARGE_RADIUS_2014.uncertainty,
    "unit", DEUTERON_RMS_CHARGE_RADIUS_2014.unit
    );
    PyDict_SetItemString(d, "DEUTERON_RMS_CHARGE_RADIUS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRIC_CONSTANT_2014.name,
    "value", ELECTRIC_CONSTANT_2014.value,
    "uncertainty", ELECTRIC_CONSTANT_2014.uncertainty,
    "unit", ELECTRIC_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRIC_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_CHARGE_TO_MASS_QUOTIENT_2014.name,
    "value", ELECTRON_CHARGE_TO_MASS_QUOTIENT_2014.value,
    "uncertainty", ELECTRON_CHARGE_TO_MASS_QUOTIENT_2014.uncertainty,
    "unit", ELECTRON_CHARGE_TO_MASS_QUOTIENT_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_CHARGE_TO_MASS_QUOTIENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_DEUTERON_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_DEUTERON_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_DEUTERON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_DEUTERON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_DEUTERON_MASS_RATIO_2014.name,
    "value", ELECTRON_DEUTERON_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_DEUTERON_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_DEUTERON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_G_FACTOR_2014.name,
    "value", ELECTRON_G_FACTOR_2014.value,
    "uncertainty", ELECTRON_G_FACTOR_2014.uncertainty,
    "unit", ELECTRON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_GYROMAG_RATIO_2014.name,
    "value", ELECTRON_GYROMAG_RATIO_2014.value,
    "uncertainty", ELECTRON_GYROMAG_RATIO_2014.uncertainty,
    "unit", ELECTRON_GYROMAG_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_GYROMAG_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_GYROMAG_RATIO_OVER_2_PI_2014.name,
    "value", ELECTRON_GYROMAG_RATIO_OVER_2_PI_2014.value,
    "uncertainty", ELECTRON_GYROMAG_RATIO_OVER_2_PI_2014.uncertainty,
    "unit", ELECTRON_GYROMAG_RATIO_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_GYROMAG_RATIO_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_HELION_MASS_RATIO_2014.name,
    "value", ELECTRON_HELION_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_HELION_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_HELION_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_HELION_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_2014.name,
    "value", ELECTRON_MAG_MOM_2014.value,
    "uncertainty", ELECTRON_MAG_MOM_2014.uncertainty,
    "unit", ELECTRON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_ANOMALY_2014.name,
    "value", ELECTRON_MAG_MOM_ANOMALY_2014.value,
    "uncertainty", ELECTRON_MAG_MOM_ANOMALY_2014.uncertainty,
    "unit", ELECTRON_MAG_MOM_ANOMALY_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_ANOMALY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_2014.name,
    "value", ELECTRON_MASS_2014.value,
    "uncertainty", ELECTRON_MASS_2014.uncertainty,
    "unit", ELECTRON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", ELECTRON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", ELECTRON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", ELECTRON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_IN_U_2014.name,
    "value", ELECTRON_MASS_IN_U_2014.value,
    "uncertainty", ELECTRON_MASS_IN_U_2014.uncertainty,
    "unit", ELECTRON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MOLAR_MASS_2014.name,
    "value", ELECTRON_MOLAR_MASS_2014.value,
    "uncertainty", ELECTRON_MOLAR_MASS_2014.uncertainty,
    "unit", ELECTRON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MUON_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_MUON_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_MUON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_MUON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MUON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MUON_MASS_RATIO_2014.name,
    "value", ELECTRON_MUON_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_MUON_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_MUON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MUON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_NEUTRON_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_NEUTRON_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_NEUTRON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_NEUTRON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_NEUTRON_MASS_RATIO_2014.name,
    "value", ELECTRON_NEUTRON_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_NEUTRON_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_NEUTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_PROTON_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_PROTON_MASS_RATIO_2014.name,
    "value", ELECTRON_PROTON_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TAU_MASS_RATIO_2014.name,
    "value", ELECTRON_TAU_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_TAU_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_TAU_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TAU_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2014.name,
    "value", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.name,
    "value", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TRITON_MASS_RATIO_2014.name,
    "value", ELECTRON_TRITON_MASS_RATIO_2014.value,
    "uncertainty", ELECTRON_TRITON_MASS_RATIO_2014.uncertainty,
    "unit", ELECTRON_TRITON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TRITON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_2014.name,
    "value", ELECTRON_VOLT_2014.value,
    "uncertainty", ELECTRON_VOLT_2014.uncertainty,
    "unit", ELECTRON_VOLT_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_HARTREE_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_HERTZ_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_JOULE_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_KELVIN_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2014.name,
    "value", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELEMENTARY_CHARGE_2014.name,
    "value", ELEMENTARY_CHARGE_2014.value,
    "uncertainty", ELEMENTARY_CHARGE_2014.uncertainty,
    "unit", ELEMENTARY_CHARGE_2014.unit
    );
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELEMENTARY_CHARGE_OVER_H_2014.name,
    "value", ELEMENTARY_CHARGE_OVER_H_2014.value,
    "uncertainty", ELEMENTARY_CHARGE_OVER_H_2014.uncertainty,
    "unit", ELEMENTARY_CHARGE_OVER_H_2014.unit
    );
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE_OVER_H_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FARADAY_CONSTANT_2014.name,
    "value", FARADAY_CONSTANT_2014.value,
    "uncertainty", FARADAY_CONSTANT_2014.uncertainty,
    "unit", FARADAY_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "FARADAY_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2014.name,
    "value", FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2014.value,
    "uncertainty", FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2014.uncertainty,
    "unit", FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2014.unit
    );
    PyDict_SetItemString(d, "FARADAY_CONSTANT_FOR_CONVENTIONAL_ELECTRIC_CURRENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FERMI_COUPLING_CONSTANT_2014.name,
    "value", FERMI_COUPLING_CONSTANT_2014.value,
    "uncertainty", FERMI_COUPLING_CONSTANT_2014.uncertainty,
    "unit", FERMI_COUPLING_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "FERMI_COUPLING_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FINE_STRUCTURE_CONSTANT_2014.name,
    "value", FINE_STRUCTURE_CONSTANT_2014.value,
    "uncertainty", FINE_STRUCTURE_CONSTANT_2014.uncertainty,
    "unit", FINE_STRUCTURE_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "FINE_STRUCTURE_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FIRST_RADIATION_CONSTANT_2014.name,
    "value", FIRST_RADIATION_CONSTANT_2014.value,
    "uncertainty", FIRST_RADIATION_CONSTANT_2014.uncertainty,
    "unit", FIRST_RADIATION_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2014.name,
    "value", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2014.value,
    "uncertainty", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2014.uncertainty,
    "unit", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2014.unit
    );
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", HARTREE_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ENERGY_2014.name,
    "value", HARTREE_ENERGY_2014.value,
    "uncertainty", HARTREE_ENERGY_2014.uncertainty,
    "unit", HARTREE_ENERGY_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_ENERGY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ENERGY_IN_EV_2014.name,
    "value", HARTREE_ENERGY_IN_EV_2014.value,
    "uncertainty", HARTREE_ENERGY_IN_EV_2014.uncertainty,
    "unit", HARTREE_ENERGY_IN_EV_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_ENERGY_IN_EV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_HERTZ_RELATIONSHIP_2014.name,
    "value", HARTREE_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", HARTREE_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_JOULE_RELATIONSHIP_2014.name,
    "value", HARTREE_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_KELVIN_RELATIONSHIP_2014.name,
    "value", HARTREE_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_KILOGRAM_RELATIONSHIP_2014.name,
    "value", HARTREE_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", HARTREE_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", HARTREE_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HARTREE_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_ELECTRON_MASS_RATIO_2014.name,
    "value", HELION_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", HELION_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", HELION_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "HELION_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_G_FACTOR_2014.name,
    "value", HELION_G_FACTOR_2014.value,
    "uncertainty", HELION_G_FACTOR_2014.uncertainty,
    "unit", HELION_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "HELION_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM_2014.name,
    "value", HELION_MAG_MOM_2014.value,
    "uncertainty", HELION_MAG_MOM_2014.uncertainty,
    "unit", HELION_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_2014.name,
    "value", HELION_MASS_2014.value,
    "uncertainty", HELION_MASS_2014.uncertainty,
    "unit", HELION_MASS_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", HELION_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", HELION_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", HELION_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_IN_U_2014.name,
    "value", HELION_MASS_IN_U_2014.value,
    "uncertainty", HELION_MASS_IN_U_2014.uncertainty,
    "unit", HELION_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MOLAR_MASS_2014.name,
    "value", HELION_MOLAR_MASS_2014.value,
    "uncertainty", HELION_MOLAR_MASS_2014.uncertainty,
    "unit", HELION_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "HELION_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_PROTON_MASS_RATIO_2014.name,
    "value", HELION_PROTON_MASS_RATIO_2014.value,
    "uncertainty", HELION_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", HELION_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "HELION_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", HERTZ_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_HARTREE_RELATIONSHIP_2014.name,
    "value", HERTZ_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", HERTZ_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_JOULE_RELATIONSHIP_2014.name,
    "value", HERTZ_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_KELVIN_RELATIONSHIP_2014.name,
    "value", HERTZ_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_KILOGRAM_RELATIONSHIP_2014.name,
    "value", HERTZ_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", HERTZ_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", HERTZ_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "HERTZ_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_FINE_STRUCTURE_CONSTANT_2014.name,
    "value", INVERSE_FINE_STRUCTURE_CONSTANT_2014.value,
    "uncertainty", INVERSE_FINE_STRUCTURE_CONSTANT_2014.uncertainty,
    "unit", INVERSE_FINE_STRUCTURE_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_FINE_STRUCTURE_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_HARTREE_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_HERTZ_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_JOULE_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_KELVIN_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_KILOGRAM_RELATIONSHIP_2014.name,
    "value", INVERSE_METER_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", INVERSE_METER_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", INVERSE_METER_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_OF_CONDUCTANCE_QUANTUM_2014.name,
    "value", INVERSE_OF_CONDUCTANCE_QUANTUM_2014.value,
    "uncertainty", INVERSE_OF_CONDUCTANCE_QUANTUM_2014.uncertainty,
    "unit", INVERSE_OF_CONDUCTANCE_QUANTUM_2014.unit
    );
    PyDict_SetItemString(d, "INVERSE_OF_CONDUCTANCE_QUANTUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOSEPHSON_CONSTANT_2014.name,
    "value", JOSEPHSON_CONSTANT_2014.value,
    "uncertainty", JOSEPHSON_CONSTANT_2014.uncertainty,
    "unit", JOSEPHSON_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "JOSEPHSON_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", JOULE_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_HARTREE_RELATIONSHIP_2014.name,
    "value", JOULE_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_HERTZ_RELATIONSHIP_2014.name,
    "value", JOULE_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", JOULE_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_KELVIN_RELATIONSHIP_2014.name,
    "value", JOULE_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_KILOGRAM_RELATIONSHIP_2014.name,
    "value", JOULE_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", JOULE_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", JOULE_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "JOULE_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", KELVIN_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_HARTREE_RELATIONSHIP_2014.name,
    "value", KELVIN_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_HERTZ_RELATIONSHIP_2014.name,
    "value", KELVIN_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", KELVIN_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_JOULE_RELATIONSHIP_2014.name,
    "value", KELVIN_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_KILOGRAM_RELATIONSHIP_2014.name,
    "value", KELVIN_KILOGRAM_RELATIONSHIP_2014.value,
    "uncertainty", KELVIN_KILOGRAM_RELATIONSHIP_2014.uncertainty,
    "unit", KELVIN_KILOGRAM_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KELVIN_KILOGRAM_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.name,
    "value", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2014.name,
    "value", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_ELECTRON_VOLT_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_HARTREE_RELATIONSHIP_2014.name,
    "value", KILOGRAM_HARTREE_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_HARTREE_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_HARTREE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_HARTREE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_HERTZ_RELATIONSHIP_2014.name,
    "value", KILOGRAM_HERTZ_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_HERTZ_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_HERTZ_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_HERTZ_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_INVERSE_METER_RELATIONSHIP_2014.name,
    "value", KILOGRAM_INVERSE_METER_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_INVERSE_METER_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_INVERSE_METER_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_INVERSE_METER_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_JOULE_RELATIONSHIP_2014.name,
    "value", KILOGRAM_JOULE_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_JOULE_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_JOULE_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_JOULE_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_KELVIN_RELATIONSHIP_2014.name,
    "value", KILOGRAM_KELVIN_RELATIONSHIP_2014.value,
    "uncertainty", KILOGRAM_KELVIN_RELATIONSHIP_2014.uncertainty,
    "unit", KILOGRAM_KELVIN_RELATIONSHIP_2014.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_KELVIN_RELATIONSHIP_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LATTICE_PARAMETER_OF_SILICON_2014.name,
    "value", LATTICE_PARAMETER_OF_SILICON_2014.value,
    "uncertainty", LATTICE_PARAMETER_OF_SILICON_2014.uncertainty,
    "unit", LATTICE_PARAMETER_OF_SILICON_2014.unit
    );
    PyDict_SetItemString(d, "LATTICE_PARAMETER_OF_SILICON_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LOSCHMIDT_CONSTANT_273_15_K_100_KPA_2014.name,
    "value", LOSCHMIDT_CONSTANT_273_15_K_100_KPA_2014.value,
    "uncertainty", LOSCHMIDT_CONSTANT_273_15_K_100_KPA_2014.uncertainty,
    "unit", LOSCHMIDT_CONSTANT_273_15_K_100_KPA_2014.unit
    );
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT_273_15_K_100_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA_2014.name,
    "value", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA_2014.value,
    "uncertainty", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA_2014.uncertainty,
    "unit", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA_2014.unit
    );
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MAG_CONSTANT_2014.name,
    "value", MAG_CONSTANT_2014.value,
    "uncertainty", MAG_CONSTANT_2014.uncertainty,
    "unit", MAG_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "MAG_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MAG_FLUX_QUANTUM_2014.name,
    "value", MAG_FLUX_QUANTUM_2014.value,
    "uncertainty", MAG_FLUX_QUANTUM_2014.uncertainty,
    "unit", MAG_FLUX_QUANTUM_2014.unit
    );
    PyDict_SetItemString(d, "MAG_FLUX_QUANTUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_GAS_CONSTANT_2014.name,
    "value", MOLAR_GAS_CONSTANT_2014.value,
    "uncertainty", MOLAR_GAS_CONSTANT_2014.uncertainty,
    "unit", MOLAR_GAS_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_GAS_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_MASS_CONSTANT_2014.name,
    "value", MOLAR_MASS_CONSTANT_2014.value,
    "uncertainty", MOLAR_MASS_CONSTANT_2014.uncertainty,
    "unit", MOLAR_MASS_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_MASS_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_MASS_OF_CARBON_12_2014.name,
    "value", MOLAR_MASS_OF_CARBON_12_2014.value,
    "uncertainty", MOLAR_MASS_OF_CARBON_12_2014.uncertainty,
    "unit", MOLAR_MASS_OF_CARBON_12_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_MASS_OF_CARBON_12_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_PLANCK_CONSTANT_2014.name,
    "value", MOLAR_PLANCK_CONSTANT_2014.value,
    "uncertainty", MOLAR_PLANCK_CONSTANT_2014.uncertainty,
    "unit", MOLAR_PLANCK_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_PLANCK_CONSTANT_TIMES_C_2014.name,
    "value", MOLAR_PLANCK_CONSTANT_TIMES_C_2014.value,
    "uncertainty", MOLAR_PLANCK_CONSTANT_TIMES_C_2014.uncertainty,
    "unit", MOLAR_PLANCK_CONSTANT_TIMES_C_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT_TIMES_C_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA_2014.name,
    "value", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA_2014.value,
    "uncertainty", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA_2014.uncertainty,
    "unit", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA_2014.name,
    "value", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA_2014.value,
    "uncertainty", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA_2014.uncertainty,
    "unit", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_SILICON_2014.name,
    "value", MOLAR_VOLUME_OF_SILICON_2014.value,
    "uncertainty", MOLAR_VOLUME_OF_SILICON_2014.uncertainty,
    "unit", MOLAR_VOLUME_OF_SILICON_2014.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_SILICON_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MO_X_UNIT_2014.name,
    "value", MO_X_UNIT_2014.value,
    "uncertainty", MO_X_UNIT_2014.uncertainty,
    "unit", MO_X_UNIT_2014.unit
    );
    PyDict_SetItemString(d, "MO_X_UNIT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_COMPTON_WAVELENGTH_2014.name,
    "value", MUON_COMPTON_WAVELENGTH_2014.value,
    "uncertainty", MUON_COMPTON_WAVELENGTH_2014.uncertainty,
    "unit", MUON_COMPTON_WAVELENGTH_2014.unit
    );
    PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_COMPTON_WAVELENGTH_OVER_2_PI_2014.name,
    "value", MUON_COMPTON_WAVELENGTH_OVER_2_PI_2014.value,
    "uncertainty", MUON_COMPTON_WAVELENGTH_OVER_2_PI_2014.uncertainty,
    "unit", MUON_COMPTON_WAVELENGTH_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_ELECTRON_MASS_RATIO_2014.name,
    "value", MUON_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", MUON_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", MUON_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_G_FACTOR_2014.name,
    "value", MUON_G_FACTOR_2014.value,
    "uncertainty", MUON_G_FACTOR_2014.uncertainty,
    "unit", MUON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "MUON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_2014.name,
    "value", MUON_MAG_MOM_2014.value,
    "uncertainty", MUON_MAG_MOM_2014.uncertainty,
    "unit", MUON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_ANOMALY_2014.name,
    "value", MUON_MAG_MOM_ANOMALY_2014.value,
    "uncertainty", MUON_MAG_MOM_ANOMALY_2014.uncertainty,
    "unit", MUON_MAG_MOM_ANOMALY_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_ANOMALY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_2014.name,
    "value", MUON_MASS_2014.value,
    "uncertainty", MUON_MASS_2014.uncertainty,
    "unit", MUON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", MUON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", MUON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", MUON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_IN_U_2014.name,
    "value", MUON_MASS_IN_U_2014.value,
    "uncertainty", MUON_MASS_IN_U_2014.uncertainty,
    "unit", MUON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MOLAR_MASS_2014.name,
    "value", MUON_MOLAR_MASS_2014.value,
    "uncertainty", MUON_MOLAR_MASS_2014.uncertainty,
    "unit", MUON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "MUON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_NEUTRON_MASS_RATIO_2014.name,
    "value", MUON_NEUTRON_MASS_RATIO_2014.value,
    "uncertainty", MUON_NEUTRON_MASS_RATIO_2014.uncertainty,
    "unit", MUON_NEUTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_NEUTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_PROTON_MAG_MOM_RATIO_2014.name,
    "value", MUON_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", MUON_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", MUON_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_PROTON_MASS_RATIO_2014.name,
    "value", MUON_PROTON_MASS_RATIO_2014.value,
    "uncertainty", MUON_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", MUON_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_TAU_MASS_RATIO_2014.name,
    "value", MUON_TAU_MASS_RATIO_2014.value,
    "uncertainty", MUON_TAU_MASS_RATIO_2014.uncertainty,
    "unit", MUON_TAU_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "MUON_TAU_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ACTION_2014.name,
    "value", NATURAL_UNIT_OF_ACTION_2014.value,
    "uncertainty", NATURAL_UNIT_OF_ACTION_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_ACTION_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ACTION_IN_EV_S_2014.name,
    "value", NATURAL_UNIT_OF_ACTION_IN_EV_S_2014.value,
    "uncertainty", NATURAL_UNIT_OF_ACTION_IN_EV_S_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_ACTION_IN_EV_S_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_IN_EV_S_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ENERGY_2014.name,
    "value", NATURAL_UNIT_OF_ENERGY_2014.value,
    "uncertainty", NATURAL_UNIT_OF_ENERGY_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_ENERGY_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ENERGY_IN_MEV_2014.name,
    "value", NATURAL_UNIT_OF_ENERGY_IN_MEV_2014.value,
    "uncertainty", NATURAL_UNIT_OF_ENERGY_IN_MEV_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_ENERGY_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_LENGTH_2014.name,
    "value", NATURAL_UNIT_OF_LENGTH_2014.value,
    "uncertainty", NATURAL_UNIT_OF_LENGTH_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_LENGTH_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_LENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MASS_2014.name,
    "value", NATURAL_UNIT_OF_MASS_2014.value,
    "uncertainty", NATURAL_UNIT_OF_MASS_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_MASS_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MOMUM_2014.name,
    "value", NATURAL_UNIT_OF_MOMUM_2014.value,
    "uncertainty", NATURAL_UNIT_OF_MOMUM_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_MOMUM_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MOMUM_IN_MEV_C_2014.name,
    "value", NATURAL_UNIT_OF_MOMUM_IN_MEV_C_2014.value,
    "uncertainty", NATURAL_UNIT_OF_MOMUM_IN_MEV_C_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_MOMUM_IN_MEV_C_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMUM_IN_MEV_C_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_TIME_2014.name,
    "value", NATURAL_UNIT_OF_TIME_2014.value,
    "uncertainty", NATURAL_UNIT_OF_TIME_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_TIME_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_TIME_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_VELOCITY_2014.name,
    "value", NATURAL_UNIT_OF_VELOCITY_2014.value,
    "uncertainty", NATURAL_UNIT_OF_VELOCITY_2014.uncertainty,
    "unit", NATURAL_UNIT_OF_VELOCITY_2014.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_VELOCITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_COMPTON_WAVELENGTH_2014.name,
    "value", NEUTRON_COMPTON_WAVELENGTH_2014.value,
    "uncertainty", NEUTRON_COMPTON_WAVELENGTH_2014.uncertainty,
    "unit", NEUTRON_COMPTON_WAVELENGTH_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2014.name,
    "value", NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2014.value,
    "uncertainty", NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2014.uncertainty,
    "unit", NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_ELECTRON_MAG_MOM_RATIO_2014.name,
    "value", NEUTRON_ELECTRON_MAG_MOM_RATIO_2014.value,
    "uncertainty", NEUTRON_ELECTRON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", NEUTRON_ELECTRON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_ELECTRON_MASS_RATIO_2014.name,
    "value", NEUTRON_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", NEUTRON_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", NEUTRON_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_G_FACTOR_2014.name,
    "value", NEUTRON_G_FACTOR_2014.value,
    "uncertainty", NEUTRON_G_FACTOR_2014.uncertainty,
    "unit", NEUTRON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_GYROMAG_RATIO_2014.name,
    "value", NEUTRON_GYROMAG_RATIO_2014.value,
    "uncertainty", NEUTRON_GYROMAG_RATIO_2014.uncertainty,
    "unit", NEUTRON_GYROMAG_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_GYROMAG_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_GYROMAG_RATIO_OVER_2_PI_2014.name,
    "value", NEUTRON_GYROMAG_RATIO_OVER_2_PI_2014.value,
    "uncertainty", NEUTRON_GYROMAG_RATIO_OVER_2_PI_2014.uncertainty,
    "unit", NEUTRON_GYROMAG_RATIO_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_GYROMAG_RATIO_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM_2014.name,
    "value", NEUTRON_MAG_MOM_2014.value,
    "uncertainty", NEUTRON_MAG_MOM_2014.uncertainty,
    "unit", NEUTRON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_2014.name,
    "value", NEUTRON_MASS_2014.value,
    "uncertainty", NEUTRON_MASS_2014.uncertainty,
    "unit", NEUTRON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", NEUTRON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", NEUTRON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", NEUTRON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_IN_U_2014.name,
    "value", NEUTRON_MASS_IN_U_2014.value,
    "uncertainty", NEUTRON_MASS_IN_U_2014.uncertainty,
    "unit", NEUTRON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MOLAR_MASS_2014.name,
    "value", NEUTRON_MOLAR_MASS_2014.value,
    "uncertainty", NEUTRON_MOLAR_MASS_2014.uncertainty,
    "unit", NEUTRON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MUON_MASS_RATIO_2014.name,
    "value", NEUTRON_MUON_MASS_RATIO_2014.value,
    "uncertainty", NEUTRON_MUON_MASS_RATIO_2014.uncertainty,
    "unit", NEUTRON_MUON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MUON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MAG_MOM_RATIO_2014.name,
    "value", NEUTRON_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", NEUTRON_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", NEUTRON_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_2014.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_2014.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_2014.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2014.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2014.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2014.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2014.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_RATIO_2014.name,
    "value", NEUTRON_PROTON_MASS_RATIO_2014.value,
    "uncertainty", NEUTRON_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", NEUTRON_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_TAU_MASS_RATIO_2014.name,
    "value", NEUTRON_TAU_MASS_RATIO_2014.value,
    "uncertainty", NEUTRON_TAU_MASS_RATIO_2014.uncertainty,
    "unit", NEUTRON_TAU_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_TAU_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.name,
    "value", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEWTONIAN_CONSTANT_OF_GRAVITATION_2014.name,
    "value", NEWTONIAN_CONSTANT_OF_GRAVITATION_2014.value,
    "uncertainty", NEWTONIAN_CONSTANT_OF_GRAVITATION_2014.uncertainty,
    "unit", NEWTONIAN_CONSTANT_OF_GRAVITATION_2014.unit
    );
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2014.name,
    "value", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2014.value,
    "uncertainty", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2014.uncertainty,
    "unit", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2014.unit
    );
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_2014.name,
    "value", NUCLEAR_MAGNETON_2014.value,
    "uncertainty", NUCLEAR_MAGNETON_2014.uncertainty,
    "unit", NUCLEAR_MAGNETON_2014.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_EV_T_2014.name,
    "value", NUCLEAR_MAGNETON_IN_EV_T_2014.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_EV_T_2014.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_EV_T_2014.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_EV_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.name,
    "value", NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_INVERSE_METERS_PER_TESLA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_K_T_2014.name,
    "value", NUCLEAR_MAGNETON_IN_K_T_2014.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_K_T_2014.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_K_T_2014.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_K_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_MHZ_T_2014.name,
    "value", NUCLEAR_MAGNETON_IN_MHZ_T_2014.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_MHZ_T_2014.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_MHZ_T_2014.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_MHZ_T_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_2014.name,
    "value", PLANCK_CONSTANT_2014.value,
    "uncertainty", PLANCK_CONSTANT_2014.uncertainty,
    "unit", PLANCK_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_IN_EV_S_2014.name,
    "value", PLANCK_CONSTANT_IN_EV_S_2014.value,
    "uncertainty", PLANCK_CONSTANT_IN_EV_S_2014.uncertainty,
    "unit", PLANCK_CONSTANT_IN_EV_S_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_IN_EV_S_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_OVER_2_PI_2014.name,
    "value", PLANCK_CONSTANT_OVER_2_PI_2014.value,
    "uncertainty", PLANCK_CONSTANT_OVER_2_PI_2014.uncertainty,
    "unit", PLANCK_CONSTANT_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2014.name,
    "value", PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2014.value,
    "uncertainty", PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2014.uncertainty,
    "unit", PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_IN_EV_S_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2014.name,
    "value", PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2014.value,
    "uncertainty", PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2014.uncertainty,
    "unit", PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_OVER_2_PI_TIMES_C_IN_MEV_FM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_LENGTH_2014.name,
    "value", PLANCK_LENGTH_2014.value,
    "uncertainty", PLANCK_LENGTH_2014.uncertainty,
    "unit", PLANCK_LENGTH_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_LENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_MASS_2014.name,
    "value", PLANCK_MASS_2014.value,
    "uncertainty", PLANCK_MASS_2014.uncertainty,
    "unit", PLANCK_MASS_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2014.name,
    "value", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2014.value,
    "uncertainty", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2014.uncertainty,
    "unit", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_TEMPERATURE_2014.name,
    "value", PLANCK_TEMPERATURE_2014.value,
    "uncertainty", PLANCK_TEMPERATURE_2014.uncertainty,
    "unit", PLANCK_TEMPERATURE_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_TEMPERATURE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_TIME_2014.name,
    "value", PLANCK_TIME_2014.value,
    "uncertainty", PLANCK_TIME_2014.uncertainty,
    "unit", PLANCK_TIME_2014.unit
    );
    PyDict_SetItemString(d, "PLANCK_TIME_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_CHARGE_TO_MASS_QUOTIENT_2014.name,
    "value", PROTON_CHARGE_TO_MASS_QUOTIENT_2014.value,
    "uncertainty", PROTON_CHARGE_TO_MASS_QUOTIENT_2014.uncertainty,
    "unit", PROTON_CHARGE_TO_MASS_QUOTIENT_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_CHARGE_TO_MASS_QUOTIENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_COMPTON_WAVELENGTH_2014.name,
    "value", PROTON_COMPTON_WAVELENGTH_2014.value,
    "uncertainty", PROTON_COMPTON_WAVELENGTH_2014.uncertainty,
    "unit", PROTON_COMPTON_WAVELENGTH_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2014.name,
    "value", PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2014.value,
    "uncertainty", PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2014.uncertainty,
    "unit", PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_ELECTRON_MASS_RATIO_2014.name,
    "value", PROTON_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", PROTON_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", PROTON_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_G_FACTOR_2014.name,
    "value", PROTON_G_FACTOR_2014.value,
    "uncertainty", PROTON_G_FACTOR_2014.uncertainty,
    "unit", PROTON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_GYROMAG_RATIO_2014.name,
    "value", PROTON_GYROMAG_RATIO_2014.value,
    "uncertainty", PROTON_GYROMAG_RATIO_2014.uncertainty,
    "unit", PROTON_GYROMAG_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_GYROMAG_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_GYROMAG_RATIO_OVER_2_PI_2014.name,
    "value", PROTON_GYROMAG_RATIO_OVER_2_PI_2014.value,
    "uncertainty", PROTON_GYROMAG_RATIO_OVER_2_PI_2014.uncertainty,
    "unit", PROTON_GYROMAG_RATIO_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_GYROMAG_RATIO_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM_2014.name,
    "value", PROTON_MAG_MOM_2014.value,
    "uncertainty", PROTON_MAG_MOM_2014.uncertainty,
    "unit", PROTON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_SHIELDING_CORRECTION_2014.name,
    "value", PROTON_MAG_SHIELDING_CORRECTION_2014.value,
    "uncertainty", PROTON_MAG_SHIELDING_CORRECTION_2014.uncertainty,
    "unit", PROTON_MAG_SHIELDING_CORRECTION_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_SHIELDING_CORRECTION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_2014.name,
    "value", PROTON_MASS_2014.value,
    "uncertainty", PROTON_MASS_2014.uncertainty,
    "unit", PROTON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", PROTON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", PROTON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", PROTON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_IN_U_2014.name,
    "value", PROTON_MASS_IN_U_2014.value,
    "uncertainty", PROTON_MASS_IN_U_2014.uncertainty,
    "unit", PROTON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MOLAR_MASS_2014.name,
    "value", PROTON_MOLAR_MASS_2014.value,
    "uncertainty", PROTON_MOLAR_MASS_2014.uncertainty,
    "unit", PROTON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MUON_MASS_RATIO_2014.name,
    "value", PROTON_MUON_MASS_RATIO_2014.value,
    "uncertainty", PROTON_MUON_MASS_RATIO_2014.uncertainty,
    "unit", PROTON_MUON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_MUON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_NEUTRON_MAG_MOM_RATIO_2014.name,
    "value", PROTON_NEUTRON_MAG_MOM_RATIO_2014.value,
    "uncertainty", PROTON_NEUTRON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", PROTON_NEUTRON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_NEUTRON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_NEUTRON_MASS_RATIO_2014.name,
    "value", PROTON_NEUTRON_MASS_RATIO_2014.value,
    "uncertainty", PROTON_NEUTRON_MASS_RATIO_2014.uncertainty,
    "unit", PROTON_NEUTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_NEUTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_RMS_CHARGE_RADIUS_2014.name,
    "value", PROTON_RMS_CHARGE_RADIUS_2014.value,
    "uncertainty", PROTON_RMS_CHARGE_RADIUS_2014.uncertainty,
    "unit", PROTON_RMS_CHARGE_RADIUS_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_RMS_CHARGE_RADIUS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_TAU_MASS_RATIO_2014.name,
    "value", PROTON_TAU_MASS_RATIO_2014.value,
    "uncertainty", PROTON_TAU_MASS_RATIO_2014.uncertainty,
    "unit", PROTON_TAU_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "PROTON_TAU_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", QUANTUM_OF_CIRCULATION_2014.name,
    "value", QUANTUM_OF_CIRCULATION_2014.value,
    "uncertainty", QUANTUM_OF_CIRCULATION_2014.uncertainty,
    "unit", QUANTUM_OF_CIRCULATION_2014.unit
    );
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", QUANTUM_OF_CIRCULATION_TIMES_2_2014.name,
    "value", QUANTUM_OF_CIRCULATION_TIMES_2_2014.value,
    "uncertainty", QUANTUM_OF_CIRCULATION_TIMES_2_2014.uncertainty,
    "unit", QUANTUM_OF_CIRCULATION_TIMES_2_2014.unit
    );
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_TIMES_2_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_2014.name,
    "value", RYDBERG_CONSTANT_2014.value,
    "uncertainty", RYDBERG_CONSTANT_2014.uncertainty,
    "unit", RYDBERG_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_C_IN_HZ_2014.name,
    "value", RYDBERG_CONSTANT_TIMES_C_IN_HZ_2014.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_C_IN_HZ_2014.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_C_IN_HZ_2014.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_C_IN_HZ_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_HC_IN_EV_2014.name,
    "value", RYDBERG_CONSTANT_TIMES_HC_IN_EV_2014.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_HC_IN_EV_2014.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_HC_IN_EV_2014.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_EV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_HC_IN_J_2014.name,
    "value", RYDBERG_CONSTANT_TIMES_HC_IN_J_2014.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_HC_IN_J_2014.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_HC_IN_J_2014.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_J_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SACKUR_TETRODE_CONSTANT_1_K_100_KPA_2014.name,
    "value", SACKUR_TETRODE_CONSTANT_1_K_100_KPA_2014.value,
    "uncertainty", SACKUR_TETRODE_CONSTANT_1_K_100_KPA_2014.uncertainty,
    "unit", SACKUR_TETRODE_CONSTANT_1_K_100_KPA_2014.unit
    );
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT_1_K_100_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA_2014.name,
    "value", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA_2014.value,
    "uncertainty", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA_2014.uncertainty,
    "unit", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA_2014.unit
    );
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SECOND_RADIATION_CONSTANT_2014.name,
    "value", SECOND_RADIATION_CONSTANT_2014.value,
    "uncertainty", SECOND_RADIATION_CONSTANT_2014.uncertainty,
    "unit", SECOND_RADIATION_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "SECOND_RADIATION_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_GYROMAG_RATIO_2014.name,
    "value", SHIELDED_HELION_GYROMAG_RATIO_2014.value,
    "uncertainty", SHIELDED_HELION_GYROMAG_RATIO_2014.uncertainty,
    "unit", SHIELDED_HELION_GYROMAG_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_GYROMAG_RATIO_OVER_2_PI_2014.name,
    "value", SHIELDED_HELION_GYROMAG_RATIO_OVER_2_PI_2014.value,
    "uncertainty", SHIELDED_HELION_GYROMAG_RATIO_OVER_2_PI_2014.uncertainty,
    "unit", SHIELDED_HELION_GYROMAG_RATIO_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG_RATIO_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM_2014.name,
    "value", SHIELDED_HELION_MAG_MOM_2014.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM_2014.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO_2014.name,
    "value", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.name,
    "value", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.value,
    "uncertainty", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.uncertainty,
    "unit", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_GYROMAG_RATIO_2014.name,
    "value", SHIELDED_PROTON_GYROMAG_RATIO_2014.value,
    "uncertainty", SHIELDED_PROTON_GYROMAG_RATIO_2014.uncertainty,
    "unit", SHIELDED_PROTON_GYROMAG_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_GYROMAG_RATIO_OVER_2_PI_2014.name,
    "value", SHIELDED_PROTON_GYROMAG_RATIO_OVER_2_PI_2014.value,
    "uncertainty", SHIELDED_PROTON_GYROMAG_RATIO_OVER_2_PI_2014.uncertainty,
    "unit", SHIELDED_PROTON_GYROMAG_RATIO_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG_RATIO_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM_2014.name,
    "value", SHIELDED_PROTON_MAG_MOM_2014.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM_2014.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SPEED_OF_LIGHT_IN_VACUUM_2014.name,
    "value", SPEED_OF_LIGHT_IN_VACUUM_2014.value,
    "uncertainty", SPEED_OF_LIGHT_IN_VACUUM_2014.uncertainty,
    "unit", SPEED_OF_LIGHT_IN_VACUUM_2014.unit
    );
    PyDict_SetItemString(d, "SPEED_OF_LIGHT_IN_VACUUM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_ACCELERATION_OF_GRAVITY_2014.name,
    "value", STANDARD_ACCELERATION_OF_GRAVITY_2014.value,
    "uncertainty", STANDARD_ACCELERATION_OF_GRAVITY_2014.uncertainty,
    "unit", STANDARD_ACCELERATION_OF_GRAVITY_2014.unit
    );
    PyDict_SetItemString(d, "STANDARD_ACCELERATION_OF_GRAVITY_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_ATMOSPHERE_2014.name,
    "value", STANDARD_ATMOSPHERE_2014.value,
    "uncertainty", STANDARD_ATMOSPHERE_2014.uncertainty,
    "unit", STANDARD_ATMOSPHERE_2014.unit
    );
    PyDict_SetItemString(d, "STANDARD_ATMOSPHERE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_STATE_PRESSURE_2014.name,
    "value", STANDARD_STATE_PRESSURE_2014.value,
    "uncertainty", STANDARD_STATE_PRESSURE_2014.uncertainty,
    "unit", STANDARD_STATE_PRESSURE_2014.unit
    );
    PyDict_SetItemString(d, "STANDARD_STATE_PRESSURE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STEFAN_BOLTZMANN_CONSTANT_2014.name,
    "value", STEFAN_BOLTZMANN_CONSTANT_2014.value,
    "uncertainty", STEFAN_BOLTZMANN_CONSTANT_2014.uncertainty,
    "unit", STEFAN_BOLTZMANN_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "STEFAN_BOLTZMANN_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_COMPTON_WAVELENGTH_2014.name,
    "value", TAU_COMPTON_WAVELENGTH_2014.value,
    "uncertainty", TAU_COMPTON_WAVELENGTH_2014.uncertainty,
    "unit", TAU_COMPTON_WAVELENGTH_2014.unit
    );
    PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_COMPTON_WAVELENGTH_OVER_2_PI_2014.name,
    "value", TAU_COMPTON_WAVELENGTH_OVER_2_PI_2014.value,
    "uncertainty", TAU_COMPTON_WAVELENGTH_OVER_2_PI_2014.uncertainty,
    "unit", TAU_COMPTON_WAVELENGTH_OVER_2_PI_2014.unit
    );
    PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH_OVER_2_PI_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_ELECTRON_MASS_RATIO_2014.name,
    "value", TAU_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", TAU_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", TAU_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TAU_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_2014.name,
    "value", TAU_MASS_2014.value,
    "uncertainty", TAU_MASS_2014.uncertainty,
    "unit", TAU_MASS_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", TAU_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", TAU_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", TAU_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_IN_U_2014.name,
    "value", TAU_MASS_IN_U_2014.value,
    "uncertainty", TAU_MASS_IN_U_2014.uncertainty,
    "unit", TAU_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MOLAR_MASS_2014.name,
    "value", TAU_MOLAR_MASS_2014.value,
    "uncertainty", TAU_MOLAR_MASS_2014.uncertainty,
    "unit", TAU_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MUON_MASS_RATIO_2014.name,
    "value", TAU_MUON_MASS_RATIO_2014.value,
    "uncertainty", TAU_MUON_MASS_RATIO_2014.uncertainty,
    "unit", TAU_MUON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TAU_MUON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_NEUTRON_MASS_RATIO_2014.name,
    "value", TAU_NEUTRON_MASS_RATIO_2014.value,
    "uncertainty", TAU_NEUTRON_MASS_RATIO_2014.uncertainty,
    "unit", TAU_NEUTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TAU_NEUTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_PROTON_MASS_RATIO_2014.name,
    "value", TAU_PROTON_MASS_RATIO_2014.value,
    "uncertainty", TAU_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", TAU_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TAU_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", THOMSON_CROSS_SECTION_2014.name,
    "value", THOMSON_CROSS_SECTION_2014.value,
    "uncertainty", THOMSON_CROSS_SECTION_2014.uncertainty,
    "unit", THOMSON_CROSS_SECTION_2014.unit
    );
    PyDict_SetItemString(d, "THOMSON_CROSS_SECTION_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_ELECTRON_MASS_RATIO_2014.name,
    "value", TRITON_ELECTRON_MASS_RATIO_2014.value,
    "uncertainty", TRITON_ELECTRON_MASS_RATIO_2014.uncertainty,
    "unit", TRITON_ELECTRON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_ELECTRON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_G_FACTOR_2014.name,
    "value", TRITON_G_FACTOR_2014.value,
    "uncertainty", TRITON_G_FACTOR_2014.uncertainty,
    "unit", TRITON_G_FACTOR_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_G_FACTOR_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM_2014.name,
    "value", TRITON_MAG_MOM_2014.value,
    "uncertainty", TRITON_MAG_MOM_2014.uncertainty,
    "unit", TRITON_MAG_MOM_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.name,
    "value", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.value,
    "uncertainty", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.uncertainty,
    "unit", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.name,
    "value", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.value,
    "uncertainty", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.uncertainty,
    "unit", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_2014.name,
    "value", TRITON_MASS_2014.value,
    "uncertainty", TRITON_MASS_2014.uncertainty,
    "unit", TRITON_MASS_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_ENERGY_EQUIVALENT_2014.name,
    "value", TRITON_MASS_ENERGY_EQUIVALENT_2014.value,
    "uncertainty", TRITON_MASS_ENERGY_EQUIVALENT_2014.uncertainty,
    "unit", TRITON_MASS_ENERGY_EQUIVALENT_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.name,
    "value", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.value,
    "uncertainty", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.uncertainty,
    "unit", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_IN_U_2014.name,
    "value", TRITON_MASS_IN_U_2014.value,
    "uncertainty", TRITON_MASS_IN_U_2014.uncertainty,
    "unit", TRITON_MASS_IN_U_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_IN_U_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MOLAR_MASS_2014.name,
    "value", TRITON_MOLAR_MASS_2014.value,
    "uncertainty", TRITON_MOLAR_MASS_2014.uncertainty,
    "unit", TRITON_MOLAR_MASS_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_MOLAR_MASS_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_PROTON_MASS_RATIO_2014.name,
    "value", TRITON_PROTON_MASS_RATIO_2014.value,
    "uncertainty", TRITON_PROTON_MASS_RATIO_2014.uncertainty,
    "unit", TRITON_PROTON_MASS_RATIO_2014.unit
    );
    PyDict_SetItemString(d, "TRITON_PROTON_MASS_RATIO_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", UNIFIED_ATOMIC_MASS_UNIT_2014.name,
    "value", UNIFIED_ATOMIC_MASS_UNIT_2014.value,
    "uncertainty", UNIFIED_ATOMIC_MASS_UNIT_2014.uncertainty,
    "unit", UNIFIED_ATOMIC_MASS_UNIT_2014.unit
    );
    PyDict_SetItemString(d, "UNIFIED_ATOMIC_MASS_UNIT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", VON_KLITZING_CONSTANT_2014.name,
    "value", VON_KLITZING_CONSTANT_2014.value,
    "uncertainty", VON_KLITZING_CONSTANT_2014.uncertainty,
    "unit", VON_KLITZING_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "VON_KLITZING_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WEAK_MIXING_ANGLE_2014.name,
    "value", WEAK_MIXING_ANGLE_2014.value,
    "uncertainty", WEAK_MIXING_ANGLE_2014.uncertainty,
    "unit", WEAK_MIXING_ANGLE_2014.unit
    );
    PyDict_SetItemString(d, "WEAK_MIXING_ANGLE_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2014.name,
    "value", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2014.value,
    "uncertainty", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2014.uncertainty,
    "unit", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT_2014", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2014.name,
    "value", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2014.value,
    "uncertainty", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2014.uncertainty,
    "unit", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2014.unit
    );
    PyDict_SetItemString(d, "WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT_2014", constant);
    Py_INCREF(constant);

    return m;
}