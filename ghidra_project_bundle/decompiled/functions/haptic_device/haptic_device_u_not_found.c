/**
 * Function: haptic_device_u_not_found
 * Address:  1401506e0
 * Signature: undefined haptic_device_u_not_found(void)
 * Body size: 500 bytes
 */


int * haptic_device_u_not_found(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *_Str;
  int iVar7;
  
  if ((param_1 != 0) && (iVar2 = FUN_140458720(), 0 < iVar2)) {
    iVar7 = 0;
    do {
      iVar3 = FUN_140458730(iVar7);
      piVar4 = DAT_141525a00;
      if (iVar3 == param_1) {
        for (; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 0x20)) {
          if (param_1 == *piVar4) {
            piVar4[0xc] = piVar4[0xc] + 1;
            return piVar4;
          }
        }
        piVar4 = (int *)FUN_140160c70(1,0x88);
        if (piVar4 == (int *)0x0) {
          return (int *)0x0;
        }
        FUN_1403d8ef0(piVar4,6,1);
        *piVar4 = param_1;
        piVar4[0xd] = -1;
        cVar1 = FUN_140458890(piVar4);
        if (cVar1 == '\0') {
          FUN_1403d8ef0(piVar4,6,0);
          FUN_140160cf0(piVar4);
          return (int *)0x0;
        }
        if ((*(longlong *)(piVar4 + 2) == 0) && (lVar5 = FUN_1404587f0(iVar7), lVar5 != 0)) {
          uVar6 = FUN_1400fcda0();
          *(undefined8 *)(piVar4 + 2) = uVar6;
        }
        piVar4[0xc] = piVar4[0xc] + 1;
        *(int **)(piVar4 + 0x20) = DAT_141525a00;
        DAT_141525a00 = piVar4;
        if ((*(byte *)((longlong)piVar4 + 0x22) & 1) != 0) {
          cVar1 = FUN_1403d8fa0(piVar4,6);
          if (cVar1 == '\0') {
            FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
          }
          else if ((*(byte *)((longlong)piVar4 + 0x22) & 1) == 0) {
            FUN_1400fbed0("Haptic: Device does not support setting gain.");
          }
          else {
            _Str = (char *)FUN_1401550c0("SDL_HAPTIC_GAIN_MAX");
            if (_Str == (char *)0x0) {
              iVar2 = 100;
            }
            else {
              iVar2 = atoi(_Str);
              iVar7 = 0;
              if (0 < iVar2) {
                iVar7 = iVar2;
              }
              iVar2 = 100;
              if (iVar7 < 100) {
                iVar2 = iVar7;
              }
            }
            haptic_error_s(piVar4,iVar2);
          }
        }
        if ((*(byte *)((longlong)piVar4 + 0x22) & 2) != 0) {
          cVar1 = FUN_1403d8fa0(piVar4,6);
          if (cVar1 == '\0') {
            FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
            return piVar4;
          }
          if ((*(byte *)((longlong)piVar4 + 0x22) & 2) != 0) {
            haptic_error_s(piVar4,0);
            return piVar4;
          }
          FUN_1400fbed0("Haptic: Device does not support setting autocenter.");
          return piVar4;
        }
        return piVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  FUN_1400fbed0("Haptic device %u not found",param_1);
  return (int *)0x0;
}

