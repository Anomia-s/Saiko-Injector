/**
 * Function: cannot_create_accelstruct
 * Address:  140521780
 * Signature: undefined8 * __thiscall cannot_create_accelstruct(void * this, undefined8 * param_1, undefined8 * param_2)
 * Body size: 1136 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
cannot_create_accelstruct(void *this,undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *******pppppppuVar7;
  void *pvVar8;
  int iStack_15c;
  longlong local_158 [2];
  undefined1 local_148 [8];
  basic_streambuf<char,std::char_traits<char>_> local_140 [3];
  longlong *local_128;
  longlong *local_120;
  longlong *local_108;
  ulonglong *local_100;
  int *local_f0;
  ulonglong local_d8;
  uint local_d0;
  ios_base local_c0 [6];
  longlong *local_60;
  undefined8 *******local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1a0))
            (*(longlong **)((longlong)this + 0x10),&local_60);
  plVar2 = local_60;
  if (local_60 == (longlong *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  if (((*(byte *)(param_2 + 4) & 2) == 0) || (*(char *)((longlong)param_2 + 0x49) == '\0')) {
    if ((~*(byte *)(param_2 + 4) & 3) != 0) {
      puVar5 = (undefined8 *)FUN_140b65d30(0x48);
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &nvrhi::validation::AccelStructWrapper::vftable;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = plVar2;
      (**(code **)(*plVar2 + 8))(plVar2);
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)((longlong)param_2 + 0x49);
      bVar1 = *(byte *)(param_2 + 4);
      *(byte *)((longlong)puVar5 + 0x12) = bVar1 & 1;
      *(byte *)((longlong)puVar5 + 0x11) = bVar1 >> 1 & 1;
      puVar5[6] = *param_2;
      *param_1 = puVar5;
      plVar2 = local_60;
      goto joined_r0x000140521a25;
    }
    FUN_1401e87c0(local_158,1);
    uVar3 = FUN_1400e5ec0(local_148,"Cannot create AccelStruct ");
    uVar4 = FUN_140527b30(param_2 + 5);
    uVar3 = FUN_1400e5ec0(uVar3,uVar4);
    FUN_1400e5ec0(uVar3," with incompatible flags: AllowUpdate and AllowCompaction");
    local_58 = (undefined8 *******)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_d0 & 0x22) == 2) || (uVar6 = *local_100, uVar6 == 0)) {
      if (((local_d0 & 4) == 0) && (*local_108 != 0)) {
        uVar6 = *local_108 + (longlong)*local_f0;
        pvVar8 = (void *)*local_128;
        if (pvVar8 != (void *)0x0) goto LAB_140521a59;
      }
LAB_140521a71:
      plVar2 = *(longlong **)((longlong)this + 0x18);
    }
    else {
      if (uVar6 < local_d8) {
        uVar6 = local_d8;
      }
      pvVar8 = (void *)*local_120;
      if (pvVar8 == (void *)0x0) goto LAB_140521a71;
LAB_140521a59:
      uVar6 = uVar6 - (longlong)pvVar8;
      if (0xf < uVar6) {
        FUN_1400069b0(&local_58,uVar6);
        goto LAB_140521a71;
      }
      local_48 = uVar6;
      memmove(&local_58,pvVar8,uVar6);
      *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
      plVar2 = *(longlong **)((longlong)this + 0x18);
    }
    pppppppuVar7 = local_58;
    if (local_40 < 0x10) {
      pppppppuVar7 = &local_58;
    }
    (**(code **)(*plVar2 + 8))(plVar2,2,pppppppuVar7);
  }
  else {
    FUN_1401e87c0(local_158,1);
    uVar3 = FUN_1400e5ec0(local_148,"Cannot create TLAS ");
    uVar4 = FUN_140527b30(param_2 + 5);
    uVar3 = FUN_1400e5ec0(uVar3,uVar4);
    FUN_1400e5ec0(uVar3,
                  " with the AllowCompaction flag set: compaction is not supported for TLAS\'es");
    local_58 = (undefined8 *******)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    if (((local_d0 & 0x22) == 2) || (uVar6 = *local_100, uVar6 == 0)) {
      if (((local_d0 & 4) == 0) && (*local_108 != 0)) {
        uVar6 = *local_108 + (longlong)*local_f0;
        pvVar8 = (void *)*local_128;
        if (pvVar8 != (void *)0x0) goto LAB_140521978;
      }
LAB_140521994:
      plVar2 = *(longlong **)((longlong)this + 0x18);
    }
    else {
      if (uVar6 < local_d8) {
        uVar6 = local_d8;
      }
      pvVar8 = (void *)*local_120;
      if (pvVar8 == (void *)0x0) goto LAB_140521994;
LAB_140521978:
      uVar6 = uVar6 - (longlong)pvVar8;
      if (0xf < uVar6) {
        FUN_1400069b0(&local_58,uVar6);
        goto LAB_140521994;
      }
      local_48 = uVar6;
      memmove(&local_58,pvVar8,uVar6);
      *(undefined1 *)((longlong)&local_58 + uVar6) = 0;
      plVar2 = *(longlong **)((longlong)this + 0x18);
    }
    pppppppuVar7 = local_58;
    if (local_40 < 0x10) {
      pppppppuVar7 = &local_58;
    }
    (**(code **)(*plVar2 + 8))(plVar2,2,pppppppuVar7);
  }
  if (0xf < local_40) {
    uVar6 = local_40 + 1;
    pppppppuVar7 = local_58;
    if (0xfff < uVar6) {
      pppppppuVar7 = (undefined8 *******)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_40 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar7,uVar6);
  }
  *param_1 = 0;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_158 + (longlong)*(int *)(local_158[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_15c + (longlong)*(int *)(local_158[0] + 4)) =
       *(int *)(local_158[0] + 4) + -0x98;
  local_140[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_140);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_140);
  std::ios_base::~ios_base(local_c0);
  plVar2 = local_60;
joined_r0x000140521a25:
  if (plVar2 != (longlong *)0x0) {
    local_60 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}

