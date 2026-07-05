/**
 * Function: month_out_of_range_1_12_requested_i
 * Address:  140158560
 * Signature: undefined month_out_of_range_1_12_requested_i(void)
 * Body size: 113 bytes
 */


int month_out_of_range_1_12_requested_i(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 - 0xdU < 0xfffffff4) {
    FUN_1400fbed0("Month out of range [1-12], requested: %i");
    return -1;
  }
  iVar1 = *(int *)(&DAT_140debd00 + (ulonglong)(param_2 - 1) * 4);
  if ((param_1 & 3) == 0 && param_2 == 2) {
    uVar2 = param_1 * -0x3d70a3d7 + 0x51eb850;
    iVar1 = iVar1 + (uint)((uVar2 >> 4 | param_1 * -0x70000000) < 0xa3d70b ||
                          0x28f5c28 < (uVar2 >> 2 | param_1 * 0x40000000));
  }
  return iVar1;
}

