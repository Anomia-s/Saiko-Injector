/**
 * Function: dtls_process_hello_verify
 * Address:  140c360d0
 * Signature: undefined dtls_process_hello_verify(void)
 * Body size: 1847 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_process_hello_verify(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 local_res8;
  byte *local_18;
  ulonglong uStack_10;
  
  uStack_10 = 0x140c360e5;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 2:
    uVar12 = param_2[1];
    if (1 < uVar12) {
      *param_2 = *param_2 + 2;
      param_2[1] = uVar12 - 2;
      local_18 = (byte *)*param_2;
      uStack_10 = param_2[1];
      if (uVar12 - 2 != 0) {
        bVar2 = *local_18;
        uVar11 = (ulonglong)bVar2;
        pbVar1 = local_18 + 1;
        if (uVar11 <= uVar12 - 3) {
          uStack_10 = (uVar12 - 3) - uVar11;
          local_18 = pbVar1 + uVar11;
          *param_2 = (longlong)local_18;
          param_2[1] = uStack_10;
          memcpy(*(void **)(param_1 + 0x4f0),pbVar1,(ulonglong)bVar2);
          *(ulonglong *)(*(longlong *)(param_1 + 0x4f0) + 0x100) = uVar11;
          return 1;
        }
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x55c,"dtls_process_hello_verify");
    FUN_140ba3290(param_1,0x32,0x9f,0);
    return 0;
  case 3:
    uVar10 = tls_process_as_hello_retry_request(param_1);
    return uVar10;
  case 4:
    uVar10 = tls_process_server_rpk(param_1);
    return uVar10;
  default:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x44c,"ossl_statem_client_process_message");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  case 6:
    break;
  case 7:
    uVar10 = d_aplatformplatformopenssl_srcincludeinternal(param_1);
    return uVar10;
  case 8:
    uVar10 = tls_process_certificate_request(param_1);
    return uVar10;
  case 9:
    if (param_2[1] == 0) {
      if (((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x1c) & 0x20) == 0) ||
         (iVar8 = FUN_140bc4e10(param_1), 0 < iVar8)) {
        lVar9 = *(longlong *)(param_1 + 8);
        iVar8 = FUN_140c39d80(param_1);
        if (iVar8 == 0) {
          return 0;
        }
        if ((*(int *)(param_1 + 0xa20) == -1) ||
           (pcVar7 = *(code **)(lVar9 + 0x268), pcVar7 == (code *)0x0)) {
LAB_140c36514:
          if (((*(longlong *)(param_1 + 0xb60) != 0) && (iVar8 = FUN_140b6ea20(param_1), iVar8 == 0)
              ) && ((*(byte *)(param_1 + 0x948) & 1) != 0)) {
            return 0;
          }
          return 1;
        }
        iVar8 = (*pcVar7)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar9 + 0x270));
        if (iVar8 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0xb9f,"tls_process_initial_server_flight");
          uVar10 = 0x71;
          uVar13 = 0x148;
        }
        else {
          if (-1 < iVar8) goto LAB_140c36514;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0xba4,"tls_process_initial_server_flight");
          uVar10 = 0x50;
          uVar13 = 0x131;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xbbf,"tls_process_server_done");
        uVar10 = 0x50;
        uVar13 = 0x169;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0xbb9,"tls_process_server_done");
      uVar10 = 0x32;
      uVar13 = 0x9f;
    }
    FUN_140ba3290(param_1,uVar10,uVar13,0);
    return 0;
  case 10:
    uVar10 = tls_process_new_session_ticket(param_1);
    return uVar10;
  case 0xb:
    uVar10 = FUN_140bb7b00(param_1);
    return uVar10;
  case 0xc:
    uVar10 = tls13_save_handshake_digest_for_pha(param_1);
    return uVar10;
  case 0x2a:
    pbVar1 = (byte *)*param_2;
    local_res8 = 0;
    uVar12 = param_2[1];
    if (1 < (ulonglong)param_2[1]) {
      uVar11 = param_2[1] - 2;
      local_18 = pbVar1 + 2;
      uStack_10 = (ulonglong)CONCAT11(*pbVar1,pbVar1[1]);
      if (uStack_10 <= uVar11) {
        uVar12 = uVar11 - uStack_10;
        pbVar1 = local_18 + uStack_10;
        if (uVar12 == 0) {
          *param_2 = (longlong)(local_18 + uStack_10);
          param_2[1] = 0;
          pbVar1 = local_18;
          uVar12 = uStack_10;
          if (param_2[1] == 0) {
            iVar8 = FUN_140c31dc0(param_1,&local_18,0x400,&local_res8,0,1);
            if ((iVar8 != 0) && (iVar8 = FUN_140c32380(param_1,0x400,local_res8,0,0,1), iVar8 != 0))
            {
              FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xfec);
              return 3;
            }
            goto LAB_140c36782;
          }
        }
      }
    }
    uStack_10 = uVar12;
    local_18 = pbVar1;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xfdf,"tls_process_encrypted_extensions");
    FUN_140ba3290(param_1,0x32,0x9f,0);
LAB_140c36782:
    FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xff0);
    return 0;
  case 0x2b:
    uVar10 = tls_process_cert_verify(param_1);
    return uVar10;
  case 0x2d:
    if (param_2[1] != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0xfbf,"tls_process_hello_req");
      FUN_140ba3290(param_1,0x32,0x9f,0);
      return 0;
    }
    if ((*(uint *)(param_1 + 0x9a8) >> 0x1e & 1) == 0) {
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
        FUN_140b6bb00(param_1);
        return 1;
      }
      FUN_140b6ba90();
      return 1;
    }
    FUN_140bf0b00(param_1,1,100);
    return 1;
  case 0x31:
    uVar10 = tls_process_key_update(param_1);
    return uVar10;
  }
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    pcVar6 = (char *)*param_2;
    cVar3 = *pcVar6;
    *param_2 = (longlong)(pcVar6 + 1);
    param_2[1] = lVar9 - 1U;
    if (cVar3 == '\x01') {
      if (lVar9 - 1U < 3) {
LAB_140c36362:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar10 = 0xb63;
      }
      else {
        cVar3 = pcVar6[1];
        cVar4 = pcVar6[2];
        cVar5 = pcVar6[3];
        *param_2 = (longlong)(pcVar6 + 4);
        uVar12 = (ulonglong)CONCAT21(CONCAT11(cVar3,cVar4),cVar5);
        param_2[1] = lVar9 - 4U;
        if (lVar9 - 4U != uVar12) goto LAB_140c36362;
        lVar9 = FUN_140b8d8d0(uVar12,"ssl\\statem\\statem_clnt.c",0xb66);
        *(longlong *)(param_1 + 0xa48) = lVar9;
        if (lVar9 == 0) {
          *(undefined8 *)(param_1 + 0xa50) = 0;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0xb69,"tls_process_cert_status_body");
          FUN_140ba3290(param_1,0x50,0x8000f,0);
          return 0;
        }
        *(ulonglong *)(param_1 + 0xa50) = uVar12;
        iVar8 = FUN_140bbc350(param_2,lVar9,uVar12);
        if (iVar8 != 0) {
          return 3;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar10 = 0xb6e;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",uVar10,"tls_process_cert_status_body");
      uVar10 = 0x9f;
      goto LAB_140c36391;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_clnt.c",0xb5e,"tls_process_cert_status_body");
  uVar10 = 0x149;
LAB_140c36391:
  FUN_140ba3290(param_1,0x32,uVar10,0);
  return 0;
}

