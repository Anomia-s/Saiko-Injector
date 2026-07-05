/**
 * Function: ecdsa_verify
 * Address:  140c7f2e0
 * Signature: undefined ecdsa_verify(void)
 * Body size: 94 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ecdsa_verify(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c7f302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000030 + 0x68))();
    return uVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ec\\ecdsa_vrf.c",0x2f,"ECDSA_verify");
  FUN_140b91cc0(0x10,0x98,0);
  return 0xffffffff;
}

