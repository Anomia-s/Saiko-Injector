/**
 * Function: haptic_gain_must_be_between_0_and_100
 * Address:  1401508e0
 * Signature: undefined haptic_gain_must_be_between_0_and_100(void)
 * Body size: 170 bytes
 */


undefined8 haptic_gain_must_be_between_0_and_100(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  
  cVar1 = FUN_1403d8fa0(param_1,6);
  if (cVar1 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
    return 0;
  }
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    pcVar5 = "Haptic: Device does not support setting gain.";
  }
  else {
    if (param_2 < 0x65) {
      pcVar5 = (char *)FUN_1401550c0("SDL_HAPTIC_GAIN_MAX");
      if (pcVar5 != (char *)0x0) {
        iVar2 = atoi(pcVar5);
        iVar4 = 0;
        if (0 < iVar2) {
          iVar4 = iVar2;
        }
        iVar2 = 100;
        if (iVar4 < 100) {
          iVar2 = iVar4;
        }
        param_2 = (iVar2 * param_2 & 0xffff) / 100;
      }
      uVar3 = haptic_error_s(param_1,param_2);
      return uVar3;
    }
    pcVar5 = "Haptic: Gain must be between 0 and 100.";
  }
  uVar3 = FUN_1400fbed0(pcVar5);
  return uVar3;
}

