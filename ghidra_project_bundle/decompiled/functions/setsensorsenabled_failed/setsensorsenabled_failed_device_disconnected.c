/**
 * Function: setsensorsenabled_failed_device_disconnected
 * Address:  14044ac20
 * Signature: undefined setsensorsenabled_failed_device_disconnected(void)
 * Body size: 96 bytes
 */


undefined8 setsensorsenabled_failed_device_disconnected(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  httplib::ClientImpl::vfunction4();
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 == 0) {
    uVar3 = FUN_1400fbed0("SetSensorsEnabled failed, device disconnected");
    return uVar3;
  }
  if (*(code **)(lVar1 + 0xa0) != (code *)0x0) {
    cVar2 = (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(lVar1 + 0x68),param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  *(char *)(lVar1 + 0xe8) = (char)param_2;
  return 1;
}

