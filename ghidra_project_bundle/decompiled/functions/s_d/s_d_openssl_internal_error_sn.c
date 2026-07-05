/**
 * Function: s_d_openssl_internal_error_sn
 * Address:  140bcf3f0
 * Signature: undefined s_d_openssl_internal_error_sn(void)
 * Body size: 48 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_d_openssl_internal_error_sn(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uopenssl_fatal("%s:%d: OpenSSL internal error: %s\n",param_2,param_3,param_1,0x140bcf3fa);
  raise(0x16);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}

