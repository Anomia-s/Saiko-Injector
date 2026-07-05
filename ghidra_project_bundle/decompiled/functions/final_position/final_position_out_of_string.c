/**
 * Function: final_position_out_of_string
 * Address:  1406b1980
 * Signature: undefined final_position_out_of_string(void)
 * Body size: 527 bytes
 */


undefined8 final_position_out_of_string(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1406b7610(param_1,1,&local_50);
  iVar7 = local_50;
  uVar12 = CONCAT44(uStack_4c,local_50);
  iVar2 = FUN_1406b78a0(param_1,2,1);
  iVar6 = local_50;
  iVar10 = iVar2;
  if ((iVar2 < 0) && (iVar10 = 0, (ulonglong)-(longlong)iVar2 <= uVar12)) {
    iVar10 = iVar2 + iVar7 + 1;
  }
  uVar12 = CONCAT44(uStack_4c,local_50);
  iVar2 = FUN_1406b78a0(param_1,3,0xffffffff);
  iVar7 = iVar2;
  if ((iVar2 < 0) && (iVar7 = 0, (ulonglong)-(longlong)iVar2 <= uVar12)) {
    iVar7 = iVar2 + iVar6 + 1;
  }
  if ((iVar10 < 1) || (iVar6 = iVar10 + -1, local_50 < iVar6)) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,2,"initial position out of string");
  }
  if (local_50 < iVar7) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"final position out of string");
  }
  uVar5 = 1;
  iVar2 = 0;
  if (iVar10 <= iVar7) {
    local_58 = lVar3 + 1;
    iVar2 = 0;
    do {
      puVar9 = (uint *)&DAT_141218bf0;
      iVar10 = (int)lVar3 + iVar6;
      bVar4 = *(byte *)(lVar3 + iVar6);
      uVar11 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        bVar4 = 0;
        uVar12 = 0;
        uVar8 = 0;
        while ((uVar11 & 0x40) != 0) {
          bVar1 = *(byte *)(iVar6 + local_58 + uVar12);
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 << 6 | bVar1 & 0x3f;
          uVar11 = uVar11 * 2;
          puVar9 = puVar9 + 1;
          bVar4 = bVar4 + 5;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_1406b1b28;
        }
        if (((3 < uVar12) || (uVar8 = (uVar11 & 0x3f) << (bVar4 & 0x1f) | uVar8, 0x10ffff < uVar8))
           || ((uVar8 & 0x1ff800) == 0xd800 || uVar8 <= *puVar9)) {
LAB_1406b1b28:
          FUN_140474110(param_1,iVar2);
          iVar2 = iVar6 + 1;
          uVar5 = 2;
          break;
        }
        iVar10 = iVar10 + (int)uVar12;
      }
      iVar6 = (iVar10 - (int)lVar3) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar6 < iVar7);
  }
  FUN_140474150(param_1,iVar2);
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
}

