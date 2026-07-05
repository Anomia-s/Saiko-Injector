/**
 * Function: assertion_failed_bit_1_0
 * Address:  140b8e8a0
 * Signature: undefined assertion_failed_bit_1_0(void)
 * Body size: 149 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong assertion_failed_bit_1_0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)((DAT_1416ff838 - DAT_1416ff830) + param_1) / DAT_1416ff850;
  lVar1 = DAT_1416ff848;
  while ((lVar1 = lVar1 + -1, uVar2 != 0 &&
         ((*(byte *)((uVar2 >> 3) + DAT_1416ff858) & (byte)(1L << ((byte)uVar2 & 7))) == 0))) {
    if ((uVar2 & 1) != 0) {
      s_d_openssl_internal_error_sn("assertion failed: (bit & 1) == 0","crypto\\mem_sec.c",0x160);
    }
    uVar2 = uVar2 >> 1;
  }
  return lVar1;
}

