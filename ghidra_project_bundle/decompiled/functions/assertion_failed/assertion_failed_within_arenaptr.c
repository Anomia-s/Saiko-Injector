/**
 * Function: assertion_failed_within_arenaptr
 * Address:  140b8e7d0
 * Signature: undefined assertion_failed_within_arenaptr(void)
 * Body size: 203 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong assertion_failed_within_arenaptr(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 < DAT_1416ff830) || (DAT_1416ff838 + DAT_1416ff830 <= param_1)) {
    s_d_openssl_internal_error_sn("assertion failed: WITHIN_ARENA(ptr)","crypto\\mem_sec.c",0x2e6);
  }
  if ((DAT_1416ff830 <= param_1) && (param_1 < DAT_1416ff838 + DAT_1416ff830)) {
    uVar1 = assertion_failed_bit_1_0(param_1);
    iVar2 = assertion_failed_list_0_list_shfreelist_siz(param_1,uVar1,DAT_1416ff858);
    if (iVar2 == 0) {
      s_d_openssl_internal_error_sn
                ("assertion failed: sh_testbit(ptr, list, sh.bittable)","crypto\\mem_sec.c",0x2ea);
    }
    return DAT_1416ff838 / (ulonglong)(1L << ((byte)uVar1 & 0x3f));
  }
  return 0;
}

