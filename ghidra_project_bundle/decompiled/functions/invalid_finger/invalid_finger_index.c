/**
 * Function: invalid_finger_index
 * Address:  14044a5b0
 * Signature: undefined invalid_finger_index(void)
 * Body size: 183 bytes
 */


undefined8
invalid_finger_index
          (longlong param_1,uint param_2,uint param_3,undefined1 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  
  httplib::ClientImpl::vfunction4();
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x140), lVar1 == 0)) {
    pcVar4 = "Invalid joystick";
  }
  else if (((int)param_2 < 0) || (*(ushort *)(lVar1 + 0x3c) <= param_2)) {
    pcVar4 = "Invalid touchpad index";
  }
  else {
    if (-1 < (int)param_3) {
      if ((int)param_3 < *(int *)(*(longlong *)(lVar1 + 0xd8) + (ulonglong)param_2 * 0x10)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xd8) + (ulonglong)param_2 * 0x10 + 8);
        lVar5 = (ulonglong)param_3 * 0x10;
        *(undefined1 *)(lVar2 + lVar5) = param_4;
        *(undefined4 *)(lVar2 + 4 + lVar5) = param_5;
        *(undefined4 *)(lVar2 + 8 + lVar5) = param_6;
        *(undefined4 *)(lVar2 + 0xc + lVar5) = param_7;
        *(byte *)(lVar1 + 0xb0) = *(byte *)(lVar1 + 0xb0) | 0x10;
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
    }
    pcVar4 = "Invalid finger index";
  }
  uVar3 = FUN_1400fbed0(pcVar4);
  return uVar3;
}

