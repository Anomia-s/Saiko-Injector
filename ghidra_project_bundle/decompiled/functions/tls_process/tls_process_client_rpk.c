/**
 * Function: tls_process_client_rpk
 * Address:  140bbdcd0
 * Signature: undefined tls_process_client_rpk(void)
 * Body size: 574 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_rpk(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res18 [2];
  
  uVar4 = 0;
  local_res18[0] = 0;
  iVar1 = FUN_140bb8db0(param_1,param_2,local_res18);
  if (iVar1 != 0) {
    if (local_res18[0] == 0) {
      if (((byte)*(undefined4 *)(param_1 + 0x948) & 3) == 3) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0xdde,"tls_process_client_rpk");
        FUN_140ba3290(param_1,0x74,199,0);
        goto LAB_140bbdef7;
      }
    }
    else {
      iVar1 = FUN_140ba9880(param_1);
      if (iVar1 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0xde4,"tls_process_client_rpk");
        uVar2 = FUN_140bb5a20(*(undefined4 *)(param_1 + 0x990));
        FUN_140ba3290(param_1,uVar2,0x86,0);
        goto LAB_140bbdef7;
      }
    }
    if (*(int *)(param_1 + 0xba0) == 4) {
      lVar3 = FUN_140ba55c0(*(undefined8 *)(param_1 + 0x8f8),0);
      if (lVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0xdf3,"tls_process_client_rpk");
        FUN_140ba3290(param_1,0x50,0xc0100,0);
        goto LAB_140bbdef7;
      }
      FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
      *(longlong *)(param_1 + 0x8f8) = lVar3;
    }
    FUN_140b763d0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0));
    *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) = 0;
    FUN_140b77c60(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8),FUN_140b763d0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8) = 0;
    FUN_140b7efe0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8));
    *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) = local_res18[0];
    local_res18[0] = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0) = *(undefined4 *)(param_1 + 0x990);
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      iVar1 = ssl3_digest_cached_records(param_1,1);
      if ((iVar1 == 0) ||
         (iVar1 = ssl_handshake_hash(param_1,param_1 + 0x880,0x40,param_1 + 0x8c0), iVar1 == 0))
      goto LAB_140bbdef7;
      *(undefined8 *)(param_1 + 0x1548) = 0;
    }
    uVar4 = 3;
  }
LAB_140bbdef7:
  FUN_140b7efe0(local_res18[0]);
  return uVar4;
}

