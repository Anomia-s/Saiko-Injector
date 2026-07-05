/**
 * Function: map_call_failed_for_buffer
 * Address:  14072ad00
 * Signature: undefined8 __thiscall map_call_failed_for_buffer(void * this, longlong param_1, char param_2)
 * Body size: 724 bytes
 */


undefined8 __thiscall map_call_failed_for_buffer(void *this,longlong param_1,char param_2)

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
  int iStack_16c;
  longlong local_168 [2];
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_14053e390(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                  *(undefined8 *)((longlong)this + 0x490));
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (param_2 == '\x01') {
    local_68 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    local_68 = 0;
  }
  local_70 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x40))
                    (*(longlong **)(param_1 + 0x70),0,&local_70);
  if (-1 < iVar2) {
    return local_60;
  }
  FUN_1401e87c0(local_168,1);
  uVar3 = FUN_1400e5ec0(local_158,"Map call failed for buffer ");
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
  if (((local_e0 & 0x22) == 2) || (uVar6 = *local_110, uVar6 == 0)) {
    if (((local_e0 & 4) != 0) || (*local_118 == 0)) goto LAB_14072af04;
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
      memmove(&local_58,_Src,uVar6);
      *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
    }
    else {
      FUN_1400069b0(&local_58,uVar6);
    }
  }
LAB_14072af04:
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
   ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
       *(int *)(local_168[0] + 4) + -0x98;
  local_150[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_150);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_150);
  std::ios_base::~ios_base(local_d0);
  return 0;
}

