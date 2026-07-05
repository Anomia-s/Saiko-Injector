/**
 * Function: a_shader_table_entry_provides_local_bindings
 * Address:  140733c10
 * Signature: undefined a_shader_table_entry_provides_local_bindings(void)
 * Body size: 626 bytes
 */


undefined8
a_shader_table_entry_provides_local_bindings(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 == (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    local_30 = 0;
    local_38 = (char *)FUN_140b65d30(0x40);
    local_28 = 0x30;
    local_20 = 0x3f;
    builtin_strncpy(local_38,"Couldn\'t find a DXR PSO export with a given name",0x31);
    FUN_14053e350(uVar2,&local_38);
  }
  else {
    lVar1 = *param_2;
    if (param_3 == 0 && lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x100);
      local_30 = 0;
      local_38 = (char *)FUN_140b65d30(0x40);
      local_28 = 0x3d;
      local_20 = 0x3f;
      builtin_strncpy(local_38,"A shader table entry does not provide required local bindings",0x3e)
      ;
      FUN_14053e350(uVar2,&local_38);
    }
    else if (lVar1 == 0 && param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x100);
      local_30 = 0;
      local_38 = (char *)FUN_140b65d30(0x50);
      local_28 = 0x43;
      local_20 = 0x4f;
      builtin_strncpy(local_38,"A shader table entry provides local bindings, but none are required"
                      ,0x44);
      FUN_14053e350(uVar2,&local_38);
    }
    else {
      if (param_3 == 0) {
        return 1;
      }
      if (*(longlong *)(param_3 + 0x10) == lVar1) {
        return 1;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x100);
      local_30 = 0;
      local_38 = (char *)FUN_140b65d30(0x60);
      local_28 = 0x52;
      local_20 = 0x5f;
      builtin_strncpy(local_38,
                      "A shader table entry provides local bindings that do not match the expected layout"
                      ,0x53);
      FUN_14053e350(uVar2,&local_38);
    }
  }
  if (0xf < local_20) {
    uVar3 = local_20 + 1;
    pcVar4 = local_38;
    if (0xfff < uVar3) {
      pcVar4 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = local_20 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar4,uVar3);
  }
  return 0;
}

