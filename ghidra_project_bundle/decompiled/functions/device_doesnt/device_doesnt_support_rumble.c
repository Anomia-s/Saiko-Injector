/**
 * Function: device_doesnt_support_rumble
 * Address:  1401514e0
 * Signature: undefined device_doesnt_support_rumble(void)
 * Body size: 213 bytes
 */


undefined1 device_doesnt_support_rumble(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  
  cVar1 = FUN_1403d8fa0(param_1,6);
  if (cVar1 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (*(int *)(param_1 + 0x34) < 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      if ((*(uint *)(param_1 + 0x20) & 2) == 0) {
        if ((*(uint *)(param_1 + 0x20) & 0x800) == 0) {
          uVar2 = FUN_1400fbed0("Device doesn\'t support rumble");
          return uVar2;
        }
        *(undefined2 *)(param_1 + 0x38) = 0x800;
        *(undefined4 *)(param_1 + 0x3c) = 5000;
        *(undefined2 *)(param_1 + 0x40) = 0x4000;
        uVar4 = 0x4000;
        lVar6 = 0x42;
      }
      else {
        *(undefined2 *)(param_1 + 0x38) = 2;
        *(undefined1 *)(param_1 + 0x3c) = 1;
        *(undefined4 *)(param_1 + 0x56) = 0x400003e8;
        *(undefined4 *)(param_1 + 0x4c) = 5000;
        *(undefined2 *)(param_1 + 0x5e) = 0;
        lVar6 = 0x62;
        uVar4 = 0;
      }
      *(undefined2 *)(param_1 + lVar6) = uVar4;
      iVar5 = haptic_device_has_no_free_space_left(param_1);
      *(int *)(param_1 + 0x34) = iVar5;
      return -1 < iVar5;
    }
  }
  return bVar3;
}

