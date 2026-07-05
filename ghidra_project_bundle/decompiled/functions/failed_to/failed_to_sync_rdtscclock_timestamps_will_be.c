/**
 * Function: failed_to_sync_rdtscclock_timestamps_will_be
 * Address:  140029a60
 * Signature: undefined failed_to_sync_rdtscclock_timestamps_will_be(void)
 * Body size: 306 bytes
 */


longlong * failed_to_sync_rdtscclock_timestamps_will_be(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  FILE *_File;
  double dVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_14151e400) {
    FUN_140b6864c(&DAT_14151e400);
    if (DAT_14151e400 == -1) {
      FUN_14002b180(&DAT_14151e3f8);
      _Init_thread_footer(&DAT_14151e400);
    }
  }
  dVar3 = (double)param_2 * DAT_14151e3f8;
  lVar2 = (longlong)dVar3;
  if (dVar3 < 0.0) {
    lVar2 = 0x7fffffffffffffff;
  }
  param_1[2] = (longlong)DAT_14151e3f8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (9.223372036854776e+18 <= dVar3) {
    lVar2 = 0x7fffffffffffffff;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = lVar2;
  param_1[1] = lVar2;
  cVar1 = FUN_14002afe0(param_1,50000);
  if (cVar1 == '\0') {
    cVar1 = FUN_14002afe0(param_1,100000);
    if (cVar1 == '\0') {
      _File = (FILE *)__acrt_iob_func(2);
      fwrite("Failed to sync RdtscClock. Timestamps will be incorrect\n",0x38,1,_File);
    }
  }
  return param_1;
}

