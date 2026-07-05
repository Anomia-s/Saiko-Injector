/**
 * Function: ossl_statem_client_read_transition
 * Address:  140c34fb0
 * Signature: undefined ossl_statem_client_read_transition(void)
 * Body size: 1387 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_statem_client_read_transition(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if (((uVar5 == 0) && (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0xac)) {
    case 1:
      if (param_2 == 4) {
        *(undefined4 *)(param_1 + 0xac) = 10;
        return 1;
      }
      if (param_2 == 0x18) {
        if ((*(uint *)(param_1 + 0x160) & 0x2000) == 0) {
          *(undefined4 *)(param_1 + 0xac) = 0x31;
          return 1;
        }
      }
      else if ((param_2 == 0xd) && (*(int *)(param_1 + 0xba0) == 1)) {
        *(undefined4 *)(param_1 + 0xba0) = 4;
        iVar3 = tls13_restore_handshake_digest_for_pha(param_1);
        if (iVar3 != 0) goto LAB_140c351cd;
      }
      break;
    case 3:
      if (param_2 == 8) {
        *(undefined4 *)(param_1 + 0xac) = 0x2a;
        return 1;
      }
      break;
    case 4:
    case 5:
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0xac) = 0x2b;
        return 1;
      }
      break;
    case 8:
      goto joined_r0x000140c350e6;
    case 0xd:
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0xac) = 3;
        return 1;
      }
      break;
    case 0x2a:
      if (*(int *)(param_1 + 0x508) != 0) goto joined_r0x000140c3512f;
      if (param_2 == 0xd) {
LAB_140c351cd:
        *(undefined4 *)(param_1 + 0xac) = 8;
        return 1;
      }
joined_r0x000140c350e6:
      if (param_2 == 0xb) {
        *(undefined4 *)(param_1 + 0xac) = 4;
        return 1;
      }
      break;
    case 0x2b:
joined_r0x000140c3512f:
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0xac) = 0xc;
        return 1;
      }
    }
    goto switchD_140c35023_caseD_2;
  }
  puVar1 = (undefined4 *)(param_1 + 0xac);
  switch(*puVar1) {
  case 1:
    if (param_2 == 0) {
      *puVar1 = 0x2d;
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x508) != 0) {
      iVar3 = *(int *)(param_1 + 0xa58);
      goto joined_r0x000140c3544e;
    }
    if ((uVar5 != 0) && (param_2 == 3)) {
LAB_140c3527f:
      *puVar1 = 2;
      return 1;
    }
    if (((0x300 < *(int *)(param_1 + 0x48)) && (*(longlong *)(param_1 + 0xad8) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 800) != 0 && (param_2 == 0x101)))) {
      *(undefined4 *)(param_1 + 0x508) = 1;
      *puVar1 = 0xb;
      return 1;
    }
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x20);
    if ((uVar5 & 0x54) == 0) {
      if (param_2 == 0xb) {
        *puVar1 = 4;
        return 1;
      }
      break;
    }
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
    if ((uVar2 & 0x1a6) == 0) {
      if (((uVar2 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_140c3540b;
      if (param_2 == 0xd) {
        if (((*(int *)(param_1 + 0x48) < 0x301) || ((uVar5 & 4) == 0)) && ((uVar5 & 0x50) == 0)) {
          *puVar1 = 8;
          return 1;
        }
        break;
      }
      goto switchD_140c35218_caseD_8;
    }
    goto joined_r0x000140c35405;
  case 4:
  case 5:
    if ((*(int *)(param_1 + 0xa34) != 0) && (param_2 == 0x16)) {
      *puVar1 = 6;
      return 1;
    }
  case 6:
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
    if ((uVar5 & 0x1a6) == 0) {
      if (((uVar5 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_140c3540b;
switchD_140c35218_caseD_7:
      if (param_2 == 0xd) {
        if (((*(int *)(param_1 + 0x48) < 0x301) ||
            ((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x20) & 4) == 0)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x20) & 0x50) == 0)) {
          *(undefined4 *)(param_1 + 0xac) = 8;
          return 1;
        }
      }
      else {
switchD_140c35218_caseD_8:
        if (param_2 == 0xe) {
          *(undefined4 *)(param_1 + 0xac) = 9;
          return 1;
        }
      }
    }
    else {
joined_r0x000140c35405:
      if (param_2 == 0xc) {
LAB_140c3540b:
        *puVar1 = 7;
        return 1;
      }
    }
    break;
  case 7:
    goto switchD_140c35218_caseD_7;
  case 8:
    goto switchD_140c35218_caseD_8;
  case 10:
    if (param_2 != 0x101) break;
    goto LAB_140c35488;
  case 0xb:
    if (param_2 == 0x14) {
      *puVar1 = 0xc;
      return 1;
    }
    break;
  case 0xd:
    if (param_2 == 2) {
LAB_140c3523b:
      *puVar1 = 3;
      return 1;
    }
    if ((uVar5 != 0) && (param_2 == 3)) goto LAB_140c3527f;
    break;
  case 0x14:
    iVar3 = *(int *)(param_1 + 0xa58);
joined_r0x000140c3544e:
    if (iVar3 == 0) {
      if (param_2 == 0x101) {
LAB_140c35488:
        *puVar1 = 0xb;
        return 1;
      }
    }
    else if (param_2 == 4) {
      *puVar1 = 10;
      return 1;
    }
    break;
  case 0x32:
    if (param_2 == 2) goto LAB_140c3523b;
  }
switchD_140c35023_caseD_2:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) &&
     (param_2 == 0x101)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x68) = 3;
    uVar4 = FUN_140b6abb0(param_1);
    FUN_140b73030(uVar4,0xf);
    FUN_140b73010(uVar4,9);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_clnt.c",0x1a9,"ossl_statem_client_read_transition");
  FUN_140ba3290(param_1,10,0xf4,0);
  return 0;
}

