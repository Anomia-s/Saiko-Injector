/**
 * Function: wrong_number_of_channels
 * Address:  14013a7a0
 * Signature: undefined wrong_number_of_channels(void)
 * Body size: 290 bytes
 */


ulonglong wrong_number_of_channels
                    (undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,
                    uint param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1400fbed0("Parameter \'%s\' is invalid","stream");
    return uVar3;
  }
  FUN_1401552a0(*param_1);
  if (param_5 == *(uint *)(param_2 + 4)) {
    lVar4 = *param_3;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if ((param_4 != 0 || lVar4 != 0) &&
       ((lVar4 == 0 || param_4 == 0 ||
        (iVar1 = FUN_1400fc560(lVar4,param_4,(longlong)(int)param_5 << 2), iVar1 != 0)))) {
      if (0 < (int)param_5 && param_4 != 0) {
        uVar5 = 0;
        do {
          iVar1 = *(int *)(param_4 + uVar5 * 4);
          if ((iVar1 < -1) || ((int)param_5 <= iVar1)) goto LAB_14013a8b9;
          uVar5 = uVar5 + 1;
        } while (param_5 != uVar5);
        uVar5 = 0;
        do {
          if (uVar5 != *(uint *)(param_4 + uVar5 * 4)) {
            lVar4 = FUN_14012f3c0(param_4,param_5);
            if (lVar4 == 0) goto LAB_14013a8b9;
            FUN_140160cf0(*param_3);
            *param_3 = lVar4;
            goto LAB_14013a885;
          }
          uVar5 = uVar5 + 1;
        } while (param_5 != uVar5);
      }
      FUN_140160cf0(*param_3);
      *param_3 = 0;
    }
    goto LAB_14013a885;
  }
  pcVar6 = "Wrong number of channels";
LAB_14013a87e:
  uVar2 = FUN_1400fbed0(pcVar6);
  uVar3 = (ulonglong)uVar2;
LAB_14013a885:
  FUN_1401552c0(*param_1);
  return uVar3 & 0xffffffff;
LAB_14013a8b9:
  pcVar6 = "Invalid channel mapping";
  goto LAB_14013a87e;
}

