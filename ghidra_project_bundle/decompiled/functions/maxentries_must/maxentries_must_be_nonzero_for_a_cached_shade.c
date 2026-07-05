/**
 * Function: maxentries_must_be_nonzero_for_a_cached_shade
 * Address:  140734930
 * Signature: undefined8 * __thiscall maxentries_must_be_nonzero_for_a_cached_shade(void * this, undefined8 * param_1, char * param_2)
 * Body size: 1036 bytes
 */


undefined8 * __thiscall
maxentries_must_be_nonzero_for_a_cached_shade(void *this,undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  ShaderTable *pSVar3;
  ulonglong uVar4;
  char ****ppppcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char ******ppppppcVar8;
  char *****pppppcVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *local_108;
  undefined8 uStack_100;
  char ****local_f8;
  char ****ppppcStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  char *****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  ShaderTable *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*param_2 == '\x01') {
    iVar10 = *(int *)(param_2 + 4);
    if (iVar10 == 0) {
      uVar1 = *(undefined8 *)((longlong)this + 0x140);
      local_f8 = (char ****)0x0;
      ppppcStack_f0 = (char ****)0x0;
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      local_58 = (longlong *)0x0;
      local_108 = (longlong *)FUN_140b65d30(0x40);
      local_f8 = (char ****)0x33;
      ppppcStack_f0 = (char ****)0x3f;
      local_108[4] = 0x2064656863616320;
      local_108[5] = 0x6154726564616853;
      local_108[2] = 0x657a6e6f6e206562;
      local_108[3] = 0x6120726f66206f72;
      *(undefined4 *)local_108 = 0x4578616d;
      builtin_strncpy((char *)((longlong)local_108 + 4),"ntri",4);
      *(undefined4 *)(local_108 + 1) = 0x6d207365;
      builtin_strncpy((char *)((longlong)local_108 + 0xc),"ust ",4);
      builtin_strncpy((char *)((longlong)local_108 + 0x2f),"able",4);
      *(char *)((longlong)local_108 + 0x33) = '\0';
      FUN_14053e350(uVar1,&local_108);
      if ((char *****)0xf < ppppcStack_f0) {
        pppppcVar9 = (char *****)((longlong)ppppcStack_f0 + 1);
        plVar7 = local_108;
        if ((char *****)0xfff < pppppcVar9) {
          plVar7 = (longlong *)local_108[-1];
          if ((char *)0x1f < (char *)((longlong)local_108 + (-8 - (longlong)plVar7)))
          goto LAB_140734d23;
          pppppcVar9 = (char *****)(ppppcStack_f0 + 5);
        }
        thunk_FUN_140b68ba8(plVar7,pppppcVar9);
      }
      *param_1 = 0;
      return param_1;
    }
    local_98 = 0;
    uStack_70 = 0;
    local_a8 = (char *****)0x0;
    uStack_a0 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    uStack_90 = 0xf;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    local_78 = 1;
    ppppppcVar8 = (char ******)(param_2 + 8);
    if (&local_a8 != ppppppcVar8) {
      uVar6 = *(ulonglong *)(param_2 + 0x18);
      if (0xf < *(ulonglong *)(param_2 + 0x20)) {
        ppppppcVar8 = *(char *******)(param_2 + 8);
      }
      if (uVar6 < 0x10) {
        local_98 = uVar6;
        memmove(&local_a8,ppppppcVar8,uVar6);
        *(undefined1 *)((longlong)&local_a8 + uVar6) = 0;
      }
      else {
        FUN_1400069b0(&local_a8,uVar6);
        iVar10 = *(int *)(param_2 + 4);
      }
    }
    uVar6 = local_98;
    local_108 = (longlong *)
                (ulonglong)((*(int *)((longlong)this + 0x138) * 8 + 0x5fU & 0xffffffc0) * iVar10);
    uStack_7e = 1;
    local_78 = CONCAT35(local_78._5_3_,0x100000020);
    uStack_100 = uStack_b0;
    local_f8 = (char ****)0x0;
    ppppcStack_f0 = (char ****)0x0;
    local_e8 = 0;
    uStack_e0 = 0;
    ppppppcVar8 = &local_a8;
    if (0xf < uStack_90) {
      ppppppcVar8 = (char ******)local_a8;
    }
    local_b8 = local_108;
    if ((longlong)local_98 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (local_98 < 0x10) {
      local_e8 = local_98;
      uStack_e0 = 0xf;
      local_f8 = (char ****)*ppppppcVar8;
      ppppcStack_f0 = (char ****)ppppppcVar8[1];
    }
    else {
      uVar4 = local_98 | 0xf;
      uVar11 = 0x16;
      if (0x16 < uVar4) {
        uVar11 = uVar4;
      }
      if (uVar4 < 0xfff) {
        local_f8 = (char ****)FUN_140b65d30(uVar11 + 1);
      }
      else {
        ppppcVar5 = (char ****)FUN_140b65d30(uVar11 + 0x28);
        local_f8 = (char ****)((longlong)ppppcVar5 + 0x27U & 0xffffffffffffffe0);
        local_f8[-1] = (char ***)ppppcVar5;
      }
      local_e8 = uVar6;
      uStack_e0 = uVar11;
      memcpy(local_f8,ppppppcVar8,uVar6 + 1);
    }
    uStack_d0 = CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80));
    uStack_c8 = (undefined4)local_78;
    uStack_c4 = local_78._4_4_;
    uStack_c0 = (undefined4)uStack_70;
    uStack_d8 = local_88;
    uStack_d4 = uStack_84;
    local_cc = uStack_7c;
    if (0xf < uStack_90) {
      uVar6 = uStack_90 + 1;
      ppppppcVar8 = (char ******)local_a8;
      if (0xfff < uVar6) {
        ppppppcVar8 = (char ******)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppppcVar8)))
        goto LAB_140734d23;
        uVar6 = uStack_90 + 0x28;
      }
      thunk_FUN_140b68ba8(ppppppcVar8,uVar6);
    }
    failed_to_create_shared_handle
              (*(void **)((longlong)this + 0x148),&local_b8,(ulonglong *)&local_108);
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      *param_1 = 0;
      if (uStack_e0 < 0x10) {
        return param_1;
      }
      uVar6 = uStack_e0 + 1;
      pppppcVar9 = (char *****)local_f8;
      if (0xfff < uVar6) {
        pppppcVar9 = (char *****)local_f8[-1];
        if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pppppcVar9))) {
LAB_140734d23:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar6 = uStack_e0 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppcVar9,uVar6);
      return param_1;
    }
    if (0xf < uStack_e0) {
      uVar6 = uStack_e0 + 1;
      pppppcVar9 = (char *****)local_f8;
      if (0xfff < uVar6) {
        pppppcVar9 = (char *****)local_f8[-1];
        if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pppppcVar9)))
        goto LAB_140734d23;
        uVar6 = uStack_e0 + 0x28;
      }
      thunk_FUN_140b68ba8(pppppcVar9,uVar6);
    }
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  local_68 = plVar7;
  local_58 = plVar7;
  local_60 = (ShaderTable *)FUN_140b65d30(0x130);
  nvrhi::d3d12::ShaderTable::ShaderTable
            (local_60,*(undefined8 *)((longlong)this + 0x140),this,(undefined8 *)param_2);
  pSVar3 = local_60;
  plVar2 = local_68;
  plVar7 = (local_60->ShaderTable_data).offset_0x70;
  if (plVar7 != local_68) {
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 8))(local_68);
      plVar7 = (pSVar3->ShaderTable_data).offset_0x70;
    }
    (pSVar3->ShaderTable_data).offset_0x70 = plVar2;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *param_1 = pSVar3;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}

