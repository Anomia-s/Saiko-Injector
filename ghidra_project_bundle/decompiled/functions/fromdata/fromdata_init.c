/**
 * Function: fromdata_init
 * Address:  140b7d4b0
 * Signature: undefined fromdata_init(void)
 * Body size: 123 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 fromdata_init(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_140b7c180();
      if (*(longlong *)(param_1 + 8) != 0) {
        *param_1 = 8;
        return 1;
      }
    }
    *param_1 = 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\pmeth_gn.c",0x162,"fromdata_init");
  FUN_140b91cc0(6,0x96,0);
  return 0xfffffffe;
}

