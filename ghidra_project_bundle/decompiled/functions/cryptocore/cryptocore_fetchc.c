/**
 * Function: cryptocore_fetchc
 * Address:  140c60d60
 * Signature: undefined cryptocore_fetchc(void)
 * Body size: 127 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
cryptocore_fetchc(undefined8 param_1,int param_2,int param_3,longlong param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\core_fetch.c",0x5c,"ossl_method_construct_postcondition");
    FUN_140b91cc0(0xf,0xc0102,0);
    return 0;
  }
  uVar2 = 1;
  *param_5 = 1;
  if ((param_3 == 0) || (*(int *)(param_4 + 0x14) != 0)) {
    iVar1 = FUN_140bd3bd0(param_1,(longlong)param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

