/**
 * Function: udim2g_g_g_g
 * Address:  14047a3f0
 * Signature: undefined udim2g_g_g_g(void)
 * Body size: 191 bytes
 */


undefined8 udim2g_g_g_g(undefined8 param_1)

{
  float *pfVar1;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  pfVar1 = (float *)FUN_140473e90(param_1,1);
  local_a8 = (double)pfVar1[3];
  local_b0 = (double)pfVar1[2];
  local_b8 = (double)pfVar1[1];
  FUN_1400a3c00(local_98,0x80,"UDim2(%g, %g, %g, %g)",(double)*pfVar1);
  FUN_140474220(param_1,local_98);
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_d8)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_d8);
}

