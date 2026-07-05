/**
 * Function: write_state_machine
 * Address:  140ba3de0
 * Signature: undefined write_state_machine(void)
 * Body size: 1109 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 write_state_machine(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  int local_res8 [2];
  code *local_res10;
  undefined1 local_78 [64];
  
  pcVar6 = *(code **)(param_1 + 0x958);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if ((pcVar6 == (code *)0x0) &&
     (pcVar5 = *(code **)(*(longlong *)(param_1 + 8) + 0x120), pcVar5 != (code *)0x0)) {
    pcVar6 = pcVar5;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    pcVar5 = ossl_statem_client_write_transition;
    pcVar9 = FUN_140c35910;
    pcVar8 = tls_client_key_exchange_post_work;
    pcVar7 = ossl_statem_client_construct_message;
  }
  else {
    pcVar5 = ossl_statem_server_write_transition;
    pcVar9 = ossl_statem_server_pre_work;
    pcVar8 = FUN_140bbcf30;
    pcVar7 = ossl_statem_server_construct_message;
  }
switchD_140ba40b0_default:
  while (iVar1 = *(int *)(param_1 + 0x9c), iVar1 == 0) {
    if (pcVar6 != (code *)0x0) {
      uVar4 = 0x2001;
      if (*(int *)(param_1 + 0x78) == 0) {
        uVar4 = 0x1001;
      }
      (*pcVar6)(uVar3,uVar4,1);
    }
    iVar1 = (*pcVar5)(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
        return 0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x35a;
      goto LAB_140ba41e9;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
      *(undefined4 *)(param_1 + 0xa0) = 4;
    }
    else if (iVar1 == 2) {
LAB_140ba4214:
      return 1;
    }
  }
  if (iVar1 == 1) {
    uVar2 = (*pcVar9)(param_1,*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    switch(uVar2) {
    case 0:
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
        return 0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x362;
      goto LAB_140ba41e9;
    case 1:
      goto LAB_140ba4214;
    case 2:
      *(undefined4 *)(param_1 + 0x9c) = 2;
      break;
    case 3:
      goto LAB_140ba4214;
    case 4:
    case 5:
    case 6:
      goto LAB_140ba4214;
    }
    iVar1 = (*pcVar7)(param_1,&local_res10,local_res8);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_res8[0] == -1) {
      *(undefined4 *)(param_1 + 0x9c) = 3;
      *(undefined4 *)(param_1 + 0xa0) = 4;
      goto switchD_140ba40b0_default;
    }
    iVar1 = FUN_140c21ba0(local_78,*(undefined8 *)(param_1 + 0xf8));
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x58))
                          (param_1,local_78,local_res8[0]), iVar1 == 0)) {
      FUN_140c227c0(local_78);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x380;
    }
    else {
      if (local_res10 != (code *)0x0) {
        iVar1 = (*local_res10)(param_1,local_78);
        if (iVar1 == 0) {
          FUN_140c227c0(local_78);
          if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
            return 0;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar3 = 0x389;
          goto LAB_140ba41e9;
        }
        if (iVar1 == 2) {
          FUN_140c227c0(local_78);
          *(undefined4 *)(param_1 + 0x9c) = 3;
          *(undefined4 *)(param_1 + 0xa0) = 4;
          goto switchD_140ba40b0_default;
        }
      }
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x60))
                        (param_1,local_78,local_res8[0]);
      if ((iVar1 != 0) && (iVar1 = FUN_140c21e60(local_78), iVar1 != 0)) goto LAB_140ba4002;
      FUN_140c227c0(local_78);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x399;
    }
LAB_140ba3eaf:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem.c",uVar3,"write_state_machine");
    uVar3 = 0xc0103;
  }
  else {
    if (iVar1 == 2) {
LAB_140ba4002:
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) &&
         (*(int *)(param_1 + 200) != 0)) {
        FUN_140bec980(param_1);
      }
      if ((*(int *)(param_1 + 0xac) == 0x12) || (*(int *)(param_1 + 0xac) == 0x27)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
          iVar1 = FUN_140bb5a50(param_1,0x14);
        }
        else {
          iVar1 = FUN_140c330c0();
        }
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x68))(param_1);
      }
      if (iVar1 < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 3;
      *(undefined4 *)(param_1 + 0xa0) = 4;
    }
    else if (iVar1 != 3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x3c2;
      goto LAB_140ba3eaf;
    }
    uVar2 = (*pcVar8)(param_1,*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    switch(uVar2) {
    case 0:
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
        return 0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x3ae;
LAB_140ba41e9:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem.c",uVar3,"write_state_machine");
      uVar3 = 0x100;
      break;
    case 1:
LAB_140ba4214:
      return 2;
    case 2:
      *(undefined4 *)(param_1 + 0x9c) = 0;
      goto switchD_140ba40b0_default;
    case 3:
      goto LAB_140ba4214;
    case 4:
    case 5:
    case 6:
      goto LAB_140ba4214;
    default:
      goto switchD_140ba40b0_default;
    }
  }
  FUN_140ba3290(param_1,0x50,uVar3,0);
LAB_140ba4214:
  return 0;
}

