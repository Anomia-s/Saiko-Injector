/**
 * Function: rsa_verifyrecover_init
 * Address:  140d40980
 * Signature: undefined rsa_verifyrecover_init(void)
 * Body size: 53 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_verifyrecover_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init(param_1,param_2,x931_padding_not_allowed_with_rsa_pss,param_3,0x40,
                      "RSA VerifyRecover Init",0x140d4098a);
  return;
}

