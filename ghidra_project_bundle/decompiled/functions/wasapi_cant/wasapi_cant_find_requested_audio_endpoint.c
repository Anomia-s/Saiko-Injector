/**
 * Function: wasapi_cant_find_requested_audio_endpoint
 * Address:  140654420
 * Signature: undefined wasapi_cant_find_requested_audio_endpoint(void)
 * Body size: 195 bytes
 */


undefined8 wasapi_cant_find_requested_audio_endpoint(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar2 = sdl_timer_resolution();
  if ((param_1 == 0) || (*(undefined8 **)(param_1 + 0x58) == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x58);
  }
  iVar1 = (**(code **)(*DAT_1416fdf30 + 0x28))(DAT_1416fdf30,uVar4,param_2);
  if (iVar1 == -0x7ff8fb70) {
    do {
      uVar3 = sdl_timer_resolution();
      uVar5 = (lVar2 + 8000U) - uVar3;
      if (lVar2 + 8000U < uVar3 || uVar5 == 0) {
        iVar1 = -0x7ff8fb70;
        goto LAB_1406544cc;
      }
      if (299 < uVar5) {
        uVar5 = 300;
      }
      FUN_140118490(uVar5);
      iVar1 = (**(code **)(*DAT_1416fdf30 + 0x28))(DAT_1416fdf30,uVar4,param_2);
    } while (iVar1 == -0x7ff8fb70);
  }
  if (-1 < iVar1) {
    return 1;
  }
LAB_1406544cc:
  uVar4 = FUN_1403d7600("WASAPI can\'t find requested audio endpoint",iVar1);
  return uVar4;
}

