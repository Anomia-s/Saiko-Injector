/**
 * Function: rsa_sign_init
 * Address:  140d40900
 * Signature: undefined rsa_sign_init(void)
 * Body size: 53 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_sign_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init(param_1,param_2,x931_padding_not_allowed_with_rsa_pss,param_3,0x10,
                      "RSA Sign Init",0x140d4090a);
  return;
}

