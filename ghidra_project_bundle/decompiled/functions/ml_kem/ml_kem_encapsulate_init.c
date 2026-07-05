/**
 * Function: ml_kem_encapsulate_init
 * Address:  140d51d70
 * Signature: undefined ml_kem_encapsulate_init(void)
 * Body size: 94 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ml_kem_encapsulate_init(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x40) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ml_kem_kem.c",0x50,"ml_kem_encapsulate_init");
    FUN_140b91cc0(0x39,0x80,0);
    return 0;
  }
  uVar1 = FUN_140d52270(param_1,0x1000,param_2,param_3);
  return uVar1;
}

