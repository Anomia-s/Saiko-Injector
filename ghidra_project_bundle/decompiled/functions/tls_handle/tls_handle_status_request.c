/**
 * Function: tls_handle_status_request
 * Address:  140bbe5c0
 * Signature: undefined tls_handle_status_request(void)
 * Body size: 1041 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_handle_status_request(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_res10 [2];
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  if (param_2 == 4) {
    iVar3 = tls_early_post_process_client_hello();
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 < 0) {
      return 4;
    }
  }
  else if (param_2 != 5) {
    if (param_2 != 6) {
      return 1;
    }
    goto LAB_140bbe8d8;
  }
  if (*(int *)(param_1 + 0x508) == 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x878) + 0x60);
    if (pcVar1 != (code *)0x0) {
      iVar3 = (*pcVar1)(uVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x878) + 0x68));
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x90c,"tls_post_process_client_hello");
        FUN_140ba3290(param_1,0x50,0x179,0);
        return 0;
      }
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x68) = 4;
        return 5;
      }
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
LAB_140bbe6cc:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
        (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
      uVar2 = *(undefined8 *)(param_1 + 0x550);
      uVar5 = FUN_140b6b790(param_1);
      lVar6 = FUN_140bee480(param_1,uVar2,uVar5);
      if (lVar6 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x91e,"tls_post_process_client_hello");
        FUN_140ba3290(param_1,0x28,0xc1,0);
        return 0;
      }
      *(longlong *)(param_1 + 0x300) = lVar6;
    }
    if (*(int *)(param_1 + 0x508) == 0) {
      iVar3 = FUN_140bb1c30(param_1,1);
      if (iVar3 == 0) {
        return 0;
      }
      if (*(code **)(param_1 + 0xc40) != (code *)0x0) {
        uVar4 = (**(code **)(param_1 + 0xc40))
                          (uVar7,(*(byte *)(*(longlong *)(param_1 + 0x300) + 0x1c) & 6) != 0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b0) = uVar4;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x8f8) + 0x2b0) != 0) {
        *(undefined4 *)(param_1 + 0xa58) = 0;
      }
    }
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000))
    goto LAB_140bbe6cc;
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa34) = 0;
  if (((*(int *)(param_1 + 0xa20) != -1) && (lVar6 != 0)) &&
     ((*(longlong *)(lVar6 + 0x268) != 0 && (*(longlong *)(param_1 + 0x3d8) != 0)))) {
    **(longlong **)(param_1 + 0x878) = *(longlong *)(param_1 + 0x3d8);
    iVar3 = (**(code **)(lVar6 + 0x268))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar6 + 0x270));
    if (iVar3 == 0) {
      if (*(longlong *)(param_1 + 0xa48) != 0) {
        *(undefined4 *)(param_1 + 0xa34) = 1;
      }
    }
    else {
      if ((iVar3 == 2) || (iVar3 != 3)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x89a,"tls_handle_status_request");
        FUN_140ba3290(param_1,0x50,0xe2,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa34) = 0;
    }
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
       (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) &&
     (iVar3 = FUN_140bc0d70(param_1), iVar3 == 0)) {
    return 0;
  }
LAB_140bbe8d8:
  local_res10[0] = 0x70;
  if (((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x1c) & 0x20) != 0) &&
     (*(longlong *)(param_1 + 0xbd0) != 0)) {
    if (*(longlong *)(param_1 + 0xbe8) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x558,"ssl_check_srp_ext_ClientHello");
      FUN_140ba3290(param_1,0x73,0xdf,0);
      return 0;
    }
    iVar3 = FUN_140bc4ed0(param_1,local_res10);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      return 6;
    }
    if (iVar3 == 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x562,"ssl_check_srp_ext_ClientHello");
      uVar7 = 0xe2;
      if (local_res10[0] == 0x73) {
        uVar7 = 0xdf;
      }
      FUN_140ba3290(param_1,local_res10[0],uVar7,0);
      return 0;
    }
  }
  return 1;
}

