#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "codata.h"

PyDoc_STRVAR(module_docstring, "C extension for constants 2022.");

static PyMethodDef myMethods[] = {{ NULL, NULL, 0, NULL }};

static struct PyModuleDef constants_2022 = {PyModuleDef_HEAD_INIT, "constants_2022", module_docstring, -1, myMethods};
PyMODINIT_FUNC PyInit_constants_2022(void){
    PyObject *m;
    PyObject *d;
    PyObject *v;
    PyObject *constant;
    m = PyModule_Create(&constants_2022);
    d = PyModule_GetDict(m);

    v = PyLong_FromLong(YEAR);
    PyDict_SetItemString(d, "YEAR", v);
    Py_INCREF(v);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_ELECTRON_MASS_RATIO.name,
    "value", ALPHA_PARTICLE_ELECTRON_MASS_RATIO.value,
    "uncertainty", ALPHA_PARTICLE_ELECTRON_MASS_RATIO.uncertainty,
    "unit", ALPHA_PARTICLE_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS.name,
    "value", ALPHA_PARTICLE_MASS.value,
    "uncertainty", ALPHA_PARTICLE_MASS.uncertainty,
    "unit", ALPHA_PARTICLE_MASS.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT.name,
    "value", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MASS_IN_U.name,
    "value", ALPHA_PARTICLE_MASS_IN_U.value,
    "uncertainty", ALPHA_PARTICLE_MASS_IN_U.uncertainty,
    "unit", ALPHA_PARTICLE_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_MOLAR_MASS.name,
    "value", ALPHA_PARTICLE_MOLAR_MASS.value,
    "uncertainty", ALPHA_PARTICLE_MOLAR_MASS.uncertainty,
    "unit", ALPHA_PARTICLE_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_PROTON_MASS_RATIO.name,
    "value", ALPHA_PARTICLE_PROTON_MASS_RATIO.value,
    "uncertainty", ALPHA_PARTICLE_PROTON_MASS_RATIO.uncertainty,
    "unit", ALPHA_PARTICLE_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS.name,
    "value", ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ALPHA_PARTICLE_RMS_CHARGE_RADIUS.name,
    "value", ALPHA_PARTICLE_RMS_CHARGE_RADIUS.value,
    "uncertainty", ALPHA_PARTICLE_RMS_CHARGE_RADIUS.uncertainty,
    "unit", ALPHA_PARTICLE_RMS_CHARGE_RADIUS.unit
    );
    PyDict_SetItemString(d, "ALPHA_PARTICLE_RMS_CHARGE_RADIUS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ANGSTROM_STAR.name,
    "value", ANGSTROM_STAR.value,
    "uncertainty", ANGSTROM_STAR.uncertainty,
    "unit", ANGSTROM_STAR.unit
    );
    PyDict_SetItemString(d, "ANGSTROM_STAR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT.name,
    "value", ATOMIC_MASS_CONSTANT.value,
    "uncertainty", ATOMIC_MASS_CONSTANT.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT.name,
    "value", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT.value,
    "uncertainty", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_CONSTANT_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP.name,
    "value", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ATOMIC_MASS_UNIT_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY.name,
    "value", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY.value,
    "uncertainty", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_1ST_HYPERPOLARIZABILITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY.name,
    "value", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY.value,
    "uncertainty", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_2ND_HYPERPOLARIZABILITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ACTION.name,
    "value", ATOMIC_UNIT_OF_ACTION.value,
    "uncertainty", ATOMIC_UNIT_OF_ACTION.uncertainty,
    "unit", ATOMIC_UNIT_OF_ACTION.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ACTION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CHARGE.name,
    "value", ATOMIC_UNIT_OF_CHARGE.value,
    "uncertainty", ATOMIC_UNIT_OF_CHARGE.uncertainty,
    "unit", ATOMIC_UNIT_OF_CHARGE.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CHARGE_DENSITY.name,
    "value", ATOMIC_UNIT_OF_CHARGE_DENSITY.value,
    "uncertainty", ATOMIC_UNIT_OF_CHARGE_DENSITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_CHARGE_DENSITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CHARGE_DENSITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_CURRENT.name,
    "value", ATOMIC_UNIT_OF_CURRENT.value,
    "uncertainty", ATOMIC_UNIT_OF_CURRENT.uncertainty,
    "unit", ATOMIC_UNIT_OF_CURRENT.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_CURRENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_DIPOLE_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_FIELD.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_FIELD.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_FIELD.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_FIELD.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_FIELD_GRADIENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POLARIZABILITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_POTENTIAL", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM.name,
    "value", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM.value,
    "uncertainty", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM.uncertainty,
    "unit", ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ELECTRIC_QUADRUPOLE_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_ENERGY.name,
    "value", ATOMIC_UNIT_OF_ENERGY.value,
    "uncertainty", ATOMIC_UNIT_OF_ENERGY.uncertainty,
    "unit", ATOMIC_UNIT_OF_ENERGY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_ENERGY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_FORCE.name,
    "value", ATOMIC_UNIT_OF_FORCE.value,
    "uncertainty", ATOMIC_UNIT_OF_FORCE.uncertainty,
    "unit", ATOMIC_UNIT_OF_FORCE.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_FORCE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_LENGTH.name,
    "value", ATOMIC_UNIT_OF_LENGTH.value,
    "uncertainty", ATOMIC_UNIT_OF_LENGTH.uncertainty,
    "unit", ATOMIC_UNIT_OF_LENGTH.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_LENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM.name,
    "value", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM.value,
    "uncertainty", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAG_DIPOLE_MOM.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG_DIPOLE_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY.name,
    "value", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY.value,
    "uncertainty", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAG_FLUX_DENSITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAG_FLUX_DENSITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MAGNETIZABILITY.name,
    "value", ATOMIC_UNIT_OF_MAGNETIZABILITY.value,
    "uncertainty", ATOMIC_UNIT_OF_MAGNETIZABILITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_MAGNETIZABILITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MAGNETIZABILITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MASS.name,
    "value", ATOMIC_UNIT_OF_MASS.value,
    "uncertainty", ATOMIC_UNIT_OF_MASS.uncertainty,
    "unit", ATOMIC_UNIT_OF_MASS.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_MOMENTUM.name,
    "value", ATOMIC_UNIT_OF_MOMENTUM.value,
    "uncertainty", ATOMIC_UNIT_OF_MOMENTUM.uncertainty,
    "unit", ATOMIC_UNIT_OF_MOMENTUM.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_MOMENTUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_PERMITTIVITY.name,
    "value", ATOMIC_UNIT_OF_PERMITTIVITY.value,
    "uncertainty", ATOMIC_UNIT_OF_PERMITTIVITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_PERMITTIVITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_PERMITTIVITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_TIME.name,
    "value", ATOMIC_UNIT_OF_TIME.value,
    "uncertainty", ATOMIC_UNIT_OF_TIME.uncertainty,
    "unit", ATOMIC_UNIT_OF_TIME.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_TIME", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ATOMIC_UNIT_OF_VELOCITY.name,
    "value", ATOMIC_UNIT_OF_VELOCITY.value,
    "uncertainty", ATOMIC_UNIT_OF_VELOCITY.uncertainty,
    "unit", ATOMIC_UNIT_OF_VELOCITY.unit
    );
    PyDict_SetItemString(d, "ATOMIC_UNIT_OF_VELOCITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", AVOGADRO_CONSTANT.name,
    "value", AVOGADRO_CONSTANT.value,
    "uncertainty", AVOGADRO_CONSTANT.uncertainty,
    "unit", AVOGADRO_CONSTANT.unit
    );
    PyDict_SetItemString(d, "AVOGADRO_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON.name,
    "value", BOHR_MAGNETON.value,
    "uncertainty", BOHR_MAGNETON.uncertainty,
    "unit", BOHR_MAGNETON.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_EV_T.name,
    "value", BOHR_MAGNETON_IN_EV_T.value,
    "uncertainty", BOHR_MAGNETON_IN_EV_T.uncertainty,
    "unit", BOHR_MAGNETON_IN_EV_T.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_EV_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_HZ_T.name,
    "value", BOHR_MAGNETON_IN_HZ_T.value,
    "uncertainty", BOHR_MAGNETON_IN_HZ_T.uncertainty,
    "unit", BOHR_MAGNETON_IN_HZ_T.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_HZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA.name,
    "value", BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA.value,
    "uncertainty", BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA.uncertainty,
    "unit", BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_INVERSE_METER_PER_TESLA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_MAGNETON_IN_K_T.name,
    "value", BOHR_MAGNETON_IN_K_T.value,
    "uncertainty", BOHR_MAGNETON_IN_K_T.uncertainty,
    "unit", BOHR_MAGNETON_IN_K_T.unit
    );
    PyDict_SetItemString(d, "BOHR_MAGNETON_IN_K_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOHR_RADIUS.name,
    "value", BOHR_RADIUS.value,
    "uncertainty", BOHR_RADIUS.uncertainty,
    "unit", BOHR_RADIUS.unit
    );
    PyDict_SetItemString(d, "BOHR_RADIUS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT.name,
    "value", BOLTZMANN_CONSTANT.value,
    "uncertainty", BOLTZMANN_CONSTANT.uncertainty,
    "unit", BOLTZMANN_CONSTANT.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_EV_K.name,
    "value", BOLTZMANN_CONSTANT_IN_EV_K.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_EV_K.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_EV_K.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_EV_K", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_HZ_K.name,
    "value", BOLTZMANN_CONSTANT_IN_HZ_K.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_HZ_K.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_HZ_K.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_HZ_K", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN.name,
    "value", BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN.value,
    "uncertainty", BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN.uncertainty,
    "unit", BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN.unit
    );
    PyDict_SetItemString(d, "BOLTZMANN_CONSTANT_IN_INVERSE_METER_PER_KELVIN", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CHARACTERISTIC_IMPEDANCE_OF_VACUUM.name,
    "value", CHARACTERISTIC_IMPEDANCE_OF_VACUUM.value,
    "uncertainty", CHARACTERISTIC_IMPEDANCE_OF_VACUUM.uncertainty,
    "unit", CHARACTERISTIC_IMPEDANCE_OF_VACUUM.unit
    );
    PyDict_SetItemString(d, "CHARACTERISTIC_IMPEDANCE_OF_VACUUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CLASSICAL_ELECTRON_RADIUS.name,
    "value", CLASSICAL_ELECTRON_RADIUS.value,
    "uncertainty", CLASSICAL_ELECTRON_RADIUS.uncertainty,
    "unit", CLASSICAL_ELECTRON_RADIUS.unit
    );
    PyDict_SetItemString(d, "CLASSICAL_ELECTRON_RADIUS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", COMPTON_WAVELENGTH.name,
    "value", COMPTON_WAVELENGTH.value,
    "uncertainty", COMPTON_WAVELENGTH.uncertainty,
    "unit", COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONDUCTANCE_QUANTUM.name,
    "value", CONDUCTANCE_QUANTUM.value,
    "uncertainty", CONDUCTANCE_QUANTUM.uncertainty,
    "unit", CONDUCTANCE_QUANTUM.unit
    );
    PyDict_SetItemString(d, "CONDUCTANCE_QUANTUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_AMPERE_90.name,
    "value", CONVENTIONAL_VALUE_OF_AMPERE_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_AMPERE_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_AMPERE_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_AMPERE_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_COULOMB_90.name,
    "value", CONVENTIONAL_VALUE_OF_COULOMB_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_COULOMB_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_COULOMB_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_COULOMB_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_FARAD_90.name,
    "value", CONVENTIONAL_VALUE_OF_FARAD_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_FARAD_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_FARAD_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_FARAD_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_HENRY_90.name,
    "value", CONVENTIONAL_VALUE_OF_HENRY_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_HENRY_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_HENRY_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_HENRY_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT.name,
    "value", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_JOSEPHSON_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_OHM_90.name,
    "value", CONVENTIONAL_VALUE_OF_OHM_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_OHM_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_OHM_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_OHM_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_VOLT_90.name,
    "value", CONVENTIONAL_VALUE_OF_VOLT_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_VOLT_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_VOLT_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VOLT_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT.name,
    "value", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_VON_KLITZING_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", CONVENTIONAL_VALUE_OF_WATT_90.name,
    "value", CONVENTIONAL_VALUE_OF_WATT_90.value,
    "uncertainty", CONVENTIONAL_VALUE_OF_WATT_90.uncertainty,
    "unit", CONVENTIONAL_VALUE_OF_WATT_90.unit
    );
    PyDict_SetItemString(d, "CONVENTIONAL_VALUE_OF_WATT_90", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", COPPER_X_UNIT.name,
    "value", COPPER_X_UNIT.value,
    "uncertainty", COPPER_X_UNIT.uncertainty,
    "unit", COPPER_X_UNIT.unit
    );
    PyDict_SetItemString(d, "COPPER_X_UNIT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_ELECTRON_MAG_MOM_RATIO.name,
    "value", DEUTERON_ELECTRON_MAG_MOM_RATIO.value,
    "uncertainty", DEUTERON_ELECTRON_MAG_MOM_RATIO.uncertainty,
    "unit", DEUTERON_ELECTRON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_ELECTRON_MASS_RATIO.name,
    "value", DEUTERON_ELECTRON_MASS_RATIO.value,
    "uncertainty", DEUTERON_ELECTRON_MASS_RATIO.uncertainty,
    "unit", DEUTERON_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_G_FACTOR.name,
    "value", DEUTERON_G_FACTOR.value,
    "uncertainty", DEUTERON_G_FACTOR.uncertainty,
    "unit", DEUTERON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "DEUTERON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM.name,
    "value", DEUTERON_MAG_MOM.value,
    "uncertainty", DEUTERON_MAG_MOM.uncertainty,
    "unit", DEUTERON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS.name,
    "value", DEUTERON_MASS.value,
    "uncertainty", DEUTERON_MASS.uncertainty,
    "unit", DEUTERON_MASS.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_ENERGY_EQUIVALENT.name,
    "value", DEUTERON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", DEUTERON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", DEUTERON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MASS_IN_U.name,
    "value", DEUTERON_MASS_IN_U.value,
    "uncertainty", DEUTERON_MASS_IN_U.uncertainty,
    "unit", DEUTERON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_MOLAR_MASS.name,
    "value", DEUTERON_MOLAR_MASS.value,
    "uncertainty", DEUTERON_MOLAR_MASS.uncertainty,
    "unit", DEUTERON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "DEUTERON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_NEUTRON_MAG_MOM_RATIO.name,
    "value", DEUTERON_NEUTRON_MAG_MOM_RATIO.value,
    "uncertainty", DEUTERON_NEUTRON_MAG_MOM_RATIO.uncertainty,
    "unit", DEUTERON_NEUTRON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_NEUTRON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_PROTON_MAG_MOM_RATIO.name,
    "value", DEUTERON_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", DEUTERON_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", DEUTERON_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_PROTON_MASS_RATIO.name,
    "value", DEUTERON_PROTON_MASS_RATIO.value,
    "uncertainty", DEUTERON_PROTON_MASS_RATIO.uncertainty,
    "unit", DEUTERON_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "DEUTERON_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_RELATIVE_ATOMIC_MASS.name,
    "value", DEUTERON_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", DEUTERON_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", DEUTERON_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "DEUTERON_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", DEUTERON_RMS_CHARGE_RADIUS.name,
    "value", DEUTERON_RMS_CHARGE_RADIUS.value,
    "uncertainty", DEUTERON_RMS_CHARGE_RADIUS.uncertainty,
    "unit", DEUTERON_RMS_CHARGE_RADIUS.unit
    );
    PyDict_SetItemString(d, "DEUTERON_RMS_CHARGE_RADIUS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_CHARGE_TO_MASS_QUOTIENT.name,
    "value", ELECTRON_CHARGE_TO_MASS_QUOTIENT.value,
    "uncertainty", ELECTRON_CHARGE_TO_MASS_QUOTIENT.uncertainty,
    "unit", ELECTRON_CHARGE_TO_MASS_QUOTIENT.unit
    );
    PyDict_SetItemString(d, "ELECTRON_CHARGE_TO_MASS_QUOTIENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_DEUTERON_MAG_MOM_RATIO.name,
    "value", ELECTRON_DEUTERON_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_DEUTERON_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_DEUTERON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_DEUTERON_MASS_RATIO.name,
    "value", ELECTRON_DEUTERON_MASS_RATIO.value,
    "uncertainty", ELECTRON_DEUTERON_MASS_RATIO.uncertainty,
    "unit", ELECTRON_DEUTERON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_DEUTERON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_G_FACTOR.name,
    "value", ELECTRON_G_FACTOR.value,
    "uncertainty", ELECTRON_G_FACTOR.uncertainty,
    "unit", ELECTRON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "ELECTRON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_GYROMAG_RATIO.name,
    "value", ELECTRON_GYROMAG_RATIO.value,
    "uncertainty", ELECTRON_GYROMAG_RATIO.uncertainty,
    "unit", ELECTRON_GYROMAG_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_GYROMAG_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_GYROMAG_RATIO_IN_MHZ_T.name,
    "value", ELECTRON_GYROMAG_RATIO_IN_MHZ_T.value,
    "uncertainty", ELECTRON_GYROMAG_RATIO_IN_MHZ_T.uncertainty,
    "unit", ELECTRON_GYROMAG_RATIO_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "ELECTRON_GYROMAG_RATIO_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_HELION_MASS_RATIO.name,
    "value", ELECTRON_HELION_MASS_RATIO.value,
    "uncertainty", ELECTRON_HELION_MASS_RATIO.uncertainty,
    "unit", ELECTRON_HELION_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_HELION_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM.name,
    "value", ELECTRON_MAG_MOM.value,
    "uncertainty", ELECTRON_MAG_MOM.uncertainty,
    "unit", ELECTRON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_ANOMALY.name,
    "value", ELECTRON_MAG_MOM_ANOMALY.value,
    "uncertainty", ELECTRON_MAG_MOM_ANOMALY.uncertainty,
    "unit", ELECTRON_MAG_MOM_ANOMALY.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_ANOMALY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS.name,
    "value", ELECTRON_MASS.value,
    "uncertainty", ELECTRON_MASS.uncertainty,
    "unit", ELECTRON_MASS.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_ENERGY_EQUIVALENT.name,
    "value", ELECTRON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", ELECTRON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", ELECTRON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MASS_IN_U.name,
    "value", ELECTRON_MASS_IN_U.value,
    "uncertainty", ELECTRON_MASS_IN_U.uncertainty,
    "unit", ELECTRON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MOLAR_MASS.name,
    "value", ELECTRON_MOLAR_MASS.value,
    "uncertainty", ELECTRON_MOLAR_MASS.uncertainty,
    "unit", ELECTRON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MUON_MAG_MOM_RATIO.name,
    "value", ELECTRON_MUON_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_MUON_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_MUON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MUON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_MUON_MASS_RATIO.name,
    "value", ELECTRON_MUON_MASS_RATIO.value,
    "uncertainty", ELECTRON_MUON_MASS_RATIO.uncertainty,
    "unit", ELECTRON_MUON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_MUON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_NEUTRON_MAG_MOM_RATIO.name,
    "value", ELECTRON_NEUTRON_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_NEUTRON_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_NEUTRON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_NEUTRON_MASS_RATIO.name,
    "value", ELECTRON_NEUTRON_MASS_RATIO.value,
    "uncertainty", ELECTRON_NEUTRON_MASS_RATIO.uncertainty,
    "unit", ELECTRON_NEUTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_NEUTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_PROTON_MAG_MOM_RATIO.name,
    "value", ELECTRON_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_PROTON_MASS_RATIO.name,
    "value", ELECTRON_PROTON_MASS_RATIO.value,
    "uncertainty", ELECTRON_PROTON_MASS_RATIO.uncertainty,
    "unit", ELECTRON_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_RELATIVE_ATOMIC_MASS.name,
    "value", ELECTRON_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", ELECTRON_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", ELECTRON_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "ELECTRON_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TAU_MASS_RATIO.name,
    "value", ELECTRON_TAU_MASS_RATIO.value,
    "uncertainty", ELECTRON_TAU_MASS_RATIO.uncertainty,
    "unit", ELECTRON_TAU_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TAU_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO.name,
    "value", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO.value,
    "uncertainty", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO.uncertainty,
    "unit", ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_ALPHA_PARTICLE_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO.name,
    "value", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_HELION_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.name,
    "value", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_TRITON_MASS_RATIO.name,
    "value", ELECTRON_TRITON_MASS_RATIO.value,
    "uncertainty", ELECTRON_TRITON_MASS_RATIO.uncertainty,
    "unit", ELECTRON_TRITON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "ELECTRON_TRITON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT.name,
    "value", ELECTRON_VOLT.value,
    "uncertainty", ELECTRON_VOLT.uncertainty,
    "unit", ELECTRON_VOLT.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_HARTREE_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_HARTREE_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_HARTREE_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_HERTZ_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_HERTZ_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_HERTZ_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_JOULE_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_JOULE_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_JOULE_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_KELVIN_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_KELVIN_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_KELVIN_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP.name,
    "value", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", ELECTRON_VOLT_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "ELECTRON_VOLT_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELEMENTARY_CHARGE.name,
    "value", ELEMENTARY_CHARGE.value,
    "uncertainty", ELEMENTARY_CHARGE.uncertainty,
    "unit", ELEMENTARY_CHARGE.unit
    );
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", ELEMENTARY_CHARGE_OVER_H_BAR.name,
    "value", ELEMENTARY_CHARGE_OVER_H_BAR.value,
    "uncertainty", ELEMENTARY_CHARGE_OVER_H_BAR.uncertainty,
    "unit", ELEMENTARY_CHARGE_OVER_H_BAR.unit
    );
    PyDict_SetItemString(d, "ELEMENTARY_CHARGE_OVER_H_BAR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FARADAY_CONSTANT.name,
    "value", FARADAY_CONSTANT.value,
    "uncertainty", FARADAY_CONSTANT.uncertainty,
    "unit", FARADAY_CONSTANT.unit
    );
    PyDict_SetItemString(d, "FARADAY_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FERMI_COUPLING_CONSTANT.name,
    "value", FERMI_COUPLING_CONSTANT.value,
    "uncertainty", FERMI_COUPLING_CONSTANT.uncertainty,
    "unit", FERMI_COUPLING_CONSTANT.unit
    );
    PyDict_SetItemString(d, "FERMI_COUPLING_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FINE_STRUCTURE_CONSTANT.name,
    "value", FINE_STRUCTURE_CONSTANT.value,
    "uncertainty", FINE_STRUCTURE_CONSTANT.uncertainty,
    "unit", FINE_STRUCTURE_CONSTANT.unit
    );
    PyDict_SetItemString(d, "FINE_STRUCTURE_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FIRST_RADIATION_CONSTANT.name,
    "value", FIRST_RADIATION_CONSTANT.value,
    "uncertainty", FIRST_RADIATION_CONSTANT.uncertainty,
    "unit", FIRST_RADIATION_CONSTANT.unit
    );
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE.name,
    "value", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE.value,
    "uncertainty", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE.uncertainty,
    "unit", FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE.unit
    );
    PyDict_SetItemString(d, "FIRST_RADIATION_CONSTANT_FOR_SPECTRAL_RADIANCE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", HARTREE_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", HARTREE_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", HARTREE_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ENERGY.name,
    "value", HARTREE_ENERGY.value,
    "uncertainty", HARTREE_ENERGY.uncertainty,
    "unit", HARTREE_ENERGY.unit
    );
    PyDict_SetItemString(d, "HARTREE_ENERGY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_ENERGY_IN_EV.name,
    "value", HARTREE_ENERGY_IN_EV.value,
    "uncertainty", HARTREE_ENERGY_IN_EV.uncertainty,
    "unit", HARTREE_ENERGY_IN_EV.unit
    );
    PyDict_SetItemString(d, "HARTREE_ENERGY_IN_EV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_HERTZ_RELATIONSHIP.name,
    "value", HARTREE_HERTZ_RELATIONSHIP.value,
    "uncertainty", HARTREE_HERTZ_RELATIONSHIP.uncertainty,
    "unit", HARTREE_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_INVERSE_METER_RELATIONSHIP.name,
    "value", HARTREE_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", HARTREE_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", HARTREE_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_JOULE_RELATIONSHIP.name,
    "value", HARTREE_JOULE_RELATIONSHIP.value,
    "uncertainty", HARTREE_JOULE_RELATIONSHIP.uncertainty,
    "unit", HARTREE_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_KELVIN_RELATIONSHIP.name,
    "value", HARTREE_KELVIN_RELATIONSHIP.value,
    "uncertainty", HARTREE_KELVIN_RELATIONSHIP.uncertainty,
    "unit", HARTREE_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HARTREE_KILOGRAM_RELATIONSHIP.name,
    "value", HARTREE_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", HARTREE_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", HARTREE_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HARTREE_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_ELECTRON_MASS_RATIO.name,
    "value", HELION_ELECTRON_MASS_RATIO.value,
    "uncertainty", HELION_ELECTRON_MASS_RATIO.uncertainty,
    "unit", HELION_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "HELION_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_G_FACTOR.name,
    "value", HELION_G_FACTOR.value,
    "uncertainty", HELION_G_FACTOR.uncertainty,
    "unit", HELION_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "HELION_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM.name,
    "value", HELION_MAG_MOM.value,
    "uncertainty", HELION_MAG_MOM.uncertainty,
    "unit", HELION_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS.name,
    "value", HELION_MASS.value,
    "uncertainty", HELION_MASS.uncertainty,
    "unit", HELION_MASS.unit
    );
    PyDict_SetItemString(d, "HELION_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_ENERGY_EQUIVALENT.name,
    "value", HELION_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", HELION_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", HELION_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", HELION_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MASS_IN_U.name,
    "value", HELION_MASS_IN_U.value,
    "uncertainty", HELION_MASS_IN_U.uncertainty,
    "unit", HELION_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "HELION_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_MOLAR_MASS.name,
    "value", HELION_MOLAR_MASS.value,
    "uncertainty", HELION_MOLAR_MASS.uncertainty,
    "unit", HELION_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "HELION_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_PROTON_MASS_RATIO.name,
    "value", HELION_PROTON_MASS_RATIO.value,
    "uncertainty", HELION_PROTON_MASS_RATIO.uncertainty,
    "unit", HELION_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "HELION_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_RELATIVE_ATOMIC_MASS.name,
    "value", HELION_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", HELION_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", HELION_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "HELION_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HELION_SHIELDING_SHIFT.name,
    "value", HELION_SHIELDING_SHIFT.value,
    "uncertainty", HELION_SHIELDING_SHIFT.uncertainty,
    "unit", HELION_SHIELDING_SHIFT.unit
    );
    PyDict_SetItemString(d, "HELION_SHIELDING_SHIFT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", HERTZ_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", HERTZ_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", HERTZ_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_HARTREE_RELATIONSHIP.name,
    "value", HERTZ_HARTREE_RELATIONSHIP.value,
    "uncertainty", HERTZ_HARTREE_RELATIONSHIP.uncertainty,
    "unit", HERTZ_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_INVERSE_METER_RELATIONSHIP.name,
    "value", HERTZ_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", HERTZ_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", HERTZ_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_JOULE_RELATIONSHIP.name,
    "value", HERTZ_JOULE_RELATIONSHIP.value,
    "uncertainty", HERTZ_JOULE_RELATIONSHIP.uncertainty,
    "unit", HERTZ_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_KELVIN_RELATIONSHIP.name,
    "value", HERTZ_KELVIN_RELATIONSHIP.value,
    "uncertainty", HERTZ_KELVIN_RELATIONSHIP.uncertainty,
    "unit", HERTZ_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HERTZ_KILOGRAM_RELATIONSHIP.name,
    "value", HERTZ_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", HERTZ_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", HERTZ_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "HERTZ_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133.name,
    "value", HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133.value,
    "uncertainty", HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133.uncertainty,
    "unit", HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133.unit
    );
    PyDict_SetItemString(d, "HYPERFINE_TRANSITION_FREQUENCY_OF_CS_133", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_FINE_STRUCTURE_CONSTANT.name,
    "value", INVERSE_FINE_STRUCTURE_CONSTANT.value,
    "uncertainty", INVERSE_FINE_STRUCTURE_CONSTANT.uncertainty,
    "unit", INVERSE_FINE_STRUCTURE_CONSTANT.unit
    );
    PyDict_SetItemString(d, "INVERSE_FINE_STRUCTURE_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_HARTREE_RELATIONSHIP.name,
    "value", INVERSE_METER_HARTREE_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_HARTREE_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_HERTZ_RELATIONSHIP.name,
    "value", INVERSE_METER_HERTZ_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_HERTZ_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_JOULE_RELATIONSHIP.name,
    "value", INVERSE_METER_JOULE_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_JOULE_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_KELVIN_RELATIONSHIP.name,
    "value", INVERSE_METER_KELVIN_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_KELVIN_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_METER_KILOGRAM_RELATIONSHIP.name,
    "value", INVERSE_METER_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", INVERSE_METER_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", INVERSE_METER_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "INVERSE_METER_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", INVERSE_OF_CONDUCTANCE_QUANTUM.name,
    "value", INVERSE_OF_CONDUCTANCE_QUANTUM.value,
    "uncertainty", INVERSE_OF_CONDUCTANCE_QUANTUM.uncertainty,
    "unit", INVERSE_OF_CONDUCTANCE_QUANTUM.unit
    );
    PyDict_SetItemString(d, "INVERSE_OF_CONDUCTANCE_QUANTUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOSEPHSON_CONSTANT.name,
    "value", JOSEPHSON_CONSTANT.value,
    "uncertainty", JOSEPHSON_CONSTANT.uncertainty,
    "unit", JOSEPHSON_CONSTANT.unit
    );
    PyDict_SetItemString(d, "JOSEPHSON_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", JOULE_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", JOULE_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", JOULE_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_HARTREE_RELATIONSHIP.name,
    "value", JOULE_HARTREE_RELATIONSHIP.value,
    "uncertainty", JOULE_HARTREE_RELATIONSHIP.uncertainty,
    "unit", JOULE_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_HERTZ_RELATIONSHIP.name,
    "value", JOULE_HERTZ_RELATIONSHIP.value,
    "uncertainty", JOULE_HERTZ_RELATIONSHIP.uncertainty,
    "unit", JOULE_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_INVERSE_METER_RELATIONSHIP.name,
    "value", JOULE_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", JOULE_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", JOULE_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_KELVIN_RELATIONSHIP.name,
    "value", JOULE_KELVIN_RELATIONSHIP.value,
    "uncertainty", JOULE_KELVIN_RELATIONSHIP.uncertainty,
    "unit", JOULE_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", JOULE_KILOGRAM_RELATIONSHIP.name,
    "value", JOULE_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", JOULE_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", JOULE_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "JOULE_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", KELVIN_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", KELVIN_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", KELVIN_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_HARTREE_RELATIONSHIP.name,
    "value", KELVIN_HARTREE_RELATIONSHIP.value,
    "uncertainty", KELVIN_HARTREE_RELATIONSHIP.uncertainty,
    "unit", KELVIN_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_HERTZ_RELATIONSHIP.name,
    "value", KELVIN_HERTZ_RELATIONSHIP.value,
    "uncertainty", KELVIN_HERTZ_RELATIONSHIP.uncertainty,
    "unit", KELVIN_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_INVERSE_METER_RELATIONSHIP.name,
    "value", KELVIN_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", KELVIN_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", KELVIN_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_JOULE_RELATIONSHIP.name,
    "value", KELVIN_JOULE_RELATIONSHIP.value,
    "uncertainty", KELVIN_JOULE_RELATIONSHIP.uncertainty,
    "unit", KELVIN_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KELVIN_KILOGRAM_RELATIONSHIP.name,
    "value", KELVIN_KILOGRAM_RELATIONSHIP.value,
    "uncertainty", KELVIN_KILOGRAM_RELATIONSHIP.uncertainty,
    "unit", KELVIN_KILOGRAM_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KELVIN_KILOGRAM_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP.name,
    "value", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_ATOMIC_MASS_UNIT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP.name,
    "value", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_ELECTRON_VOLT_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_ELECTRON_VOLT_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_HARTREE_RELATIONSHIP.name,
    "value", KILOGRAM_HARTREE_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_HARTREE_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_HARTREE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_HARTREE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_HERTZ_RELATIONSHIP.name,
    "value", KILOGRAM_HERTZ_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_HERTZ_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_HERTZ_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_HERTZ_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_INVERSE_METER_RELATIONSHIP.name,
    "value", KILOGRAM_INVERSE_METER_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_INVERSE_METER_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_INVERSE_METER_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_INVERSE_METER_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_JOULE_RELATIONSHIP.name,
    "value", KILOGRAM_JOULE_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_JOULE_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_JOULE_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_JOULE_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", KILOGRAM_KELVIN_RELATIONSHIP.name,
    "value", KILOGRAM_KELVIN_RELATIONSHIP.value,
    "uncertainty", KILOGRAM_KELVIN_RELATIONSHIP.uncertainty,
    "unit", KILOGRAM_KELVIN_RELATIONSHIP.unit
    );
    PyDict_SetItemString(d, "KILOGRAM_KELVIN_RELATIONSHIP", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LATTICE_PARAMETER_OF_SILICON.name,
    "value", LATTICE_PARAMETER_OF_SILICON.value,
    "uncertainty", LATTICE_PARAMETER_OF_SILICON.uncertainty,
    "unit", LATTICE_PARAMETER_OF_SILICON.unit
    );
    PyDict_SetItemString(d, "LATTICE_PARAMETER_OF_SILICON", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LATTICE_SPACING_OF_IDEAL_SI_220.name,
    "value", LATTICE_SPACING_OF_IDEAL_SI_220.value,
    "uncertainty", LATTICE_SPACING_OF_IDEAL_SI_220.uncertainty,
    "unit", LATTICE_SPACING_OF_IDEAL_SI_220.unit
    );
    PyDict_SetItemString(d, "LATTICE_SPACING_OF_IDEAL_SI_220", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LOSCHMIDT_CONSTANT_273_15_K_100_KPA.name,
    "value", LOSCHMIDT_CONSTANT_273_15_K_100_KPA.value,
    "uncertainty", LOSCHMIDT_CONSTANT_273_15_K_100_KPA.uncertainty,
    "unit", LOSCHMIDT_CONSTANT_273_15_K_100_KPA.unit
    );
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT_273_15_K_100_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA.name,
    "value", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA.value,
    "uncertainty", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA.uncertainty,
    "unit", LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA.unit
    );
    PyDict_SetItemString(d, "LOSCHMIDT_CONSTANT_273_15_K_101_325_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", LUMINOUS_EFFICACY.name,
    "value", LUMINOUS_EFFICACY.value,
    "uncertainty", LUMINOUS_EFFICACY.uncertainty,
    "unit", LUMINOUS_EFFICACY.unit
    );
    PyDict_SetItemString(d, "LUMINOUS_EFFICACY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MAG_FLUX_QUANTUM.name,
    "value", MAG_FLUX_QUANTUM.value,
    "uncertainty", MAG_FLUX_QUANTUM.uncertainty,
    "unit", MAG_FLUX_QUANTUM.unit
    );
    PyDict_SetItemString(d, "MAG_FLUX_QUANTUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_GAS_CONSTANT.name,
    "value", MOLAR_GAS_CONSTANT.value,
    "uncertainty", MOLAR_GAS_CONSTANT.uncertainty,
    "unit", MOLAR_GAS_CONSTANT.unit
    );
    PyDict_SetItemString(d, "MOLAR_GAS_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_MASS_CONSTANT.name,
    "value", MOLAR_MASS_CONSTANT.value,
    "uncertainty", MOLAR_MASS_CONSTANT.uncertainty,
    "unit", MOLAR_MASS_CONSTANT.unit
    );
    PyDict_SetItemString(d, "MOLAR_MASS_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_MASS_OF_CARBON_12.name,
    "value", MOLAR_MASS_OF_CARBON_12.value,
    "uncertainty", MOLAR_MASS_OF_CARBON_12.uncertainty,
    "unit", MOLAR_MASS_OF_CARBON_12.unit
    );
    PyDict_SetItemString(d, "MOLAR_MASS_OF_CARBON_12", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_PLANCK_CONSTANT.name,
    "value", MOLAR_PLANCK_CONSTANT.value,
    "uncertainty", MOLAR_PLANCK_CONSTANT.uncertainty,
    "unit", MOLAR_PLANCK_CONSTANT.unit
    );
    PyDict_SetItemString(d, "MOLAR_PLANCK_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA.name,
    "value", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA.value,
    "uncertainty", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA.uncertainty,
    "unit", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_100_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA.name,
    "value", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA.value,
    "uncertainty", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA.uncertainty,
    "unit", MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_IDEAL_GAS_273_15_K_101_325_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLAR_VOLUME_OF_SILICON.name,
    "value", MOLAR_VOLUME_OF_SILICON.value,
    "uncertainty", MOLAR_VOLUME_OF_SILICON.uncertainty,
    "unit", MOLAR_VOLUME_OF_SILICON.unit
    );
    PyDict_SetItemString(d, "MOLAR_VOLUME_OF_SILICON", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MOLYBDENUM_X_UNIT.name,
    "value", MOLYBDENUM_X_UNIT.value,
    "uncertainty", MOLYBDENUM_X_UNIT.uncertainty,
    "unit", MOLYBDENUM_X_UNIT.unit
    );
    PyDict_SetItemString(d, "MOLYBDENUM_X_UNIT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_COMPTON_WAVELENGTH.name,
    "value", MUON_COMPTON_WAVELENGTH.value,
    "uncertainty", MUON_COMPTON_WAVELENGTH.uncertainty,
    "unit", MUON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "MUON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_ELECTRON_MASS_RATIO.name,
    "value", MUON_ELECTRON_MASS_RATIO.value,
    "uncertainty", MUON_ELECTRON_MASS_RATIO.uncertainty,
    "unit", MUON_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_G_FACTOR.name,
    "value", MUON_G_FACTOR.value,
    "uncertainty", MUON_G_FACTOR.uncertainty,
    "unit", MUON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "MUON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM.name,
    "value", MUON_MAG_MOM.value,
    "uncertainty", MUON_MAG_MOM.uncertainty,
    "unit", MUON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_ANOMALY.name,
    "value", MUON_MAG_MOM_ANOMALY.value,
    "uncertainty", MUON_MAG_MOM_ANOMALY.uncertainty,
    "unit", MUON_MAG_MOM_ANOMALY.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_ANOMALY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS.name,
    "value", MUON_MASS.value,
    "uncertainty", MUON_MASS.uncertainty,
    "unit", MUON_MASS.unit
    );
    PyDict_SetItemString(d, "MUON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_ENERGY_EQUIVALENT.name,
    "value", MUON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", MUON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", MUON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", MUON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MASS_IN_U.name,
    "value", MUON_MASS_IN_U.value,
    "uncertainty", MUON_MASS_IN_U.uncertainty,
    "unit", MUON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "MUON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_MOLAR_MASS.name,
    "value", MUON_MOLAR_MASS.value,
    "uncertainty", MUON_MOLAR_MASS.uncertainty,
    "unit", MUON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "MUON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_NEUTRON_MASS_RATIO.name,
    "value", MUON_NEUTRON_MASS_RATIO.value,
    "uncertainty", MUON_NEUTRON_MASS_RATIO.uncertainty,
    "unit", MUON_NEUTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_NEUTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_PROTON_MAG_MOM_RATIO.name,
    "value", MUON_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", MUON_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", MUON_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_PROTON_MASS_RATIO.name,
    "value", MUON_PROTON_MASS_RATIO.value,
    "uncertainty", MUON_PROTON_MASS_RATIO.uncertainty,
    "unit", MUON_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", MUON_TAU_MASS_RATIO.name,
    "value", MUON_TAU_MASS_RATIO.value,
    "uncertainty", MUON_TAU_MASS_RATIO.uncertainty,
    "unit", MUON_TAU_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "MUON_TAU_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ACTION.name,
    "value", NATURAL_UNIT_OF_ACTION.value,
    "uncertainty", NATURAL_UNIT_OF_ACTION.uncertainty,
    "unit", NATURAL_UNIT_OF_ACTION.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ACTION_IN_EV_S.name,
    "value", NATURAL_UNIT_OF_ACTION_IN_EV_S.value,
    "uncertainty", NATURAL_UNIT_OF_ACTION_IN_EV_S.uncertainty,
    "unit", NATURAL_UNIT_OF_ACTION_IN_EV_S.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ACTION_IN_EV_S", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ENERGY.name,
    "value", NATURAL_UNIT_OF_ENERGY.value,
    "uncertainty", NATURAL_UNIT_OF_ENERGY.uncertainty,
    "unit", NATURAL_UNIT_OF_ENERGY.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_ENERGY_IN_MEV.name,
    "value", NATURAL_UNIT_OF_ENERGY_IN_MEV.value,
    "uncertainty", NATURAL_UNIT_OF_ENERGY_IN_MEV.uncertainty,
    "unit", NATURAL_UNIT_OF_ENERGY_IN_MEV.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_ENERGY_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_LENGTH.name,
    "value", NATURAL_UNIT_OF_LENGTH.value,
    "uncertainty", NATURAL_UNIT_OF_LENGTH.uncertainty,
    "unit", NATURAL_UNIT_OF_LENGTH.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_LENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MASS.name,
    "value", NATURAL_UNIT_OF_MASS.value,
    "uncertainty", NATURAL_UNIT_OF_MASS.uncertainty,
    "unit", NATURAL_UNIT_OF_MASS.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MOMENTUM.name,
    "value", NATURAL_UNIT_OF_MOMENTUM.value,
    "uncertainty", NATURAL_UNIT_OF_MOMENTUM.uncertainty,
    "unit", NATURAL_UNIT_OF_MOMENTUM.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMENTUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C.name,
    "value", NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C.value,
    "uncertainty", NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C.uncertainty,
    "unit", NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_MOMENTUM_IN_MEV_C", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_TIME.name,
    "value", NATURAL_UNIT_OF_TIME.value,
    "uncertainty", NATURAL_UNIT_OF_TIME.uncertainty,
    "unit", NATURAL_UNIT_OF_TIME.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_TIME", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NATURAL_UNIT_OF_VELOCITY.name,
    "value", NATURAL_UNIT_OF_VELOCITY.value,
    "uncertainty", NATURAL_UNIT_OF_VELOCITY.uncertainty,
    "unit", NATURAL_UNIT_OF_VELOCITY.unit
    );
    PyDict_SetItemString(d, "NATURAL_UNIT_OF_VELOCITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_COMPTON_WAVELENGTH.name,
    "value", NEUTRON_COMPTON_WAVELENGTH.value,
    "uncertainty", NEUTRON_COMPTON_WAVELENGTH.uncertainty,
    "unit", NEUTRON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "NEUTRON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_ELECTRON_MAG_MOM_RATIO.name,
    "value", NEUTRON_ELECTRON_MAG_MOM_RATIO.value,
    "uncertainty", NEUTRON_ELECTRON_MAG_MOM_RATIO.uncertainty,
    "unit", NEUTRON_ELECTRON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_ELECTRON_MASS_RATIO.name,
    "value", NEUTRON_ELECTRON_MASS_RATIO.value,
    "uncertainty", NEUTRON_ELECTRON_MASS_RATIO.uncertainty,
    "unit", NEUTRON_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_G_FACTOR.name,
    "value", NEUTRON_G_FACTOR.value,
    "uncertainty", NEUTRON_G_FACTOR.uncertainty,
    "unit", NEUTRON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "NEUTRON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_GYROMAG_RATIO.name,
    "value", NEUTRON_GYROMAG_RATIO.value,
    "uncertainty", NEUTRON_GYROMAG_RATIO.uncertainty,
    "unit", NEUTRON_GYROMAG_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_GYROMAG_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_GYROMAG_RATIO_IN_MHZ_T.name,
    "value", NEUTRON_GYROMAG_RATIO_IN_MHZ_T.value,
    "uncertainty", NEUTRON_GYROMAG_RATIO_IN_MHZ_T.uncertainty,
    "unit", NEUTRON_GYROMAG_RATIO_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "NEUTRON_GYROMAG_RATIO_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM.name,
    "value", NEUTRON_MAG_MOM.value,
    "uncertainty", NEUTRON_MAG_MOM.uncertainty,
    "unit", NEUTRON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS.name,
    "value", NEUTRON_MASS.value,
    "uncertainty", NEUTRON_MASS.uncertainty,
    "unit", NEUTRON_MASS.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_ENERGY_EQUIVALENT.name,
    "value", NEUTRON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", NEUTRON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", NEUTRON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MASS_IN_U.name,
    "value", NEUTRON_MASS_IN_U.value,
    "uncertainty", NEUTRON_MASS_IN_U.uncertainty,
    "unit", NEUTRON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MOLAR_MASS.name,
    "value", NEUTRON_MOLAR_MASS.value,
    "uncertainty", NEUTRON_MOLAR_MASS.uncertainty,
    "unit", NEUTRON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_MUON_MASS_RATIO.name,
    "value", NEUTRON_MUON_MASS_RATIO.value,
    "uncertainty", NEUTRON_MUON_MASS_RATIO.uncertainty,
    "unit", NEUTRON_MUON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_MUON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MAG_MOM_RATIO.name,
    "value", NEUTRON_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", NEUTRON_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", NEUTRON_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U.name,
    "value", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U.value,
    "uncertainty", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U.uncertainty,
    "unit", NEUTRON_PROTON_MASS_DIFFERENCE_IN_U.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_DIFFERENCE_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_PROTON_MASS_RATIO.name,
    "value", NEUTRON_PROTON_MASS_RATIO.value,
    "uncertainty", NEUTRON_PROTON_MASS_RATIO.uncertainty,
    "unit", NEUTRON_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_RELATIVE_ATOMIC_MASS.name,
    "value", NEUTRON_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", NEUTRON_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", NEUTRON_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "NEUTRON_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_TAU_MASS_RATIO.name,
    "value", NEUTRON_TAU_MASS_RATIO.value,
    "uncertainty", NEUTRON_TAU_MASS_RATIO.uncertainty,
    "unit", NEUTRON_TAU_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_TAU_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.name,
    "value", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "NEUTRON_TO_SHIELDED_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEWTONIAN_CONSTANT_OF_GRAVITATION.name,
    "value", NEWTONIAN_CONSTANT_OF_GRAVITATION.value,
    "uncertainty", NEWTONIAN_CONSTANT_OF_GRAVITATION.uncertainty,
    "unit", NEWTONIAN_CONSTANT_OF_GRAVITATION.unit
    );
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C.name,
    "value", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C.value,
    "uncertainty", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C.uncertainty,
    "unit", NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C.unit
    );
    PyDict_SetItemString(d, "NEWTONIAN_CONSTANT_OF_GRAVITATION_OVER_H_BAR_C", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON.name,
    "value", NUCLEAR_MAGNETON.value,
    "uncertainty", NUCLEAR_MAGNETON.uncertainty,
    "unit", NUCLEAR_MAGNETON.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_EV_T.name,
    "value", NUCLEAR_MAGNETON_IN_EV_T.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_EV_T.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_EV_T.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_EV_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA.name,
    "value", NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_INVERSE_METER_PER_TESLA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_K_T.name,
    "value", NUCLEAR_MAGNETON_IN_K_T.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_K_T.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_K_T.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_K_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", NUCLEAR_MAGNETON_IN_MHZ_T.name,
    "value", NUCLEAR_MAGNETON_IN_MHZ_T.value,
    "uncertainty", NUCLEAR_MAGNETON_IN_MHZ_T.uncertainty,
    "unit", NUCLEAR_MAGNETON_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "NUCLEAR_MAGNETON_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT.name,
    "value", PLANCK_CONSTANT.value,
    "uncertainty", PLANCK_CONSTANT.uncertainty,
    "unit", PLANCK_CONSTANT.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_CONSTANT_IN_EV_HZ.name,
    "value", PLANCK_CONSTANT_IN_EV_HZ.value,
    "uncertainty", PLANCK_CONSTANT_IN_EV_HZ.uncertainty,
    "unit", PLANCK_CONSTANT_IN_EV_HZ.unit
    );
    PyDict_SetItemString(d, "PLANCK_CONSTANT_IN_EV_HZ", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_LENGTH.name,
    "value", PLANCK_LENGTH.value,
    "uncertainty", PLANCK_LENGTH.uncertainty,
    "unit", PLANCK_LENGTH.unit
    );
    PyDict_SetItemString(d, "PLANCK_LENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_MASS.name,
    "value", PLANCK_MASS.value,
    "uncertainty", PLANCK_MASS.uncertainty,
    "unit", PLANCK_MASS.unit
    );
    PyDict_SetItemString(d, "PLANCK_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV.name,
    "value", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV.value,
    "uncertainty", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV.uncertainty,
    "unit", PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV.unit
    );
    PyDict_SetItemString(d, "PLANCK_MASS_ENERGY_EQUIVALENT_IN_GEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_TEMPERATURE.name,
    "value", PLANCK_TEMPERATURE.value,
    "uncertainty", PLANCK_TEMPERATURE.uncertainty,
    "unit", PLANCK_TEMPERATURE.unit
    );
    PyDict_SetItemString(d, "PLANCK_TEMPERATURE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PLANCK_TIME.name,
    "value", PLANCK_TIME.value,
    "uncertainty", PLANCK_TIME.uncertainty,
    "unit", PLANCK_TIME.unit
    );
    PyDict_SetItemString(d, "PLANCK_TIME", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_CHARGE_TO_MASS_QUOTIENT.name,
    "value", PROTON_CHARGE_TO_MASS_QUOTIENT.value,
    "uncertainty", PROTON_CHARGE_TO_MASS_QUOTIENT.uncertainty,
    "unit", PROTON_CHARGE_TO_MASS_QUOTIENT.unit
    );
    PyDict_SetItemString(d, "PROTON_CHARGE_TO_MASS_QUOTIENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_COMPTON_WAVELENGTH.name,
    "value", PROTON_COMPTON_WAVELENGTH.value,
    "uncertainty", PROTON_COMPTON_WAVELENGTH.uncertainty,
    "unit", PROTON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "PROTON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_ELECTRON_MASS_RATIO.name,
    "value", PROTON_ELECTRON_MASS_RATIO.value,
    "uncertainty", PROTON_ELECTRON_MASS_RATIO.uncertainty,
    "unit", PROTON_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_G_FACTOR.name,
    "value", PROTON_G_FACTOR.value,
    "uncertainty", PROTON_G_FACTOR.uncertainty,
    "unit", PROTON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "PROTON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_GYROMAG_RATIO.name,
    "value", PROTON_GYROMAG_RATIO.value,
    "uncertainty", PROTON_GYROMAG_RATIO.uncertainty,
    "unit", PROTON_GYROMAG_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_GYROMAG_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_GYROMAG_RATIO_IN_MHZ_T.name,
    "value", PROTON_GYROMAG_RATIO_IN_MHZ_T.value,
    "uncertainty", PROTON_GYROMAG_RATIO_IN_MHZ_T.uncertainty,
    "unit", PROTON_GYROMAG_RATIO_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "PROTON_GYROMAG_RATIO_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM.name,
    "value", PROTON_MAG_MOM.value,
    "uncertainty", PROTON_MAG_MOM.uncertainty,
    "unit", PROTON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MAG_SHIELDING_CORRECTION.name,
    "value", PROTON_MAG_SHIELDING_CORRECTION.value,
    "uncertainty", PROTON_MAG_SHIELDING_CORRECTION.uncertainty,
    "unit", PROTON_MAG_SHIELDING_CORRECTION.unit
    );
    PyDict_SetItemString(d, "PROTON_MAG_SHIELDING_CORRECTION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS.name,
    "value", PROTON_MASS.value,
    "uncertainty", PROTON_MASS.uncertainty,
    "unit", PROTON_MASS.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_ENERGY_EQUIVALENT.name,
    "value", PROTON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", PROTON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", PROTON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MASS_IN_U.name,
    "value", PROTON_MASS_IN_U.value,
    "uncertainty", PROTON_MASS_IN_U.uncertainty,
    "unit", PROTON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "PROTON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MOLAR_MASS.name,
    "value", PROTON_MOLAR_MASS.value,
    "uncertainty", PROTON_MOLAR_MASS.uncertainty,
    "unit", PROTON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "PROTON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_MUON_MASS_RATIO.name,
    "value", PROTON_MUON_MASS_RATIO.value,
    "uncertainty", PROTON_MUON_MASS_RATIO.uncertainty,
    "unit", PROTON_MUON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_MUON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_NEUTRON_MAG_MOM_RATIO.name,
    "value", PROTON_NEUTRON_MAG_MOM_RATIO.value,
    "uncertainty", PROTON_NEUTRON_MAG_MOM_RATIO.uncertainty,
    "unit", PROTON_NEUTRON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_NEUTRON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_NEUTRON_MASS_RATIO.name,
    "value", PROTON_NEUTRON_MASS_RATIO.value,
    "uncertainty", PROTON_NEUTRON_MASS_RATIO.uncertainty,
    "unit", PROTON_NEUTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_NEUTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_RELATIVE_ATOMIC_MASS.name,
    "value", PROTON_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", PROTON_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", PROTON_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "PROTON_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_RMS_CHARGE_RADIUS.name,
    "value", PROTON_RMS_CHARGE_RADIUS.value,
    "uncertainty", PROTON_RMS_CHARGE_RADIUS.uncertainty,
    "unit", PROTON_RMS_CHARGE_RADIUS.unit
    );
    PyDict_SetItemString(d, "PROTON_RMS_CHARGE_RADIUS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", PROTON_TAU_MASS_RATIO.name,
    "value", PROTON_TAU_MASS_RATIO.value,
    "uncertainty", PROTON_TAU_MASS_RATIO.uncertainty,
    "unit", PROTON_TAU_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "PROTON_TAU_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", QUANTUM_OF_CIRCULATION.name,
    "value", QUANTUM_OF_CIRCULATION.value,
    "uncertainty", QUANTUM_OF_CIRCULATION.uncertainty,
    "unit", QUANTUM_OF_CIRCULATION.unit
    );
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", QUANTUM_OF_CIRCULATION_TIMES_2.name,
    "value", QUANTUM_OF_CIRCULATION_TIMES_2.value,
    "uncertainty", QUANTUM_OF_CIRCULATION_TIMES_2.uncertainty,
    "unit", QUANTUM_OF_CIRCULATION_TIMES_2.unit
    );
    PyDict_SetItemString(d, "QUANTUM_OF_CIRCULATION_TIMES_2", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_COMPTON_WAVELENGTH.name,
    "value", REDUCED_COMPTON_WAVELENGTH.value,
    "uncertainty", REDUCED_COMPTON_WAVELENGTH.uncertainty,
    "unit", REDUCED_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "REDUCED_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_MUON_COMPTON_WAVELENGTH.name,
    "value", REDUCED_MUON_COMPTON_WAVELENGTH.value,
    "uncertainty", REDUCED_MUON_COMPTON_WAVELENGTH.uncertainty,
    "unit", REDUCED_MUON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "REDUCED_MUON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_NEUTRON_COMPTON_WAVELENGTH.name,
    "value", REDUCED_NEUTRON_COMPTON_WAVELENGTH.value,
    "uncertainty", REDUCED_NEUTRON_COMPTON_WAVELENGTH.uncertainty,
    "unit", REDUCED_NEUTRON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "REDUCED_NEUTRON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_PLANCK_CONSTANT.name,
    "value", REDUCED_PLANCK_CONSTANT.value,
    "uncertainty", REDUCED_PLANCK_CONSTANT.uncertainty,
    "unit", REDUCED_PLANCK_CONSTANT.unit
    );
    PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_PLANCK_CONSTANT_IN_EV_S.name,
    "value", REDUCED_PLANCK_CONSTANT_IN_EV_S.value,
    "uncertainty", REDUCED_PLANCK_CONSTANT_IN_EV_S.uncertainty,
    "unit", REDUCED_PLANCK_CONSTANT_IN_EV_S.unit
    );
    PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT_IN_EV_S", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM.name,
    "value", REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM.value,
    "uncertainty", REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM.uncertainty,
    "unit", REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM.unit
    );
    PyDict_SetItemString(d, "REDUCED_PLANCK_CONSTANT_TIMES_C_IN_MEV_FM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_PROTON_COMPTON_WAVELENGTH.name,
    "value", REDUCED_PROTON_COMPTON_WAVELENGTH.value,
    "uncertainty", REDUCED_PROTON_COMPTON_WAVELENGTH.uncertainty,
    "unit", REDUCED_PROTON_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "REDUCED_PROTON_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", REDUCED_TAU_COMPTON_WAVELENGTH.name,
    "value", REDUCED_TAU_COMPTON_WAVELENGTH.value,
    "uncertainty", REDUCED_TAU_COMPTON_WAVELENGTH.uncertainty,
    "unit", REDUCED_TAU_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "REDUCED_TAU_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT.name,
    "value", RYDBERG_CONSTANT.value,
    "uncertainty", RYDBERG_CONSTANT.uncertainty,
    "unit", RYDBERG_CONSTANT.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_C_IN_HZ.name,
    "value", RYDBERG_CONSTANT_TIMES_C_IN_HZ.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_C_IN_HZ.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_C_IN_HZ.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_C_IN_HZ", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_HC_IN_EV.name,
    "value", RYDBERG_CONSTANT_TIMES_HC_IN_EV.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_HC_IN_EV.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_HC_IN_EV.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_EV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", RYDBERG_CONSTANT_TIMES_HC_IN_J.name,
    "value", RYDBERG_CONSTANT_TIMES_HC_IN_J.value,
    "uncertainty", RYDBERG_CONSTANT_TIMES_HC_IN_J.uncertainty,
    "unit", RYDBERG_CONSTANT_TIMES_HC_IN_J.unit
    );
    PyDict_SetItemString(d, "RYDBERG_CONSTANT_TIMES_HC_IN_J", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SACKUR_TETRODE_CONSTANT_1_K_100_KPA.name,
    "value", SACKUR_TETRODE_CONSTANT_1_K_100_KPA.value,
    "uncertainty", SACKUR_TETRODE_CONSTANT_1_K_100_KPA.uncertainty,
    "unit", SACKUR_TETRODE_CONSTANT_1_K_100_KPA.unit
    );
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT_1_K_100_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA.name,
    "value", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA.value,
    "uncertainty", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA.uncertainty,
    "unit", SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA.unit
    );
    PyDict_SetItemString(d, "SACKUR_TETRODE_CONSTANT_1_K_101_325_KPA", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SECOND_RADIATION_CONSTANT.name,
    "value", SECOND_RADIATION_CONSTANT.value,
    "uncertainty", SECOND_RADIATION_CONSTANT.uncertainty,
    "unit", SECOND_RADIATION_CONSTANT.unit
    );
    PyDict_SetItemString(d, "SECOND_RADIATION_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_GYROMAG_RATIO.name,
    "value", SHIELDED_HELION_GYROMAG_RATIO.value,
    "uncertainty", SHIELDED_HELION_GYROMAG_RATIO.uncertainty,
    "unit", SHIELDED_HELION_GYROMAG_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_GYROMAG_RATIO_IN_MHZ_T.name,
    "value", SHIELDED_HELION_GYROMAG_RATIO_IN_MHZ_T.value,
    "uncertainty", SHIELDED_HELION_GYROMAG_RATIO_IN_MHZ_T.uncertainty,
    "unit", SHIELDED_HELION_GYROMAG_RATIO_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_GYROMAG_RATIO_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM.name,
    "value", SHIELDED_HELION_MAG_MOM.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO.name,
    "value", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO.name,
    "value", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_HELION_TO_SHIELDED_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_GYROMAG_RATIO.name,
    "value", SHIELDED_PROTON_GYROMAG_RATIO.value,
    "uncertainty", SHIELDED_PROTON_GYROMAG_RATIO.uncertainty,
    "unit", SHIELDED_PROTON_GYROMAG_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_GYROMAG_RATIO_IN_MHZ_T.name,
    "value", SHIELDED_PROTON_GYROMAG_RATIO_IN_MHZ_T.value,
    "uncertainty", SHIELDED_PROTON_GYROMAG_RATIO_IN_MHZ_T.uncertainty,
    "unit", SHIELDED_PROTON_GYROMAG_RATIO_IN_MHZ_T.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_GYROMAG_RATIO_IN_MHZ_T", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM.name,
    "value", SHIELDED_PROTON_MAG_MOM.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "SHIELDED_PROTON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD.name,
    "value", SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD.value,
    "uncertainty", SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD.uncertainty,
    "unit", SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD.unit
    );
    PyDict_SetItemString(d, "SHIELDING_DIFFERENCE_OF_D_AND_P_IN_HD", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT.name,
    "value", SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT.value,
    "uncertainty", SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT.uncertainty,
    "unit", SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT.unit
    );
    PyDict_SetItemString(d, "SHIELDING_DIFFERENCE_OF_T_AND_P_IN_HT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", SPEED_OF_LIGHT_IN_VACUUM.name,
    "value", SPEED_OF_LIGHT_IN_VACUUM.value,
    "uncertainty", SPEED_OF_LIGHT_IN_VACUUM.uncertainty,
    "unit", SPEED_OF_LIGHT_IN_VACUUM.unit
    );
    PyDict_SetItemString(d, "SPEED_OF_LIGHT_IN_VACUUM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_ACCELERATION_OF_GRAVITY.name,
    "value", STANDARD_ACCELERATION_OF_GRAVITY.value,
    "uncertainty", STANDARD_ACCELERATION_OF_GRAVITY.uncertainty,
    "unit", STANDARD_ACCELERATION_OF_GRAVITY.unit
    );
    PyDict_SetItemString(d, "STANDARD_ACCELERATION_OF_GRAVITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_ATMOSPHERE.name,
    "value", STANDARD_ATMOSPHERE.value,
    "uncertainty", STANDARD_ATMOSPHERE.uncertainty,
    "unit", STANDARD_ATMOSPHERE.unit
    );
    PyDict_SetItemString(d, "STANDARD_ATMOSPHERE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STANDARD_STATE_PRESSURE.name,
    "value", STANDARD_STATE_PRESSURE.value,
    "uncertainty", STANDARD_STATE_PRESSURE.uncertainty,
    "unit", STANDARD_STATE_PRESSURE.unit
    );
    PyDict_SetItemString(d, "STANDARD_STATE_PRESSURE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", STEFAN_BOLTZMANN_CONSTANT.name,
    "value", STEFAN_BOLTZMANN_CONSTANT.value,
    "uncertainty", STEFAN_BOLTZMANN_CONSTANT.uncertainty,
    "unit", STEFAN_BOLTZMANN_CONSTANT.unit
    );
    PyDict_SetItemString(d, "STEFAN_BOLTZMANN_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_COMPTON_WAVELENGTH.name,
    "value", TAU_COMPTON_WAVELENGTH.value,
    "uncertainty", TAU_COMPTON_WAVELENGTH.uncertainty,
    "unit", TAU_COMPTON_WAVELENGTH.unit
    );
    PyDict_SetItemString(d, "TAU_COMPTON_WAVELENGTH", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_ELECTRON_MASS_RATIO.name,
    "value", TAU_ELECTRON_MASS_RATIO.value,
    "uncertainty", TAU_ELECTRON_MASS_RATIO.uncertainty,
    "unit", TAU_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TAU_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_ENERGY_EQUIVALENT.name,
    "value", TAU_ENERGY_EQUIVALENT.value,
    "uncertainty", TAU_ENERGY_EQUIVALENT.uncertainty,
    "unit", TAU_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "TAU_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS.name,
    "value", TAU_MASS.value,
    "uncertainty", TAU_MASS.uncertainty,
    "unit", TAU_MASS.unit
    );
    PyDict_SetItemString(d, "TAU_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_ENERGY_EQUIVALENT.name,
    "value", TAU_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", TAU_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", TAU_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MASS_IN_U.name,
    "value", TAU_MASS_IN_U.value,
    "uncertainty", TAU_MASS_IN_U.uncertainty,
    "unit", TAU_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "TAU_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MOLAR_MASS.name,
    "value", TAU_MOLAR_MASS.value,
    "uncertainty", TAU_MOLAR_MASS.uncertainty,
    "unit", TAU_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "TAU_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_MUON_MASS_RATIO.name,
    "value", TAU_MUON_MASS_RATIO.value,
    "uncertainty", TAU_MUON_MASS_RATIO.uncertainty,
    "unit", TAU_MUON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TAU_MUON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_NEUTRON_MASS_RATIO.name,
    "value", TAU_NEUTRON_MASS_RATIO.value,
    "uncertainty", TAU_NEUTRON_MASS_RATIO.uncertainty,
    "unit", TAU_NEUTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TAU_NEUTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TAU_PROTON_MASS_RATIO.name,
    "value", TAU_PROTON_MASS_RATIO.value,
    "uncertainty", TAU_PROTON_MASS_RATIO.uncertainty,
    "unit", TAU_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TAU_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", THOMSON_CROSS_SECTION.name,
    "value", THOMSON_CROSS_SECTION.value,
    "uncertainty", THOMSON_CROSS_SECTION.uncertainty,
    "unit", THOMSON_CROSS_SECTION.unit
    );
    PyDict_SetItemString(d, "THOMSON_CROSS_SECTION", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_ELECTRON_MASS_RATIO.name,
    "value", TRITON_ELECTRON_MASS_RATIO.value,
    "uncertainty", TRITON_ELECTRON_MASS_RATIO.uncertainty,
    "unit", TRITON_ELECTRON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TRITON_ELECTRON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_G_FACTOR.name,
    "value", TRITON_G_FACTOR.value,
    "uncertainty", TRITON_G_FACTOR.uncertainty,
    "unit", TRITON_G_FACTOR.unit
    );
    PyDict_SetItemString(d, "TRITON_G_FACTOR", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM.name,
    "value", TRITON_MAG_MOM.value,
    "uncertainty", TRITON_MAG_MOM.uncertainty,
    "unit", TRITON_MAG_MOM.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.name,
    "value", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.value,
    "uncertainty", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.uncertainty,
    "unit", TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM_TO_BOHR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.name,
    "value", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.value,
    "uncertainty", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.uncertainty,
    "unit", TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO.unit
    );
    PyDict_SetItemString(d, "TRITON_MAG_MOM_TO_NUCLEAR_MAGNETON_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS.name,
    "value", TRITON_MASS.value,
    "uncertainty", TRITON_MASS.uncertainty,
    "unit", TRITON_MASS.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_ENERGY_EQUIVALENT.name,
    "value", TRITON_MASS_ENERGY_EQUIVALENT.value,
    "uncertainty", TRITON_MASS_ENERGY_EQUIVALENT.uncertainty,
    "unit", TRITON_MASS_ENERGY_EQUIVALENT.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV.name,
    "value", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV.value,
    "uncertainty", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV.uncertainty,
    "unit", TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_ENERGY_EQUIVALENT_IN_MEV", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MASS_IN_U.name,
    "value", TRITON_MASS_IN_U.value,
    "uncertainty", TRITON_MASS_IN_U.uncertainty,
    "unit", TRITON_MASS_IN_U.unit
    );
    PyDict_SetItemString(d, "TRITON_MASS_IN_U", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_MOLAR_MASS.name,
    "value", TRITON_MOLAR_MASS.value,
    "uncertainty", TRITON_MOLAR_MASS.uncertainty,
    "unit", TRITON_MOLAR_MASS.unit
    );
    PyDict_SetItemString(d, "TRITON_MOLAR_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_PROTON_MASS_RATIO.name,
    "value", TRITON_PROTON_MASS_RATIO.value,
    "uncertainty", TRITON_PROTON_MASS_RATIO.uncertainty,
    "unit", TRITON_PROTON_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "TRITON_PROTON_MASS_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_RELATIVE_ATOMIC_MASS.name,
    "value", TRITON_RELATIVE_ATOMIC_MASS.value,
    "uncertainty", TRITON_RELATIVE_ATOMIC_MASS.uncertainty,
    "unit", TRITON_RELATIVE_ATOMIC_MASS.unit
    );
    PyDict_SetItemString(d, "TRITON_RELATIVE_ATOMIC_MASS", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", TRITON_TO_PROTON_MAG_MOM_RATIO.name,
    "value", TRITON_TO_PROTON_MAG_MOM_RATIO.value,
    "uncertainty", TRITON_TO_PROTON_MAG_MOM_RATIO.uncertainty,
    "unit", TRITON_TO_PROTON_MAG_MOM_RATIO.unit
    );
    PyDict_SetItemString(d, "TRITON_TO_PROTON_MAG_MOM_RATIO", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", UNIFIED_ATOMIC_MASS_UNIT.name,
    "value", UNIFIED_ATOMIC_MASS_UNIT.value,
    "uncertainty", UNIFIED_ATOMIC_MASS_UNIT.uncertainty,
    "unit", UNIFIED_ATOMIC_MASS_UNIT.unit
    );
    PyDict_SetItemString(d, "UNIFIED_ATOMIC_MASS_UNIT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", VACUUM_ELECTRIC_PERMITTIVITY.name,
    "value", VACUUM_ELECTRIC_PERMITTIVITY.value,
    "uncertainty", VACUUM_ELECTRIC_PERMITTIVITY.uncertainty,
    "unit", VACUUM_ELECTRIC_PERMITTIVITY.unit
    );
    PyDict_SetItemString(d, "VACUUM_ELECTRIC_PERMITTIVITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", VACUUM_MAG_PERMEABILITY.name,
    "value", VACUUM_MAG_PERMEABILITY.value,
    "uncertainty", VACUUM_MAG_PERMEABILITY.uncertainty,
    "unit", VACUUM_MAG_PERMEABILITY.unit
    );
    PyDict_SetItemString(d, "VACUUM_MAG_PERMEABILITY", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", VON_KLITZING_CONSTANT.name,
    "value", VON_KLITZING_CONSTANT.value,
    "uncertainty", VON_KLITZING_CONSTANT.uncertainty,
    "unit", VON_KLITZING_CONSTANT.unit
    );
    PyDict_SetItemString(d, "VON_KLITZING_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WEAK_MIXING_ANGLE.name,
    "value", WEAK_MIXING_ANGLE.value,
    "uncertainty", WEAK_MIXING_ANGLE.uncertainty,
    "unit", WEAK_MIXING_ANGLE.unit
    );
    PyDict_SetItemString(d, "WEAK_MIXING_ANGLE", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT.name,
    "value", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT.value,
    "uncertainty", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT.uncertainty,
    "unit", WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT.unit
    );
    PyDict_SetItemString(d, "WIEN_FREQUENCY_DISPLACEMENT_LAW_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT.name,
    "value", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT.value,
    "uncertainty", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT.uncertainty,
    "unit", WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT.unit
    );
    PyDict_SetItemString(d, "WIEN_WAVELENGTH_DISPLACEMENT_LAW_CONSTANT", constant);
    Py_INCREF(constant);

    constant = Py_BuildValue("{s:s, s:d, s:d, s:s}",
    "name", W_TO_Z_MASS_RATIO.name,
    "value", W_TO_Z_MASS_RATIO.value,
    "uncertainty", W_TO_Z_MASS_RATIO.uncertainty,
    "unit", W_TO_Z_MASS_RATIO.unit
    );
    PyDict_SetItemString(d, "W_TO_Z_MASS_RATIO", constant);
    Py_INCREF(constant);

    return m;
}