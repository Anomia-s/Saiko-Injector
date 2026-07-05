/**
 * Function: failed_to_close_command_list
 * Address:  1403fe5f0
 * Signature: undefined failed_to_close_command_list(void)
 * Body size: 104 bytes
 */


undefined4 failed_to_close_command_list(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))();
  if (iVar2 < 0) {
    s_error_code_s_0x08lx(lVar1,"Failed to close command list!",iVar2);
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x70) = 0;
    FUN_1401552a0(*(undefined8 *)(lVar1 + 0x1e8));
    uVar3 = could_not_reset_command_list(lVar1,param_1,1);
    FUN_1401552c0(*(undefined8 *)(lVar1 + 0x1e8));
  }
  return uVar3;
}

