/**
 * Function: hidapi_setupdevicedriver_couldnt_open_s_s
 * Address:  1404426c0
 * Signature: undefined hidapi_setupdevicedriver_couldnt_open_s_s(void)
 * Body size: 332 bytes
 */


void hidapi_setupdevicedriver_couldnt_open_s_s(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = FUN_1404428c0(param_1);
    if (lVar3 != 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        FUN_140118490(10);
        lVar3 = sdl_hidapi_libusb_whitelist(*(undefined8 *)(param_1 + 0x18));
        if (lVar3 == 0) {
          uVar4 = out_of_memory();
          FUN_1400fb830(7,"HIDAPI_SetupDeviceDriver() couldn\'t open %s: %s",
                        *(undefined8 *)(param_1 + 0x18),uVar4);
          return;
        }
        FUN_14017a6f0(lVar3,1);
        *(longlong *)(param_1 + 0x80) = lVar3;
      }
      lVar3 = FUN_1404428c0(param_1);
      *(longlong *)(param_1 + 0x68) = lVar3;
      if (lVar3 != 0) {
        cVar2 = (**(code **)(lVar3 + 0x30))(param_1);
        if (cVar2 == '\0') {
          FUN_140442810(param_1);
        }
        if (*(longlong *)(param_1 + 0x68) != 0) {
          return;
        }
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14017a860();
        *(undefined8 *)(param_1 + 0x80) = 0;
        return;
      }
    }
  }
  else {
    if ((*(short *)(param_1 + 0x20) == 0x57e) && (*(short *)(param_1 + 0x22) == 0x2008)) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      cVar2 = DAT_141503828;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x68) + 8);
    }
    if ((lVar3 != 0) && (0 < (longlong)*(int *)(param_1 + 0xa8))) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + lVar5 * 8) + 0x68);
        if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) goto LAB_140442740;
        lVar5 = lVar5 + 1;
      } while (*(int *)(param_1 + 0xa8) != lVar5);
    }
    if (cVar2 == '\0') {
LAB_140442740:
      FUN_140442810(param_1);
      return;
    }
  }
  return;
}

