/**
 * Function: ossl_statem_server_read_transition
 * Address:  140bbc4a0
 * Signature: undefined ossl_statem_server_read_transition(void)
 * Body size: 942 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ossl_statem_server_read_transition(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if (((uVar3 == 0) && (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0xac)) {
    case 1:
      if (*(int *)(param_1 + 0xf0) == 0xb) break;
      if ((*(int *)(param_1 + 0xba0) != 4) || (param_2 != 0xb)) {
        if ((param_2 == 0x18) && ((*(uint *)(param_1 + 0x160) & 0x2000) == 0)) {
          *(undefined4 *)(param_1 + 0xac) = 0x30;
          return 1;
        }
        break;
      }
      goto LAB_140bbc620;
    default:
      break;
    case 0x1e:
    case 0x1f:
      if ((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) != 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) != 0)) {
        if (param_2 == 0xf) {
          *(undefined4 *)(param_1 + 0xac) = 0x21;
          return 1;
        }
        break;
      }
      goto LAB_140bbc5ca;
    case 0x21:
      if (param_2 != 0x14) break;
      goto LAB_140bbc5f0;
    case 0x28:
    case 0x35:
      goto switchD_140bbc511_caseD_28;
    case 0x32:
      if (*(int *)(param_1 + 0x8c8) == 1) {
        if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0xac) = 0x16;
          return 1;
        }
        break;
      }
      if ((*(int *)(param_1 + 0xb10) == 2) && ((*(uint *)(param_1 + 0x160) & 0x2000) == 0)) {
        if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0xac) = 0x35;
          return 1;
        }
        break;
      }
switchD_140bbc511_caseD_28:
      if (*(int *)(param_1 + 0x398) == 0) {
LAB_140bbc5ca:
        if (param_2 == 0x14) {
LAB_140bbc5f0:
          *(undefined4 *)(param_1 + 0xac) = 0x24;
          return 1;
        }
      }
      else if (param_2 == 0xb) {
LAB_140bbc620:
        *(undefined4 *)(param_1 + 0xac) = 0x1e;
        return 1;
      }
    }
    goto switchD_140bbc511_caseD_2;
  }
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
  case 1:
  case 0x17:
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0xac) = 0x16;
      return 1;
    }
    break;
  case 0x1d:
    if (param_2 == 0x10) {
      if (*(int *)(param_1 + 0x398) == 0) {
LAB_140bbc732:
        *(undefined4 *)(param_1 + 0xac) = 0x20;
        return 1;
      }
      if (*(int *)(param_1 + 0x48) == 0x300) {
        if (((byte)*(undefined4 *)(param_1 + 0x948) & 3) == 3) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",0xe5,"ossl_statem_server_read_transition");
          FUN_140ba3290(param_1,0x28,199,0);
          return 0;
        }
        goto LAB_140bbc732;
      }
    }
    else if ((*(int *)(param_1 + 0x398) != 0) && (param_2 == 0xb)) {
      *(undefined4 *)(param_1 + 0xac) = 0x1e;
      return 1;
    }
    break;
  case 0x1e:
    if (param_2 == 0x10) goto LAB_140bbc732;
    break;
  case 0x20:
    if (((*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) == 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0) == 0)) ||
       (*(int *)(param_1 + 0xc4) != 0)) goto switchD_140bbc68e_caseD_21;
    if (param_2 == 0xf) {
      *(undefined4 *)(param_1 + 0xac) = 0x21;
      return 1;
    }
    break;
  case 0x21:
switchD_140bbc68e_caseD_21:
    goto joined_r0x000140bbc833;
  case 0x22:
joined_r0x000140bbc80b:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0xac) = 0x24;
      return 1;
    }
    break;
  case 0x23:
    if (*(int *)(param_1 + 0x4b4) == 0) goto joined_r0x000140bbc80b;
    if (param_2 == 0x43) {
      *(undefined4 *)(param_1 + 0xac) = 0x22;
      return 1;
    }
    break;
  case 0x28:
joined_r0x000140bbc833:
    if (param_2 == 0x101) {
      *(undefined4 *)(param_1 + 0xac) = 0x23;
      return 1;
    }
  }
  if ((uVar3 != 0) && (param_2 == 0x101)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x68) = 3;
    uVar2 = FUN_140b6abb0(param_1);
    FUN_140b73030(uVar2,0xf);
    FUN_140b73010(uVar2,9);
    return 0;
  }
switchD_140bbc511_caseD_2:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_srvr.c",0x154,"ossl_statem_server_read_transition");
  FUN_140ba3290(param_1,10,0xf4,0);
  return 0;
}

