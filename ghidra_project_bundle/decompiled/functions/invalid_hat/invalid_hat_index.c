/**
 * Function: invalid_hat_index
 * Address:  14044a540
 * Signature: undefined invalid_hat_index(void)
 * Body size: 102 bytes
 */


undefined8 invalid_hat_index(longlong param_1,uint param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  httplib::ClientImpl::vfunction4();
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x140), lVar1 == 0)) {
    pcVar3 = "Invalid joystick";
  }
  else {
    if ((-1 < (int)param_2) && (param_2 < *(ushort *)(lVar1 + 0x3a))) {
      *(undefined1 *)(*(longlong *)(lVar1 + 200) + (ulonglong)param_2) = param_3;
      *(byte *)(lVar1 + 0xb0) = *(byte *)(lVar1 + 0xb0) | 8;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    pcVar3 = "Invalid hat index";
  }
  uVar2 = FUN_1400fbed0(pcVar3);
  return uVar2;
}

