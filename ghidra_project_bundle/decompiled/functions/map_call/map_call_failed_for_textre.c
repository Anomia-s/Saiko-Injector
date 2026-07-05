/**
 * Function: map_call_failed_for_textre
 * Address:  140723ea0
 * Signature: longlong __thiscall map_call_failed_for_textre(void * this, longlong param_1, undefined8 param_2, char param_3, ulonglong * param_4)
 * Body size: 994 bytes
 */


longlong __thiscall
map_call_failed_for_textre
          (void *this,longlong param_1,undefined8 param_2,char param_3,ulonglong *param_4)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iStack_1bc;
  longlong local_1b8 [2];
  undefined1 local_1a8 [8];
  basic_streambuf<char,std::char_traits<char>_> local_1a0 [3];
  undefined8 *local_188;
  undefined8 *local_180;
  longlong *local_168;
  ulonglong *local_160;
  int *local_150;
  ulonglong local_138;
  uint local_130;
  ios_base local_120 [6];
  undefined1 local_c0 [24];
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1406dfb10(param_2,local_c0,param_1 + 0x10);
  local_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uVar6 = (ulonglong)(uint)(local_a4 * *(int *)(param_1 + 0x20) + local_a8);
  local_1b8[0] = 0;
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x130))
            (*(longlong **)((longlong)this + 0x10),param_1 + 0x80,uVar6,1,
             *(undefined8 *)(*(longlong *)(param_1 + 200) + uVar6 * 8),&uStack_78,0,0,local_1b8);
  local_88 = (int)uStack_78;
  lStack_80 = local_1b8[0];
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14053e390(*(longlong *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                  *(undefined8 *)((longlong)this + 0x490));
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  local_98 = lStack_80 + local_88;
  local_a0 = (longlong)local_88;
  if (param_3 != '\x01') {
    local_98 = 0;
    local_a0 = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x70);
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,&local_a0);
  if (-1 < iVar2) {
    *(undefined8 *)(param_1 + 0x110) = uStack_68;
    *(ulonglong *)(param_1 + 0x118) = CONCAT44(uStack_5c,local_60);
    *(undefined8 *)(param_1 + 0x100) = uStack_78;
    *(undefined8 *)(param_1 + 0x108) = uStack_70;
    *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_84,local_88);
    *(longlong *)(param_1 + 0xf8) = lStack_80;
    *(char *)(param_1 + 0x120) = param_3;
    *param_4 = (ulonglong)local_60;
    return *(int *)(param_1 + 0xf0) + local_90;
  }
  FUN_1401e87c0(local_1b8,1);
  uVar3 = FUN_1400e5ec0(local_1a8,"Map call failed for textre ");
  uVar4 = FUN_140527b30(param_1 + 0x30);
  uVar3 = FUN_1400e5ec0(uVar3,uVar4);
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar3,", HRESULT = 0x");
  lVar5 = (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&this_00[1].vbtablePtr + lVar5) =
       *(uint *)((longlong)&this_00[1].vbtablePtr + lVar5) & 0xfffff1ff | 0x800;
  std::setw((__int64)&local_58);
  (*local_58)((longlong)&this_00->vbtablePtr +
              (longlong)this_00->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
              uStack_50);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar2);
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_130 & 0x22) == 2) || (uVar6 = *local_160, uVar6 == 0)) {
    if (((local_130 & 4) != 0) || (*local_168 == 0)) goto LAB_1407241b2;
    uVar6 = *local_168 + (longlong)*local_150;
    _Src = (void *)*local_188;
  }
  else {
    if (uVar6 < local_138) {
      uVar6 = local_138;
    }
    _Src = (void *)*local_180;
  }
  if (_Src != (void *)0x0) {
    uVar6 = uVar6 - (longlong)_Src;
    if (uVar6 < 0x10) {
      local_48 = uVar6;
      memmove(&local_58,_Src,uVar6);
      *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
    }
    else {
      FUN_1400069b0(&local_58,uVar6);
    }
  }
LAB_1407241b2:
  FUN_14053e350((longlong)this + 0x10,&local_58);
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    pcVar7 = local_58;
    if (0xfff < uVar6) {
      pcVar7 = *(code **)(local_58 + -8);
      if ((code *)0x1f < local_58 + (-8 - (longlong)pcVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar7,uVar6);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_1bc + (longlong)*(int *)(local_1b8[0] + 4)) =
       *(int *)(local_1b8[0] + 4) + -0x98;
  local_1a0[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_1a0);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_1a0);
  std::ios_base::~ios_base(local_120);
  return 0;
}

