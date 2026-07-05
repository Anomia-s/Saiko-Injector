/**
 * Function: openssl_sk_set
 * Address:  140b779b0
 * Signature: undefined openssl_sk_set(void)
 * Body size: 189 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 openssl_sk_set(int *param_1,int param_2,undefined8 param_3)

{
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\stack\\stack.c",0x1d2,"OPENSSL_sk_set");
    FUN_140b91cc0(0xf,0xc0102,0);
    return 0;
  }
  if ((-1 < param_2) && (param_2 < *param_1)) {
    *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2)) = param_3;
    param_1[4] = 0;
    return *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2));
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\stack\\stack.c",0x1d6,"OPENSSL_sk_set");
  FUN_140b91cc0(0xf,0x80106,&DAT_1413a6470,param_2);
  return 0;
}

