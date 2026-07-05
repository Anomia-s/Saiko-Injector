/**
 * Function: haptic_updating_effect_type_is_illegal
 * Address:  1401515c0
 * Signature: undefined haptic_updating_effect_type_is_illegal(void)
 * Body size: 406 bytes
 */


undefined8 haptic_updating_effect_type_is_illegal(longlong param_1,float param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined2 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  float fVar18;
  
  cVar14 = FUN_1403d8fa0(param_1,6);
  if (cVar14 == '\0') goto LAB_140151726;
  iVar3 = *(int *)(param_1 + 0x34);
  if ((longlong)iVar3 < 0) {
    uVar17 = FUN_1400fbed0("Haptic: Rumble effect not initialized on haptic device");
    return uVar17;
  }
  fVar18 = 1.0;
  if ((param_2 <= 1.0) && (fVar18 = param_2, param_2 < 0.0)) {
    fVar18 = 0.0;
  }
  uVar15 = (undefined2)(int)(fVar18 * 32767.0);
  if (*(short *)(param_1 + 0x38) == 0x800) {
    *(undefined2 *)(param_1 + 0x40) = uVar15;
    *(undefined2 *)(param_1 + 0x42) = uVar15;
    lVar16 = 0x3c;
LAB_140151651:
    *(undefined4 *)(param_1 + lVar16) = param_3;
  }
  else if (*(short *)(param_1 + 0x38) == 2) {
    *(undefined2 *)(param_1 + 0x58) = uVar15;
    lVar16 = 0x4c;
    goto LAB_140151651;
  }
  cVar14 = FUN_1403d8fa0(param_1,6);
  if (cVar14 == '\0') {
LAB_140151726:
    FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
    return 0;
  }
  if (iVar3 < *(int *)(param_1 + 0x18)) {
    lVar16 = (longlong)iVar3 * 0x50;
    if (*(short *)(param_1 + 0x38) == *(short *)(*(longlong *)(param_1 + 0x10) + lVar16)) {
      cVar14 = unable_to_update_effect
                         (param_1,*(longlong *)(param_1 + 0x10) + lVar16,
                          (undefined4 *)(param_1 + 0x38));
      if (cVar14 == '\0') {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(lVar5 + 0x40 + lVar16) = *(undefined8 *)(param_1 + 0x78);
      uVar6 = *(undefined4 *)(param_1 + 0x38);
      uVar7 = *(undefined4 *)(param_1 + 0x3c);
      uVar8 = *(undefined4 *)(param_1 + 0x40);
      uVar9 = *(undefined4 *)(param_1 + 0x44);
      uVar17 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      uVar13 = *(undefined8 *)(param_1 + 0x70);
      puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar16);
      *puVar2 = *(undefined8 *)(param_1 + 0x68);
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar16);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar16);
      *puVar2 = uVar17;
      puVar2[1] = uVar10;
      puVar1 = (undefined4 *)(lVar5 + lVar16);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
    }
    else {
      cVar14 = FUN_1400fbed0("Haptic: Updating effect type is illegal.");
      if (cVar14 == '\0') {
        return 0;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x34);
    cVar14 = FUN_1403d8fa0(param_1,6);
    if (cVar14 == '\0') goto LAB_140151726;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x18))) {
      uVar17 = running_the_effect(param_1,(ulonglong)uVar4 * 0x50 + *(longlong *)(param_1 + 0x10),1)
      ;
      return uVar17;
    }
  }
  FUN_1400fbed0("Haptic: Invalid effect identifier.");
  return 0;
}

