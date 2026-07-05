/**
 * Function: pkcs12_item_decrypt_d2i_ex
 * Address:  140ce0d20
 * Signature: undefined pkcs12_item_decrypt_d2i_ex(void)
 * Body size: 280 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pkcs12_item_decrypt_d2i_ex
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_18[0] = 0;
  lVar2 = maybe_wrong_password
                    (param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_10,
                     local_18,0,param_7,param_8);
  uVar1 = local_10;
  if (lVar2 == 0) {
    return 0;
  }
  param_5 = (undefined4 *)local_10;
  lVar2 = FUN_140be0d50(0,&param_5,local_18[0],param_2);
  if (param_6 != 0) {
    FUN_14046e980(uVar1,(longlong)local_18[0]);
  }
  if (lVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_decr.c",0x9f,"PKCS12_item_decrypt_d2i_ex");
    FUN_140b91cc0(0x23,0x65,0);
  }
  FUN_140b8d990(uVar1,"crypto\\pkcs12\\p12_decr.c",0xa0);
  return lVar2;
}

