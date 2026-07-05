/**
 * Function: variable_s_is_not_initialized
 * Address:  140767fa0
 * Signature: undefined variable_s_is_not_initialized(void)
 * Body size: 248 bytes
 */


undefined8
variable_s_is_not_initialized(undefined8 *param_1,longlong param_2,void *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined1 local_848 [2080];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_878;
  lVar2 = FUN_1405f1090(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_2 + 0x20),
                        param_2 + 0x38);
  if (lVar2 == 0) {
    iVar1 = entity_s_is_not_a_variable
                      (param_1,param_2,*(undefined8 *)(param_4 + 0x20),
                       *(undefined8 *)(param_4 + 0x28));
    uVar3 = 0xffffffff;
    if (iVar1 != 0) goto LAB_140768061;
    lVar2 = *(longlong *)(param_2 + 8);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 8);
    *(longlong *)(param_2 + 8) = lVar2;
    if (lVar2 == 0) {
      local_858 = *(undefined8 *)(param_2 + 0x20);
      FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                    "variable \'%s\' is not initialized");
      uVar3 = 0xffffffff;
      goto LAB_140768061;
    }
  }
  uVar3 = 0;
  cannot_open_scope_for_s_missing_reflection_da(local_848,*param_1,lVar2,0);
  memcpy(param_3,local_848,0x820);
LAB_140768061:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_878)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_878);
}

