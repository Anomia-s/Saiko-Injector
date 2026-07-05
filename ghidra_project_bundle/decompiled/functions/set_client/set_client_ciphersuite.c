/**
 * Function: set_client_ciphersuite
 * Address:  140c3a7d0
 * Signature: undefined set_client_ciphersuite(void)
 * Body size: 794 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 set_client_ciphersuite(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar3 = FUN_140ba7030(param_1,param_2,0);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x57a,"set_client_ciphersuite");
    FUN_140ba3290(param_1,0x2f,0xf8,0);
    return 0;
  }
  iVar2 = FUN_140bb2d80(param_1,lVar3,0x10003,1);
  if (iVar2 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x582,"set_client_ciphersuite");
    FUN_140ba3290(param_1,0x2f,0x105,0);
    return 0;
  }
  uVar4 = FUN_140b6e7c0(param_1);
  iVar2 = FUN_140b78040(uVar4,lVar3);
  if (iVar2 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x58a,"set_client_ciphersuite");
    FUN_140ba3290(param_1,0x2f,0x105,0);
    return 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) &&
     ((*(longlong *)(param_1 + 0x300) != 0 &&
      (*(int *)(*(longlong *)(param_1 + 0x300) + 0x18) != *(int *)(lVar3 + 0x18))))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x591,"set_client_ciphersuite");
    FUN_140ba3290(param_1,0x2f,0x105,0);
    return 0;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8);
  if (lVar6 != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x300) = *(undefined4 *)(lVar6 + 0x18);
  }
  if ((*(int *)(param_1 + 0x508) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x8f8) + 0x300) != *(int *)(lVar3 + 0x18))) {
    if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
       ((iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304 || (iVar2 == 0x10000)))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x5b4,"set_client_ciphersuite");
      FUN_140ba3290(param_1,0x2f,0xc5,0);
      return 0;
    }
    lVar5 = FUN_140ba75f0(uVar1,*(undefined4 *)(lVar3 + 0x40));
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8);
    if (lVar6 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x5a1,"set_client_ciphersuite");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    if ((lVar5 == 0) || (lVar6 = FUN_140ba75f0(uVar1,*(undefined4 *)(lVar6 + 0x40)), lVar5 != lVar6)
       ) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x5ab,"set_client_ciphersuite");
      FUN_140ba3290(param_1,0x2f,0xda,0);
      return 0;
    }
  }
  *(longlong *)(param_1 + 0x300) = lVar3;
  return 1;
}

