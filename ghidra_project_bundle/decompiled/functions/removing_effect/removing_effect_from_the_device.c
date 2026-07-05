/**
 * Function: removing_effect_from_the_device
 * Address:  140653c90
 * Signature: undefined removing_effect_from_the_device(void)
 * Body size: 165 bytes
 */


void removing_effect_from_the_device(undefined8 param_1,short *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x24) + 0x50) + 0x58))();
  if (iVar3 < 0) {
    FUN_1400fbed0("Haptic error %s","Removing effect from the device");
  }
  sVar1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 0x24);
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x30));
  *(undefined8 *)(lVar2 + 0x30) = 0;
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x20));
  *(undefined8 *)(lVar2 + 0x20) = 0;
  lVar4 = *(longlong *)(lVar2 + 0x40);
  if (lVar4 != 0) {
    if (SBORROW2(0,sVar1)) {
      FUN_140160cf0(*(undefined8 *)(lVar4 + 0x10));
      *(undefined8 *)(lVar4 + 0x10) = 0;
      lVar4 = *(longlong *)(lVar2 + 0x40);
    }
    FUN_140160cf0(lVar4);
    *(undefined8 *)(lVar2 + 0x40) = 0;
  }
  FUN_140160cf0(*(undefined8 *)(lVar2 + 0x28));
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}

