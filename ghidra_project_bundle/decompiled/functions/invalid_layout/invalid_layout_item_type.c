/**
 * Function: invalid_layout_item_type
 * Address:  1405261f0
 * Signature: undefined __thiscall invalid_layout_item_type(void * this)
 * Body size: 732 bytes
 */


void __thiscall
invalid_layout_item_type
          (void *this,byte param_2,undefined4 *param_3,longlong param_4,longlong param_5)

{
  void *_Src;
  uint uVar1;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  undefined8 local_120;
  undefined8 local_118 [3];
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  switch(param_2) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 0xc:
    *param_3 = 0;
    uVar1 = param_3[2];
    uVar3 = *(uint *)(param_4 + 0x44);
    if (uVar1 < *(uint *)(param_4 + 0x44)) {
      uVar3 = uVar1;
    }
    *(uint *)(param_4 + 0x44) = uVar3;
    if (uVar1 < *(uint *)(param_4 + 0x48)) {
      uVar1 = *(uint *)(param_4 + 0x48);
    }
    *(uint *)(param_4 + 0x48) = uVar1;
    break;
  case 2:
  case 4:
  case 6:
  case 8:
  case 0xe:
    *param_3 = 2;
    uVar1 = param_3[2];
    uVar3 = *(uint *)(param_4 + 0x54);
    if (uVar1 < *(uint *)(param_4 + 0x54)) {
      uVar3 = uVar1;
    }
    *(uint *)(param_4 + 0x54) = uVar3;
    if (uVar1 < *(uint *)(param_4 + 0x58)) {
      uVar1 = *(uint *)(param_4 + 0x58);
    }
    *(uint *)(param_4 + 0x58) = uVar1;
    break;
  case 9:
  case 10:
  case 0xd:
    *param_3 = 3;
    uVar1 = param_3[2];
    uVar3 = *(uint *)(param_4 + 0x5c);
    if (uVar1 < *(uint *)(param_4 + 0x5c)) {
      uVar3 = uVar1;
    }
    if (uVar1 < *(uint *)(param_4 + 0x60)) {
      uVar1 = *(uint *)(param_4 + 0x60);
    }
    *(uint *)(param_4 + 0x5c) = uVar3;
    *(uint *)(param_4 + 0x60) = uVar1;
    if (param_2 == 10) {
      *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
    }
    break;
  case 0xb:
    *param_3 = 1;
    uVar1 = param_3[2];
    uVar3 = *(uint *)(param_4 + 0x4c);
    if (uVar1 < *(uint *)(param_4 + 0x4c)) {
      uVar3 = uVar1;
    }
    *(uint *)(param_4 + 0x4c) = uVar3;
    if (uVar1 < *(uint *)(param_4 + 0x50)) {
      uVar1 = *(uint *)(param_4 + 0x50);
    }
    *(uint *)(param_4 + 0x50) = uVar1;
    break;
  default:
    FUN_1401e87c0(local_150,1);
    this_00 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_1400e5ec0(local_140,"Invalid layout item type ");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,(uint)param_2);
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_c8 & 0x22) == 2) || (uVar5 = *local_f8, uVar5 == 0)) {
      if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
        puVar2 = &local_120;
        uVar5 = *local_100 + (longlong)*local_e8;
        goto LAB_14052636b;
      }
    }
    else {
      puVar2 = local_118;
      if (uVar5 < local_d0) {
        uVar5 = local_d0;
      }
LAB_14052636b:
      _Src = *(void **)*puVar2;
      if (_Src != (void *)0x0) {
        uVar5 = uVar5 - (longlong)_Src;
        if (uVar5 < 0x10) {
          local_48 = uVar5;
          memmove(&local_58,_Src,uVar5);
          *(undefined1 *)((longlong)&local_58 + uVar5) = 0;
        }
        else {
          FUN_1400069b0(&local_58,uVar5);
        }
      }
    }
    ppppuVar4 = (undefined8 ****)local_58;
    if (local_40 < 0x10) {
      ppppuVar4 = &local_58;
    }
    (**(code **)(*(longlong *)this + 8))(this,2,ppppuVar4);
    if (0xf < local_40) {
      uVar5 = local_40 + 1;
      ppppuVar4 = (undefined8 ****)local_58;
      if (0xfff < uVar5) {
        ppppuVar4 = (undefined8 ****)local_58[-1];
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar5 = local_40 + 0x28;
      }
      thunk_FUN_140b68ba8(ppppuVar4,uVar5);
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)local_150 + (longlong)*(int *)(local_150[0] + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_138 + (longlong)*(int *)(local_150[0] + 4) + -0x1c) =
         *(int *)(local_150[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_138[0] = (basic_streambuf<char,std::char_traits<char>_>)
                   &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
    ;
    FUN_1401da8b0(local_138);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_138);
    std::ios_base::~ios_base(local_b8);
  }
  FUN_140526560(param_4,local_150,param_3);
  if (local_150[0] != *(longlong *)(param_4 + 8)) {
    param_4 = param_5;
  }
  unordered_map_set_too_long(param_4,local_150,param_3);
  return;
}

