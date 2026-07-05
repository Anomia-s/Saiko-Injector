/**
 * Function: _Ref_count_obj2<nvrhi::vulkan::BufferChunk>
 * Address:  1407ca6b0
 * Signature: _Ref_count_obj2<nvrhi::vulkan::BufferChunk> * __thiscall _Ref_count_obj2<nvrhi::vulkan::BufferChunk>(_Ref_count_obj2<nvrhi::vulkan::BufferChunk> * this, longlong * param_1, undefined8 param_2)
 * Body size: 644 bytes
 */


_Ref_count_obj2<nvrhi::vulkan::BufferChunk> * __thiscall
std::_Ref_count_obj2<nvrhi::vulkan::BufferChunk>::_Ref_count_obj2<nvrhi::vulkan::BufferChunk>
          (_Ref_count_obj2<nvrhi::vulkan::BufferChunk> *this,longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined4 uStack_79;
  undefined5 uStack_75;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined1 uStack_57;
  undefined1 local_56;
  undefined2 uStack_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar6 = (undefined8 *)FUN_140b65d30(0x38);
  puVar6[1] = 0x100000001;
  *puVar6 = &vftable;
  plVar1 = puVar6 + 2;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)puVar6;
  local_90 = param_2;
  if (*(char *)&this[4].vftablePtr == '\x01') {
    uStack_75 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_68 = 0xf;
    local_60 = 0;
    uStack_5f = 0;
    uStack_5b = 0;
    uStack_57 = 0;
    local_56 = 0;
    uStack_55 = 0;
    local_50 = 1;
    local_4c = 0;
    local_48 = 0;
    FUN_1400069b0(&uStack_80,0x12);
    uStack_5f = CONCAT31(uStack_5f._1_3_,1);
    (**(code **)(this->vftablePtr->vfunction1 + 0x88))(this->vftablePtr,&local_40,&local_90);
    plVar4 = local_40;
    local_40 = (longlong *)0x0;
    plVar2 = (longlong *)*plVar1;
    *plVar1 = (longlong)plVar4;
    if ((plVar2 != (longlong *)0x0) &&
       ((**(code **)(*plVar2 + 0x10))(), plVar1 = local_40, local_40 != (longlong *)0x0)) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
    }
    puVar6[6] = 0;
    puVar6[4] = param_2;
  }
  else {
    local_88 = 0;
    uStack_75 = 0;
    local_68 = 0xf;
    local_60 = 0;
    uStack_5f = 0;
    uStack_5b = 0;
    uStack_57 = 0;
    local_56 = 0;
    uStack_55 = 0;
    local_50 = 1;
    local_48 = 0;
    local_4c = 0x200;
    uStack_70 = 0xb;
    uStack_80 = 0x4364616f6c7055;
    uStack_79 = 0x6b6e7568;
    uVar5 = (**(code **)(this->vftablePtr->vfunction1 + 0x1e8))(this->vftablePtr,0xb,0);
    uStack_5b = CONCAT13(uVar5,(undefined3)uStack_5b);
    local_56 = (**(code **)(this->vftablePtr->vfunction1 + 0x1e8))(this->vftablePtr,0xb,0);
    (**(code **)(this->vftablePtr->vfunction1 + 0x88))(this->vftablePtr,&local_40,&local_90);
    plVar4 = local_40;
    local_40 = (longlong *)0x0;
    plVar2 = (longlong *)*plVar1;
    *plVar1 = (longlong)plVar4;
    if ((plVar2 != (longlong *)0x0) &&
       ((**(code **)(*plVar2 + 0x10))(), plVar2 = local_40, local_40 != (longlong *)0x0)) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
    uVar7 = (**(code **)(this->vftablePtr->vfunction1 + 0x90))(this->vftablePtr,*plVar1,2);
    puVar6[6] = uVar7;
    puVar6[4] = param_2;
  }
  if (0xf < local_68) {
    lVar3 = CONCAT17((undefined1)uStack_79,uStack_80);
    uVar8 = local_68 + 1;
    lVar9 = lVar3;
    if (0xfff < uVar8) {
      lVar9 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar9)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar8 = local_68 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar9,uVar8);
  }
  return (_Ref_count_obj2<nvrhi::vulkan::BufferChunk> *)param_1;
}

