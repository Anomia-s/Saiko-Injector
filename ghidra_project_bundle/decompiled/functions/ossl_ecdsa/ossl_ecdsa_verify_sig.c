/**
 * Function: ossl_ecdsa_verify_sig
 * Address:  140cef620
 * Signature: undefined ossl_ecdsa_verify_sig(void)
 * Body size: 93 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_ecdsa_verify_sig(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong in_R9;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(in_R9 + 0x18) + 0x188);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecdsa_ossl.c",0x43,"ossl_ecdsa_verify_sig");
    FUN_140b91cc0(0x10,0xaa,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140cef67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

