/**
 * Function: tls_post_process_server_certificate
 * Address:  140c39a90
 * Signature: undefined tls_post_process_server_certificate(void)
 * Body size: 749 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls_post_process_server_certificate(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0xb4a) == '\x02') {
    uVar3 = tls_post_process_server_rpk();
    return uVar3;
  }
  if (*(int *)(param_1 + 0x68) == 8) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  FUN_140b932f0();
  iVar1 = FUN_140ba9860(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8));
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x948) != 0)) {
    FUN_140b93470();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x84c,"tls_post_process_server_certificate");
    uVar2 = FUN_140bb5a20(*(undefined4 *)(param_1 + 0x990));
    FUN_140ba3290(param_1,uVar2,0x86,0);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if ((0 < iVar1) && (*(int *)(param_1 + 0x68) == 8)) {
    return 4;
  }
  uVar4 = FUN_140b77990(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8),0);
  lVar5 = FUN_140b74cd0(uVar4);
  if (lVar5 == 0) {
LAB_140c39d38:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x85d,"tls_post_process_server_certificate");
    uVar4 = 0xef;
  }
  else {
    iVar1 = FUN_140b7f310(lVar5);
    if (iVar1 != 0) goto LAB_140c39d38;
    lVar5 = FUN_140ba9e60(lVar5,local_res8,*(undefined8 *)(param_1 + 8));
    if (lVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x863,"tls_post_process_server_certificate");
      uVar6 = 0x2f;
      uVar4 = 0xf7;
      goto LAB_140c39d60;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
         (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) &&
       ((*(uint *)(lVar5 + 4) & *(uint *)(*(longlong *)(param_1 + 0x300) + 0x20)) == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x86d,"tls_post_process_server_certificate");
      uVar6 = 0x2f;
      uVar4 = 0x17f;
      goto LAB_140c39d60;
    }
    iVar1 = FUN_140b9f2d0(uVar4);
    if (iVar1 != 0) {
      FUN_140b763d0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0));
      *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) = uVar4;
      *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0) = *(undefined4 *)(param_1 + 0x990);
      FUN_140b7efe0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8));
      *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) = 0;
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
          (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
        iVar1 = ssl_handshake_hash(param_1,param_1 + 0x880,0x40,param_1 + 0x8c0);
        return (ulonglong)(-(uint)(iVar1 != 0) & 2);
      }
      return 2;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x873,"tls_post_process_server_certificate");
    uVar4 = 0xc0103;
  }
  uVar6 = 0x50;
LAB_140c39d60:
  FUN_140ba3290(param_1,uVar6,uVar4,0);
  return 0;
}

