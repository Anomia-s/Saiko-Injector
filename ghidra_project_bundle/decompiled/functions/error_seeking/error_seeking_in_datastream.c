/**
 * Function: error_seeking_in_datastream
 * Address:  1400f83a0
 * Signature: undefined error_seeking_in_datastream(void)
 * Body size: 160 bytes
 */


LARGE_INTEGER error_seeking_in_datastream(undefined8 *param_1,LARGE_INTEGER param_2,uint param_3)

{
  BOOL BVar1;
  LARGE_INTEGER LVar2;
  undefined1 auStack_38 [40];
  LARGE_INTEGER local_10;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_38;
  if (param_3 == 1) {
    param_2.QuadPart = param_2.QuadPart - param_1[3];
    param_1[3] = 0;
  }
  else {
    param_1[3] = 0;
    if (2 < param_3) {
      FUN_1400fbed0("windows_file_seek: Unknown value for \'whence\'");
      LVar2.QuadPart = 0xffffffffffffffff;
      goto LAB_1400f841a;
    }
  }
  local_10 = param_2;
  BVar1 = SetFilePointerEx((HANDLE)*param_1,param_2,&local_10,param_3);
  LVar2 = local_10;
  if (BVar1 == 0) {
    LVar2._0_1_ = FUN_1403d7710("Error seeking in datastream");
    LVar2.QuadPart._1_7_ = 0;
  }
LAB_1400f841a:
  if (DAT_1414ef3c0 != (local_8 ^ (ulonglong)auStack_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_8 ^ (ulonglong)auStack_38);
  }
  return (LARGE_INTEGER)LVar2.QuadPart;
}

