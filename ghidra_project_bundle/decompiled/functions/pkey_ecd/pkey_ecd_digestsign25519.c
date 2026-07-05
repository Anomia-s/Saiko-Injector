/**
 * Function: pkey_ecd_digestsign25519
 * Address:  140bfa1d0
 * Signature: undefined pkey_ecd_digestsign25519(void)
 * Body size: 302 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestsign25519
          (undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140b6a6a0();
  lVar2 = FUN_140b80c00();
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecx_meth.c",0x32b,"pkey_ecd_digestsign25519");
    FUN_140b91cc0(0x10,0x74,0);
    return 0;
  }
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ec\\ecx_meth.c",0x334,"pkey_ecd_digestsign25519");
      FUN_140b91cc0(0x10,100,0);
      return 0;
    }
    iVar1 = FUN_140c80350(param_2,param_4,param_5,lVar2 + 0x14,*(undefined8 *)(lVar2 + 0x50),0,0,0,0
                          ,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_3 = 0x40;
  return 1;
}

