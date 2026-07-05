/**
 * Function: ossl_ecdsa_sign_setup
 * Address:  140cef3b0
 * Signature: undefined ossl_ecdsa_sign_setup(void)
 * Body size: 93 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_ecdsa_sign_setup(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = 0x140cef3ba;
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x2b,"ossl_ecdsa_sign_setup",param_4,uVar1);
    FUN_140b91cc0(0x10,0xaa,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140cef40a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

