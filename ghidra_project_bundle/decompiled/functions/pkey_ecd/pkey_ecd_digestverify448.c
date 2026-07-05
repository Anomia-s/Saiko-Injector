/**
 * Function: pkey_ecd_digestverify448
 * Address:  140bfa520
 * Signature: undefined pkey_ecd_digestverify448(void)
 * Body size: 202 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
pkey_ecd_digestverify448
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x140bfa535;
  lVar1 = FUN_140b6a6a0();
  puVar2 = (undefined8 *)FUN_140b80c00(*(undefined8 *)(lVar1 + 0x88));
  if (puVar2 == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ec\\ecx_meth.c",0x377,"pkey_ecd_digestverify448");
    FUN_140b91cc0(0x10,0x74,0);
  }
  else if (param_3 == 0x72) {
    uVar3 = FUN_140c896d0(*puVar2,param_4,param_5,param_2,(longlong)puVar2 + 0x14,0,0,0,puVar2[1],
                          uVar3);
    return uVar3;
  }
  return 0;
}

