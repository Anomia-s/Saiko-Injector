/**
 * Function: tls_construct_certificate_request
 * Address:  140bbfbf0
 * Signature: undefined tls_construct_certificate_request(void)
 * Body size: 649 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_certificate_request(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x140bbfc05;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0xba0) == 3) {
      FUN_140b8d990(*(undefined8 *)(param_1 + 0xba8),"ssl\\statem\\statem_srvr.c",0xb24);
      *(undefined8 *)(param_1 + 0xbb0) = 0x20;
      lVar2 = FUN_140b8d8d0(0x20,"ssl\\statem\\statem_srvr.c",0xb26);
      *(longlong *)(param_1 + 0xba8) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 0xbb0) = 0;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0xb28;
LAB_140bbfe3e:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",uVar3,"tls_construct_certificate_request");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        return 0;
      }
      iVar1 = FUN_140b82f80(**(undefined8 **)(param_1 + 8),lVar2,*(undefined8 *)(param_1 + 0xbb0),0)
      ;
      if ((iVar1 < 1) ||
         (iVar1 = FUN_140c22660(param_2,*(undefined8 *)(param_1 + 0xba8),
                                *(undefined8 *)(param_1 + 0xbb0),1), iVar1 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0xb2f;
        goto LAB_140bbfe3e;
      }
      iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_140c22430(param_2,0,1);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0xb39;
        goto LAB_140bbfe3e;
      }
    }
    iVar1 = FUN_140c32590(param_1,param_2,0x4000,0,0,uVar3);
  }
  else {
    iVar1 = FUN_140c22090(param_2,1);
    if (((iVar1 == 0) || (iVar1 = FUN_140bee130(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = FUN_140c21e20(param_2), iVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0xb4a;
      goto LAB_140bbfe3e;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) != 0) {
      uVar3 = FUN_140bb25a0(param_1,1,&local_res8);
      iVar1 = FUN_140c22090(param_2,2);
      if (((iVar1 == 0) || (iVar1 = FUN_140c21e00(param_2,1), iVar1 == 0)) ||
         ((iVar1 = FUN_140bb2120(param_1,param_2,local_res8,uVar3), iVar1 == 0 ||
          (iVar1 = FUN_140c21e20(param_2), iVar1 == 0)))) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar3 = 0xb56;
        goto LAB_140bbfe3e;
      }
    }
    uVar3 = FUN_140bb7280(param_1);
    iVar1 = FUN_140bb72e0(param_1,uVar3,param_2);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 3000) = *(int *)(param_1 + 3000) + 1;
  *(undefined4 *)(param_1 + 0x398) = 1;
  return 1;
}

