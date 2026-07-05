/**
 * Function: unknown_prior_state_of_buffer
 * Address:  1407c8760
 * Signature: undefined __thiscall unknown_prior_state_of_buffer(void * this)
 * Body size: 806 bytes
 */


void __thiscall unknown_prior_state_of_buffer(void *this,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Src;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  undefined1 local_150 [8];
  basic_streambuf<char,std::char_traits<char>_> local_148 [3];
  undefined8 local_130;
  undefined8 local_128 [3];
  longlong *local_110;
  ulonglong *local_108;
  int *local_f8;
  ulonglong local_e0;
  uint local_d8;
  ios_base local_c8 [6];
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x3b) != '\0') {
    return;
  }
  if ((int)param_2[1] != 0) {
    doesnt_have_the_right_state_bits_required_0x
              ((int)param_2[1],param_3,0,lVar1 + 0x10,*(undefined8 *)this);
    return;
  }
  if (*(char *)(lVar1 + 0x45) != '\0') {
    return;
  }
  puVar3 = (uint *)FUN_1407c7170(this,param_2,1);
  uVar9 = *puVar3;
  if (uVar9 == 0) {
    FUN_1401e87c0(&local_160,1);
    uVar4 = FUN_1400e5ec0(local_150,"Unknown prior state of buffer ");
    uVar5 = FUN_140527b30(*param_2 + 0x10);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    FUN_1400e5ec0(uVar4,
                  ". Call CommandList::beginTrackingBufferState(...) before using the buffer or use the keepInitialState and initialState members of BufferDesc."
                 );
    plVar2 = *(longlong **)this;
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_d8 & 0x22) == 2) || (uVar11 = *local_108, uVar11 == 0)) {
      if (((local_d8 & 4) == 0) && (*local_110 != 0)) {
        puVar6 = &local_130;
        uVar11 = *local_110 + (longlong)*local_f8;
        goto LAB_1407c8894;
      }
    }
    else {
      puVar6 = local_128;
      if (uVar11 < local_e0) {
        uVar11 = local_e0;
      }
LAB_1407c8894:
      _Src = *(void **)*puVar6;
      if (_Src != (void *)0x0) {
        uVar11 = uVar11 - (longlong)_Src;
        if (uVar11 < 0x10) {
          local_58 = uVar11;
          memmove(&local_68,_Src,uVar11);
          *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar11);
        }
      }
    }
    pppppppuVar7 = (undefined8 *******)local_68;
    if (local_50 < 0x10) {
      pppppppuVar7 = &local_68;
    }
    (**(code **)(*plVar2 + 8))(plVar2,2,pppppppuVar7);
    if (0xf < local_50) {
      uVar11 = local_50 + 1;
      pppppppuVar7 = (undefined8 *******)local_68;
      if (0xfff < uVar11) {
        pppppppuVar7 = (undefined8 *******)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar7))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar11 = local_50 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppppuVar7,uVar11);
    }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((longlong)&local_160 + (longlong)*(int *)((longlong)local_160 + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_148 + (longlong)*(int *)((longlong)local_160 + 4) + -0x1c) =
         *(int *)((longlong)local_160 + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_148[0] = (basic_streambuf<char,std::char_traits<char>_>)
                   &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
    ;
    FUN_1401da8b0(local_148);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_148);
    std::ios_base::~ios_base(local_c8);
    uVar9 = *puVar3;
  }
  if ((param_3 & 0x40) == 0) {
    if (uVar9 == param_3) goto LAB_1407c8a59;
    bVar10 = 0;
LAB_1407c8a2b:
    puVar6 = *(undefined8 **)((longlong)this + 0xd8);
    for (puVar8 = *(undefined8 **)((longlong)this + 0xd0); puVar8 != puVar6; puVar8 = puVar8 + 2) {
      if ((longlong *)*puVar8 == param_2) {
        param_3 = param_3 | *(uint *)((longlong)puVar8 + 0xc);
        *(uint *)((longlong)puVar8 + 0xc) = param_3;
        goto LAB_1407c8a59;
      }
    }
  }
  else {
    if ((char)puVar3[1] == '\0') {
      if (uVar9 == param_3) {
        if (*(byte *)((longlong)puVar3 + 5) != 0) goto LAB_1407c8a59;
        goto LAB_1407c89cf;
      }
      bVar10 = *(byte *)((longlong)puVar3 + 5) ^ 1;
      goto LAB_1407c8a2b;
    }
    bVar10 = 1;
    if (uVar9 != param_3) goto LAB_1407c8a2b;
LAB_1407c89cf:
    puVar6 = *(undefined8 **)((longlong)this + 0xd8);
    bVar10 = 1;
  }
  if (puVar6 == *(undefined8 **)((longlong)this + 0xe0)) {
    local_160 = param_2;
    uStack_158 = uVar9;
    uStack_154 = param_3;
    FUN_14020b100((longlong)this + 0xd0,puVar6,&local_160);
  }
  else {
    *puVar6 = param_2;
    puVar6[1] = CONCAT44(param_3,uVar9);
    *(longlong *)((longlong)this + 0xd8) = *(longlong *)((longlong)this + 0xd8) + 0x10;
  }
  if ((bVar10 & uVar9 == param_3) == 1) {
    *(undefined1 *)((longlong)puVar3 + 5) = 1;
  }
LAB_1407c8a59:
  *puVar3 = param_3;
  return;
}

