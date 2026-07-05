/**
 * Function: Catch@1406c7000
 * Address:  1406c7000
 * Signature: undefined Catch@1406c7000(void)
 * Body size: 120 bytes
 */


undefined8 Catch_1406c7000(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x4c8) + 8))();
  FUN_14079f4f0(param_2 + 0x488,":%d: %s",*(int *)(*(longlong *)(param_2 + 0x4c8) + 0x18) + 1,uVar1)
  ;
  FUN_1407ad860(*(undefined8 *)(param_2 + 0x4b8),param_2 + 0x488);
  FUN_140004b30(param_2 + 0x488);
  return 0x1406c6f39;
}

