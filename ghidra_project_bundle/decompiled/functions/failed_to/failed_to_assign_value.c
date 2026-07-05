/**
 * Function: failed_to_assign_value
 * Address:  14076a700
 * Signature: undefined failed_to_assign_value(void)
 * Body size: 335 bytes
 */


undefined8 failed_to_assign_value(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_898 [32];
  longlong local_878;
  undefined8 local_870;
  undefined1 local_868 [2080];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_898;
  lVar2 = *param_2;
  puVar1 = (undefined8 *)(lVar2 + 0x20);
  iVar6 = invalid_division_by_zero(param_1,puVar1);
  uVar7 = 0xffffffff;
  if (iVar6 == 0) {
    piVar3 = (int *)*puVar1;
    uVar7 = 0;
    if (*piVar3 == 0) {
      lVar4 = *(longlong *)(lVar2 + 8);
      lVar5 = *(longlong *)(piVar3 + 2);
      if (lVar4 != lVar5) {
        uVar7 = FUN_140762b10(*param_1,lVar4);
        cannot_open_scope_for_s_missing_reflection_da(local_868,*param_1,lVar4,uVar7);
        local_870 = *(undefined8 *)(piVar3 + 8);
        local_878 = lVar5;
        iVar6 = value_pointer_is_null(local_868,&local_878);
        if (iVar6 == 0) {
          if (*(int **)(piVar3 + 8) != piVar3 + 10) {
            FUN_140762ba0(*param_1,*(undefined8 *)(piVar3 + 2));
          }
          *(longlong *)(piVar3 + 2) = lVar4;
          *(undefined8 *)(piVar3 + 8) = uVar7;
          *puVar1 = 0;
          ecs_expr_initializer_t(param_1,*param_2);
          *param_2 = (longlong)piVar3;
          uVar7 = 0;
        }
        else {
          FUN_140399a50(param_1[1],param_1[2],*(longlong *)(lVar2 + 0x18) - param_1[2],
                        "failed to assign value");
          FUN_140762ba0(*param_1,lVar4,uVar7);
          uVar7 = 0xffffffff;
        }
      }
    }
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_898)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_898);
}

