/**
 * Function: running_the_effect
 * Address:  140653c10
 * Signature: undefined running_the_effect(void)
 * Body size: 60 bytes
 */


undefined8 running_the_effect(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x50);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_3,0);
  if (-1 < iVar2) {
    return 1;
  }
  uVar3 = FUN_1400fbed0("Haptic error %s","Running the effect");
  return uVar3;
}

