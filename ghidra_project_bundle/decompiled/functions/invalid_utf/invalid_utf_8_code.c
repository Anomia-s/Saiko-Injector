/**
 * Function: invalid_utf_8_code
 * Address:  1406b1c00
 * Signature: undefined invalid_utf_8_code(void)
 * Body size: 364 bytes
 */


undefined8 invalid_utf_8_code(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_58 [32];
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  lVar5 = FUN_1406b7610(param_1,1,local_38);
  iVar4 = 0;
  uVar3 = FUN_140473950(param_1,2,0);
  if (0 < (int)uVar3) {
    if (local_38[0] < (int)uVar3) {
      iVar4 = uVar3 - 1;
    }
    else {
      iVar4 = uVar3 - 1;
      pcVar10 = (char *)((ulonglong)uVar3 + lVar5);
      do {
        iVar4 = iVar4 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 < -0x40);
    }
  }
  uVar7 = 0;
  if (local_38[0] <= iVar4) {
LAB_1406b1d40:
    if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_140b65db0(local_30 ^ (ulonglong)auStack_58);
    }
    return uVar7;
  }
  lVar9 = (longlong)iVar4;
  lVar6 = lVar5 + lVar9;
  uVar3 = (uint)*(byte *)(lVar5 + lVar9);
  if ((char)*(byte *)(lVar5 + lVar9) < '\0') {
    puVar12 = (uint *)&DAT_141218bf0;
    bVar8 = 0;
    uVar11 = 0;
    uVar13 = 0;
    do {
      if ((uVar3 & 0x40) == 0) {
        if (uVar11 < 4) {
          uVar3 = (uVar3 & 0x3f) << (bVar8 & 0x1f) | uVar13;
          if ((uVar3 < 0x110000) && ((uVar3 & 0x1ff800) != 0xd800 && *puVar12 < uVar3)) {
            lVar6 = lVar6 + uVar11;
            goto LAB_1406b1d1f;
          }
        }
        break;
      }
      bVar2 = *(byte *)(lVar9 + lVar5 + 1 + uVar11);
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 << 6 | bVar2 & 0x3f;
      uVar3 = uVar3 * 2;
      puVar12 = puVar12 + 1;
      bVar8 = bVar8 + 5;
    } while ((bVar2 & 0xc0) == 0x80);
  }
  else {
LAB_1406b1d1f:
    if (-0x41 < *(char *)(lVar6 + 1)) {
      FUN_140474150(param_1,iVar4 + 1);
      FUN_140474150(param_1,uVar3);
      uVar7 = 2;
      goto LAB_1406b1d40;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406b7390(param_1,"invalid UTF-8 code");
}

