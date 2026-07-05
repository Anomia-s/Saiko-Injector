/**
 * Function: field_s_missing_in_date_table
 * Address:  1406ab050
 * Signature: undefined field_s_missing_in_date_table(void)
 * Body size: 970 bytes
 */


undefined8 field_s_missing_in_date_table(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = FUN_140473550(param_1,1);
  if (iVar2 < 1) {
    lVar9 = _time64((__time64_t *)0x0);
  }
  else {
    FUN_1406b76d0(param_1,1,6);
    FUN_1404731f0(param_1,1);
    FUN_1404746e0(param_1,0xffffffff,&DAT_14135dd2b);
    iVar2 = FUN_140473660(param_1,0xffffffff);
    if (iVar2 == 0) {
      lVar9 = 0;
    }
    else {
      iVar2 = FUN_140473950(param_1,0xffffffff,0);
      lVar9 = (longlong)iVar2;
    }
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,"min");
    iVar2 = FUN_140473660(param_1,0xffffffff);
    if (iVar2 == 0) {
      lVar7 = 0;
    }
    else {
      iVar2 = FUN_140473950(param_1,0xffffffff,0);
      lVar7 = (longlong)iVar2 * 0x3c;
    }
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,&DAT_141339a31);
    iVar2 = FUN_140473660(param_1,0xffffffff);
    if (iVar2 == 0) {
      lVar8 = 0xa8c0;
    }
    else {
      iVar2 = FUN_140473950(param_1,0xffffffff,0);
      lVar8 = (longlong)iVar2 * 0xe10;
    }
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,&DAT_141326285);
    iVar2 = FUN_140473660(param_1,0xffffffff);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"field \'%s\' missing in date table",&DAT_141326285);
    }
    iVar2 = FUN_140473950(param_1,0xffffffff,0);
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,"month");
    iVar3 = FUN_140473660(param_1,0xffffffff);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"field \'%s\' missing in date table","month");
    }
    iVar3 = FUN_140473950(param_1,0xffffffff,0);
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,&DAT_14133dcaf);
    iVar4 = FUN_140473660(param_1,0xffffffff);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"field \'%s\' missing in date table",&DAT_14133dcaf);
    }
    iVar6 = iVar3 + -1;
    iVar4 = FUN_140473950(param_1,0xffffffff,0);
    FUN_1404731f0(param_1,0xfffffffe);
    FUN_1404746e0(param_1,0xffffffff,"isdst");
    iVar5 = FUN_140473550(param_1,0xffffffff);
    if (iVar5 != 0) {
      FUN_140473af0(param_1,0xffffffff);
    }
    FUN_1404731f0(param_1,0xfffffffe);
    iVar5 = (int)((ulonglong)((longlong)iVar6 * -0x2aaaaaab) >> 0x20);
    iVar6 = ((iVar5 >> 1) - (iVar5 >> 0x1f)) +
            (uint)((int)(iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) *
                                 -0xc) < 2);
    iVar4 = iVar4 - iVar6;
    iVar5 = iVar4 + 0x12c0;
    iVar4 = iVar4 + 0x12c3;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    iVar1 = (int)((ulonglong)((longlong)iVar5 * -0x51eb851f) >> 0x20);
    iVar2 = iVar2 + iVar5 * 0x16d + (iVar4 >> 2) + ((iVar1 >> 5) - (iVar1 >> 0x1f)) + iVar5 / 400 +
            ((iVar3 + iVar6 * 0xc) * 0x99 + -0x1c9) / 5;
    if (iVar2 < 0x25bab9) goto LAB_1406ab3ba;
    lVar9 = lVar7 + lVar9 + lVar8 + (ulonglong)(iVar2 - 0x7d2d) * 0x15180;
    if (lVar9 < 0x3118a41200) {
      lVar9 = 0x3118a411ff;
    }
    lVar9 = lVar9 + -0x3118a41200;
  }
  if (lVar9 != -1) {
    FUN_140474130(param_1,(double)lVar9);
    return 1;
  }
LAB_1406ab3ba:
  FUN_140474110(param_1);
  return 1;
}

