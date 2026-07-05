/**
 * Function: ossl_store_info_set0_name_description
 * Address:  140c26380
 * Signature: undefined ossl_store_info_set0_name_description(void)
 * Body size: 86 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_store_info_set0_name_description
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x140c2638a;
  if (*param_1 != 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_lib.c",0x280,"OSSL_STORE_INFO_set0_NAME_description",param_4,
               uVar1);
    FUN_140b91cc0(0x2c,0x80106,0);
    return 0;
  }
  *(undefined8 *)(param_1 + 4) = param_2;
  return 1;
}

