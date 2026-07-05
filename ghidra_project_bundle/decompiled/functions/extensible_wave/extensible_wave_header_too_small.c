/**
 * Function: extensible_wave_header_too_small
 * Address:  140166390
 * Signature: undefined extensible_wave_header_too_small(void)
 * Body size: 366 bytes
 */


undefined8 extensible_wave_header_too_small(longlong param_1)

{
  short *psVar1;
  ulonglong uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if ((uVar2 & 0xffffffff80000000) != 0) {
    uVar5 = FUN_1400fbed0("Data of WAVE fmt chunk too big");
    return uVar5;
  }
  lVar6 = parameter_s_is_invalid(*(undefined8 *)(param_1 + 0x10),uVar2);
  if (lVar6 != 0) {
    psVar1 = (short *)(param_1 + 0x20);
    cVar3 = parameter_s_is_invalid(lVar6,psVar1);
    if ((((cVar3 != '\0') && (cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x24), cVar3 != '\0'))
        && (cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x28), cVar3 != '\0')) &&
       ((cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x2c), cVar3 != '\0' &&
        (cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x30), cVar3 != '\0')))) {
      *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x20);
      if (uVar2 < 0x10) {
        if (*(short *)(param_1 + 0x20) == 1) {
          FUN_1400f9140(lVar6);
          uVar5 = FUN_1400fbed0("Missing wBitsPerSample field in WAVE fmt chunk");
          return uVar5;
        }
      }
      else {
        cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x32);
        if (cVar3 == '\0') {
          return 0;
        }
        if ((0x11 < uVar2) && (cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x34), cVar3 == '\0'))
        {
          return 0;
        }
      }
      if (*psVar1 == -2) {
        if ((uVar2 < 0x28) || (*(ushort *)(param_1 + 0x34) < 0x16)) {
          FUN_1400f9140(lVar6);
          uVar5 = FUN_1400fbed0("Extensible WAVE header too small");
          return uVar5;
        }
        cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x36);
        if ((cVar3 != '\0') && (cVar3 = parameter_s_is_invalid(lVar6,param_1 + 0x3c), cVar3 != '\0')
           ) {
          parameter_s_is_invalid(lVar6,param_1 + 0x40,0x10);
        }
        *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(param_1 + 0x36);
        uVar4 = FUN_140167e00(psVar1);
        *(undefined2 *)(param_1 + 0x22) = uVar4;
      }
      FUN_1400f9140(lVar6);
      return 1;
    }
  }
  return 0;
}

