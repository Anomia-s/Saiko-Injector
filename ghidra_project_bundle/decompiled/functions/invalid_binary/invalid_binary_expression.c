/**
 * Function: invalid_binary_expression
 * Address:  1407678a0
 * Signature: undefined invalid_binary_expression(void)
 * Body size: 712 bytes
 */


undefined8
invalid_binary_expression(undefined8 *param_1,longlong param_2,void *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_8c8 [32];
  undefined8 local_8a8;
  undefined8 local_8a0;
  longlong *local_898;
  undefined8 *local_890;
  int *local_888;
  int local_874;
  undefined8 local_870;
  longlong local_868;
  undefined1 local_860 [2080];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_8c8;
  local_868 = 0;
  local_870 = 0;
  local_874 = 0;
  if (*(char *)((longlong)param_3 + 0x80a) == '\x01') {
    lVar4 = FUN_140758660(param_3);
    *(longlong *)(param_2 + 8) = lVar4;
    if (lVar4 == 0x151) {
      memset(param_3,0,0x820);
    }
  }
  iVar3 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
  uVar7 = 0xffffffff;
  if (iVar3 != 0) goto LAB_140767a51;
  lVar4 = *(longlong *)(param_2 + 0x20);
  if ((lVar4 == 0) || (piVar1 = *(int **)(param_2 + 0x28), piVar1 == (int *)0x0)) {
    FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                  "invalid binary expression");
    goto LAB_140767a51;
  }
  memcpy(local_860,param_3,0x820);
  if ((*piVar1 == 6) &&
     (lVar4 = FUN_1400ba4f0(*param_1,*(undefined8 *)(lVar4 + 8),0x164), lVar4 != 0)) {
    cannot_open_scope_for_s_missing_reflection_da
              (local_860,*param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 8),0);
  }
  iVar3 = unknown_type_for_initializer(param_1,*(undefined8 *)(param_2 + 0x28),local_860,param_4);
  if (iVar3 != 0) goto LAB_140767a51;
  local_8a8 = *(undefined8 *)(param_2 + 0x28);
  local_888 = &local_874;
  local_890 = &local_870;
  local_898 = &local_868;
  local_8a0 = CONCAT44(local_8a0._4_4_,*(undefined4 *)(param_2 + 0x30));
  iVar3 = incompatible_types_in_expression_s_vs_s
                    (param_1,param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x20));
  uVar6 = local_870;
  if (iVar3 != 0) goto LAB_140767a51;
  if (local_874 == 0) {
    cVar2 = FUN_140768850(*param_1,local_870,*(undefined4 *)(param_2 + 0x30));
    lVar4 = local_868;
    if (cVar2 == '\0') {
      local_8a8 = 0;
      uVar6 = FUN_1403ae340(*param_1,0,uVar6,".");
      local_8a8 = FUN_1405d8a40(*(undefined4 *)(param_2 + 0x30));
      local_8a0 = uVar6;
      FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                    "invalid operator %s for type \'%s\'");
      (*DAT_1415033b0)(uVar6);
      goto LAB_140767a51;
    }
    if (local_868 != *(longlong *)(*(longlong *)(param_2 + 0x20) + 8)) {
      lVar5 = invalid_cast_from_s_to_s(param_1,*(longlong *)(param_2 + 0x20),local_868);
      *(longlong *)(param_2 + 0x20) = lVar5;
      if (lVar5 == 0) goto LAB_140767a51;
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    lVar5 = *(longlong *)(param_2 + 0x28);
    if (lVar4 != *(longlong *)(lVar5 + 8)) goto LAB_140767ad5;
  }
  else {
    *(longlong *)(param_2 + 0x38) = local_868;
    *(int *)(param_2 + 0x40) = local_874;
    lVar5 = *(longlong *)(param_2 + 0x28);
    if ((local_868 != *(longlong *)(lVar5 + 8)) &&
       (lVar4 = local_868,
       *(longlong *)(lVar5 + 8) != *(longlong *)(*(longlong *)(param_2 + 0x20) + 8))) {
LAB_140767ad5:
      lVar4 = invalid_cast_from_s_to_s(param_1,lVar5,lVar4);
      *(longlong *)(param_2 + 0x28) = lVar4;
      if (lVar4 == 0) goto LAB_140767a51;
    }
  }
  *(undefined8 *)(param_2 + 8) = local_870;
  uVar7 = 0;
LAB_140767a51:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_8c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_8c8);
  }
  return uVar7;
}

