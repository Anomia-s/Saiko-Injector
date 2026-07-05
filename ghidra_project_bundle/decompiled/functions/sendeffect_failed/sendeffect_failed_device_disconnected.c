/**
 * Function: sendeffect_failed_device_disconnected
 * Address:  14044abc0
 * Signature: undefined sendeffect_failed_device_disconnected(void)
 * Body size: 95 bytes
 */


void sendeffect_failed_device_disconnected(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char *pcVar2;
  
  httplib::ClientImpl::vfunction4();
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 == 0) {
    pcVar2 = "SendEffect failed, device disconnected";
  }
  else {
    if (*(code **)(lVar1 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014044abfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x98))(*(undefined8 *)(lVar1 + 0x68),param_2,param_3);
      return;
    }
    pcVar2 = "That operation is not supported";
  }
  FUN_1400fbed0(pcVar2);
  return;
}

