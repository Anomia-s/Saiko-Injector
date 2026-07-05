/**
 * Function: setled_failed_device_disconnected
 * Address:  140441bd0
 * Signature: undefined setled_failed_device_disconnected(void)
 * Body size: 120 bytes
 */


void setled_failed_device_disconnected
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  
  httplib::ClientImpl::vfunction4();
  if ((param_1 != 0) && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) {
    lVar1 = **(longlong **)(param_1 + 0x140);
    cVar2 = FUN_1403d8fa0(lVar1,9);
    if ((cVar2 != '\0') && (*(longlong *)(lVar1 + 0x68) != 0)) {
      (**(code **)(*(longlong *)(lVar1 + 0x68) + 0x70))(lVar1,param_1,param_2,param_3,param_4);
      return;
    }
  }
  FUN_1400fbed0("SetLED failed, device disconnected");
  return;
}

