/**
 * Function: ossl_statem_server_pre_work
 * Address:  140bbcc50
 * Signature: undefined ossl_statem_server_pre_work(void)
 * Body size: 644 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_pre_work(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  default:
    goto switchD_140bbcc8b_caseD_2;
  case 0x15:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
    FUN_140bec5c0(param_1);
    return 2;
  case 0x17:
    *(undefined4 *)(param_1 + 0x84) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
    FUN_140bec5c0(param_1);
    break;
  case 0x18:
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
    *(undefined4 *)(param_1 + 200) = 1;
    return 2;
  case 0x25:
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
      iVar2 = **(int **)(param_1 + 0x18);
      if (iVar2 < 0x304) {
        return 2;
      }
      if (iVar2 == 0x10000) {
        return 2;
      }
      if (*(longlong *)(param_1 + 0x1548) != 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0xa5c) != 0) {
        return 2;
      }
      uVar3 = tls_finish_handshake(param_1,param_2,0,0);
      return uVar3;
    }
    break;
  case 0x27:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8);
    if (lVar1 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8) = *(undefined8 *)(param_1 + 0x300);
    }
    else if (lVar1 != *(longlong *)(param_1 + 0x300)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x334,"ossl_statem_server_pre_work");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0xd8))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return 2;
    }
    break;
  case 0x32:
    if ((*(int *)(param_1 + 0xf0) != 9) && ((*(uint *)(param_1 + 0x160) & 0x800) == 0)) {
      return 2;
    }
    if ((((*(uint *)(param_1 + 0x160) & 0x2000) != 0) && (*(int *)(param_1 + 0xb10) == 2)) &&
       (*(int *)(param_1 + 0xf0) != 0xc)) {
      *(undefined4 *)(param_1 + 0xf0) = 0xc;
      iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x10))
                        (param_1,0xa1);
      if (iVar2 != 0) {
        return 3;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x354,"ossl_statem_server_pre_work");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      return 0;
    }
  case 1:
    uVar3 = tls_finish_handshake(param_1,param_2,1);
    return uVar3;
  }
  *(undefined4 *)(param_1 + 200) = 0;
switchD_140bbcc8b_caseD_2:
  return 2;
}

