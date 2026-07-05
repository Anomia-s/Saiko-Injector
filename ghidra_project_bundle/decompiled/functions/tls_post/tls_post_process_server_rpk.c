/**
 * Function: tls_post_process_server_rpk
 * Address:  140c3aaf0
 * Signature: undefined tls_post_process_server_rpk(void)
 * Body size: 663 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte tls_post_process_server_rpk(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x790,"tls_post_process_server_rpk");
    FUN_140ba3290(param_1,0x2f,0x15e,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 8) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  FUN_140b932f0();
  iVar1 = FUN_140ba9880(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8));
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x948) != 0)) {
    FUN_140b93470();
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x79c,"tls_post_process_server_rpk");
    uVar2 = FUN_140bb5a20(*(undefined4 *)(param_1 + 0x990));
    FUN_140ba3290(param_1,uVar2,0x86,0);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if ((0 < iVar1) && (*(int *)(param_1 + 0x68) == 8)) {
    return 4;
  }
  lVar3 = FUN_140ba9e60(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8),local_res8,
                        *(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x7a6,"tls_post_process_server_rpk");
    FUN_140ba3290(param_1,0x2f,0xf7,0);
    return 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
       (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) &&
     ((*(uint *)(lVar3 + 4) & *(uint *)(*(longlong *)(param_1 + 0x300) + 0x20)) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x7b1,"tls_post_process_server_rpk");
    FUN_140ba3290(param_1,0x2f,0x15f,0);
    return 0;
  }
  FUN_140b763d0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0));
  *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) = 0;
  FUN_140b77c60(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8),FUN_140b763d0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0) = *(undefined4 *)(param_1 + 0x990);
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = ssl_handshake_hash(param_1,param_1 + 0x880,0x40,param_1 + 0x8c0);
    return -(iVar1 != 0) & 2;
  }
  return 2;
}

