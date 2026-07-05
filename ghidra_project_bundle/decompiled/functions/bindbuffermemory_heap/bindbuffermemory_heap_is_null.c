/**
 * Function: bindbuffermemory_heap_is_null
 * Address:  1405173b0
 * Signature: undefined8 __thiscall bindbuffermemory_heap_is_null(void * this, longlong * param_1, longlong * param_2, ulonglong param_3)
 * Body size: 1839 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 __thiscall
bindbuffermemory_heap_is_null(void *this,longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  char *pcVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  void *pvVar12;
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
    local_170[2] = (char *)0x21;
    local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)0x2f;
    builtin_strncpy(pcVar8,"bindBufferMemory: texture is NULL",0x22);
    local_170[0] = pcVar8;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar8);
    uVar4 = 0x30;
LAB_140517626:
    thunk_FUN_140b68ba8(pcVar8,uVar4);
    return 0;
  }
  if (param_2 == (longlong *)0x0) {
    local_170[1] = (char *)0x0;
    pcVar8 = (char *)FUN_140b65d30(0x20);
    local_170[2] = (char *)0x1e;
    local_158[0] = (basic_streambuf<char,std::char_traits<char>_>)0x1f;
    builtin_strncpy(pcVar8,"bindBufferMemory: heap is NULL",0x1f);
    local_170[0] = pcVar8;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar8);
    uVar4 = 0x20;
    goto LAB_140517626;
  }
  puVar2 = (ulonglong *)(**(code **)(*param_2 + 0x28))(param_2);
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (*(char *)(lVar3 + 0x3c) != '\0') {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xa0))
              (*(longlong **)((longlong)this + 0x10),&local_78,param_1);
    if (local_78 + param_3 <= *puVar2) {
      if (local_70 == 0) {
LAB_140517976:
        uVar4 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xa8))
                          (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
        return uVar4;
      }
      if ((param_3 | local_70) >> 0x20 == 0) {
        uVar10 = (param_3 & 0xffffffff) % (local_70 & 0xffffffff);
      }
      else {
        uVar10 = param_3 % local_70;
      }
      if (uVar10 == 0) goto LAB_140517976;
      FUN_1401e87c0(local_170,1);
      uVar4 = FUN_1400e5ec0(local_170 + 2,"Buffer ");
      uVar5 = FUN_140527b30(lVar3 + 0x10);
      uVar4 = FUN_1400e5ec0(uVar4,uVar5);
      uVar4 = FUN_1400e5ec0(uVar4," is placed in heap ");
      uVar5 = FUN_140527b30(puVar2 + 2);
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
          goto LAB_140517937;
        }
      }
      else {
        pplVar9 = local_138;
        if (uVar10 < local_f0) {
          uVar10 = local_f0;
        }
LAB_140517937:
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
      goto LAB_140517a1e;
    }
    FUN_1401e87c0(local_170,1);
    uVar4 = FUN_1400e5ec0(local_170 + 2,"Buffer ");
    uVar5 = FUN_140527b30(lVar3 + 0x10);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    uVar4 = FUN_1400e5ec0(uVar4," does not fit into heap ");
    uVar5 = FUN_140527b30(puVar2 + 2);
    uVar4 = FUN_1400e5ec0(uVar4,uVar5);
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar4," at offset ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,param_3);
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(pbVar7," because it requires ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,local_78);
    uVar4 = FUN_1400e5ec0(pbVar7," bytes,");
    pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(uVar4," and the heap capacity is ");
    pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,*puVar2);
    FUN_1400e5ec0(pbVar7," bytes");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_e8 & 0x22) == 2) || (uVar10 = *local_118, uVar10 == 0)) {
      if (((local_e8 & 4) == 0) && (*local_120 != 0)) {
        uVar10 = *local_120 + (longlong)*local_108;
        pvVar12 = (void *)*local_140;
        goto joined_r0x0001405178a3;
      }
    }
    else {
      if (uVar10 < local_f0) {
        uVar10 = local_f0;
      }
      pvVar12 = (void *)*local_138[0];
joined_r0x0001405178a3:
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
    goto LAB_140517a1e;
  }
  FUN_1401e87c0(local_170,1);
  uVar4 = FUN_1400e5ec0(local_170 + 2,"Cannot perform bindBufferMemory on buffer ");
  uVar5 = FUN_140527b30(lVar3 + 0x10);
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
      if (pvVar12 != (void *)0x0) goto LAB_1405176f8;
    }
LAB_140517714:
    plVar1 = *(longlong **)((longlong)this + 0x18);
  }
  else {
    if (uVar10 < local_f0) {
      uVar10 = local_f0;
    }
    pvVar12 = (void *)*local_138[0];
    if (pvVar12 == (void *)0x0) goto LAB_140517714;
LAB_1405176f8:
    uVar10 = uVar10 - (longlong)pvVar12;
    if (0xf < uVar10) {
      FUN_1400069b0(&local_68,uVar10);
      goto LAB_140517714;
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
LAB_140517a1e:
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

