/**
 * Function: a_command_list_must_be_opened_before_any_rend
 * Address:  1406e04d0
 * Signature: undefined __thiscall a_command_list_must_be_opened_before_any_rend(void * this)
 * Body size: 538 bytes
 */


bool __thiscall a_command_list_must_be_opened_before_any_rend(void *this)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *****pppppuVar5;
  char *pcVar6;
  void *_Src;
  longlong local_140 [2];
  undefined1 local_130 [8];
  basic_streambuf<char,std::char_traits<char>_> local_128 [3];
  longlong *local_110;
  longlong *local_108;
  longlong *local_f0;
  ulonglong *local_e8;
  int *local_d8;
  ulonglong local_c0;
  uint local_b8;
  ios_base local_a8 [6];
  undefined8 ****local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  iVar1 = *(int *)((longlong)this + 0x2c);
  if (iVar1 == 1) goto LAB_1406e06bf;
  FUN_1401e87c0(local_140,1);
  uVar3 = FUN_1400e5ec0(local_130,
                        "A command list must be opened before any rendering commands can be executed. Actual state: "
                       );
  if ((ulonglong)*(uint *)((longlong)this + 0x2c) < 3) {
    pcVar6 = (&PTR_s_INITIAL_141238750)[*(uint *)((longlong)this + 0x2c)];
  }
  else {
    pcVar6 = "<INVALID>";
  }
  FUN_1400e5ec0(uVar3,pcVar6);
  local_48 = (undefined8 *****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  if (((local_b8 & 0x22) == 2) || (uVar4 = *local_e8, uVar4 == 0)) {
    if (((local_b8 & 4) == 0) && (*local_f0 != 0)) {
      uVar4 = *local_f0 + (longlong)*local_d8;
      _Src = (void *)*local_110;
      if (_Src != (void *)0x0) goto LAB_1406e05be;
    }
LAB_1406e05d6:
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  else {
    if (uVar4 < local_c0) {
      uVar4 = local_c0;
    }
    _Src = (void *)*local_108;
    if (_Src == (void *)0x0) goto LAB_1406e05d6;
LAB_1406e05be:
    uVar4 = uVar4 - (longlong)_Src;
    if (0xf < uVar4) {
      FUN_1400069b0(&local_48,uVar4);
      goto LAB_1406e05d6;
    }
    local_38 = uVar4;
    memmove(&local_48,_Src,uVar4);
    *(undefined1 *)((longlong)&local_48 + uVar4) = 0;
    plVar2 = *(longlong **)((longlong)this + 0x20);
  }
  pppppuVar5 = (undefined8 *****)local_48;
  if (local_30 < 0x10) {
    pppppuVar5 = &local_48;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppuVar5);
  if (0xf < local_30) {
    uVar4 = local_30 + 1;
    pppppuVar5 = (undefined8 *****)local_48;
    if (0xfff < uVar4) {
      pppppuVar5 = (undefined8 *****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pppppuVar5))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = local_30 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar5,uVar4);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_140 + (longlong)*(int *)(local_140[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_128 + (longlong)*(int *)(local_140[0] + 4) + -0x1c) =
       *(int *)(local_140[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_128[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_128);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_128);
  std::ios_base::~ios_base(local_a8);
LAB_1406e06bf:
  return iVar1 == 1;
}

