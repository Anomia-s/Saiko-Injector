/**
 * Function: wave_file_too_big
 * Address:  140166790
 * Signature: undefined wave_file_too_big(void)
 * Body size: 532 bytes
 */


undefined8 wave_file_too_big(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar8 = *(ulonglong *)(param_1 + 0x18);
  if (uVar8 == *(uint *)(param_1 + 4)) {
    uVar9 = *(ulonglong *)(param_1 + 0x58);
  }
  else {
    if (uVar8 >> 0x20 == 0) {
      uVar8 = uVar8 & 0xffffffff;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50);
    }
    uVar8 = uVar8 / *(ushort *)(param_1 + 0x30);
    if (iVar3 == 2) {
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x54);
      if ((*(int *)(param_1 + 0x70) == 2) && ((longlong)uVar8 < (longlong)uVar9)) {
        FUN_1400fbed0("Invalid number of sample frames in WAVE fact chunk (too many)");
        *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
        return 0;
      }
      if ((longlong)uVar9 < (longlong)uVar8) {
        *(ulonglong *)(param_1 + 0x58) = uVar9;
        goto LAB_140166825;
      }
    }
    *(ulonglong *)(param_1 + 0x58) = uVar8;
    uVar9 = uVar8;
    if ((longlong)uVar8 < 0) {
      return 0;
    }
  }
LAB_140166825:
  if (uVar9 == 0) {
    *param_2 = 0;
    *param_3 = 0;
LAB_1401668c2:
    uVar7 = 1;
  }
  else {
    if ((*(short *)(param_1 + 0x22) == 1) && (*(short *)(param_1 + 0x32) == 0x18)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar9;
      auVar5 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
      uVar7 = SUB168(auVar5 % auVar4,0);
      if ((ulonglong)*(ushort *)(param_1 + 0x24) < SUB168(auVar5 / auVar4,0)) {
        uVar9 = uVar9 * *(ushort *)(param_1 + 0x24);
        if (uVar9 == 0) {
          lVar10 = 0;
LAB_1401668cf:
          lVar6 = FUN_140160cc0(*(undefined8 *)(param_1 + 0x10),lVar10 + (ulonglong)(lVar10 == 0));
          if (lVar6 == 0) {
            return 0;
          }
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *param_2 = lVar6;
          *param_3 = (int)lVar10;
          if (uVar9 != 0) {
            uVar8 = uVar9;
            if ((uVar9 & 1) != 0) {
              uVar8 = uVar9 - 1;
              uVar2 = *(undefined2 *)(lVar6 + uVar8 * 3);
              uVar1 = *(undefined1 *)(lVar6 + 2 + uVar8 * 3);
              *(undefined1 *)(lVar6 + -4 + uVar9 * 4) = 0;
              *(undefined2 *)(lVar6 + -3 + uVar9 * 4) = uVar2;
              *(undefined1 *)(lVar6 + -1 + uVar9 * 4) = uVar1;
            }
            if (uVar9 != 1) {
              lVar10 = uVar8 * 3 + -1;
              do {
                uVar2 = *(undefined2 *)(lVar6 + -2 + lVar10);
                uVar1 = *(undefined1 *)(lVar6 + lVar10);
                *(undefined1 *)(lVar6 + -4 + uVar8 * 4) = 0;
                *(undefined2 *)(lVar6 + -3 + uVar8 * 4) = uVar2;
                *(undefined1 *)(lVar6 + -1 + uVar8 * 4) = uVar1;
                uVar2 = *(undefined2 *)(lVar6 + -5 + lVar10);
                uVar1 = *(undefined1 *)(lVar6 + -3 + lVar10);
                *(undefined1 *)(lVar6 + -8 + uVar8 * 4) = 0;
                *(undefined2 *)(lVar6 + -7 + uVar8 * 4) = uVar2;
                *(undefined1 *)(lVar6 + -5 + uVar8 * 4) = uVar1;
                uVar8 = uVar8 - 2;
                lVar10 = lVar10 + -6;
              } while (uVar8 != 0);
              return 1;
            }
            return 1;
          }
          return 1;
        }
        if (uVar9 < 0x40000000) {
          lVar10 = uVar9 * 4;
          goto LAB_1401668cf;
        }
      }
    }
    else {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
      uVar7 = SUB168(auVar4 % auVar5,0);
      if (((ulonglong)*(ushort *)(param_1 + 0x30) < SUB168(auVar4 / auVar5,0)) &&
         (uVar9 = uVar9 * *(ushort *)(param_1 + 0x30), uVar9 >> 0x20 == 0)) {
        *param_2 = *(longlong *)(param_1 + 0x10);
        *param_3 = (int)uVar9;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        goto LAB_1401668c2;
      }
    }
    uVar7 = FUN_1400fbed0("WAVE file too big",uVar7);
  }
  return uVar7;
}

