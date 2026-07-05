/**
 * Function: ossl_hpke_kem_info_find_curve
 * Address:  140cfc580
 * Signature: undefined ossl_hpke_kem_info_find_curve(void)
 * Body size: 173 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * ossl_hpke_kem_info_find_curve(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  
  ppuVar3 = &PTR_DAT_1412de108;
  iVar4 = 0;
  while( true ) {
    puVar2 = ppuVar3[1];
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *ppuVar3;
    }
    iVar1 = FUN_140b8c6a0(param_1,puVar2);
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
    ppuVar3 = ppuVar3 + 9;
    if (0x1412de26f < (longlong)ppuVar3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\hpke\\hpke_util.c",0xa8,"ossl_HPKE_KEM_INFO_find_curve");
      FUN_140b91cc0(0x39,0xb0,0);
      return (undefined *)0x0;
    }
  }
  return &DAT_1412de100 + (longlong)iVar4 * 0x48;
}

