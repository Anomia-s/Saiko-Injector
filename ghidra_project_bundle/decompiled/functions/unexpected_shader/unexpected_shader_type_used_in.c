/**
 * Function: unexpected_shader_type_used_in
 * Address:  14051d4c0
 * Signature: undefined __thiscall unexpected_shader_type_used_in(void * this)
 * Body size: 689 bytes
 */


bool __thiscall
unexpected_shader_type_used_in(void *this,undefined4 param_2,short *param_3,undefined8 param_4)

{
  short sVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *****pppppuVar6;
  short *psVar7;
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
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  sVar1 = *param_3;
  if ((short)param_2 == sVar1) goto LAB_14051d741;
  FUN_1401e87c0(local_150,1);
  uVar3 = FUN_1400e5ec0(local_140,"Unexpected shader type used in ");
  uVar3 = FUN_1400e5ec0(uVar3,param_4);
  uVar3 = FUN_1400e5ec0(uVar3,": expected shaderType = ");
  uVar4 = closesthit(param_2);
  uVar3 = FUN_1400e5ec0(uVar3,uVar4);
  uVar3 = FUN_1400e5ec0(uVar3,", actual shaderType = ");
  uVar4 = closesthit(*param_3);
  uVar3 = FUN_1400e5ec0(uVar3,uVar4);
  uVar3 = FUN_1400e5ec0(uVar3," in ");
  uVar4 = FUN_140527b30(param_3 + 4);
  uVar3 = FUN_1400e5ec0(uVar3,uVar4);
  uVar3 = FUN_1400e5ec0(uVar3,":");
  if (*(ulonglong *)(param_3 + 0x20) < 0x10) {
    psVar7 = param_3 + 0x14;
  }
  else {
    psVar7 = *(short **)(param_3 + 0x14);
  }
  FUN_1400e73f0(uVar3,psVar7,*(undefined8 *)(param_3 + 0x1c));
  local_58 = (undefined8 *****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar5 = *local_f8, uVar5 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar5 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      if (_Src != (void *)0x0) goto LAB_14051d640;
    }
LAB_14051d658:
    plVar2 = *(longlong **)((longlong)this + 0x18);
  }
  else {
    if (uVar5 < local_d0) {
      uVar5 = local_d0;
    }
    _Src = (void *)*local_118;
    if (_Src == (void *)0x0) goto LAB_14051d658;
LAB_14051d640:
    uVar5 = uVar5 - (longlong)_Src;
    if (0xf < uVar5) {
      FUN_1400069b0(&local_58,uVar5);
      goto LAB_14051d658;
    }
    local_48 = uVar5;
    memmove(&local_58,_Src,uVar5);
    *(undefined1 *)((longlong)&local_58 + uVar5) = 0;
    plVar2 = *(longlong **)((longlong)this + 0x18);
  }
  pppppuVar6 = (undefined8 *****)local_58;
  if (local_40 < 0x10) {
    pppppuVar6 = &local_58;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppuVar6);
  if (0xf < local_40) {
    uVar5 = local_40 + 1;
    pppppuVar6 = (undefined8 *****)local_58;
    if (0xfff < uVar5) {
      pppppuVar6 = (undefined8 *****)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppuVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppuVar6,uVar5);
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
LAB_14051d741:
  return (short)param_2 == sVar1;
}

