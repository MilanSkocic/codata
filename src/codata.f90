! SPDX-License-Identifier: MIT

!=======================================================================
! MODULE: codata
!=======================================================================
!{{{1
module codata
!! Codata library - Fundamental Physical Constants.
!! Available constants for 2010, 2014, 2018 and 2022.
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

character(len=*), parameter, private :: v = '2.5.4'
character(len=:), allocatable, target, private :: vf
character(len=:), allocatable, target, private :: vc



contains
!-----------------------------------------------------------------------
! GET_VERSION() - DEPRECATED - WILL BE REMOVED IN 3.0
!-----------------------------------------------------------------------
!{{{2
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
!}}}
!-----------------------------------------------------------------------



!-----------------------------------------------------------------------
! VERSION()
!-----------------------------------------------------------------------
!{{{2
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
!}}}
!-----------------------------------------------------------------------

end module codata
