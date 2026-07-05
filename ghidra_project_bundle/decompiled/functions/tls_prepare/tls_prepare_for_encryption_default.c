/**
 * Function: tls_prepare_for_encryption_default
 * Address:  140c42220
 * Signature: undefined tls_prepare_for_encryption_default(void)
 * Body size: 268 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_prepare_for_encryption_default
          (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  longlong local_18 [2];
  
  local_18[1] = 0x140c4223a;
  if (((*(int *)(param_1 + 0x10b0) == 0) && (param_2 != 0)) &&
     ((iVar1 = FUN_140c221d0(param_3,param_2,&local_res8), iVar1 == 0 ||
      (iVar1 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x10))(param_1,param_4,local_res8,1),
      iVar1 == 0)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x674;
  }
  else {
    iVar1 = FUN_140c222b0(param_3,0x50 - param_2,0);
    if ((iVar1 != 0) && (iVar1 = FUN_140c22730(param_3,local_18), iVar1 != 0)) {
      lVar2 = FUN_140c22760(param_3);
      *(longlong *)(param_4 + 8) = local_18[0];
      *(longlong *)(param_4 + 0x20) = lVar2 - local_18[0];
      *(longlong *)(param_4 + 0x28) = lVar2 - local_18[0];
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x686;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\record\\methods\\tls_common.c",uVar3,"tls_prepare_for_encryption_default");
  FUN_140c40330(param_1,0x50,0xc0103,0);
  return 0;
}

