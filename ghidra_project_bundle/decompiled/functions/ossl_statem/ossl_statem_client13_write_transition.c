/**
 * Function: ossl_statem_client13_write_transition
 * Address:  140c3a520
 * Signature: undefined ossl_statem_client13_write_transition(void)
 * Body size: 599 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client13_write_transition(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 1:
    if (*(int *)(param_1 + 0xb9c) != -1) {
      *(undefined4 *)(param_1 + 0xac) = 0x2f;
      return 1;
    }
    return 2;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar2 = 0x1c5;
    break;
  case 8:
    if (*(int *)(param_1 + 0xba0) == 4) {
      if ((*(char *)(param_1 + 0xb48) != '\0') || (uVar1 = 0xf, *(int *)(param_1 + 0xb34) == 0)) {
        uVar1 = 0xe;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar1;
      return 1;
    }
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) goto switchD_140c3a55e_caseD_a;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar2 = 0x1d6;
    break;
  case 10:
  case 0x14:
  case 0x2f:
  case 0x31:
switchD_140c3a55e_caseD_a:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0xc:
    if ((*(int *)(param_1 + 0xf0) == 3) || (*(int *)(param_1 + 0xf0) == 7)) {
      *(undefined4 *)(param_1 + 0xac) = 0x33;
    }
    else if (((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) == 0) || (*(int *)(param_1 + 0x8c8) != 0)) {
      if (*(int *)(param_1 + 0x340) == 0) {
        *(undefined4 *)(param_1 + 0xac) = 0x14;
      }
      else if ((*(char *)(param_1 + 0xb48) == '\0') && (*(int *)(param_1 + 0xb34) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0xf;
      }
      else {
        *(undefined4 *)(param_1 + 0xac) = 0xe;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xac) = 0x12;
    }
    uVar2 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    return 1;
  case 0xe:
  case 0xf:
    uVar1 = 0x14;
    if (*(int *)(param_1 + 0x340) == 1) {
      uVar1 = 0x11;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    return 1;
  case 0x11:
    *(undefined4 *)(param_1 + 0xac) = 0x14;
    return 1;
  case 0x33:
    if ((*(int *)(param_1 + 0xb10) == 2) && ((*(uint *)(param_1 + 0x160) & 0x2000) == 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0x34;
      return 1;
    }
  case 0x12:
  case 0x34:
    if (*(int *)(param_1 + 0x340) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x14;
      return 1;
    }
    if ((*(char *)(param_1 + 0xb48) == '\0') && (*(int *)(param_1 + 0xb34) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0xf;
      return 1;
    }
    *(undefined4 *)(param_1 + 0xac) = 0xe;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_clnt.c",uVar2,"ossl_statem_client13_write_transition");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

