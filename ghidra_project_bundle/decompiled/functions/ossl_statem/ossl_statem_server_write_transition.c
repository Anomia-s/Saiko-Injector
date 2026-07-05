/**
 * Function: ossl_statem_server_write_transition
 * Address:  140bbc8f0
 * Signature: undefined ossl_statem_server_write_transition(void)
 * Body size: 754 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server_write_transition(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if (((uVar5 == 0) && (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar3 = ossl_statem_server13_write_transition(param_1);
    return uVar3;
  }
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
  case 0x17:
    break;
  case 1:
    if (*(int *)(param_1 + 0xb0) == 0x15) {
      *(undefined8 *)(param_1 + 0xac) = 0x15;
      return 1;
    }
    uVar3 = tls_setup_handshake(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    break;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x26f,"ossl_statem_server_write_transition");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  case 0x15:
    goto switchD_140bbc95d_caseD_15;
  case 0x16:
    if (((uVar5 != 0) && (*(int *)(*(longlong *)(param_1 + 0x4f0) + 0x108) == 0)) &&
       (uVar4 = FUN_140b69530(param_1), (uVar4 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0x17;
      return 1;
    }
    if (((*(int *)(param_1 + 0xb98) != 0) || (*(longlong *)(param_1 + 0x260) == 0)) ||
       (*(longlong *)(param_1 + 0x2e8) == 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0x18;
      return 1;
    }
    goto switchD_140bbc95d_caseD_15;
  case 0x18:
    if (*(int *)(param_1 + 0x508) != 0) {
      uVar1 = 0x25;
      if (*(int *)(param_1 + 0xa58) == 0) {
        uVar1 = 0x27;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar1;
      return 1;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x20) & 0x54) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x19;
      return 1;
    }
    iVar2 = FUN_140bc1050(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x1b;
      return 1;
    }
    iVar2 = FUN_140bbc430();
    *(uint *)(param_1 + 0xac) = 0x1d - (uint)(iVar2 != 0);
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0xa34) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x26;
      return 1;
    }
  case 0x26:
    iVar2 = FUN_140bc1050(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x1b;
      return 1;
    }
switchD_140bbc95d_caseD_1b:
    iVar2 = FUN_140bbc430(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x1c;
      return 1;
    }
switchD_140bbc95d_caseD_1c:
    *(undefined4 *)(param_1 + 0xac) = 0x1d;
    return 1;
  case 0x1b:
    goto switchD_140bbc95d_caseD_1b;
  case 0x1c:
    goto switchD_140bbc95d_caseD_1c;
  case 0x1d:
    uVar3 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    break;
  case 0x24:
    uVar3 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    if (*(int *)(param_1 + 0x508) == 0) {
      uVar1 = 0x25;
      if (*(int *)(param_1 + 0xa58) == 0) {
        uVar1 = 0x27;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar1;
      return 1;
    }
switchD_140bbc95d_caseD_15:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0x25:
    *(undefined4 *)(param_1 + 0xac) = 0x27;
    return 1;
  case 0x27:
    *(undefined4 *)(param_1 + 0xac) = 0x28;
    return 1;
  case 0x28:
    if (*(int *)(param_1 + 0x508) == 0) goto switchD_140bbc95d_caseD_15;
  }
  return 2;
}

