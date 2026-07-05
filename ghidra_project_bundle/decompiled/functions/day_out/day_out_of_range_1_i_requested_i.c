/**
 * Function: day_out_of_range_1_i_requested_i
 * Address:  140158760
 * Signature: undefined day_out_of_range_1_i_requested_i(void)
 * Body size: 523 bytes
 */


longlong day_out_of_range_1_i_requested_i(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 - 0xd < 0xfffffff4) {
    FUN_1400fbed0("Month out of range [1-12], requested: %i",param_2);
  }
  else {
    if (0 < param_3) {
      iVar4 = *(int *)(&DAT_140debd00 + (ulonglong)(param_2 - 1) * 4);
      if (param_2 == 2 && (param_1 & 3) == 0) {
        uVar5 = param_1 * -0x3d70a3d7 + 0x51eb850;
        iVar4 = iVar4 + (uint)((uVar5 >> 4 | param_1 * -0x70000000) < 0xa3d70b ||
                              0x28f5c28 < (uVar5 >> 2 | param_1 * 0x40000000));
      }
      if (param_3 <= iVar4) {
        iVar2 = param_1 - (param_2 < 3);
        iVar4 = param_2 + 9;
        if (2 < param_2) {
          iVar4 = param_2 + 0xfffd;
        }
        iVar1 = iVar2 + -399;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        uVar5 = (iVar1 / 400) * -400 + iVar2;
        lVar3 = (ulonglong)
                (~(uVar5 / 100) +
                param_3 + (iVar4 * 0x99 + 2U & 0xffff) / 5 + (uVar5 >> 2) + uVar5 * 0x16d) +
                (longlong)(iVar1 / 400) * 0x23ab1;
        if (lVar3 < 0xafa68) {
          return (((0xafa67U - lVar3) / 7) * 7 - (0xafa67U - lVar3)) + 6;
        }
        return lVar3 + ((lVar3 - 0xafa68U) / 7) * -7 + -0xafa68;
      }
    }
    iVar4 = *(int *)(&DAT_140debd00 + (ulonglong)(param_2 - 1) * 4);
    if (param_2 == 2 && (param_1 & 3) == 0) {
      uVar5 = param_1 * -0x3d70a3d7 + 0x51eb850;
      iVar4 = iVar4 + (uint)((uVar5 >> 4 | param_1 * -0x70000000) < 0xa3d70b ||
                            0x28f5c28 < (uVar5 >> 2 | param_1 * 0x40000000));
    }
    FUN_1400fbed0("Day out of range [1-%i], requested: %i",iVar4,param_2);
  }
  return 0xffffffff;
}

