/**
 * Function: ossl_statem_server13_write_transition
 * Address:  140bc1090
 * Signature: undefined ossl_statem_server13_write_transition(void)
 * Body size: 788 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_server13_write_transition(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(param_1 + 0xac);
  switch(*puVar1) {
  case 1:
    if (*(int *)(param_1 + 0xb9c) != -1) {
      *puVar1 = 0x2e;
      return 1;
    }
    if (*(int *)(param_1 + 0xba0) != 3) {
      if (*(int *)(param_1 + 0xa5c) < 1) {
        return 2;
      }
      *puVar1 = 0x25;
      return 1;
    }
    *puVar1 = 0x1c;
    return 1;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x1e1,"ossl_statem_server13_write_transition");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  case 0x16:
    *puVar1 = 0x18;
    return 1;
  case 0x18:
    if (((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) != 0) && (*(int *)(param_1 + 0x8c8) != 2)) {
      *puVar1 = 0x27;
      return 1;
    }
    uVar4 = 0x29;
    if (*(int *)(param_1 + 0x8c8) == 1) {
      uVar4 = 0x32;
    }
    *puVar1 = uVar4;
    return 1;
  case 0x19:
  case 0x1a:
    *puVar1 = 0x2c;
    return 1;
  case 0x1c:
    if (*(int *)(param_1 + 0xba0) == 3) {
      *(undefined4 *)(param_1 + 0xba0) = 4;
      *puVar1 = 1;
      return 1;
    }
    *puVar1 = 0x19;
    return 1;
  case 0x24:
    break;
  case 0x25:
    if (((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) &&
       (0 < *(int *)(param_1 + 0xa5c))) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x508) != 0) ||
       (*(ulonglong *)(param_1 + 0x1540) <= *(ulonglong *)(param_1 + 0x1548))) {
      *(undefined4 *)(param_1 + 0xac) = 1;
    }
    return 1;
  case 0x27:
    uVar4 = 0x32;
    if (*(int *)(param_1 + 0x8c8) != 1) {
      uVar4 = 0x29;
    }
    *puVar1 = uVar4;
    return 1;
  case 0x28:
    *puVar1 = 0x32;
    uVar3 = FUN_140c21250();
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    return 1;
  case 0x29:
    if (*(int *)(param_1 + 0x508) != 0) {
      *puVar1 = 0x28;
      return 1;
    }
    iVar2 = FUN_140bbc430(param_1);
    uVar4 = 0x19;
    if (iVar2 != 0) {
      uVar4 = 0x1c;
    }
    *puVar1 = uVar4;
    return 1;
  case 0x2c:
    *puVar1 = 0x28;
    return 1;
  case 0x2e:
  case 0x30:
switchD_140bc10d5_caseD_2e:
    *puVar1 = 1;
    return 1;
  case 0x32:
    return 2;
  }
  uVar3 = FUN_140c21250();
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  if (*(int *)(param_1 + 0xba0) == 4) {
    *(undefined4 *)(param_1 + 0xba0) = 2;
  }
  else if (*(int *)(param_1 + 0xa58) == 0) goto switchD_140bc10d5_caseD_2e;
  uVar4 = 0x25;
  if (*(ulonglong *)(param_1 + 0x1540) <= *(ulonglong *)(param_1 + 0x1548)) {
    uVar4 = 1;
  }
  *puVar1 = uVar4;
  return 1;
}

