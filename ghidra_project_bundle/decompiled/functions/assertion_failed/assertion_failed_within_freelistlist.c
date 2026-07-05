/**
 * Function: assertion_failed_within_freelistlist
 * Address:  140b8eca0
 * Signature: undefined assertion_failed_within_freelistlist(void)
 * Body size: 251 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void assertion_failed_within_freelistlist(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  
  if ((param_1 < DAT_1416ff840) || (DAT_1416ff840 + DAT_1416ff848 <= param_1)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: WITHIN_FREELIST(list)","crypto\\mem_sec.c",0x18e);
  }
  if ((param_2 < DAT_1416ff830) ||
     ((ulonglong *)((longlong)DAT_1416ff830 + DAT_1416ff838) <= param_2)) {
    s_d_openssl_internal_error_sn("assertion failed: WITHIN_ARENA(ptr)","crypto\\mem_sec.c",399);
  }
  puVar1 = (ulonglong *)*param_1;
  *param_2 = (ulonglong)puVar1;
  if ((puVar1 != (ulonglong *)0x0) &&
     ((puVar1 < DAT_1416ff830 || ((ulonglong)((longlong)DAT_1416ff830 + DAT_1416ff838) <= puVar1))))
  {
    s_d_openssl_internal_error_sn
              ("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)",
               "crypto\\mem_sec.c",0x193);
  }
  param_2[1] = (ulonglong)param_1;
  if (*param_2 != 0) {
    if (*(undefined8 **)(*param_2 + 8) != param_1) {
      s_d_openssl_internal_error_sn
                ("assertion failed: (char **)temp->next->p_next == list","crypto\\mem_sec.c",0x197);
    }
    *(ulonglong **)(*param_2 + 8) = param_2;
  }
  *param_1 = param_2;
  return;
}

