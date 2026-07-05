/**
 * Function: ossl_statem_client_write_transition
 * Address:  140c355d0
 * Signature: undefined ossl_statem_client_write_transition(void)
 * Body size: 718 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_write_transition(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if (((uVar4 == 0) && (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar3 = ossl_statem_client13_write_transition(param_1);
    return uVar3;
  }
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 1:
    if (*(int *)(param_1 + 0xb98) == 0) {
      return 2;
    }
  case 0:
  case 2:
    *(undefined4 *)(param_1 + 0xac) = 0xd;
    return 1;
  case 3:
    if (((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) == 0) ||
       (uVar1 = 0x12, *(int *)(param_1 + 0xf0) == 7)) {
      uVar1 = 0xd;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    return 1;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x22e,"ossl_statem_client_write_transition");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    break;
  case 9:
    uVar3 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    uVar1 = 0xe;
    if (*(int *)(param_1 + 0x340) == 0) {
      uVar1 = 0x10;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    return 1;
  case 0xc:
    if (*(int *)(param_1 + 0x508) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xac) = 0x12;
    return 1;
  case 0xd:
    if ((*(int *)(param_1 + 0xf0) == 2) && ((*(uint *)(param_1 + 0x160) & 0x2000) == 0)) {
      *(uint *)(param_1 + 0xac) = ~(*(uint *)(param_1 + 0x9a8) >> 0xf) & 0x20 | 0x12;
      return 1;
    }
  case 0x32:
    uVar3 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    return 2;
  case 0xe:
    *(undefined4 *)(param_1 + 0xac) = 0x10;
    return 1;
  case 0x10:
    *(uint *)(param_1 + 0xac) = (*(int *)(param_1 + 0x340) != 1) + 0x11;
    if ((*(byte *)(param_1 + 0x160) & 0x10) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xac) = 0x12;
    return 1;
  case 0x11:
    *(undefined4 *)(param_1 + 0xac) = 0x12;
    return 1;
  case 0x12:
    if (*(int *)(param_1 + 0x8c8) == 1) {
      *(undefined4 *)(param_1 + 0xac) = 0xd;
      return 1;
    }
    if (*(int *)(param_1 + 0xf0) == 2) {
      *(undefined4 *)(param_1 + 0xac) = 0x32;
      return 1;
    }
    if ((uVar4 == 0) && (*(int *)(param_1 + 0x4b4) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0x13;
      return 1;
    }
  case 0x13:
    *(undefined4 *)(param_1 + 0xac) = 0x14;
    return 1;
  case 0x14:
    if (*(int *)(param_1 + 0x508) == 0) {
      return 2;
    }
LAB_140c357ee:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0x2d:
    iVar2 = FUN_140bee3c0(param_1,1);
    if (iVar2 == 0) goto LAB_140c357ee;
    iVar2 = tls_setup_handshake(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0xd;
      return 1;
    }
  }
  return 0;
}

