/**
 * Function: assertion_failed_within_freelisttemp2_p_next
 * Address:  140b8eda0
 * Signature: undefined assertion_failed_within_freelisttemp2_p_next(void)
 * Body size: 140 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_within_freelisttemp2_p_next(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 != 0) {
    *(longlong *)(*param_1 + 8) = param_1[1];
  }
  *(longlong *)param_1[1] = *param_1;
  if (*param_1 != 0) {
    uVar1 = *(ulonglong *)(*param_1 + 8);
    if (((uVar1 < DAT_1416ff840) || (DAT_1416ff840 + DAT_1416ff848 * 8 <= uVar1)) &&
       ((uVar1 < DAT_1416ff830 || (DAT_1416ff830 + DAT_1416ff838 <= uVar1)))) {
      s_d_openssl_internal_error_sn
                ("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)",
                 "crypto\\mem_sec.c",0x1aa);
      return;
    }
  }
  return;
}

