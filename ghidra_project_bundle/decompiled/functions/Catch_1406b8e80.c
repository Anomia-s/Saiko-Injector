/**
 * Function: Catch@1406b8e80
 * Address:  1406b8e80
 * Signature: undefined Catch@1406b8e80(void)
 * Body size: 61 bytes
 */


undefined8 Catch_1406b8e80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x38) + 8))();
  *(undefined4 *)(param_2 + 0x2c) = 2;
  FUN_1406c1400(uVar1,uVar2);
  return 0x1406b8e46;
}

