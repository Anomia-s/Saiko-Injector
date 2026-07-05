/**
 * Function: cannot_execute_a_command_list_before_it_is_cl
 * Address:  1406e0780
 * Signature: undefined cannot_execute_a_command_list_before_it_is_cl(void)
 * Body size: 279 bytes
 */


undefined8 cannot_execute_a_command_list_before_it_is_cl(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 1) {
    pcVar2 = (char *)FUN_140b65d30(0x40);
    builtin_strncpy(pcVar2,"Cannot execute a command list before it is closed",0x32);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),2,pcVar2);
    uVar3 = 0x40;
  }
  else {
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    pcVar2 = (char *)FUN_140b65d30(0x50);
    builtin_strncpy(pcVar2,"Cannot execute a command list before it is opened and then closed",0x42)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),2,pcVar2);
    uVar3 = 0x50;
  }
  thunk_FUN_140b68ba8(pcVar2,uVar3);
  return 0;
}

