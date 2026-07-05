/**
 * Function: cannot_clear_buffer
 * Address:  14072bf30
 * Signature: void __thiscall cannot_clear_buffer(void * this, longlong * param_1, undefined4 param_2)
 * Body size: 856 bytes
 */


void __thiscall cannot_clear_buffer(void *this,longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [8];
  basic_streambuf<char,std::char_traits<char>_> local_150 [3];
  undefined8 *local_138;
  undefined8 *local_130;
  longlong *local_118;
  ulonglong *local_110;
  int *local_100;
  ulonglong local_e8;
  uint local_e0;
  ios_base local_d0 [6];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_1 + 0x51) != '\0') {
    if (*(char *)((longlong)this + 0x1b8) == '\x01') {
      FUN_1407cdb60(this,param_1,0x40);
      *(undefined1 *)((longlong)this + 0xa7c) = 1;
    }
    nvrhi::d3d12::CommandList::vfunction59(this);
    nvrhi::d3d12::CommandList::vfunction65(this);
    iVar3 = FUN_14072a9b0(param_1);
    lVar8 = *(longlong *)((longlong)this + 0x208);
    local_168 = param_1;
    (**(code **)(*param_1 + 8))();
    puVar1 = *(undefined8 **)(lVar8 + 0x30);
    if (puVar1 == *(undefined8 **)(lVar8 + 0x38)) {
      FUN_1406f5260(lVar8 + 0x28,puVar1,&local_168);
      plVar7 = local_168;
    }
    else {
      plVar7 = (longlong *)0x0;
      plVar2 = param_1;
      if (puVar1 == &local_168) {
        plVar7 = param_1;
        plVar2 = (longlong *)0x0;
      }
      *puVar1 = plVar2;
      *(longlong *)(lVar8 + 0x30) = *(longlong *)(lVar8 + 0x30) + 8;
    }
    if (plVar7 != (longlong *)0x0) {
      local_168 = (longlong *)0x0;
      (**(code **)(*plVar7 + 0x10))();
    }
    local_168 = (longlong *)CONCAT44(param_2,param_2);
    plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x1e8) + 8);
    lVar8 = param_1[0xe];
    uStack_160 = param_2;
    uStack_15c = param_2;
    nvrhi::d3d12::StaticDescriptorHeap::vfunction6
              ((StaticDescriptorHeap *)(*(longlong *)((longlong)this + 0x18) + 0x180),&local_68,
               iVar3);
    nvrhi::d3d12::StaticDescriptorHeap::vfunction8
              ((StaticDescriptorHeap *)(*(longlong *)((longlong)this + 0x18) + 0x180),&local_60,
               iVar3);
    (**(code **)(*plVar7 + 0x188))(plVar7,local_60,local_68,lVar8,&local_168,0,0);
    return;
  }
  FUN_1401e87c0(&local_168,1);
  uVar4 = FUN_1400e5ec0(local_158,"Cannot clear buffer ");
  uVar5 = FUN_140527b30(param_1 + 6);
  uVar4 = FUN_1400e5ec0(uVar4,uVar5);
  FUN_1400e5ec0(uVar4," because it was created with canHaveUAVs = false");
  uVar4 = *(undefined8 *)((longlong)this + 0x10);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_e0 & 0x22) == 2) || (uVar6 = *local_110, uVar6 == 0)) {
    if (((local_e0 & 4) != 0) || (*local_118 == 0)) goto LAB_14072c1bb;
    uVar6 = *local_118 + (longlong)*local_100;
    _Src = (void *)*local_138;
  }
  else {
    if (uVar6 < local_e8) {
      uVar6 = local_e8;
    }
    _Src = (void *)*local_130;
  }
  if (_Src != (void *)0x0) {
    uVar6 = uVar6 - (longlong)_Src;
    if (uVar6 < 0x10) {
      local_48 = uVar6;
      memmove(local_58,_Src,uVar6);
      local_58[uVar6] = 0;
    }
    else {
      FUN_1400069b0(local_58,uVar6);
    }
  }
LAB_14072c1bb:
  FUN_14053e350(uVar4,local_58);
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    lVar8 = local_58._0_8_;
    if (0xfff < uVar6) {
      lVar8 = *(longlong *)(local_58._0_8_ + -8);
      if (0x1f < (ulonglong)((local_58._0_8_ + -8) - lVar8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar8,uVar6);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)&local_168 + (longlong)*(int *)((longlong)local_168 + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_16c + (longlong)*(int *)((longlong)local_168 + 4)) =
       *(int *)((longlong)local_168 + 4) + -0x98;
  local_150[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_150);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_150);
  std::ios_base::~ios_base(local_d0);
  return;
}

