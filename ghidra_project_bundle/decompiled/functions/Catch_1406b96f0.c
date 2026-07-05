/**
 * Function: Catch@1406b96f0
 * Address:  1406b96f0
 * Signature: undefined Catch@1406b96f0(void)
 * Body size: 60 bytes
 */


undefined8 Catch_1406b96f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
  *(undefined4 *)(param_2 + 0x34) = 2;
  FUN_1406c1400(*(undefined8 *)(param_2 + 0x28),uVar1);
  return 0x1406b96a4;
}

