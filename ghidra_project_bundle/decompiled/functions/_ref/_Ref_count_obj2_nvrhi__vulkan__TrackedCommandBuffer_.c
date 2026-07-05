/**
 * Function: _Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer>
 * Address:  1406ede90
 * Signature: _Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> * __thiscall _Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer>(_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> * this, longlong * param_1)
 * Body size: 290 bytes
 */


_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> * __thiscall
std::_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer>::
_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer>
          (_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> *this,longlong *param_1)

{
  longlong *plVar1;
  _Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer>_vftable *p_Var2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  p_Var2 = this[1].vftablePtr;
  plVar4 = (longlong *)FUN_140b65d30(0x68);
  plVar4[1] = 0x100000001;
  *plVar4 = (longlong)&vftable;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = (longlong)p_Var2;
  local_3c = *(undefined4 *)((longlong)&this[3].vftablePtr + 4);
  local_50[0] = 0x27;
  local_48 = 0;
  local_40 = 3;
  iVar3 = (*DAT_1416b6fc8)(p_Var2->vfunction3,local_50,p_Var2->vfunction6,plVar4 + 3);
  if (iVar3 == 0) {
    local_60 = plVar4[3];
    local_70[0] = 0x28;
    local_68 = 0;
    local_58 = 0x100000000;
    iVar3 = (*DAT_1416b6fe0)((this[1].vftablePtr)->vfunction3,local_70,plVar4 + 2);
    if (iVar3 == 0) {
      *param_1 = (longlong)(plVar4 + 2);
      param_1[1] = (longlong)plVar4;
      return (_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> *)param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = plVar4 + 1;
  LOCK();
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    piVar5 = (int *)((longlong)plVar4 + 0xc);
    (**(code **)*plVar4)(plVar4);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return (_Ref_count_obj2<nvrhi::vulkan::TrackedCommandBuffer> *)param_1;
}

