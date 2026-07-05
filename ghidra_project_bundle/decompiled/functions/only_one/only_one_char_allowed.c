/**
 * Function: only_one_char_allowed
 * Address:  1405d9cf0
 * Signature: undefined only_one_char_allowed(void)
 * Body size: 539 bytes
 */


longlong only_one_char_allowed(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char cVar16;
  char cVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar9 = param_2 + 1;
  cVar3 = *(char *)(param_2 + 1);
  lVar7 = lVar9;
  cVar17 = cVar3;
  if ((cVar3 != '\0') && (uVar6 = param_2, cVar16 = cVar3, cVar3 != '\'')) {
    do {
      cVar17 = *(char *)(uVar6 + 2 + (ulonglong)(cVar16 == '\\'));
      lVar7 = uVar6 + (cVar16 == '\\');
      if (cVar17 == '\'') break;
      uVar6 = lVar7 + 1;
      cVar16 = cVar17;
    } while (cVar17 != '\0');
    lVar7 = lVar7 + 2;
  }
  if (cVar17 == '\0') {
    uVar8 = *param_1;
    lVar9 = param_1[1];
    lVar7 = lVar7 - lVar9;
    pcVar13 = "unterminated string";
    goto LAB_1405d9ef9;
  }
  uVar11 = (uint)(~param_2 + lVar7);
  if (uVar11 == 0) {
    uVar8 = *param_1;
    lVar9 = param_1[1];
    pcVar13 = "Empty char";
LAB_1405d9ef0:
    lVar7 = param_2 - lVar9;
LAB_1405d9ef9:
    FUN_140399a50(uVar8,lVar9,lVar7,pcVar13);
    return 0;
  }
  if ((int)uVar11 < 2) {
    puVar14 = (undefined1 *)param_1[3];
    puVar15 = puVar14;
    if (uVar11 != 1) goto LAB_1405d9ec2;
  }
  else {
    if (cVar3 != '\\' || uVar11 != 2) {
      uVar8 = *param_1;
      lVar9 = param_1[1];
      pcVar13 = "only one char allowed";
      goto LAB_1405d9ef0;
    }
    puVar14 = (undefined1 *)param_1[3];
  }
  uVar18 = (ulonglong)(uVar11 & 0x7fffffff);
  uVar6 = 0;
  if ((0x1f < uVar18) && (param_2 - (longlong)puVar14 < 0xffffffffffffffe0)) {
    uVar6 = (ulonglong)(uVar11 & 0x7fffffe0);
    puVar15 = puVar14 + uVar6;
    uVar19 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + 1 + uVar19);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x11 + uVar19);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)(puVar14 + uVar19) = *puVar1;
      *(undefined8 *)((longlong)(puVar14 + uVar19) + 8) = uVar8;
      *(undefined8 *)(puVar14 + uVar19 + 0x10) = uVar4;
      *(undefined8 *)((longlong)(puVar14 + uVar19 + 0x10) + 8) = uVar5;
      uVar19 = uVar19 + 0x20;
    } while (uVar6 != uVar19);
    puVar14 = puVar15;
    if ((uVar11 & 0x7fffffff) == (uVar11 & 0x7fffffe0)) goto LAB_1405d9ec2;
  }
  uVar10 = uVar6;
  for (uVar19 = ~param_2 + lVar7 & 7; uVar19 != 0; uVar19 = uVar19 - 1) {
    puVar15 = (undefined1 *)(lVar9 + uVar10);
    uVar10 = uVar10 + 1;
    *puVar14 = *puVar15;
    puVar14 = puVar14 + 1;
  }
  puVar15 = puVar14;
  if (uVar6 - uVar18 < 0xfffffffffffffff9) {
    lVar9 = param_2 + uVar10;
    lVar12 = 0;
    do {
      puVar14[lVar12] = *(undefined1 *)(lVar9 + 1 + lVar12);
      puVar14[lVar12 + 1] = *(undefined1 *)(lVar9 + 2 + lVar12);
      puVar14[lVar12 + 2] = *(undefined1 *)(lVar9 + 3 + lVar12);
      puVar14[lVar12 + 3] = *(undefined1 *)(lVar9 + 4 + lVar12);
      puVar14[lVar12 + 4] = *(undefined1 *)(lVar9 + 5 + lVar12);
      puVar14[lVar12 + 5] = *(undefined1 *)(lVar9 + 6 + lVar12);
      puVar14[lVar12 + 6] = *(undefined1 *)(lVar9 + 7 + lVar12);
      puVar14[lVar12 + 7] = *(undefined1 *)(lVar9 + 8 + lVar12);
      lVar12 = lVar12 + 8;
    } while (uVar18 - uVar10 != lVar12);
    puVar15 = puVar14 + lVar12;
  }
LAB_1405d9ec2:
  *puVar15 = 0;
  *(undefined4 *)(param_3 + 1) = 0x27;
  *param_3 = param_1[3];
  param_1[3] = puVar15 + 1;
  return lVar7 + 1;
}

