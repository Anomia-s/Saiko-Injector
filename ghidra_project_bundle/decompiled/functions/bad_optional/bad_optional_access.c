/**
 * Function: bad_optional_access
 * Address:  1405486c0
 * Signature: bad_optional_access * __thiscall bad_optional_access(bad_optional_access * this, longlong param_1)
 * Body size: 60 bytes
 */


bad_optional_access * __thiscall
std::bad_optional_access::bad_optional_access(bad_optional_access *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (bad_optional_access_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}

