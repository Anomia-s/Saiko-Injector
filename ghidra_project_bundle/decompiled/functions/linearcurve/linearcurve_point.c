/**
 * Function: linearcurve_point
 * Address:  1405c9b20
 * Signature: undefined linearcurve_point(void)
 * Body size: 150 bytes
 */


undefined * linearcurve_point(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x140) < DAT_1416f5e70) {
    FUN_140b6864c(&DAT_1416f5e70);
    if (DAT_1416f5e70 == -1) {
      FUN_1402d95d0(&DAT_1416f5700,"LinearCurve::Point",8,FUN_1405c97b0,&LAB_140331080,FUN_1405c9220
                   );
      _Init_thread_footer(&DAT_1416f5e70);
      return &DAT_1416f5700;
    }
  }
  return &DAT_1416f5700;
}

