/**
 * Function: private_s_key_implicit_rejection_secret_does
 * Address:  140d36600
 * Signature: undefined private_s_key_implicit_rejection_secret_does(void)
 * Body size: 124 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
private_s_key_implicit_rejection_secret_does(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_1 + 0x20),(void *)(param_2 + -0x20 + *(longlong *)(*param_3 + 8)),
                 0x20);
  if (iVar1 == 0) {
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x15e,"check_seed");
  FUN_140b91cc0(0x39,0x9e,"private %s key implicit rejection secret does not match seed",
                *(undefined8 *)*param_3);
  return 0;
}

