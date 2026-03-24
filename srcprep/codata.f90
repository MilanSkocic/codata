$BLOCK comment --file codata.3.prep
NAME
    codata - libray for fundamental physical constants

LIBRARY
    codata (-libcodata, -lcodata)

SYNOPSIS
    use codata
    include "codata.h"
    import pycodata

DESCRIPTION
    codata is a Fortran library providing the fundamental physical
    constants according to CODATA
    https://www.nist.gov/programs-projects/codata-values-fundamental-physical-constants.
    A C API allows usage from C, or can be used as a basis for other wrappers.
    Python wrapper allows easy usage from Python.

    The latest codata constants 2022
    https://pml.nist.gov/cuu/Constants were integrated in
    stdlib https://github.com/fortran-lang/stdlib/releases/tag/ since
    version 0.7.0.
    The constants are implemented as derived type which carries the name,
    the value, the uncertainty and the unit.
    This library is complementary to the constants defined in the stdlib
    by providing older values for the constants.
    The latest values (2022) do not have the year as a suffix in their name.
    Older values (2010, 2014, 2018) can be used and they feature the
    year as a suffix in their name.

    All codata (physical) constants are defined as a derived type codata_constant_type.
    All the codata constants are provided as double precision reals.
    The names are quite long and can be aliased with shorter names.
    The derived type codata_constant_type defines 4 members and 2 procedures.

        type :: codata_constant_type
            !! Derived type for representing a Codata constant.
            character(len=64) :: name ! Name of the constant
            real(dp) :: value         ! Value of the constant
            real(dp) :: uncertainty   ! Uncertainty of the constant
            character(len=32) :: unit ! Unit of the constant
        contains
            procedure :: print
            procedure :: to_real_sp
            procedure :: to_real_dp
            generic :: to_real => to_real_sp, to_real_dp
        end type codata_constant_type

    A module level interface to_real is available for getting the constant value
    or uncertainty of a constant.

        type, bind(C) :: capi_constant_type
            !! Derived type for representing a Codata constant in C.
            character(kind=c_char) :: name(65)
            real(c_double) :: value
            real(c_double) :: uncertainty
            character(kind=c_char) :: unit(33)
        end type capi_constant_type

    The C API exposes a structure codata_constant_type that defines
    the same members as in Fortran.

        typedef struct codata_constant_type{
            char name[65];
            double value;
            double uncertainty;
            char unit[33];
        }cct;

    The Python wrapper encapsulates the members in a dictionnary with
    the keys name, value, uncertainty and unit.

    References

        o Peter J Mohr, Barry N Taylor, and David B. Newell. CODATA recommended values of the
          fundamental physical constants: 2010. Review of Modern Physics, 84, 2012.

        o Peter J Mohr, Barry N Taylor, and David B. Newell. CODATA recommended values of the
          fundamental physical constants: 2014.
          Journal of Physical and Chemical Reference Data, 45, 2016.

        o Peter J Mohr, Barry N Taylor, and David B. Newell. CODATA recommended values of the
          fundamental physical constants: 2018. Review of Modern Physics, 93, 2021.

        o Peter Mohr, David Newell, Barry Taylor, and Eite Tiesinga. CODATA Recommended Values of
          the Fundamental Physical Constants: 2022.

        o Peter J. Mohr, David B. Newell, Barry N. Taylor, and Eite Tiesinga. CODATA recommended
          values of the fundamental physical constants: 2022.
          Reviews of Modern Physics, 97(2):025002, 2025.

NOTES
    To use codata within your fpm https://github.com/fortran-lang/fpm
    project, add the following lines to your file:

        [dependencies]
        codata = { git="https://github.com/MilanSkocic/codata.git" }

EXAMPLE
$INCLUDE ./example.txt

SEE ALSO
    gsl(3), codata(1)

CODATA 2022
$INCLUDE ../data/codata_constants_2022.mantxt

CODATA 2018
$INCLUDE ../data/codata_constants_2018.mantxt

CODATA 2014
$INCLUDE ../data/codata_constants_2014.mantxt

CODATA 2010
$INCLUDE ../data/codata_constants_2010.mantxt
$ENDBLOCK
module codata
!! Codata library - Fundamental Physical Constants.
!! Available constants from 2010, 2014, 2018 and 2022.
!! The latest values (2022) do not have the year as a suffix in their name.
!! Older values can be used and they feature the year as a suffix in their name.
use, intrinsic :: iso_c_binding, only: c_ptr, c_null_char, c_loc
use codata__constants_2022
use codata__constants_2018
use codata__constants_2014
use codata__constants_2010
use codata__constants_type
implicit none(type,external)
public

$IFDEF FPM_VERSION
$IMPORT FPM_VERSION
character(len=*), parameter, private :: v = '${FPM_VERSION}'
$ENDIF
character(len=:), allocatable, target, private :: vf
character(len=:), allocatable, target, private :: vc

contains
!=======================================================================
! GET_VERSION() - DEPRECATED - WILL BE REMOVED IN 3.0
!=======================================================================
function get_version()result(fptr)
!! Get the version.
!! Deprecated. It will be removed in the next major release 3.0 when
!! the new codata constants will be released (2026).
!! Use version() instead.
character(len=:), pointer :: fptr !! Pointer to a string (=>version).
if(allocated(vf))then
    deallocate(vf)
endif
allocate(character(len=len(v)) :: vf)
vf = v
fptr => vf
end function get_version
!-----------------------------------------------------------------------
function capi_get_version()bind(C,name="codata_get_version")result(cptr)
!! C API - Get the version
type(c_ptr) :: cptr !! C pointer to a string indicating the version.
character(len=:), pointer :: fptr
fptr => get_version()
if(allocated(vc))then
    deallocate(vc)
endif
allocate(character(len=len(fptr)+1) :: vc)
vc = fptr // c_null_char
cptr = c_loc(vc)
end function capi_get_version
!=======================================================================


!=======================================================================
! VERSION()
!=======================================================================
function version()result(fptr)
!! Get the version.
character(len=:), pointer :: fptr !! Pointer to a string (=>version).
if(allocated(vf))then
    deallocate(vf)
endif
allocate(character(len=len(v)) :: vf)
vf = v
fptr => vf
end function version
!-----------------------------------------------------------------------
function capi_version()bind(C,name="codata_version")result(cptr)
!! C API - Get the version
type(c_ptr) :: cptr !! C pointer to a string indicating the version.
character(len=:), pointer :: fptr
fptr => version()
if(allocated(vc))then
    deallocate(vc)
endif
allocate(character(len=len(fptr)+1) :: vc)
vc = fptr // c_null_char
cptr = c_loc(vc)
end function capi_version
!=======================================================================
end module codata
