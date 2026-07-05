/**
 * Function: read_state_machine
 * Address:  140ba39e0
 * Signature: undefined read_state_machine(void)
 * Body size: 991 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 read_state_machine(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  code *local_res18;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  local_res10 = 0;
  pcVar8 = *(code **)(param_1 + 0x958);
  if ((*(code **)(param_1 + 0x958) == (code *)0x0) &&
     (pcVar10 = *(code **)(*(longlong *)(param_1 + 8) + 0x120), pcVar8 = (code *)0x0,
     pcVar10 != (code *)0x0)) {
    pcVar8 = pcVar10;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    pcVar12 = ossl_statem_client_read_transition;
    local_res18 = dtls_process_hello_verify;
    pcVar10 = (code *)&LAB_140c35fb0;
    pcVar11 = ossl_statem_client_post_process_message;
  }
  else {
    pcVar12 = ossl_statem_server_read_transition;
    local_res18 = ossl_statem_server_process_message;
    pcVar10 = FUN_140bbd660;
    pcVar11 = ossl_statem_server_post_process_message;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0x9c8) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
switchD_140ba3adf_default:
  do {
    iVar4 = *(int *)(param_1 + 0xa4);
    if (iVar4 != 0) {
      if (iVar4 == 1) goto LAB_140ba3bc4;
      if (iVar4 != 2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x2e6;
        goto LAB_140ba3cd0;
      }
      break;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      iVar4 = FUN_140bb7560(param_1,local_res8);
    }
    else {
      iVar4 = FUN_140c33be0();
    }
    if (iVar4 == 0) {
      return 0;
    }
    if (pcVar8 != (code *)0x0) {
      uVar9 = 0x2001;
      if (*(int *)(param_1 + 0x78) == 0) {
        uVar9 = 0x1001;
      }
      (*pcVar8)(uVar7,uVar9,1);
    }
    iVar4 = (*pcVar12)(param_1,local_res8[0]);
    if (iVar4 == 0) {
      return 0;
    }
    uVar5 = (*pcVar10)(param_1);
    uVar2 = *(ulonglong *)(param_1 + 0x2f0);
    if (uVar5 < uVar2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem.c",0x28d,"read_state_machine");
      uVar7 = 0x2f;
      uVar9 = 0x98;
      goto LAB_140ba3d95;
    }
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
       (uVar2 != 0)) {
      uVar5 = *(longlong *)(param_1 + 0x100) - *(longlong *)(*(longlong *)(param_1 + 0xf8) + 8);
      lVar6 = FUN_140b8f0b0(*(longlong *)(param_1 + 0xf8),(longlong)(int)(uVar2 + 4));
      if ((lVar6 == 0) || (uVar2 + 4 < uVar5)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem.c",0x296,"read_state_machine");
        uVar7 = 0x50;
        uVar9 = 0x80007;
        goto LAB_140ba3d95;
      }
      *(ulonglong *)(param_1 + 0x100) = *(longlong *)(*(longlong *)(param_1 + 0xf8) + 8) + uVar5;
    }
    *(undefined4 *)(param_1 + 0xa4) = 1;
LAB_140ba3bc4:
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      iVar4 = FUN_140bb7850(param_1,&local_res10);
    }
    else {
      iVar4 = FUN_140c33d80();
    }
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x9c8) = 0;
    if (0x7fffffffffffffff < local_res10) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x2ae;
LAB_140ba3cd0:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem.c",uVar7,"read_state_machine");
      uVar7 = 0x50;
      uVar9 = 0xc0103;
      goto LAB_140ba3d95;
    }
    local_48 = *(undefined8 *)(param_1 + 0x100);
    local_40 = local_res10;
    iVar4 = (*local_res18)(param_1,&local_48);
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (iVar4 == 0) {
      if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
        return 0;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar7 = 0x2b8;
      goto LAB_140ba3c92;
    }
    if (iVar4 == 1) {
      bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50);
      goto LAB_140ba3d2c;
    }
    if (iVar4 != 2) goto switchD_140ba3adf_caseD_2;
    *(undefined4 *)(param_1 + 0xa4) = 2;
    *(undefined4 *)(param_1 + 0xa8) = 4;
  } while( true );
  uVar3 = (*pcVar11)(param_1,*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  switch(uVar3) {
  case 0:
    if ((*(int *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0x98) == 1)) {
      return 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar7 = 0x2d0;
LAB_140ba3c92:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem.c",uVar7,"read_state_machine");
    uVar7 = 0x50;
    uVar9 = 0x100;
LAB_140ba3d95:
    FUN_140ba3290(param_1,uVar7,uVar9,0);
    return 0;
  case 1:
  case 3:
    bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50);
LAB_140ba3d2c:
    if ((bVar1 & 8) != 0) {
      FUN_140beca50(param_1);
    }
    return 1;
  case 2:
switchD_140ba3adf_caseD_2:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    break;
  case 4:
  case 5:
  case 6:
    return 0;
  }
  goto switchD_140ba3adf_default;
}

