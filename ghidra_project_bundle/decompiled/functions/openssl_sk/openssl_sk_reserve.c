/**
 * Function: openssl_sk_reserve
 * Address:  140b77ba0
 * Signature: undefined openssl_sk_reserve(void)
 * Body size: 101 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
openssl_sk_reserve(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140b77baa;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\stack\\stack.c",0xf9,"OPENSSL_sk_reserve",param_4,uVar1);
    FUN_140b91cc0(0xf,0xc0102,0);
    return 0;
  }
  if ((int)param_2 < 0) {
    return 1;
  }
  uVar1 = FUN_140b78770(param_1,param_2,1);
  return uVar1;
}

