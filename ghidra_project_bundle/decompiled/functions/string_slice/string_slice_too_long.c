/**
 * Function: string_slice_too_long
 * Address:  1406b1540
 * Signature: undefined string_slice_too_long(void)
 * Body size: 503 bytes
 */


int string_slice_too_long(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1406b7610(param_1,1,&local_48);
  iVar10 = local_48;
  uVar6 = CONCAT44(uStack_44,local_48);
  uVar3 = FUN_1406b78a0(param_1,2,1);
  iVar2 = local_48;
  uVar9 = uVar3;
  if (((int)uVar3 < 0) && (uVar9 = 0, (ulonglong)-(longlong)(int)uVar3 <= uVar6)) {
    uVar9 = uVar3 + iVar10 + 1;
  }
  uVar6 = CONCAT44(uStack_44,local_48);
  uVar4 = FUN_1406b78a0(param_1,3,uVar9);
  uVar3 = uVar4;
  if (((int)uVar4 < 0) && (uVar3 = 0, (ulonglong)-(longlong)(int)uVar4 <= uVar6)) {
    uVar3 = uVar4 + iVar2 + 1;
  }
  if ((int)uVar9 < 1) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,2,"out of range");
  }
  if (local_48 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"out of range");
  }
  iVar10 = 0;
  if ((int)uVar9 <= (int)uVar3) {
    stack_overflow_s(param_1,(uVar3 - uVar9) + 1,"string slice too long");
    pbVar8 = (byte *)(lVar5 + (ulonglong)uVar9 + -1);
    iVar10 = 0;
    if (pbVar8 < (byte *)((ulonglong)uVar3 + lVar5)) {
      iVar10 = 0;
      do {
        uVar9 = (uint)*pbVar8;
        if ((char)*pbVar8 < '\0') {
          bVar7 = 0;
          puVar11 = (uint *)&DAT_141218bf0;
          uVar6 = 0;
          uVar4 = 0;
          while ((uVar9 & 0x40) != 0) {
            lVar1 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            uVar4 = uVar4 << 6 | pbVar8[lVar1] & 0x3f;
            uVar9 = uVar9 * 2;
            puVar11 = puVar11 + 1;
            bVar7 = bVar7 + 5;
            if ((pbVar8[lVar1] & 0xffffffc0) != 0x80) goto LAB_1406b16e1;
          }
          if (((3 < uVar6) || (uVar4 = (uVar9 & 0x3f) << (bVar7 & 0x1f) | uVar4, 0x10ffff < uVar4))
             || ((uVar4 & 0x1ff800) == 0xd800 || uVar4 <= *puVar11)) {
LAB_1406b16e1:
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(param_1,"invalid UTF-8 code");
          }
          pbVar8 = pbVar8 + uVar6;
        }
        pbVar8 = pbVar8 + 1;
        FUN_140474150();
        iVar10 = iVar10 + 1;
      } while (pbVar8 < (byte *)((ulonglong)uVar3 + lVar5));
    }
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_68)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_68);
}

