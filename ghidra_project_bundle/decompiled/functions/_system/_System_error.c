/**
 * Function: _System_error
 * Address:  140004700
 * Signature: _System_error * __thiscall _System_error(_System_error * this, longlong param_1)
 * Body size: 70 bytes
 */


_System_error * __thiscall std::_System_error::_System_error(_System_error *this,longlong param_1)

{
  undefined **ppuVar1;
  
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (_System_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = *(void **)(param_1 + 0x18);
  (this->exception_data).offset_0x18 = ppuVar1;
  return this;
}

