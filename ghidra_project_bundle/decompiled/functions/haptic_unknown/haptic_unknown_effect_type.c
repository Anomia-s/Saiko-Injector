/**
 * Function: haptic_unknown_effect_type
 * Address:  140653170
 * Signature: undefined haptic_unknown_effect_type(void)
 * Body size: 2133 bytes
 */


undefined8 haptic_unknown_effect_type(longlong param_1,undefined8 *param_2,ushort *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[9] = 0;
  *param_2 = 0x200000050;
  *(undefined4 *)(param_2 + 2) = 10000;
  puVar7 = (undefined4 *)FUN_140160c70(1,0x14);
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
  param_2[6] = puVar7;
  *puVar7 = 0x14;
  if ((char)param_3[2] == '\x03') {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 1;
    uVar6 = 1;
LAB_140653200:
    puVar8 = (undefined4 *)FUN_140160c40((ulonglong)uVar6 << 2);
    if (puVar8 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8);
    if ((1 < *(uint *)((longlong)param_2 + 0x1c)) &&
       (puVar8[1] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
       2 < *(uint *)((longlong)param_2 + 0x1c))) {
      puVar8[2] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    }
    param_2[4] = puVar8;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x24);
    *(uint *)((longlong)param_2 + 0x1c) = uVar6;
    if (uVar6 != 0) goto LAB_140653200;
  }
  piVar9 = (int *)((longlong)param_2 + 0x1c);
  puVar1 = param_3 + 2;
  uVar6 = (uint)*param_3;
  if (*param_3 < 0x80) {
    uVar11 = (ulonglong)(uVar6 - 1);
    if (0x3f < uVar6 - 1) goto LAB_1406538e7;
    if ((0x8000808aUL >> (uVar11 & 0x3f) & 1) == 0) {
      if (uVar11 == 0) {
        piVar9 = (int *)FUN_140160c70(1,4);
        if (piVar9 == (int *)0x0) {
          return 0;
        }
        *piVar9 = ((short)param_3[0xf] * 10000) / 0x7fff;
        *(undefined4 *)(param_2 + 7) = 4;
        param_2[8] = piVar9;
        *(int *)(param_2 + 1) = *(int *)(param_3 + 10) * 1000;
        *(uint *)((longlong)param_2 + 0x14) = -(uint)(param_3[0xd] == 0) | param_3[0xd] + 0x2f;
        *(uint *)(param_2 + 3) = (uint)param_3[0xe];
        *(uint *)(param_2 + 9) = (uint)param_3[0xc] * 1000;
        cVar4 = haptic_unknown_direction_type
                          (param_2,puVar1,*(undefined4 *)((longlong)param_2 + 0x1c));
        if (cVar4 == '\0') {
          return 0;
        }
        if ((param_3[0x10] != 0) || (param_3[0x12] != 0)) {
          uVar6 = 10000;
          uVar14 = 10000;
          if (-1 < (short)param_3[0x11]) {
            uVar14 = (uint)((short)param_3[0x11] * 10000) / 0x7fff;
          }
          puVar7[1] = uVar14;
          puVar7[2] = (uint)param_3[0x10] * 1000;
          if (-1 < (short)param_3[0x13]) {
            uVar6 = (uint)((short)param_3[0x13] * 10000) / 0x7fff;
          }
          puVar7[3] = uVar6;
          uVar6 = (uint)param_3[0x12];
          goto LAB_1406533de;
        }
      }
      else {
        if (uVar11 != 0x3f) goto LAB_1406538e7;
        piVar9 = (int *)FUN_140160c70(1,8);
        if (piVar9 == (int *)0x0) {
          return 0;
        }
        *piVar9 = ((short)param_3[0xf] * 10000) / 0x7fff;
        piVar9[1] = ((short)param_3[0x10] * 10000) / 0x7fff;
        *(undefined4 *)(param_2 + 7) = 8;
        param_2[8] = piVar9;
        *(int *)(param_2 + 1) = *(int *)(param_3 + 10) * 1000;
        *(uint *)((longlong)param_2 + 0x14) = -(uint)(param_3[0xd] == 0) | param_3[0xd] + 0x2f;
        *(uint *)(param_2 + 3) = (uint)param_3[0xe];
        *(uint *)(param_2 + 9) = (uint)param_3[0xc] * 1000;
        cVar4 = haptic_unknown_direction_type
                          (param_2,puVar1,*(undefined4 *)((longlong)param_2 + 0x1c));
        if (cVar4 == '\0') {
          return 0;
        }
        if ((param_3[0x11] != 0) || (param_3[0x13] != 0)) {
          uVar6 = 10000;
          uVar14 = 10000;
          if (-1 < (short)param_3[0x12]) {
            uVar14 = (uint)((short)param_3[0x12] * 10000) / 0x7fff;
          }
          puVar7[1] = uVar14;
          puVar7[2] = (uint)param_3[0x11] * 1000;
          if (-1 < (short)param_3[0x14]) {
            uVar6 = (uint)((short)param_3[0x14] * 10000) / 0x7fff;
          }
          puVar7[3] = uVar6;
          uVar6 = (uint)param_3[0x13];
          goto LAB_1406533de;
        }
      }
    }
    else {
      piVar9 = (int *)FUN_140160c70(1,0x10);
      if (piVar9 == (int *)0x0) {
        return 0;
      }
      iVar5 = FUN_14016e4c0((int)(short)param_3[0x10]);
      *piVar9 = (iVar5 * 10000) / 0x7fff;
      piVar9[1] = ((short)param_3[0x11] * 10000) / 0x7fff;
      uVar6 = param_3[0x12] + 18000;
      if (-1 < (short)param_3[0x10]) {
        uVar6 = (uint)param_3[0x12];
      }
      piVar9[2] = uVar6 % 36000;
      piVar9[3] = (uint)param_3[0xf] * 1000;
      *(undefined4 *)(param_2 + 7) = 0x10;
      param_2[8] = piVar9;
      *(int *)(param_2 + 1) = *(int *)(param_3 + 10) * 1000;
      *(uint *)((longlong)param_2 + 0x14) = -(uint)(param_3[0xd] == 0) | param_3[0xd] + 0x2f;
      *(uint *)(param_2 + 3) = (uint)param_3[0xe];
      *(uint *)(param_2 + 9) = (uint)param_3[0xc] * 1000;
      cVar4 = haptic_unknown_direction_type
                        (param_2,puVar1,*(undefined4 *)((longlong)param_2 + 0x1c));
      if (cVar4 == '\0') {
        return 0;
      }
      if ((param_3[0x13] != 0) || (param_3[0x15] != 0)) {
        uVar6 = 10000;
        uVar14 = 10000;
        if (-1 < (short)param_3[0x14]) {
          uVar14 = (uint)((short)param_3[0x14] * 10000) / 0x7fff;
        }
        puVar7[1] = uVar14;
        puVar7[2] = (uint)param_3[0x13] * 1000;
        if (-1 < (short)param_3[0x16]) {
          uVar6 = (uint)((short)param_3[0x16] * 10000) / 0x7fff;
        }
        puVar7[3] = uVar6;
        uVar6 = (uint)param_3[0x15];
LAB_1406533de:
        puVar7[4] = uVar6 * 1000;
        return 1;
      }
    }
  }
  else {
    if (uVar6 < 0x200) {
      if ((uVar6 != 0x80) && (uVar6 != 0x100)) goto LAB_1406538e7;
    }
    else if ((uVar6 != 0x200) && (uVar6 != 0x400)) {
      if (uVar6 == 0x8000) {
        puVar10 = (uint *)FUN_140160c70(1,0x18);
        if (puVar10 == (uint *)0x0) {
          return 0;
        }
        uVar3 = param_3[0xf];
        *puVar10 = (uint)(byte)uVar3;
        puVar10[1] = (uint)param_3[0x10] * 1000;
        uVar2 = param_3[0x11];
        puVar10[2] = (uint)uVar2;
        uVar13 = FUN_140160c40((uint)(byte)uVar3 * (uint)uVar2 * 4);
        *(undefined8 *)(puVar10 + 4) = uVar13;
        if ((char)param_3[0xf] != '\0' && param_3[0x11] != 0) {
          uVar11 = 0;
          do {
            iVar5 = (int)*(short *)(*(longlong *)(param_3 + 0x14) + uVar11 * 2);
            if (iVar5 < 0) {
              uVar6 = 10000;
            }
            else {
              uVar6 = (uint)(iVar5 * 10000) / 0x7fff;
            }
            *(uint *)(*(longlong *)(puVar10 + 4) + uVar11 * 4) = uVar6;
            uVar11 = uVar11 + 1;
          } while (uVar11 < (ulonglong)(byte)param_3[0xf] * (ulonglong)param_3[0x11]);
        }
        *(undefined4 *)(param_2 + 7) = 0x18;
        param_2[8] = puVar10;
        *(int *)(param_2 + 1) = *(int *)(param_3 + 10) * 1000;
        *(uint *)((longlong)param_2 + 0x14) = -(uint)(param_3[0xd] == 0) | param_3[0xd] + 0x2f;
        *(uint *)(param_2 + 3) = (uint)param_3[0xe];
        *(uint *)(param_2 + 9) = (uint)param_3[0xc] * 1000;
        cVar4 = haptic_unknown_direction_type
                          (param_2,puVar1,*(undefined4 *)((longlong)param_2 + 0x1c));
        if (cVar4 == '\0') {
          return 0;
        }
        if ((param_3[0x18] != 0) || (param_3[0x1a] != 0)) {
          uVar6 = 10000;
          uVar14 = 10000;
          if (-1 < (short)param_3[0x19]) {
            uVar14 = (uint)((short)param_3[0x19] * 10000) / 0x7fff;
          }
          puVar7[1] = uVar14;
          puVar7[2] = (uint)param_3[0x18] * 1000;
          if (-1 < (short)param_3[0x1b]) {
            uVar6 = (uint)((short)param_3[0x1b] * 10000) / 0x7fff;
          }
          puVar7[3] = uVar6;
          uVar6 = (uint)param_3[0x1a];
          goto LAB_1406533de;
        }
        goto LAB_140653666;
      }
LAB_1406538e7:
      uVar13 = FUN_1400fbed0("Haptic: Unknown effect type.");
      return uVar13;
    }
    lVar12 = FUN_140160c70(*piVar9);
    if (lVar12 == 0) {
      return 0;
    }
    iVar5 = *piVar9;
    if (0 < iVar5) {
      puVar10 = (uint *)(lVar12 + 0x14);
      lVar15 = 0;
      do {
        puVar10[-5] = ((short)param_3[lVar15 + 0x1e] * 10000) / 0x7fff;
        puVar10[-4] = ((short)param_3[lVar15 + 0x15] * 10000) / 0x7fff;
        puVar10[-3] = ((short)param_3[lVar15 + 0x18] * 10000) / 0x7fff;
        puVar10[-2] = ((uint)(param_3[lVar15 + 0xf] >> 1) * 10000) / 0x7fff;
        puVar10[-1] = ((uint)(param_3[lVar15 + 0x12] >> 1) * 10000) / 0x7fff;
        *puVar10 = ((uint)(param_3[lVar15 + 0x1b] >> 1) * 10000) / 0x7fff;
        lVar15 = lVar15 + 1;
        iVar5 = *piVar9;
        puVar10 = puVar10 + 6;
      } while (lVar15 < iVar5);
    }
    *(int *)(param_2 + 7) = iVar5 * 0x18;
    param_2[8] = lVar12;
    *(int *)(param_2 + 1) = *(int *)(param_3 + 10) * 1000;
    *(uint *)((longlong)param_2 + 0x14) = -(uint)(param_3[0xd] == 0) | param_3[0xd] + 0x2f;
    *(uint *)(param_2 + 3) = (uint)param_3[0xe];
    *(uint *)(param_2 + 9) = (uint)param_3[0xc] * 1000;
    cVar4 = haptic_unknown_direction_type(param_2,puVar1);
    if (cVar4 == '\0') {
      return 0;
    }
  }
LAB_140653666:
  FUN_140160cf0(param_2[6]);
  param_2[6] = 0;
  return 1;
}

