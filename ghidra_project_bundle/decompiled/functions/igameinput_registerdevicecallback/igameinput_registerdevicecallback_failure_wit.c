/**
 * Function: igameinput_registerdevicecallback_failure_wit
 * Address:  140442cf0
 * Signature: undefined igameinput_registerdevicecallback_failure_wit(void)
 * Body size: 407 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong igameinput_registerdevicecallback_failure_wit(void)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 unaff_RSI;
  
  cVar2 = FUN_1401106d0("SDL_JOYSTICK_GAMEINPUT",0);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar2 == '\0') goto LAB_140442e67;
  if ((DAT_1416f1770 == 0) &&
     (DAT_1416f1770 = parameter_s_is_invalid("gameinput.dll"), DAT_1416f1770 == 0)) {
LAB_140442e65:
    uVar6 = 0;
  }
  else {
    if (DAT_1416f1778 == (longlong *)0x0) {
      pcVar5 = (code *)failed_loading_s(DAT_1416f1770,"GameInputCreate");
      if (pcVar5 == (code *)0x0) goto LAB_140442e65;
      iVar3 = (*pcVar5)(&DAT_1416f1778);
      if (iVar3 < 0) {
        pcVar7 = "GameInputCreate failure with HRESULT of %08lX";
        goto LAB_140442e81;
      }
    }
    iVar3 = (**(code **)(*DAT_1416f1778 + 0x48))
                      (DAT_1416f1778,0,0xe,1,2,0,FUN_140443ba0,&DAT_1416f1780);
    if (iVar3 < 0) {
      pcVar7 = "IGameInput::RegisterDeviceCallback failure with HRESULT of %08lX";
LAB_140442e81:
      uVar6 = FUN_1400fbed0(pcVar7,iVar3);
      return uVar6;
    }
    uVar4 = sdl_timer_resolution();
    _DAT_1416f1788 = (**(code **)(*DAT_1416f1778 + 0x18))();
    _DAT_1416f1788 = uVar4 / 1000 - _DAT_1416f1788;
    httplib::ClientImpl::vfunction4();
    if (0 < DAT_1416f1798) {
      iVar3 = 0;
      do {
        puVar1 = *(undefined8 **)(DAT_1416f1790 + (longlong)iVar3 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          if (*(char *)(puVar1 + 0xf) == '\0') {
            FUN_14012b7b0(*(undefined4 *)(puVar1 + 0xd));
            *(undefined1 *)(puVar1 + 0xf) = 1;
          }
          if ((*(char *)((longlong)puVar1 + 0x79) != '\0') ||
             (uVar4 = (**(code **)(*(longlong *)*puVar1 + 0x20))(), (uVar4 & 1) == 0)) {
            FUN_14012b4c0(*(undefined4 *)(puVar1 + 0xd));
            gameinput_internalremovebyindex_argument_idx(iVar3);
            iVar3 = iVar3 + -1;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_1416f1798);
    }
  }
LAB_140442e67:
  return uVar6 & 0xffffffff;
}

