/**
 * Function: expected_c
 * Address:  1405d8e00
 * Signature: undefined expected_c(void)
 * Body size: 651 bytes
 */


char * expected_c(undefined8 *param_1,char *param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  char *pcVar19;
  
  param_1[2] = param_2;
  cVar1 = *param_2;
  if (*(char *)(param_1 + 6) == '\0') {
    while ((cVar1 != '\0' && (iVar7 = isspace((int)cVar1), iVar7 != 0))) {
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    }
  }
  else {
    while (((cVar1 != '\0' && (iVar7 = isspace((int)cVar1), cVar1 != '\n')) && (iVar7 != 0))) {
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    }
  }
  pcVar15 = param_2 + -1;
  uVar10 = 0xffffffff;
  pcVar16 = pcVar15;
  do {
    cVar1 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
    uVar10 = uVar10 + 1;
    pcVar16 = pcVar16 + 1;
    if (cVar1 == '\0') break;
  } while (cVar1 != param_4);
  if (cVar1 == '\0') {
    if (param_4 == '\n') {
      uVar12 = *param_1;
      lVar14 = param_1[1];
      lVar17 = (longlong)pcVar16 - lVar14;
      pcVar15 = "expected newline";
    }
    else if (param_4 == '\0') {
      uVar12 = *param_1;
      lVar14 = param_1[1];
      lVar17 = (longlong)pcVar16 - lVar14;
      pcVar15 = "expected end of script";
    }
    else {
      uVar12 = *param_1;
      lVar14 = param_1[1];
      lVar17 = (longlong)pcVar16 - lVar14;
      pcVar15 = "expected \'%c\'";
    }
    FUN_140399a50(uVar12,lVar14,lVar17,pcVar15);
    return (char *)0x0;
  }
  pcVar2 = (char *)param_1[3];
  pcVar9 = pcVar2;
  pcVar16 = pcVar2;
  if ((int)uVar10 < 1) goto LAB_1405d9046;
  uVar8 = (ulonglong)uVar10;
  uVar13 = 0;
  if (uVar10 < 0x20) {
    if ((uVar10 & 7) != 0) goto LAB_1405d8f2f;
LAB_1405d8fc6:
    if (0xfffffffffffffff8 < uVar13 - uVar8) goto LAB_1405d9042;
LAB_1405d8fd2:
    lVar14 = 0;
    do {
      pcVar16[lVar14] = param_2[lVar14 + uVar13];
      pcVar16[lVar14 + 1] = param_2[lVar14 + uVar13 + 1];
      pcVar16[lVar14 + 2] = param_2[lVar14 + uVar13 + 2];
      pcVar16[lVar14 + 3] = param_2[lVar14 + uVar13 + 3];
      pcVar16[lVar14 + 4] = param_2[lVar14 + uVar13 + 4];
      pcVar16[lVar14 + 5] = param_2[lVar14 + uVar13 + 5];
      pcVar16[lVar14 + 6] = param_2[lVar14 + uVar13 + 6];
      pcVar16[lVar14 + 7] = param_2[lVar14 + uVar13 + 7];
      lVar14 = lVar14 + 8;
    } while (uVar8 - uVar13 != lVar14);
    pcVar16 = pcVar16 + lVar14;
  }
  else if ((ulonglong)((longlong)pcVar2 - (longlong)param_2) < 0x20) {
LAB_1405d8f27:
    if ((uVar10 & 7) == 0) goto LAB_1405d8fc6;
LAB_1405d8f2f:
    uVar11 = (ulonglong)(uVar10 & 7);
    uVar18 = uVar13;
    do {
      *pcVar16 = param_2[uVar18];
      pcVar16 = pcVar16 + 1;
      uVar18 = uVar18 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    uVar11 = uVar13 - uVar8;
    uVar13 = uVar18;
    if (uVar11 < 0xfffffffffffffff9) goto LAB_1405d8fd2;
  }
  else {
    uVar13 = (ulonglong)(uVar10 & 0xffffffe0);
    pcVar16 = pcVar2 + uVar13;
    uVar18 = 0;
    do {
      pcVar9 = param_2 + uVar18;
      uVar3 = *(undefined4 *)(pcVar9 + 4);
      uVar4 = *(undefined4 *)(pcVar9 + 8);
      uVar5 = *(undefined4 *)(pcVar9 + 0xc);
      uVar12 = *(undefined8 *)(param_2 + uVar18 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + uVar18 + 0x10 + 8);
      pcVar19 = pcVar2 + uVar18;
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      *(undefined4 *)(pcVar19 + 4) = uVar3;
      *(undefined4 *)(pcVar19 + 8) = uVar4;
      *(undefined4 *)(pcVar19 + 0xc) = uVar5;
      *(undefined8 *)(pcVar2 + uVar18 + 0x10) = uVar12;
      *(undefined8 *)(pcVar2 + uVar18 + 0x10 + 8) = uVar6;
      uVar18 = uVar18 + 0x20;
    } while ((uVar10 & 0xffffffe0) != uVar18);
    if ((uVar10 & 0xffffffe0) != uVar10) goto LAB_1405d8f27;
  }
LAB_1405d9042:
  pcVar9 = (char *)param_1[3];
LAB_1405d9046:
  *param_3 = pcVar9;
  do {
    pcVar19 = pcVar16;
    param_1[3] = pcVar19;
    pcVar9 = pcVar2;
    if (pcVar19 == pcVar2) break;
    iVar7 = isspace((int)pcVar19[-1]);
    pcVar16 = pcVar19 + -1;
    pcVar9 = pcVar19;
  } while (iVar7 != 0);
  *pcVar9 = '\0';
  param_1[3] = pcVar9 + 1;
  return pcVar15;
}

