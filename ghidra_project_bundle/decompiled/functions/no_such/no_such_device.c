/**
 * Function: no_such_device
 * Address:  14044a920
 * Signature: undefined no_such_device(void)
 * Body size: 364 bytes
 */


undefined8 no_such_device(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  httplib::ClientImpl::vfunction4();
  httplib::ClientImpl::vfunction4();
  lVar3 = DAT_1416f19a8;
  if (param_2 != 0 && DAT_1416f19a8 != 0) {
    do {
      param_2 = param_2 + -1;
      lVar3 = *(longlong *)(lVar3 + 0x108);
      if (lVar3 == 0) break;
    } while (param_2 != 0);
  }
  if (lVar3 == 0) {
    uVar2 = FUN_1400fbed0("No such device");
  }
  else {
    *(longlong *)(param_1 + 0x140) = lVar3;
    *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(lVar3 + 0x34);
    *(uint *)(param_1 + 0x70) = (uint)*(ushort *)(lVar3 + 0x36);
    *(uint *)(param_1 + 0x60) = (uint)*(ushort *)(lVar3 + 0x3a);
    *(longlong *)(lVar3 + 0x100) = param_1;
    if (*(short *)(lVar3 + 0x3c) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        FUN_14012b660(param_1,*(undefined4 *)(*(longlong *)(lVar3 + 0xd8) + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 < *(ushort *)(lVar3 + 0x3c));
    }
    if (*(short *)(lVar3 + 0x3e) != 0) {
      lVar4 = 8;
      uVar5 = 0;
      do {
        FUN_14012b6e0(param_1,*(undefined4 *)(*(longlong *)(lVar3 + 0xe0) + -8 + lVar4),
                      *(undefined4 *)(*(longlong *)(lVar3 + 0xe0) + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 < *(ushort *)(lVar3 + 0x3e));
    }
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      uVar1 = parameter_s_is_invalid(param_1);
      FUN_14014fd20(uVar1,"SDL.joystick.cap.rgb_led",1);
    }
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      uVar1 = parameter_s_is_invalid(param_1);
      FUN_14014fd20(uVar1,"SDL.joystick.cap.rumble",1);
    }
    if (*(longlong *)(lVar3 + 0x88) != 0) {
      uVar1 = parameter_s_is_invalid(param_1);
      FUN_14014fd20(uVar1,"SDL.joystick.cap.trigger_rumble",1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

