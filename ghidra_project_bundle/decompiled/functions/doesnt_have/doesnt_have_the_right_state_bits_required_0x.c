/**
 * Function: doesnt_have_the_right_state_bits_required_0x
 * Address:  1407c6bd0
 * Signature: undefined __thiscall doesnt_have_the_right_state_bits_required_0x(void * this)
 * Body size: 680 bytes
 */


/* WARNING: Type propagation algorithm not settling */

bool __thiscall
doesnt_have_the_right_state_bits_required_0x
          (uint param_1,uint param_2,char param_3,undefined8 param_4,longlong *param_5)

{
  void *_Src;
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar8;
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
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((param_2 & param_1) == param_2) goto LAB_1407c6e49;
  FUN_1401e87c0(local_150,1);
  uVar2 = FUN_1400e5ec0(local_140,"Permanent ");
  pcVar1 = "Failed to create placed buffer ";
  if (param_3 != '\0') {
    pcVar1 = "Failed to create placed texture ";
  }
  uVar2 = FUN_1400e5ec0(uVar2,pcVar1 + 0x18);
  uVar3 = FUN_140527b30(param_4);
  uVar2 = FUN_1400e5ec0(uVar2,uVar3);
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_1400e5ec0(uVar2," doesn\'t have the right state bits. Required: 0x");
  lVar7 = (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar4[1].vbtablePtr + lVar7) =
       *(uint *)((longlong)&pbVar4[1].vbtablePtr + lVar7) & 0xfffff1ff | 0x800;
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2);
  pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar5,", present: 0x");
  lVar7 = (longlong)pbVar4->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(uint *)((longlong)&pbVar4[1].vbtablePtr + lVar7) =
       *(uint *)((longlong)&pbVar4[1].vbtablePtr + lVar7) & 0xfffff1ff | 0x800;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_1);
  local_58 = (undefined8 *******)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  if (((local_c8 & 0x22) == 2) || (uVar6 = *local_f8, uVar6 == 0)) {
    if (((local_c8 & 4) == 0) && (*local_100 != 0)) {
      uVar6 = *local_100 + (longlong)*local_e8;
      _Src = (void *)*local_120;
      goto joined_r0x0001407c6d40;
    }
  }
  else {
    if (uVar6 < local_d0) {
      uVar6 = local_d0;
    }
    _Src = (void *)*local_118;
joined_r0x0001407c6d40:
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
  }
  pppppppuVar8 = local_58;
  if (local_40 < 0x10) {
    pppppppuVar8 = &local_58;
  }
  (**(code **)(*param_5 + 8))(param_5,2,pppppppuVar8);
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    pppppppuVar8 = local_58;
    if (0xfff < uVar6) {
      pppppppuVar8 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar8,uVar6);
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
LAB_1407c6e49:
  return (param_2 & param_1) == param_2;
}

