/**
 * Function: tls_construct_key_update
 * Address:  140bb8360
 * Signature: undefined tls_construct_key_update(void)
 * Body size: 126 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_key_update(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140c22430(param_2,(longlong)*(int *)(param_1 + 0xb9c),1);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x2b8,"tls_construct_key_update");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb9c) = 0xffffffff;
  return 1;
}

