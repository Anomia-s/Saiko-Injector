/**
 * Function: vfunction65
 * Address:  14071e640
 * Signature: ulonglong __thiscall vfunction65(CommandList * this)
 * Body size: 378 bytes
 */


ulonglong __thiscall nvrhi::d3d12::CommandList::vfunction65(CommandList *this)

{
  longlong lVar1;
  longlong **pplVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  longlong *local_58;
  longlong *local_50;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar5 = StaticDescriptorHeap::vfunction10
                     ((StaticDescriptorHeap *)((this->CommandList_data).offset_0x10 + 0x180));
  plVar6 = StaticDescriptorHeap::vfunction10
                     ((StaticDescriptorHeap *)((this->CommandList_data).offset_0x10 + 0x240));
  bVar3 = (longlong *)(this->CommandList_data).offset_0xa80 != plVar6;
  bVar4 = (longlong *)(this->CommandList_data).offset_0xa78 != plVar5;
  if (bVar3 || bVar4) {
    plVar7 = *(longlong **)((this->CommandList_data).offset_0x1e0 + 8);
    local_58 = plVar5;
    local_50 = plVar6;
    (**(code **)(*plVar7 + 0xe0))(plVar7,2,&local_58);
    (this->CommandList_data).offset_0xa78 = plVar5;
    (this->CommandList_data).offset_0xa80 = plVar6;
    lVar1 = (this->CommandList_data).offset_0x200;
    local_40 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pplVar2 = *(longlong ***)(lVar1 + 0x48);
    if (pplVar2 == *(longlong ***)(lVar1 + 0x50)) {
      FUN_1406f5260(lVar1 + 0x40,pplVar2,&local_40);
      plVar7 = local_40;
    }
    else {
      plVar7 = (longlong *)0x0;
      if (pplVar2 == &local_40) {
        plVar7 = plVar5;
        plVar5 = (longlong *)0x0;
      }
      *pplVar2 = plVar5;
      *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 8;
    }
    if (plVar7 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar7 + 0x10))();
    }
    lVar1 = (this->CommandList_data).offset_0x200;
    local_40 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pplVar2 = *(longlong ***)(lVar1 + 0x48);
    if (pplVar2 == *(longlong ***)(lVar1 + 0x50)) {
      FUN_1406f5260(lVar1 + 0x40,pplVar2,&local_40);
      plVar5 = local_40;
    }
    else {
      plVar5 = (longlong *)0x0;
      if (pplVar2 == &local_40) {
        plVar5 = plVar6;
        plVar6 = (longlong *)0x0;
      }
      *pplVar2 = plVar6;
      *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + 8;
    }
    if (plVar5 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3 || bVar4) & 0xffffffff;
}

