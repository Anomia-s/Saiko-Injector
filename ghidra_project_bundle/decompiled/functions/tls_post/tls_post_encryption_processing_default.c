/**
 * Function: tls_post_encryption_processing_default
 * Address:  140c42330
 * Signature: undefined tls_post_encryption_processing_default(void)
 * Body size: 558 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_post_encryption_processing_default
          (longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4,
          undefined4 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined7 uStackX_9;
  ulonglong local_28;
  longlong local_20;
  
  local_20 = 0x140c4234e;
  lVar5 = 5;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar5 = 0xd;
  }
  iVar2 = FUN_140c22730(param_4,&local_28);
  if ((((iVar2 == 0) || (uVar1 = *(ulonglong *)(param_5 + 2), (local_28 - param_2) + 0x50 < uVar1))
      || (uVar1 < local_28)) ||
     ((local_28 < uVar1 && (iVar2 = FUN_140c221d0(param_4,uVar1 - local_28,0), iVar2 == 0)))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x6a8;
  }
  else {
    if ((*(int *)(param_1 + 0x10b0) != 0) && (param_2 != 0)) {
      iVar2 = FUN_140c221d0(param_4,param_2,&local_res8);
      if ((iVar2 == 0) ||
         (iVar2 = (**(code **)(*(longlong *)(param_1 + 0x1148) + 0x10))
                            (param_1,param_5,CONCAT71(uStackX_9,local_res8),1), iVar2 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar4 = 0x6b0;
        goto LAB_140c4251a;
      }
      *(longlong *)(param_5 + 2) = *(longlong *)(param_5 + 2) + param_2;
    }
    iVar2 = FUN_140c22730(param_4,&local_20);
    if ((iVar2 == 0) || (iVar2 = FUN_140c21e20(param_4), iVar2 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x6b9;
    }
    else {
      if (*(longlong *)(param_1 + 0x1128) != 0) {
        lVar3 = FUN_140c22760(param_4);
        (**(code **)(param_1 + 0x1128))
                  (1,*param_5,0x100,(lVar3 - local_20) - lVar5,lVar5,
                   *(undefined8 *)(param_1 + 0x1118));
        if ((*(int *)(param_1 + 0x14) == 0x304) && (*(longlong *)(param_1 + 0x1020) != 0)) {
          local_res8 = *param_3;
          (**(code **)(param_1 + 0x1128))
                    (1,*param_5,0x101,&local_res8,1,*(undefined8 *)(param_1 + 0x1118));
        }
      }
      iVar2 = FUN_140c21e60(param_4);
      if (iVar2 != 0) {
        *(longlong *)(param_5 + 2) = *(longlong *)(param_5 + 2) + lVar5;
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar4 = 0x6cd;
    }
  }
LAB_140c4251a:
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\record\\methods\\tls_common.c",uVar4,"tls_post_encryption_processing_default");
  FUN_140c40330(param_1,0x50,0xc0103,0);
  return 0;
}

