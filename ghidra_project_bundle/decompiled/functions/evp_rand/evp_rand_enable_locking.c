/**
 * Function: evp_rand_enable_locking
 * Address:  140c18420
 * Signature: undefined evp_rand_enable_locking(void)
 * Body size: 90 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
evp_rand_enable_locking(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140c1842a;
  if (*(code **)(*param_1 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c18441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x68))(param_1[1]);
    return uVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\evp_rand.c",0x62,"EVP_RAND_enable_locking",param_4,uVar1);
  FUN_140b91cc0(6,0xd5,0);
  return 0;
}

