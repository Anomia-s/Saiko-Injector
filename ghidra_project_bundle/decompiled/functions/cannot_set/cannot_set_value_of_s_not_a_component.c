/**
 * Function: cannot_set_value_of_s_not_a_component
 * Address:  1405f3d70
 * Signature: undefined cannot_set_value_of_s_not_a_component(void)
 * Body size: 1176 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cannot_set_value_of_s_not_a_component(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  size_t _Size;
  longlong *plVar16;
  undefined1 auStack_d8 [16];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined1 local_60;
  byte local_5f;
  undefined4 local_5e;
  undefined2 local_5a;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)&local_48;
  lVar5 = *(longlong *)(param_2 + 0x28);
  iVar3 = invalid_component_identifier(param_1,param_2,param_2 + 0x10);
  uVar14 = 0xffffffff;
  puVar11 = &local_b8;
  if (iVar3 != 0) goto LAB_1405f3db7;
  if (lVar5 == 0) {
    lVar5 = param_1[0x89];
    lVar4 = FUN_1403b38b0(lVar5,*(undefined8 *)(param_2 + 0x28));
    if (lVar4 == 0) goto LAB_1405f3de6;
    lVar5 = FUN_1403a5610(lVar5,lVar4);
    if ((*(byte *)(lVar5 + 0x59) & 4) == 0) goto LAB_1405f3de6;
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      pcVar15 = "cannot add %s, type is not default constructible";
      goto LAB_1405f404f;
    }
    pcVar15 = "cannot add (%s, %s), type is not default constructible";
    local_c8 = *(longlong *)(param_2 + 0x18);
  }
  else {
LAB_1405f3de6:
    puVar12 = &local_b8;
    puVar11 = &local_b8;
    if (param_1[0x8f] != 0) {
      if (*(char *)((longlong)param_1 + 0x48c) == '\x01') {
        FUN_1405f0f70(param_1,param_2,"invalid component in with scope");
        puVar11 = &local_b8;
        goto LAB_1405f3db7;
      }
      uVar9 = *(ulonglong *)(param_1[0x8f] + 0x40);
      if (uVar9 == 0x111) {
        uVar9 = *(ulonglong *)(param_2 + 0x28);
        if (((uVar9 & 0xf000000000000000) == 0x8000000000000000) ||
           ((uVar9 & 0xf000000000000000) == 0x9000000000000000)) {
          uVar9 = FUN_1400b7610(param_1[0x89],(uint)(uVar9 >> 0x20) & 0xfffffff);
        }
        else {
          uVar9 = uVar9 & 0xfffffffffffffff;
        }
      }
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      if (*(longlong *)(param_2 + 0x50) == 0) {
        puVar13 = auStack_d8;
        thunk_FUN_1400b7e20(param_1[0x89],uVar9,uVar7);
LAB_1405f4039:
        puVar11 = (undefined8 *)(puVar13 + 0x20);
      }
      else {
        lVar5 = FUN_1403a6fa0(param_1[0x89],uVar7);
        if ((lVar5 == 0) || (piVar1 = *(int **)(lVar5 + 0x40), piVar1 == (int *)0x0)) {
          uVar7 = FUN_1403b36e0(param_1[0x89],uVar7);
          FUN_1405f0f70(param_1,param_2,"cannot set value of \'%s\': not a component",uVar7);
          (*DAT_1415033b0)(uVar7);
          goto LAB_1405f3db7;
        }
        local_a8 = (longlong *)(param_2 + 0x50);
        lVar5 = *(longlong *)(piVar1 + 0x1e);
        plVar6 = (longlong *)FUN_1403a9030(param_1[0x89] + 2000);
        lVar4 = *plVar6;
        local_b8 = *(undefined8 *)(piVar1 + 0x2c);
        _Size = (size_t)*piVar1;
        local_b0 = lVar5;
        local_a0 = local_b8;
        if (lVar5 == 0) {
          puVar8 = (undefined1 *)FUN_1400ba6e0(param_1[0x89],uVar9,*(undefined8 *)(param_2 + 0x28));
          plVar16 = local_a8;
          puVar11 = &local_b8;
          local_98 = puVar8;
          if (*plVar6 != lVar4) {
            if (*(longlong *)(piVar1 + 2) == 0) {
              _Size = (size_t)*piVar1;
              puVar2 = puVar8;
              goto LAB_1405f40c7;
            }
            puVar11 = &local_b8;
            if (*(longlong *)(piVar1 + 4) != 0) {
              FUN_1403a4830(puVar8,1,piVar1);
              puVar11 = &local_b8;
            }
            goto LAB_1405f3fcf;
          }
        }
        else {
          uStack_c0 = 0x1405f3fb6;
          lVar5 = -(_Size + 0xf & 0xfffffffffffffff0);
          puVar12 = (undefined8 *)((longlong)&local_b8 + lVar5);
          puVar8 = (undefined1 *)((longlong)&local_b8 + lVar5);
          puVar11 = (undefined8 *)((longlong)&local_b8 + lVar5);
          plVar16 = local_a8;
          local_98 = (undefined1 *)((longlong)&local_b8 + lVar5);
          puVar2 = (undefined1 *)((longlong)&local_b8 + lVar5);
          if (*(longlong *)(piVar1 + 2) == 0) {
LAB_1405f40c7:
            local_98 = puVar2;
            puVar8 = local_98;
            plVar16 = local_a8;
            puVar10 = (undefined1 *)((longlong)puVar12 + -0x20);
            *(undefined8 *)((longlong)puVar12 + -0x28) = 0x1405f40d5;
            memset(puVar8,0,_Size);
          }
          else {
LAB_1405f3fcf:
            puVar10 = (undefined1 *)((longlong)puVar11 + -0x20);
            *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1405f3fe0;
            FUN_1403a4810(puVar8,1,piVar1);
          }
          puVar11 = (undefined8 *)(puVar10 + 0x20);
        }
        lVar5 = *plVar16;
        lVar4 = *param_1;
        local_90 = *(undefined8 *)(lVar4 + 8);
        local_88 = 0;
        local_80 = param_1[0x92];
        local_78 = local_b8;
        local_70 = FUN_1405f16d0;
        local_60 = 0;
        local_5f = *(byte *)((longlong)param_1 + 0x48d) ^ 1;
        local_5e = 0;
        local_5a = 0;
        local_58 = param_1[0x8a];
        local_68 = param_1;
        local_50 = param_1;
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1405f41a8;
          iVar3 = FUN_140766730(lVar4,lVar5,&local_90);
          if (iVar3 != 0) goto LAB_1405f3db7;
          *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1405f41c7;
          iVar3 = invalid_division_by_zero(lVar4,plVar16,&local_90);
          if (iVar3 != 0) goto LAB_1405f3db7;
          lVar5 = *plVar16;
        }
        *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1405f4159;
        iVar3 = failed_to_write_to_output(lVar4,lVar5,&local_90,&local_a0);
        if (iVar3 != 0) goto LAB_1405f3db7;
        if (local_b0 == 0) {
          uVar14 = *(undefined8 *)(param_2 + 0x28);
          lVar5 = param_1[0x89];
          puVar13 = (undefined1 *)((longlong)puVar11 + -0x20);
          *(undefined8 *)((longlong)puVar11 + -0x28) = 0x1405f41f3;
          FUN_1400ba7b0(lVar5,uVar9,uVar14);
          goto LAB_1405f4039;
        }
        iVar3 = *piVar1;
        uVar14 = *(undefined8 *)(param_2 + 0x28);
        lVar5 = param_1[0x89];
        *(undefined1 **)((longlong)puVar11 + -0x10) = local_98;
        *(undefined8 *)((longlong)puVar11 + -0x38) = 0x1405f418f;
        FUN_1400bb430(lVar5,uVar9,uVar14,(longlong)iVar3);
      }
      uVar14 = 0;
      goto LAB_1405f3db7;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      pcVar15 = "missing entity for component %s";
LAB_1405f404f:
      FUN_1405f0f70(param_1,param_2,pcVar15,uVar7);
      puVar11 = &local_b8;
      goto LAB_1405f3db7;
    }
    pcVar15 = "missing entity for pair (%s, %s)";
    local_c8 = *(longlong *)(param_2 + 0x18);
  }
  FUN_1405f0f70(param_1,param_2,pcVar15,uVar7);
  puVar11 = &local_b8;
LAB_1405f3db7:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)&local_48)) {
    return uVar14;
  }
  uVar9 = local_48 ^ (ulonglong)&local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar11 + -0x28) = &UNK_1405f4208;
  FUN_140b65db0(uVar9);
}

