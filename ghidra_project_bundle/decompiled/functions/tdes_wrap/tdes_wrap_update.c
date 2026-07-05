/**
 * Function: tdes_wrap_update
 * Address:  140d15540
 * Signature: undefined tdes_wrap_update(void)
 * Body size: 181 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tdes_wrap_update(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4,
                undefined8 param_5,ulonglong param_6)

{
  int iVar1;
  
  *param_3 = 0;
  if (param_6 != 0) {
    if (param_4 < param_6) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_tdes_wrap.c",0x9e,"tdes_wrap_update");
      FUN_140b91cc0(0x39,0x6a,0);
      return 0;
    }
    iVar1 = FUN_140d15600();
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_tdes_wrap.c",0xa3,"tdes_wrap_update");
      FUN_140b91cc0(0x39,0x66,0);
      return 0;
    }
  }
  return 1;
}

