/**
 * Function: future_error
 * Address:  1402a84d0
 * Signature: future_error * __thiscall future_error(future_error * this, longlong param_1)
 * Body size: 70 bytes
 */


future_error * __thiscall std::future_error::future_error(future_error *this,longlong param_1)

{
  undefined **ppuVar1;
  
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (future_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  (this->exception_data).offset_0x10 = *(void **)(param_1 + 0x18);
  (this->exception_data).offset_0x18 = ppuVar1;
  return this;
}

