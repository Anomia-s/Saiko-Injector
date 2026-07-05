/**
 * Function: haptic_device_has_no_free_space_left
 * Address:  140151010
 * Signature: undefined haptic_device_has_no_free_space_left(void)
 * Body size: 287 bytes
 */


int haptic_device_has_no_free_space_left(longlong param_1,ushort *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  char *pcVar11;
  longlong lVar12;
  int iVar13;
  
  cVar10 = FUN_1403d8fa0(param_1,6);
  if (cVar10 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
    return -1;
  }
  if (param_2 == (ushort *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","effect");
    return -1;
  }
  cVar10 = FUN_1403d8fa0(param_1,6);
  if (cVar10 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","haptic");
  }
  else if ((*(uint *)(param_1 + 0x20) & (uint)*param_2) != 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x18)) {
      lVar12 = 0;
      iVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48 + lVar12) == 0) {
          cVar10 = FUN_140458a20(param_1,*(longlong *)(param_1 + 0x10) + lVar12,param_2);
          if (cVar10 != '\0') {
            lVar2 = *(longlong *)(param_1 + 0x10);
            *(undefined8 *)(lVar2 + 0x40 + lVar12) = *(undefined8 *)(param_2 + 0x20);
            uVar3 = *(undefined8 *)param_2;
            uVar4 = *(undefined8 *)(param_2 + 4);
            uVar5 = *(undefined8 *)(param_2 + 8);
            uVar6 = *(undefined8 *)(param_2 + 0xc);
            uVar7 = *(undefined8 *)(param_2 + 0x10);
            uVar8 = *(undefined8 *)(param_2 + 0x14);
            uVar9 = *(undefined8 *)(param_2 + 0x1c);
            puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar12);
            *puVar1 = *(undefined8 *)(param_2 + 0x18);
            puVar1[1] = uVar9;
            puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar12);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar12);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            *(undefined8 *)(lVar2 + lVar12) = uVar3;
            ((undefined8 *)(lVar2 + lVar12))[1] = uVar4;
            return iVar13;
          }
          return -1;
        }
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 0x50;
      } while ((longlong)*(int *)(param_1 + 0x18) * 0x50 != lVar12);
    }
    pcVar11 = "Haptic: Device has no free space left.";
    goto LAB_1401510d0;
  }
  pcVar11 = "Haptic: Effect not supported by haptic device.";
LAB_1401510d0:
  FUN_1400fbed0(pcVar11);
  return -1;
}

