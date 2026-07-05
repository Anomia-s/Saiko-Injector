/**
 * Function: engine_load_ssl_client_cert
 * Address:  140c4a2c0
 * Signature: undefined engine_load_ssl_client_cert(void)
 * Body size: 341 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
engine_load_ssl_client_cert
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\engine\\eng_pkey.c",0x79,"ENGINE_load_ssl_client_cert");
    FUN_140b91cc0(0x26,0xc0102,0);
  }
  else {
    iVar1 = FUN_140b8b770(DAT_1417001c0);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa0) == 0) {
        FUN_140b8b7a0(DAT_1417001c0);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\engine\\eng_pkey.c",0x80,"ENGINE_load_ssl_client_cert");
        FUN_140b91cc0(0x26,0x75,0);
        return 0;
      }
      FUN_140b8b7a0(DAT_1417001c0);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\engine\\eng_pkey.c",0x85,"ENGINE_load_ssl_client_cert");
        FUN_140b91cc0(0x26,0x7d,0);
        return 0;
      }
      uVar2 = (**(code **)(param_1 + 0x88))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

