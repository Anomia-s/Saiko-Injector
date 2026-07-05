/**
 * Function: logic_error
 * Address:  1401f7bb0
 * Signature: logic_error * __thiscall logic_error(logic_error * this, longlong param_1)
 * Body size: 60 bytes
 */


logic_error * __thiscall std::logic_error::logic_error(logic_error *this,longlong param_1)

{
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (logic_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  __std_exception_copy(param_1 + 8,&this->exception_data);
  this->vftablePtr = &vftable;
  return this;
}

