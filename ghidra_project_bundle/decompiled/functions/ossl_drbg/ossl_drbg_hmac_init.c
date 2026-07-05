/**
 * Function: ossl_drbg_hmac_init
 * Address:  140d2b720
 * Signature: undefined ossl_drbg_hmac_init(void)
 * Body size: 206 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_drbg_hmac_init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (*plVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg_hmac.c",0x7b,"ossl_drbg_hmac_init");
    FUN_140b91cc0(0x39,0x96,0);
    uVar2 = 0;
  }
  else {
    memset(plVar1 + 5,0,plVar1[4]);
    memset(plVar1 + 0xd,1,plVar1[4]);
    uVar2 = FUN_140d2b650(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar2;
}

