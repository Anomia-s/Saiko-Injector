/**
 * Function: interval_is_empty
 * Address:  1406afff0
 * Signature: undefined interval_is_empty(void)
 * Body size: 509 bytes
 */


undefined8 interval_is_empty(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = FUN_1404731e0();
  if (iVar2 == 2) {
    iVar2 = FUN_1406b7830(param_1,1);
    iVar3 = FUN_1406b7830(param_1,2);
    if (iVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,2,"interval is empty");
    }
    if (iVar3 - iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,2,"interval is too large");
    }
    uVar4 = *(ulonglong *)(lVar1 + 0x4b0);
    uVar6 = (uint)(uVar4 >> 0x2d) ^ (uint)(uVar4 >> 0x1b);
    bVar5 = (byte)(uVar4 >> 0x3b);
    *(ulonglong *)(lVar1 + 0x4b0) = uVar4 * 0x5851f42d4c957f2d + 0x69;
    iVar2 = iVar2 + (int)((ulonglong)(uVar6 >> bVar5 | uVar6 << 0x20 - bVar5) *
                          (ulonglong)((iVar3 - iVar2) + 1) >> 0x20);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        uVar4 = *(ulonglong *)(lVar1 + 0x4b0);
        uVar6 = (uint)(uVar4 >> 0x2d) ^ (uint)(uVar4 >> 0x1b);
        bVar5 = (byte)(uVar4 >> 0x3b);
        uVar6 = uVar6 >> bVar5 | uVar6 << 0x20 - bVar5;
        uVar4 = uVar4 * 0x5851f42d4c957f2d + 0x69;
        uVar7 = (uint)(uVar4 >> 0x2d) ^ (uint)(uVar4 >> 0x1b);
        bVar5 = (byte)(uVar4 >> 0x3b);
        uVar7 = uVar7 >> bVar5 | uVar7 << 0x20 - bVar5;
        auVar9._4_4_ = uVar7;
        auVar9._0_4_ = uVar6;
        auVar9._8_4_ = uVar7;
        auVar9._12_4_ = 0x45300000;
        *(ulonglong *)(lVar1 + 0x4b0) = uVar4 * 0x5851f42d4c957f2d + 0x69;
        dVar8 = ldexp((auVar9._8_8_ - 1.9342813113834067e+25) +
                      ((double)CONCAT44(0x43300000,uVar6) - 4503599627370496.0),-0x40);
        FUN_140474130(param_1,dVar8);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"wrong number of arguments");
    }
    uVar6 = FUN_1406b7830(param_1,1);
    if ((int)uVar6 < 1) {
                    /* WARNING: Subroutine does not return */
      invalid_argument_d_s(param_1,1,"interval is empty");
    }
    uVar4 = *(ulonglong *)(lVar1 + 0x4b0);
    uVar7 = (uint)(uVar4 >> 0x2d) ^ (uint)(uVar4 >> 0x1b);
    bVar5 = (byte)(uVar4 >> 0x3b);
    *(ulonglong *)(lVar1 + 0x4b0) = uVar4 * 0x5851f42d4c957f2d + 0x69;
    iVar2 = (int)((ulonglong)(uVar7 >> bVar5 | uVar7 << 0x20 - bVar5) * (ulonglong)uVar6 >> 0x20) +
            1;
  }
  FUN_140474150(param_1,iVar2);
  return 1;
}

