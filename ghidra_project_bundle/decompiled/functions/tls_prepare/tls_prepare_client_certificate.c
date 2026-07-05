/**
 * Function: tls_prepare_client_certificate
 * Address:  140c38640
 * Signature: undefined tls_prepare_client_certificate(void)
 * Body size: 727 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls_prepare_client_certificate
                    (longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_res8;
  longlong local_res18 [2];
  
  iVar4 = 0;
  local_res18[0] = 0;
  local_res8 = 0;
  if (param_2 == 4) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x878) + 0x60);
    if (pcVar1 != (code *)0x0) {
      iVar3 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x878) + 0x68),param_3,
                        param_4,0x140c3864d);
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x68) = 4;
        return 4;
      }
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xe8a,"tls_prepare_client_certificate");
        FUN_140ba3290(param_1,0x50,0xea,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    iVar3 = FUN_140c3c700(param_1);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0xba0) != 4) {
        return 2;
      }
      return 1;
    }
  }
  else if (param_2 != 5) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xecc,"tls_prepare_client_certificate");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x208) == 0) {
LAB_140c38741:
    pcVar1 = *(code **)(lVar2 + 200);
    if (pcVar1 != (code *)0x0) {
      iVar4 = (*pcVar1)(*(undefined8 *)(param_1 + 0x40),local_res18,&local_res8);
    }
  }
  else {
    iVar4 = FUN_140bc40e0(param_1,local_res18,&local_res8);
    if (iVar4 == 0) goto LAB_140c38741;
  }
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x68) = 4;
    return 5;
  }
  *(undefined4 *)(param_1 + 0x68) = 1;
  if (iVar4 == 1) {
    if ((local_res8 != 0) && (local_res18[0] != 0)) {
      iVar3 = FUN_140b79720(param_1);
      if (iVar3 != 0) {
        iVar3 = FUN_140b79690(param_1,local_res8);
        if (iVar3 != 0) goto LAB_140c387c0;
      }
      iVar4 = 0;
      goto LAB_140c387c0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xeac,"tls_prepare_client_certificate");
    FUN_140b91cc0(0x14,0x6a,0);
    FUN_140b763d0(local_res18[0]);
    FUN_140b7efe0(local_res8);
  }
  else {
LAB_140c387c0:
    FUN_140b763d0(local_res18[0]);
    FUN_140b7efe0(local_res8);
    if (iVar4 != 0) {
      iVar4 = FUN_140c3c700(param_1);
      if (iVar4 != 0) goto LAB_140c38887;
    }
  }
  if (*(int *)(param_1 + 0x48) == 0x300) {
    *(undefined4 *)(param_1 + 0x340) = 0;
    FUN_140bf0b00(param_1,1,0x29);
    return 2;
  }
  *(undefined4 *)(param_1 + 0x340) = 2;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  uVar5 = ssl3_digest_cached_records(param_1,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
LAB_140c38887:
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
       (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)) ||
     ((*(ulonglong *)(param_1 + 0x9a8) & 0x100000000) != 0)) {
    *(undefined4 *)(param_1 + 0xb34) = 0;
  }
  return (ulonglong)((*(int *)(param_1 + 0xba0) != 4) + 1);
}

