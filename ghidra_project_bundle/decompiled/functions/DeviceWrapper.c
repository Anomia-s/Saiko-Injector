/**
 * Function: DeviceWrapper
 * Address:  140512c80
 * Signature: DeviceWrapper * __thiscall DeviceWrapper(DeviceWrapper * this, longlong * param_1)
 * Body size: 120 bytes
 */


DeviceWrapper * __thiscall
nvrhi::validation::DeviceWrapper::DeviceWrapper(DeviceWrapper *this,longlong *param_1)

{
  DeviceWrapper_vftable *pDVar1;
  vfunction3 *pvVar2;
  
  pDVar1 = (DeviceWrapper_vftable *)FUN_140b65d30(0x28);
  *(undefined4 *)&pDVar1->vfunction2 = 1;
  pDVar1->vfunction1 = (vfunction1 *)&vftable;
  pDVar1->vfunction3 = (vfunction3 *)param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  pvVar2 = (vfunction3 *)(**(code **)(*param_1 + 0x210))(param_1);
  pDVar1->vfunction3 = pvVar2;
  *(undefined4 *)&pDVar1->vfunction5 = 0;
  this->vftablePtr = pDVar1;
  return this;
}

