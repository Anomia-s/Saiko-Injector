/**
 * Function: newindex_chain_too_long_possible_loop
 * Address:  1406bc190
 * Signature: undefined newindex_chain_too_long_possible_loop(void)
 * Body size: 657 bytes
 */


void newindex_chain_too_long_possible_loop
               (longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_2 + 0xc) == 6) {
    lVar8 = *param_2;
    puVar5 = (undefined8 *)FUN_1406bf260(lVar8,param_3);
    if ((((*(int *)((longlong)puVar5 + 0xc) == 0) &&
         (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 != 0)) && ((*(byte *)(lVar1 + 3) & 2) == 0)) &&
       (puVar6 = (undefined8 *)
                 FUN_1406bbce0(lVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x3e0)),
       puVar6 != (undefined8 *)0x0)) {
      iVar9 = *(int *)((longlong)puVar6 + 0xc);
      goto joined_r0x0001406bc273;
    }
LAB_1406bc1de:
    if (*(char *)(lVar8 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
      attempt_to_modify_a_readonly_table(param_1);
    }
    *(undefined1 *)(lVar8 + 3) = 0;
    if (puVar5 == &DAT_1412193a0) {
      puVar5 = (undefined8 *)table_index_is_nil(param_1,lVar8,param_3);
    }
    *(int *)(param_1 + 0x54) =
         (int)((ulonglong)((longlong)puVar5 - *(longlong *)(lVar8 + 0x20)) >> 5);
    uVar2 = *(undefined4 *)((longlong)param_4 + 4);
    lVar1 = param_4[1];
    uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(int *)puVar5 = (int)*param_4;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar2;
    *(int *)(puVar5 + 1) = (int)lVar1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    if (((4 < *(int *)((longlong)param_4 + 0xc)) && ((*(byte *)(lVar8 + 1) & 4) != 0)) &&
       ((*(byte *)(*param_4 + 1) & 3) != 0)) {
      FUN_1406bb000(param_1,lVar8);
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_1406bbd20(param_1,param_2,1);
    iVar9 = *(int *)((longlong)puVar6 + 0xc);
    if (iVar9 == 0) {
LAB_1406bc400:
      attempt_to_index_s_with_s(param_1,param_2,param_3);
      goto LAB_1406bc40e;
    }
joined_r0x0001406bc273:
    if (iVar9 != 7) {
      local_58 = *(undefined4 *)puVar6;
      uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_50 = *(undefined4 *)(puVar6 + 1);
      iStack_4c = *(int *)((longlong)puVar6 + 0xc);
      iVar9 = 99;
      param_2 = (longlong *)&local_58;
      do {
        if (iStack_4c == 6) {
          lVar8 = CONCAT44(uStack_54,local_58);
          puVar5 = (undefined8 *)FUN_1406bf260(lVar8,param_3);
          if (((*(int *)((longlong)puVar5 + 0xc) != 0) ||
              (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0)) ||
             (((*(byte *)(lVar1 + 3) & 2) != 0 ||
              (puVar6 = (undefined8 *)
                        FUN_1406bbce0(lVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x3e0)
                                     ), puVar6 == (undefined8 *)0x0)))) goto LAB_1406bc1de;
          iVar7 = *(int *)((longlong)puVar6 + 0xc);
        }
        else {
          puVar6 = (undefined8 *)FUN_1406bbd20(param_1,param_2,1);
          iVar7 = *(int *)((longlong)puVar6 + 0xc);
          if (iVar7 == 0) goto LAB_1406bc400;
        }
        if (iVar7 == 7) break;
        local_58 = *(undefined4 *)puVar6;
        uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_50 = *(undefined4 *)(puVar6 + 1);
        iStack_4c = *(int *)((longlong)puVar6 + 0xc);
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1406c1000(param_1,"\'__newindex\' chain too long; possible loop");
        }
      } while( true );
    }
    puVar5 = *(undefined8 **)(param_1 + 8);
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    lVar8 = *(longlong *)(param_1 + 8);
    lVar1 = param_2[1];
    *(longlong *)(lVar8 + 0x10) = *param_2;
    *(longlong *)(lVar8 + 0x18) = lVar1;
    lVar8 = *(longlong *)(param_1 + 8);
    uVar4 = param_3[1];
    *(undefined8 *)(lVar8 + 0x20) = *param_3;
    *(undefined8 *)(lVar8 + 0x28) = uVar4;
    lVar8 = *(longlong *)(param_1 + 8);
    uVar2 = *(undefined4 *)((longlong)param_4 + 4);
    lVar1 = param_4[1];
    uVar3 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(int *)(lVar8 + 0x30) = (int)*param_4;
    *(undefined4 *)(lVar8 + 0x34) = uVar2;
    *(int *)(lVar8 + 0x38) = (int)lVar1;
    *(undefined4 *)(lVar8 + 0x3c) = uVar3;
    lVar8 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x28) - lVar8 < 0x41) {
      FUN_1406b9200(param_1,4);
      lVar8 = *(longlong *)(param_1 + 8);
    }
    *(longlong *)(param_1 + 8) = lVar8 + 0x40;
    FUN_1406b94f0(param_1,lVar8,0);
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
LAB_1406bc40e:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
}

