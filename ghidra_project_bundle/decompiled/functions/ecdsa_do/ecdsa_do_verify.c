/**
 * Function: ecdsa_do_verify
 * Address:  140c7f280
 * Signature: undefined ecdsa_do_verify(void)
 * Body size: 89 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecdsa_do_verify(void)

{
  undefined8 uVar1;
  longlong *in_R9;
  
  if (*(code **)(*in_R9 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c7f29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R9 + 0x70))();
    return uVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\ecdsa_vrf.c",0x1f,"ECDSA_do_verify");
  FUN_140b91cc0(0x10,0x98,0);
  return 0xffffffff;
}

