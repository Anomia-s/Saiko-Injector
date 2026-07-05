/**
 * Function: unknown_touch_device_id_d_cannot_reset
 * Address:  140163d40
 * Signature: undefined unknown_touch_device_id_d_cannot_reset(void)
 * Body size: 293 bytes
 */


void unknown_touch_device_id_d_cannot_reset(ulonglong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = (ulonglong)DAT_1415260d0;
  if (uVar1 != 0) {
    if (0 < (int)DAT_1415260d0) {
      uVar6 = 0;
      do {
        if (**(ulonglong **)(DAT_1415260d8 + uVar6 * 8) == param_1) goto LAB_140163d88;
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
      uVar6 = 0xffffffffffffffff;
LAB_140163d88:
      uVar4 = 0;
      do {
        if (**(ulonglong **)(DAT_1415260d8 + uVar4 * 8) == param_1) {
          if ((int)uVar4 < (int)DAT_1415260d0) {
            lVar2 = *(longlong *)(DAT_1415260d8 + (uVar4 & 0xffffffff) * 8);
            if (lVar2 == 0) {
              return;
            }
            if (0 < *(int *)(lVar2 + 0x10)) {
              lVar5 = 0;
              do {
                FUN_140160cf0(*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + lVar5 * 8));
                lVar5 = lVar5 + 1;
              } while (lVar5 < *(int *)(lVar2 + 0x10));
            }
            FUN_140160cf0(*(undefined8 *)(lVar2 + 0x18));
            FUN_140160cf0(*(undefined8 *)(lVar2 + 0x20));
            FUN_140160cf0(lVar2);
            lVar2 = (longlong)(int)DAT_1415260d0;
            DAT_1415260d0 = DAT_1415260d0 - 1;
            *(undefined8 *)(DAT_1415260d8 + uVar6 * 8) =
                 *(undefined8 *)(DAT_1415260d8 + -8 + lVar2 * 8);
            return;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    lVar2 = FUN_140144860();
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      FUN_1400fbed0("Unknown touch id %d, resetting",param_1 & 0xffffffff);
      lVar2 = FUN_140144860();
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
      uVar3 = FUN_140144860();
                    /* WARNING: Could not recover jumptable at 0x000140163e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
    FUN_1400fbed0("Unknown touch device id %d, cannot reset",param_1 & 0xffffffff);
  }
  return;
}

