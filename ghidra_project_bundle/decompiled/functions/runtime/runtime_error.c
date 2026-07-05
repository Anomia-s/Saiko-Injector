/**
 * Function: runtime_error
 * Address:  1402a8860
 * Signature: runtime_error * __thiscall runtime_error(runtime_error * this, undefined8 param_1)
 * Body size: 119 bytes
 */


runtime_error * __thiscall std::runtime_error::runtime_error(runtime_error *this,undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
                    /* inlined constructor: std::exception::exception */
  this->vftablePtr = (runtime_error_vftable *)&exception::vftable;
  (this->exception_data).offset_0x0 = 0;
  (this->exception_data).offset_0x8 = 0;
  local_18 = 1;
  local_20 = param_1;
  __std_exception_copy(&local_20,&this->exception_data);
  this->vftablePtr = &vftable;
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}

