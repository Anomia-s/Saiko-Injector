/**
 * Function: rsa_verify_init
 * Address:  140d40940
 * Signature: undefined rsa_verify_init(void)
 * Body size: 53 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_verify_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init(param_1,param_2,x931_padding_not_allowed_with_rsa_pss,param_3,0x20,
                      "RSA Verify Init",0x140d4094a);
  return;
}

