/**
 * Function: ml_dsa_digest_signverify_init
 * Address:  140d4d5b0
 * Signature: undefined ml_dsa_digest_signverify_init(void)
 * Body size: 153 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ml_dsa_digest_signverify_init(longlong *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\ml_dsa_sig.c",0xa3,
               "ml_dsa_digest_signverify_init");
    FUN_140b91cc0(0x39,0x7a,"Explicit digest not supported for ML-DSA operations");
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if ((param_3 == 0) && (*param_1 != 0)) {
    uVar1 = providersimplementationssignatureml_dsa_sigc(param_1,param_4);
    return uVar1;
  }
  uVar1 = ml_dsa_signverify_msg_init(param_1,param_3,param_4,0x10,"ML_DSA Sign Init");
  return uVar1;
}

