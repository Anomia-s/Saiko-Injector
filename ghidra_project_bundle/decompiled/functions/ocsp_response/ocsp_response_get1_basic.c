/**
 * Function: ocsp_response_get1_basic
 * Address:  140bc8740
 * Signature: undefined ocsp_response_get1_basic(void)
 * Body size: 174 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ocsp_response_get1_basic(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ocsp\\ocsp_cl.c",0x82,"OCSP_response_get1_basic");
    FUN_140b91cc0(0x27,0x6c,0);
    return 0;
  }
  iVar2 = FUN_140b964c0(*puVar1);
  if (iVar2 != 0x16d) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ocsp\\ocsp_cl.c",0x86,"OCSP_response_get1_basic");
    FUN_140b91cc0(0x27,0x68,0);
    return 0;
  }
  uVar4 = puVar1[1];
  uVar3 = FUN_140bc8910();
  uVar4 = FUN_140c4d4f0(uVar4,uVar3);
  return uVar4;
}

