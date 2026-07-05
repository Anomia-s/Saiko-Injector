/**
 * Function: tls_client_key_exchange_post_work
 * Address:  140c35a70
 * Signature: undefined tls_client_key_exchange_post_work(void)
 * Body size: 814 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_client_key_exchange_post_work(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  iVar2 = *(int *)(param_1 + 0xac);
  uVar5 = 0;
  if (iVar2 == 0xd) {
    if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1530) != 0)) {
      if (((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) == 0) &&
         (iVar2 = client_early_traffic_secret(param_1,0x52), iVar2 == 0)) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_140ba3570();
      if (iVar2 == 0) {
        return 4;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x9c8) = 1;
    return 2;
  }
  if (iVar2 == 0x10) {
    lVar4 = *(longlong *)(param_1 + 0x3b0);
    uVar3 = *(undefined8 *)(param_1 + 0x3b8);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
    if ((uVar1 & 0x20) == 0) {
      if ((lVar4 == 0) && ((uVar1 & 8) == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xe32,"tls_client_key_exchange_post_work");
        FUN_140ba3290(param_1,0x50,0x80106,0);
      }
      else {
        iVar2 = FUN_140bed4e0(param_1,lVar4,uVar3,1);
        if (iVar2 != 0) {
          return 2;
        }
        lVar4 = 0;
        uVar3 = 0;
      }
    }
    else {
      iVar2 = srp_generate_client_master_secret(param_1);
      if (iVar2 != 0) {
        return 2;
      }
    }
    FUN_140b8db20(lVar4,uVar3,"ssl\\statem\\statem_clnt.c",0xe60);
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    return 0;
  }
  if (iVar2 == 0x12) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      return 2;
    }
    if (*(int *)(param_1 + 0x8c8) == 1) {
      return 2;
    }
    if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1530) != 0)) {
      iVar2 = client_early_traffic_secret(param_1,0x52);
      if (iVar2 == 0) {
        return 0;
      }
      return 2;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8) = *(undefined8 *)(param_1 + 0x300);
    if (*(undefined4 **)(param_1 + 0x390) != (undefined4 *)0x0) {
      uVar5 = **(undefined4 **)(param_1 + 0x390);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2f0) = uVar5;
    iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0xd8))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x12);
  }
  else if (iVar2 == 0x14) {
    iVar2 = FUN_140ba3570();
    if (iVar2 != 1) {
      return 5;
    }
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) {
      return 2;
    }
    iVar2 = **(int **)(param_1 + 0x18);
    if (iVar2 < 0x304) {
      return 2;
    }
    if (iVar2 == 0x10000) {
      return 2;
    }
    iVar2 = tls13_save_handshake_digest_for_pha(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xba0) == 4) {
      return 2;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x112)
    ;
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x160) & 0x2000) == 0) {
      return 2;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x111)
    ;
  }
  else {
    if (iVar2 != 0x2f) {
      return 2;
    }
    iVar2 = FUN_140ba3570();
    if (iVar2 != 1) {
      return 4;
    }
    iVar2 = client_traffic_secret_n(param_1,1);
  }
  if (iVar2 != 0) {
    return 2;
  }
  return 0;
}

