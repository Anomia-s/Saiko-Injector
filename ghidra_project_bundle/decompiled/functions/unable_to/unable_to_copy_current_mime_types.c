/**
 * Function: unable_to_copy_current_mime_types
 * Address:  140143d20
 * Signature: undefined unable_to_copy_current_mime_types(void)
 * Body size: 443 bytes
 */


/* WARNING: Removing unreachable block (ram,0x000140143dee) */

ulonglong unable_to_copy_current_mime_types(undefined1 *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar3 = FUN_140144860();
  if (lVar3 == 0) {
    uVar6 = video_subsystem_has_not_been_initialized();
    return uVar6;
  }
  puVar8 = &DAT_1413a2ad6;
  if (param_1 != (undefined1 *)0x0) {
    puVar8 = param_1;
  }
  if (*(code **)(lVar3 + 0x2c8) == (code *)0x0) {
    FUN_140160cf0(*(undefined8 *)(lVar3 + 0x380));
    uVar4 = FUN_1400fcda0(puVar8);
    *(undefined8 *)(lVar3 + 0x380) = uVar4;
  }
  else {
    cVar2 = (**(code **)(lVar3 + 0x2c8))(lVar3);
    if (cVar2 == '\0') {
      uVar6 = 0;
      goto LAB_140143ecd;
    }
  }
  uVar6 = *(ulonglong *)(lVar3 + 0x378);
  if (uVar6 == 0) {
    puVar5 = (undefined8 *)FUN_1401061f0(8);
    if (puVar5 == (undefined8 *)0x0) goto LAB_140143e0e;
    *puVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x370);
    uVar13 = 0;
    do {
      FUN_1400fc570(*(undefined8 *)(lVar1 + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
    puVar5 = (undefined8 *)FUN_1401061f0();
    if (puVar5 == (undefined8 *)0x0) {
LAB_140143e0e:
      uVar6 = FUN_1400fbed0("unable to copy current mime types");
      return uVar6;
    }
    pcVar10 = (char *)(puVar5 + uVar6 + 1);
    if (uVar6 == 1) {
      uVar13 = 0;
LAB_140143e89:
      puVar5[uVar13] = pcVar10;
      lVar1 = *(longlong *)(lVar1 + uVar13 * 8);
      lVar7 = 0;
      do {
        cVar2 = *(char *)(lVar1 + lVar7);
        pcVar10[lVar7] = cVar2;
        lVar7 = lVar7 + 1;
      } while (cVar2 != '\0');
    }
    else {
      uVar13 = 0;
      do {
        puVar5[uVar13] = pcVar10;
        pcVar11 = *(char **)(lVar1 + uVar13 * 8);
        pcVar9 = pcVar10;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar9 = cVar2;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        puVar5[uVar13 + 1] = pcVar9;
        lVar7 = *(longlong *)(lVar1 + 8 + uVar13 * 8);
        lVar12 = 0;
        do {
          cVar2 = *(char *)(lVar7 + lVar12);
          pcVar9[lVar12] = cVar2;
          lVar12 = lVar12 + 1;
        } while (cVar2 != '\0');
        uVar13 = uVar13 + 2;
        pcVar10 = pcVar9 + lVar12;
      } while (uVar13 != (uVar6 & 0xfffffffffffffffe));
      pcVar10 = pcVar9 + lVar12;
      if ((uVar6 & 1) != 0) goto LAB_140143e89;
    }
    puVar5[uVar6] = 0;
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  FUN_140454da0(1,puVar5,*(undefined8 *)(lVar3 + 0x378));
LAB_140143ecd:
  return uVar6 & 0xffffffff;
}

