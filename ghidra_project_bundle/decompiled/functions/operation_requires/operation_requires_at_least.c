/**
 * Function: operation_requires_at_least
 * Address:  1406e0900
 * Signature: undefined __thiscall operation_requires_at_least(void * this)
 * Body size: 627 bytes
 */


bool __thiscall operation_requires_at_least(void *this,byte param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *****pppppuVar5;
  char *pcVar6;
  void *_Src;
  longlong local_150 [2];
  undefined1 local_140 [8];
  basic_streambuf<char,std::char_traits<char>_> local_138 [3];
  longlong *local_120;
  longlong *local_118;
  longlong *local_100;
  ulonglong *local_f8;
  int *local_e8;
  ulonglong local_d0;
  uint local_c8;
  ios_base local_b8 [6];
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  bVar1 = *(byte *)((longlong)this + 0x29);
  if (bVar1 <= param_2) goto LAB_1406e0b46;
  FUN_1401e87c0(local_150,1);
  uVar3 = FUN_1400e5ec0(local_140,"This command list has type ");
  if ((ulonglong)*(byte *)((longlong)this + 0x29) < 3) {
    pcVar6 = (&PTR_s_GRAPHICS_141238768)[*(byte *)((longlong)this + 0x29)];
  }
  else {
    pcVar6 = "<INVALID>";
  }
  uVar3 = FUN_1400e5ec0(uVar3,pcVar6);
  uVar3 = FUN_1400e5ec0(uVar3,", but the \'");
  uVar3 = FUN_1400e5ec0(uVar3,param_3);
  uVar3 = FUN_1400e5ec0(uVar3,"\' operation requires at least ");
  if (param_2 < 3) {
    pcVar6 = (&PTR_s_GRAPHICS_141238768)[param_2];
  }
  else {
    pcVar6 = "<INVALID>";
  }
  FUN_1400e5ec0(uVar3,pcVar6);
  local_58 = (undefined8 *****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar4 = *local_f8, uVar4 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar4 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      if (_Src != (void *)0x0) goto LAB_1406e0a45;
    }
LAB_1406e0a5d:
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar4 < local_d0) {
      uVar4 = local_d0;
    }
    _Src = (void *)*local_118;
    if (_Src == (void *)0x0) goto LAB_1406e0a5d;
LAB_1406e0a45:
    uVar4 = uVar4 - (longlong)_Src;
    if (0xf < uVar4) {
      FUN_1400069b0(&local_58,uVar4);
      goto LAB_1406e0a5d;
    }
    local_48 = uVar4;
    memmove(&local_58,_Src,uVar4);
    *(undefined1 *)((longlong)&local_58 + uVar4) = 0;
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  pppppuVar5 = (undefined8 *****)local_58;
  if (local_40 < 0x10) {
    pppppuVar5 = &local_58;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppuVar5);
  if (0xf < local_40) {
    uVar4 = local_40 + 1;
    pppppuVar5 = (undefined8 *****)local_58;
    if (0xfff < uVar4) {
      pppppuVar5 = (undefined8 *****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppuVar5))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar5,uVar4);
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
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_138);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_138);
  std::ios_base::~ios_base(local_b8);
LAB_1406e0b46:
  return bVar1 <= param_2;
}

