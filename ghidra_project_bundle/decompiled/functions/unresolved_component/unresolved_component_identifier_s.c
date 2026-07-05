/**
 * Function: unresolved_component_identifier_s
 * Address:  1407680a0
 * Signature: undefined unresolved_component_identifier_s(void)
 * Body size: 650 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
unresolved_component_identifier_s
          (undefined8 *param_1,undefined4 *param_2,void *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 auStack_18c8 [32];
  undefined8 local_18a8;
  undefined1 local_18a0 [2080];
  undefined1 local_1080 [2080];
  undefined1 local_860 [2080];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_18c8;
  uVar5 = *param_1;
  memset(local_860,0,0x820);
  iVar2 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 10),local_860,param_4);
  uVar9 = 0xffffffff;
  if (iVar2 != 0) goto LAB_14076810c;
  if (**(int **)(param_2 + 10) == 6) {
    memset(local_1080,0,0x820);
    iVar2 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 8),local_1080,param_4);
    if (iVar2 != 0) goto LAB_14076810c;
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
    piVar3 = (int *)FUN_1400ba4f0(uVar5,uVar7,0x16e);
    if (piVar3 != (int *)0x0) {
      if (*piVar3 == 0) {
        piVar3 = (int *)FUN_1400ba4f0(uVar5,uVar7,0x163);
        if (*piVar3 == 0x11) {
          lVar8 = *(longlong *)(param_2 + 10);
          lVar4 = (**(code **)(param_4 + 0x20))
                            (*param_1,*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(param_4 + 0x28))
          ;
          *(longlong *)(param_2 + 2) = lVar4;
          if (lVar4 == 0) {
            local_18a8 = *(undefined8 *)(lVar8 + 0x20);
            FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                          "unresolved component identifier \'%s\'");
          }
          else {
            *param_2 = 0xd;
            uVar9 = 0;
            cannot_open_scope_for_s_missing_reflection_da(local_18a0,*param_1,lVar4,0);
            memcpy(param_3,local_18a0,0x820);
          }
          goto LAB_14076810c;
        }
      }
      goto LAB_14076820b;
    }
    local_18a8 = 0;
    uVar7 = FUN_1403ae340(uVar5,0,uVar7,".");
    uVar5 = param_1[1];
    lVar8 = param_1[2];
    lVar4 = *(longlong *)(param_2 + 6) - lVar8;
    pcVar10 = "cannot use [] on value of type \'%s\' (missing reflection data)";
  }
  else {
LAB_14076820b:
    iVar2 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
    if (iVar2 != 0) goto LAB_14076810c;
    iVar2 = cannot_open_scope_for_type_s(param_3);
    if (iVar2 == 0) {
      cVar1 = FUN_140758640(param_3);
      if (cVar1 != '\0') {
        uVar5 = FUN_140758660(param_3);
        *(undefined8 *)(param_2 + 2) = uVar5;
        puVar6 = (undefined4 *)FUN_1403a5610(*param_1,uVar5);
        param_2[0xc] = *puVar6;
        uVar9 = 0;
        goto LAB_14076810c;
      }
    }
    local_18a8 = 0;
    uVar7 = FUN_1403ae340(*param_1,0,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),".");
    uVar5 = param_1[1];
    lVar8 = param_1[2];
    lVar4 = *(longlong *)(param_2 + 6) - lVar8;
    pcVar10 = "invalid usage of [] on non collection/entity type \'%s\'";
  }
  local_18a8 = uVar7;
  FUN_140399a50(uVar5,lVar8,lVar4,pcVar10);
  (*DAT_1415033b0)(uVar7);
LAB_14076810c:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_18c8)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_18c8);
}

