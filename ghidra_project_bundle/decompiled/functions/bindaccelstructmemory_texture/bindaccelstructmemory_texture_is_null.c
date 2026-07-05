/**
 * Function: bindaccelstructmemory_texture_is_null
 * Address:  1405249c0
 * Signature: undefined8 __thiscall bindaccelstructmemory_texture_is_null(void * this, longlong * param_1, longlong * param_2, ulonglong param_3)
 * Body size: 1895 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 __thiscall
bindaccelstructmemory_texture_is_null
          (void *this,longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  char *pcVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  void *pvVar12;
  ulonglong in_stack_fffffffffffffe88;
  char *local_170 [3];
  basic_streambuf<char,std::char_traits<char>_> local_158 [3];
  longlong *local_140;
  longlong *local_138 [3];
  longlong *local_120;
  ulonglong *local_118;
  int *local_108;
  ulonglong local_f0;
  uint local_e8;
  ios_base local_d8 [6];
  __uint64 local_78;
  ulonglong local_70;
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_1 == (longlong *)0x0) {
    local_170[1] = (char *)0x0;
    pcVar8 = (char *)FUN_140b65d30(0x30);
    local_170[2] = (char *)0x26;
    local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
    builtin_strncpy(pcVar8,"bindAccelStructMemory: texture is NULL",0x27);
    local_170[0] = pcVar8;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar8);
LAB_140524c69:
    thunk_FUN_140b68ba8(pcVar8,0x30);
    return 0;
  }
  if (param_2 == (longlong *)0x0) {
    local_170[1] = (char *)0x0;
    pcVar8 = (char *)FUN_140b65d30(0x30);
    local_170[2] = (char *)0x23;
    local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
    builtin_strncpy(pcVar8,"bindAccelStructMemory: heap is NULL",0x24);
    local_170[0] = pcVar8;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar8);
    goto LAB_140524c69;
  }
  lVar2 = __RTDynamicCast(param_1,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                          &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                          in_stack_fffffffffffffe88 & 0xffffffff00000000);
  if (lVar2 != 0) {
    param_1 = *(longlong **)(lVar2 + 0x40);
  }
  puVar3 = (ulonglong *)(**(code **)(*param_2 + 0x28))(param_2);
  lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (*(char *)(lVar2 + 0x4a) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1a8))
              (*(longlong **)((longlong)this + 0x10),&local_78,param_1);
    if (local_78 + param_3 <= *puVar3) {
      if (local_70 == 0) {
LAB_140524fbb:
        uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1b8))
                          (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
        return uVar4;
      }
      if ((param_3 | local_70) >> 0x20 == 0) {
        uVar10 = (param_3 & 0xffffffff) % (local_70 & 0xffffffff);
      }
      else {
        uVar10 = param_3 % local_70;
      }
      if (uVar10 == 0) goto LAB_140524fbb;
      FUN_1401e87c0(local_170,1);
      uVar4 = FUN_1400e5ec0(local_170 + 2,"AccelStruct ");
      uVar5 = FUN_140527b30(lVar2 + 0x28);
      uVar4 = FUN_1400e5ec0(uVar4,uVar5);
      uVar4 = FUN_1400e5ec0(uVar4," is placed in heap ");
      uVar5 = FUN_140527b30(puVar3 + 2);
      uVar4 = FUN_1400e5ec0(uVar4,uVar5);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(uVar4," at invalid alignment: required alignment to ");
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,local_70);
      uVar4 = FUN_1400e5ec0(pbVar7," bytes,");
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(uVar4," actual offset is ");
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,param_3);
      FUN_1400e5ec0(pbVar7," bytes");
      local_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      if (((local_e8 & 0x22) == 2) || (uVar10 = *local_118, uVar10 == 0)) {
        if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
          pplVar9 = &local_140;
          uVar10 = *local_120 + (longlong)*local_108;
          goto LAB_140524f7c;
        }
      }
      else {
        pplVar9 = local_138;
        if (uVar10 < local_f0) {
          uVar10 = local_f0;
        }
LAB_140524f7c:
        pvVar12 = (void *)**pplVar9;
        if (pvVar12 != (void *)0x0) {
          uVar10 = uVar10 - (longlong)pvVar12;
          if (uVar10 < 0x10) {
            local_58 = uVar10;
            memmove(&local_68,pvVar12,uVar10);
            *(undefined1 *)((longlong)&local_68 + uVar10) = 0;
          }
          else {
            FUN_1400069b0(&local_68,uVar10);
          }
        }
      }
      pppppppuVar11 = local_68;
      if (local_50 < 0x10) {
        pppppppuVar11 = &local_68;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
                (*(longlong **)((longlong)this + 0x18),2,pppppppuVar11);
      goto LAB_140525066;
    }
    FUN_1401e87c0(local_170,1);
    uVar4 = FUN_1400e5ec0(local_170 + 2,"AccelStruct ");
    uVar5 = FUN_140527b30(lVar2 + 0x28);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    uVar4 = FUN_1400e5ec0(uVar4," does not fit into heap ");
    uVar5 = FUN_140527b30(puVar3 + 2);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar4," at offset ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,param_3);
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar7," because it requires ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,local_78);
    uVar4 = FUN_1400e5ec0(pbVar7," bytes,");
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar4," and the heap capacity is ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,*puVar3);
    FUN_1400e5ec0(pbVar7," bytes");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e8 & 0x22) == 2) || (uVar10 = *local_118, uVar10 == 0)) {
      if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
        uVar10 = *local_120 + (longlong)*local_108;
        pvVar12 = (void *)*local_140;
        goto joined_r0x000140524ee8;
      }
    }
    else {
      if (uVar10 < local_f0) {
        uVar10 = local_f0;
      }
      pvVar12 = (void *)*local_138[0];
joined_r0x000140524ee8:
      if (pvVar12 != (void *)0x0) {
        uVar10 = uVar10 - (longlong)pvVar12;
        if (uVar10 < 0x10) {
          local_58 = uVar10;
          memmove(&local_68,pvVar12,uVar10);
          *(undefined1 *)((longlong)&local_68 + uVar10) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar10);
        }
      }
    }
    pppppppuVar11 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar11 = &local_68;
    }
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pppppppuVar11);
    goto LAB_140525066;
  }
  FUN_1401e87c0(local_170,1);
  uVar4 = FUN_1400e5ec0(local_170 + 2,"Cannot perform bindAccelStructMemory on AccelStruct ");
  uVar5 = FUN_140527b30(lVar2 + 0x28);
  uVar4 = FUN_1400e5ec0(uVar4,uVar5);
  FUN_1400e5ec0(uVar4," because it was created with isVirtual = false");
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  if (((local_e8 & 0x22) == 2) || (uVar10 = *local_118, uVar10 == 0)) {
    if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
      uVar10 = *local_120 + (longlong)*local_108;
      pvVar12 = (void *)*local_140;
      if (pvVar12 != (void *)0x0) goto LAB_140524d40;
    }
LAB_140524d5c:
    plVar1 = *(longlong **)((longlong)this + 0x18);
  }
  else {
    if (uVar10 < local_f0) {
      uVar10 = local_f0;
    }
    pvVar12 = (void *)*local_138[0];
    if (pvVar12 == (void *)0x0) goto LAB_140524d5c;
LAB_140524d40:
    uVar10 = uVar10 - (longlong)pvVar12;
    if (0xf < uVar10) {
      FUN_1400069b0(&local_68,uVar10);
      goto LAB_140524d5c;
    }
    local_58 = uVar10;
    memmove(&local_68,pvVar12,uVar10);
    *(undefined1 *)((longlong)&local_68 + uVar10) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x18);
  }
  pppppppuVar11 = local_68;
  if (local_50 < 0x10) {
    pppppppuVar11 = &local_68;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar11);
LAB_140525066:
  if (0xf < local_50) {
    uVar10 = local_50 + 1;
    pppppppuVar11 = local_68;
    if (0xfff < uVar10) {
      pppppppuVar11 = (undefined8 *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar11))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar11,uVar10);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_170 + (longlong)*(int *)(local_170[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_158 + (longlong)*(int *)(local_170[0] + 4) + -0x1c) =
       *(int *)(local_170[0] + 4) + -0x98;
  local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_158);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_158);
  std::ios_base::~ios_base(local_d8);
  return 0;
}

