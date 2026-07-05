/**
 * Function: ml_kem_keys_cannot_be_mutated
 * Address:  140d35c50
 * Signature: undefined ml_kem_keys_cannot_be_mutated(void)
 * Body size: 269 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ml_kem_keys_cannot_be_mutated(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  local_res8 = 0;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    lVar2 = FUN_140b93540(param_2,"encoded-pub-key");
    if ((lVar2 != 0) &&
       ((iVar1 = FUN_140b95610(lVar2,local_res10,&local_res8), iVar1 != 1 ||
        (local_res8 != *(longlong *)(*param_1 + 0x18))))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x294,"ml_kem_set_params");
      FUN_140b91cc0(0x39,0x9e,0);
      return 0;
    }
    if (local_res8 != 0) {
      if (param_1[8] == 0) {
        uVar3 = FUN_140da2790(local_res10[0],local_res8,param_1);
        return uVar3;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\ml_kem_kmgmt.c",0x29d,"ml_kem_set_params");
      FUN_140b91cc0(0x39,0xb2,"ML-KEM keys cannot be mutated");
      return 0;
    }
  }
  return 1;
}

