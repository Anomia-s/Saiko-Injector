/**
 * Function: attempted_to_perform_a_permanent_state_transi
 * Address:  1407c74f0
 * Signature: undefined __thiscall attempted_to_perform_a_permanent_state_transi(void * this)
 * Body size: 728 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall
attempted_to_perform_a_permanent_state_transi
          (void *this,longlong *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_160 [8];
  basic_streambuf<char,std::char_traits<char>_> local_158 [3];
  longlong *local_140;
  longlong *local_138;
  longlong *local_120;
  ulonglong *local_118;
  int *local_108;
  ulonglong local_f0;
  uint local_e8;
  ios_base local_d8 [6];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = *param_2;
  FUN_1406dfba0(param_3,&local_170,lVar6);
  *param_3 = (undefined4)local_170;
  param_3[1] = local_170._4_4_;
  param_3[2] = uStack_168;
  param_3[3] = uStack_164;
  cVar3 = FUN_1406dfc10(param_3,lVar6);
  if (cVar3 != '\0') {
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    unknown_prior_state_of_texture(this,param_2,&local_78,param_4);
    puVar1 = *(undefined4 **)((longlong)this + 0x90);
    local_170 = param_2;
    uStack_168 = param_4;
    if (puVar1 == *(undefined4 **)((longlong)this + 0x98)) {
      FUN_14020b100((longlong)this + 0x88,puVar1,&local_170);
    }
    else {
      local_170._0_4_ = SUB84(param_2,0);
      local_170._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
      *puVar1 = (undefined4)local_170;
      puVar1[1] = local_170._4_4_;
      puVar1[2] = param_4;
      puVar1[3] = uStack_164;
      *(longlong *)((longlong)this + 0x90) = *(longlong *)((longlong)this + 0x90) + 0x10;
    }
    lVar6 = FUN_1407c6f50(this,param_2,1);
    *(undefined1 *)(lVar6 + 0x1e) = 1;
    return;
  }
  FUN_1401e87c0(&local_170,1);
  uVar4 = FUN_1400e5ec0(local_160,
                        "Attempted to perform a permanent state transition on a subset of subresources of texture "
                       );
  uVar5 = FUN_140527b30(lVar6 + 0x20);
  FUN_1400e5ec0(uVar4,uVar5);
  plVar2 = *(longlong **)this;
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  if (((local_e8 & 0x22) == 2) || (uVar7 = *local_118, uVar7 == 0)) {
    if (((local_e8 & 4) != 0) || (*local_120 == 0)) goto joined_r0x0001407c7674;
    uVar7 = *local_120 + (longlong)*local_108;
    _Src = (void *)*local_140;
  }
  else {
    if (uVar7 < local_f0) {
      uVar7 = local_f0;
    }
    _Src = (void *)*local_138;
  }
  if (_Src != (void *)0x0) {
    uVar7 = uVar7 - (longlong)_Src;
    if (uVar7 < 0x10) {
      local_58 = uVar7;
      memmove(&local_68,_Src,uVar7);
      *(undefined1 *)((longlong)&local_68 + uVar7) = 0;
    }
    else {
      FUN_1400069b0(&local_68,uVar7);
    }
  }
joined_r0x0001407c7674:
  pppppppuVar8 = local_68;
  if (local_50 < 0x10) {
    pppppppuVar8 = &local_68;
  }
  (**(code **)(*plVar2 + 8))(plVar2,2,pppppppuVar8);
  if (0xf < local_50) {
    uVar7 = local_50 + 1;
    pppppppuVar8 = local_68;
    if (0xfff < uVar7) {
      pppppppuVar8 = (undefined8 *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar8,uVar7);
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)&local_170 + (longlong)*(int *)((longlong)local_170 + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_158 + (longlong)*(int *)((longlong)local_170 + 4) + -0x1c) =
       *(int *)((longlong)local_170 + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_158);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_158);
  std::ios_base::~ios_base(local_d8);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  unknown_prior_state_of_texture(this,param_2,&local_78,param_4);
  return;
}

