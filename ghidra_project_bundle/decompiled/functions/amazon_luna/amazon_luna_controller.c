/**
 * Function: amazon_luna_controller
 * Address:  140637a70
 * Signature: undefined amazon_luna_controller(void)
 * Body size: 70 bytes
 */


undefined8 amazon_luna_controller(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140160c70(1,0x40);
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar1;
    FUN_14043fe30(param_1,"Amazon Luna Controller");
    uVar2 = FUN_140440300(param_1,0);
    return uVar2;
  }
  return 0;
}

