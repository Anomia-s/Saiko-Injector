/**
 * Function: evp_keymgmt_util_assign_pkey
 * Address:  140c070e0
 * Signature: undefined evp_keymgmt_util_assign_pkey(void)
 * Body size: 195 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong evp_keymgmt_util_assign_pkey
                   (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = s_key_generation_s(param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      iVar1 = FUN_140b7e3a0(param_1,param_2);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x68) = lVar2;
        FUN_140c06b80(param_1);
        return lVar2;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
    FUN_140b91cc0(6,0xc0103,0);
  }
  FUN_140bfe070(param_2,lVar2);
  return 0;
}

