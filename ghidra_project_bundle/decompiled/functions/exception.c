/**
 * Function: exception
 * Address:  140001930
 * Signature: exception * __thiscall exception(exception * this, longlong param_1)
 * Body size: 50 bytes
 */


exception * __thiscall std::exception::exception(exception *this,longlong param_1)

{
  this->vftablePtr = &vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  return this;
}

