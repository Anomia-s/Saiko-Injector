/**
 * Function: SystemError
 * Address:  140538b50
 * Signature: SystemError * __thiscall SystemError(SystemError * this, undefined4 * param_1)
 * Body size: 70 bytes
 */


SystemError * __thiscall vk::SystemError::SystemError(SystemError *this,undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* inlined constructor: vk::Error::Error */
  this->vftablePtr = (SystemError_vftable_for_Error *)&Error::vftable;
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1405394b0(&this->vftablePtr,&local_18);
  this->vftablePtr = &vftable_for_Error;
  this->vftablePtr = &vftable_for_system_error;
  return this;
}

