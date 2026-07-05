/**
 * Function: hidapi_device_disconnected_while_opening
 * Address:  1404418e0
 * Signature: undefined hidapi_device_disconnected_while_opening(void)
 * Body size: 483 bytes
 */


undefined8 hidapi_device_disconnected_while_opening(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  httplib::ClientImpl::vfunction4();
  iVar2 = param_2;
  lVar1 = DAT_1416f1750;
  do {
    if (lVar1 == 0) {
      httplib::ClientImpl::vfunction4();
LAB_140441a85:
      uVar7 = FUN_1400fbed0("Couldn\'t find HIDAPI device at index %d",param_2);
      return uVar7;
    }
    iVar8 = iVar2;
    if (((*(longlong *)(lVar1 + 0xa0) == 0) && (*(longlong *)(lVar1 + 0x68) != 0)) &&
       (iVar8 = iVar2 - *(int *)(lVar1 + 0x8c), iVar2 < *(int *)(lVar1 + 0x8c))) {
      uVar4 = *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + (longlong)iVar2 * 4);
      httplib::ClientImpl::vfunction4();
      if (*(longlong *)(lVar1 + 0x68) != 0) {
        plVar6 = (longlong *)FUN_140160c70(1,8);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = lVar1;
          FUN_1401552a0(*(undefined8 *)(lVar1 + 0x78));
          *(undefined1 *)(lVar1 + 0x99) = 1;
          (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x48))(lVar1);
          *(undefined1 *)(lVar1 + 0x99) = 0;
          FUN_1401552c0(*(undefined8 *)(lVar1 + 0x78));
          if (*(int *)(lVar1 + 0x8c) == 0) {
            FUN_140160cf0(plVar6);
            uVar7 = FUN_1400fbed0("HIDAPI device disconnected while opening");
            return uVar7;
          }
          *(uint *)(param_1 + 0xdc) = *(byte *)(lVar1 + 0x54) + 1;
          cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x50))(lVar1,param_1);
          if (cVar3 != '\0') {
            uVar4 = parameter_s_is_invalid(param_1);
            uVar5 = (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x68))(lVar1,param_1);
            FUN_14014fd20(uVar4,"SDL.joystick.cap.mono_led",uVar5 & 0xffffff01);
            FUN_14014fd20(uVar4,"SDL.joystick.cap.rgb_led",(uVar5 & 2) >> 1);
            FUN_14014fd20(uVar4,"SDL.joystick.cap.player_led",(uVar5 & 4) >> 2);
            FUN_14014fd20(uVar4,"SDL.joystick.cap.rumble",(uVar5 & 0x10) >> 4);
            FUN_14014fd20(uVar4,"SDL.joystick.cap.trigger_rumble",(uVar5 & 0x20) >> 5);
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              uVar7 = FUN_1400fcda0();
              *(undefined8 *)(param_1 + 0x18) = uVar7;
            }
            *(longlong **)(param_1 + 0x140) = plVar6;
            return 1;
          }
          FUN_1404400d0(lVar1,uVar4);
          FUN_140160cf0(plVar6);
        }
        return 0;
      }
      goto LAB_140441a85;
    }
    lVar1 = *(longlong *)(lVar1 + 0xb8);
    iVar2 = iVar8;
  } while( true );
}

