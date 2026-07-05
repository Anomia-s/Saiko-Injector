/**
 * Function: system_error
 * Address:  1400046b0
 * Signature: system_error * __thiscall system_error(system_error * this, longlong param_1)
 * Body size: 80 bytes
 */


system_error * __thiscall std::system_error::system_error(system_error *this,longlong param_1)

{
  undefined **ppuVar1;
  
                    /* inlined constructor: std::exception::exception
                       inlined constructor: std::_System_error::_System_error */
  this->vftablePtr = (system_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = (system_error_vftable *)&_System_error::vftable;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = *(void **)(param_1 + 0x18);
  (this->exception_data).offset_0x18 = ppuVar1;
  this->vftablePtr = &vftable;
  return this;
}

