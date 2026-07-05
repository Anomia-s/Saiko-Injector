/**
 * Function: enumerating_directinput_devices
 * Address:  1406525f0
 * Signature: undefined enumerating_directinput_devices(void)
 * Body size: 509 bytes
 */


undefined8 enumerating_directinput_devices(void)

{
  char cVar1;
  int iVar2;
  HRESULT HVar3;
  DWORD DVar4;
  undefined8 uVar5;
  HMODULE pHVar6;
  undefined4 uVar7;
  
  if (DAT_1416fdf20 != (longlong *)0x0) {
    uVar5 = FUN_1400fbed0("Haptic: SubSystem already open.");
    return uVar5;
  }
  cVar1 = FUN_1401106d0("SDL_JOYSTICK_DIRECTINPUT",1);
  if (cVar1 == '\0') {
    return 1;
  }
  iVar2 = FUN_1403d7730();
  if (iVar2 < 0) {
    uVar5 = FUN_1400fbed0("Haptic error %s","Coinitialize");
    return uVar5;
  }
  DAT_1416fdf28 = 1;
  uVar7 = 1;
  HVar3 = CoCreateInstance((IID *)&DAT_140e16000,(LPUNKNOWN)0x0,1,(IID *)&DAT_140e16010,
                           &DAT_1416fdf20);
  if (-1 < HVar3) {
    pHVar6 = GetModuleHandleW((LPCWSTR)0x0);
    if (pHVar6 == (HMODULE)0x0) {
      FUN_1404589b0();
      DVar4 = GetLastError();
      uVar5 = FUN_1400fbed0("GetModuleHandle() failed with error code %lu.",DVar4);
      return uVar5;
    }
    iVar2 = (**(code **)(*DAT_1416fdf20 + 0x38))(DAT_1416fdf20,pHVar6,0x800);
    if (-1 < iVar2) {
      uVar5 = CONCAT44(uVar7,0x101);
      iVar2 = (**(code **)(*DAT_1416fdf20 + 0x20))(DAT_1416fdf20,1,FUN_1406527f0,0,uVar5);
      if (-1 < iVar2) {
        uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x101);
        iVar2 = (**(code **)(*DAT_1416fdf20 + 0x20))(DAT_1416fdf20,2,FUN_1406527f0,0,uVar5);
        if (-1 < iVar2) {
          uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x101);
          iVar2 = (**(code **)(*DAT_1416fdf20 + 0x20))(DAT_1416fdf20,3,FUN_1406527f0,0,uVar5);
          uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((-1 < iVar2) &&
             ((iVar2 = FUN_14015b990(0x200), iVar2 != 0 ||
              (iVar2 = (**(code **)(*DAT_1416fdf20 + 0x20))
                                 (DAT_1416fdf20,4,FUN_1406527f0,0,CONCAT44(uVar7,0x101)), -1 < iVar2
              )))) {
            return 1;
          }
        }
      }
      FUN_1404589b0();
      uVar5 = FUN_1400fbed0("Haptic error %s","Enumerating DirectInput devices");
      return uVar5;
    }
    FUN_1404589b0();
    uVar5 = FUN_1400fbed0("Haptic error %s","Initializing DirectInput device");
    return uVar5;
  }
  FUN_1404589b0();
  uVar5 = FUN_1400fbed0("Haptic error %s","CoCreateInstance");
  return uVar5;
}

