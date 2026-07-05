/**
 * Function: sdl_timer_resolution
 * Address:  140118380
 * Signature: undefined sdl_timer_resolution(void)
 * Body size: 259 bytes
 */


ulonglong sdl_timer_resolution(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (DAT_141525620 == 0) {
    parameter_s_is_invalid("SDL_TIMER_RESOLUTION",FUN_1401181a0,0);
    uVar2 = FUN_140160d50();
    uVar1 = FUN_1403d8de0(1000000000);
    DAT_141525628 = (undefined4)(1000000000 / (ulonglong)uVar1);
    if (uVar2 >> 0x20 == 0) {
      DAT_14152562c = (undefined4)((uVar2 & 0xffffffff) / (ulonglong)uVar1);
    }
    else {
      DAT_14152562c = (undefined4)(uVar2 / uVar1);
    }
    uVar1 = FUN_1403d8de0(1000);
    DAT_141525630 = (uint)(1000 / (ulonglong)uVar1);
    uVar4 = (ulonglong)uVar1;
    if (uVar2 >> 0x20 == 0) {
      uVar2 = uVar2 & 0xffffffff;
      DAT_141525634 = (uint)(uVar2 / uVar4);
    }
    else {
      DAT_141525634 = (uint)(uVar2 / uVar4);
    }
    uVar2 = FUN_140160d00(uVar4,uVar2 % uVar4);
    DAT_141525620 = -(ulonglong)(uVar2 == 0) | uVar2;
  }
  lVar3 = FUN_140160d00();
  uVar2 = (ulonglong)DAT_141525630 * (lVar3 - DAT_141525620);
  if (uVar2 >> 0x20 != 0) {
    return uVar2 / DAT_141525634;
  }
  return (uVar2 & 0xffffffff) / (ulonglong)DAT_141525634;
}

