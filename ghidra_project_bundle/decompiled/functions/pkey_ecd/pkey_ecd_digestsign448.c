/**
 * Function: pkey_ecd_digestsign448
 * Address:  140bfa300
 * Signature: undefined pkey_ecd_digestsign448(void)
 * Body size: 305 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestsign448
          (undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140b6a6a0();
  puVar3 = (undefined8 *)FUN_140b80c00(*(undefined8 *)(lVar2 + 0x88));
  if (puVar3 == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecx_meth.c",0x348,"pkey_ecd_digestsign448");
    FUN_140b91cc0(0x10,0x74,0);
    return 0;
  }
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ec\\ecx_meth.c",0x351,"pkey_ecd_digestsign448");
      FUN_140b91cc0(0x10,100,0);
      return 0;
    }
    iVar1 = FUN_140c89660(*puVar3,param_2,param_4,param_5,(longlong)puVar3 + 0x14,puVar3[10],0,0,0,
                          puVar3[1]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_3 = 0x72;
  return 1;
}

