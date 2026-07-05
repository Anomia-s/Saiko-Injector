/**
 * Function: cryptoececdsa_signc
 * Address:  140c7f220
 * Signature: undefined cryptoececdsa_signc(void)
 * Body size: 94 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cryptoececdsa_signc(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000040;
  
  if (*(code **)(*in_stack_00000040 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c7f245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000040 + 0x50))();
    return uVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\ecdsa_sign.c",0x2f,"ECDSA_sign_ex");
  FUN_140b91cc0(0x10,0x98,0);
  return 0;
}

