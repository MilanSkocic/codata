module codata__version_capi
!! Version C API - autogenerated.
use iso_c_binding
implicit none
private

character(kind=c_char), protected, public, bind(C) :: codata_version_capi_version( 6) = &
["0", ".", "8", ".", "2", c_null_char]

end module codata__version_capi
