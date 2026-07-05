/**
 * Function: rsa_item_verify
 * Address:  140c91510
 * Signature: undefined rsa_item_verify(void)
 * Body size: 149 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
rsa_item_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140b964c0(*param_4);
  if (iVar1 != 0x390) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ameth.c",0x27f,"rsa_item_verify");
    FUN_140b91cc0(4,0x9b,0);
    return 0xffffffff;
  }
  iVar1 = rsa_pss_verify_param(param_1,0,param_4,param_6);
  uVar2 = 0xffffffff;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}

