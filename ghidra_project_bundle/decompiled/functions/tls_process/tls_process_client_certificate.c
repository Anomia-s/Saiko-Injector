/**
 * Function: tls_process_client_certificate
 * Address:  140bbfec0
 * Signature: undefined tls_process_client_certificate(void)
 * Body size: 2005 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_process_client_certificate(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_res20;
  byte *local_58;
  undefined8 *local_50;
  byte *local_48;
  ulonglong uStack_40;
  
  local_50 = *(undefined8 **)(param_1 + 8);
  lVar4 = 0;
  local_res8 = 0;
  local_res18 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0xc60) + 0x68);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0xc70),0);
  }
  if (*(char *)(param_1 + 0xb48) == '\x02') {
    lVar4 = tls_process_client_rpk(param_1,param_2);
    return lVar4;
  }
  if (*(char *)(param_1 + 0xb48) != '\0') {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0xe3e,"tls_process_client_certificate");
    FUN_140ba3290(param_1,0x2b,0xf7,0);
    goto LAB_140bc066b;
  }
  lVar5 = FUN_140b77ab0();
  local_res18 = lVar5;
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0xe43,"tls_process_client_certificate");
    FUN_140ba3290(param_1,0x50,0x8000f,0);
    goto LAB_140bc066b;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
      (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000))
  goto LAB_140bc0037;
  local_48 = (byte *)*param_2;
  uStack_40 = param_2[1];
  if (param_2[1] != 0) {
    uVar8 = param_2[1] - 1;
    uVar9 = (ulonglong)*local_48;
    pbVar11 = local_48 + 1;
    if (uVar9 <= uVar8) {
      uStack_40 = uVar8 - uVar9;
      local_48 = pbVar11 + uVar9;
      *param_2 = (longlong)local_48;
      param_2[1] = uStack_40;
      if (*(longlong *)(param_1 + 0xba8) == 0) {
        if (uVar9 == 0) {
LAB_140bc0037:
          local_48 = (byte *)*param_2;
          uStack_40 = param_2[1];
          if ((ulonglong)param_2[1] < 3) {
LAB_140bc062b:
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_srvr.c",0xe53,"tls_process_client_certificate");
            uVar12 = 0x9f;
LAB_140bc064e:
            uVar3 = 0x32;
          }
          else {
            uVar8 = param_2[1] - 3;
            pbVar11 = local_48 + 3;
            uVar9 = (ulonglong)CONCAT21(CONCAT11(*local_48,local_48[1]),local_48[2]);
            if (uVar8 < uVar9) goto LAB_140bc062b;
            uStack_40 = uVar8 - uVar9;
            local_48 = pbVar11 + uVar9;
            *param_2 = (longlong)local_48;
            param_2[1] = uStack_40;
            lVar7 = lVar4;
            if (param_2[1] != 0) goto LAB_140bc062b;
            while (uVar9 != 0) {
              if (uVar9 < 3) {
LAB_140bc03cf:
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar12 = 0xe5a;
LAB_140bc0361:
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",uVar12,"tls_process_client_certificate");
                uVar12 = 0x87;
                goto LAB_140bc064e;
              }
              pbVar10 = pbVar11 + 3;
              uVar8 = (ulonglong)CONCAT21(CONCAT11(*pbVar11,pbVar11[1]),pbVar11[2]);
              if (uVar9 - 3 < uVar8) goto LAB_140bc03cf;
              uVar9 = (uVar9 - 3) - uVar8;
              pbVar11 = pbVar10 + uVar8;
              local_58 = pbVar10;
              local_res8 = FUN_140b76440(*local_50,local_50[0x8c]);
              if (local_res8 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe61,"tls_process_client_certificate");
                uVar12 = 0x8000b;
                goto LAB_140bc064e;
              }
              lVar6 = FUN_140b763f0(&local_res8,&local_58,uVar8);
              if (lVar6 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe65,"tls_process_client_certificate");
                uVar12 = 0x8000d;
                goto LAB_140bc064e;
              }
              if (local_58 != pbVar10 + uVar8) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar12 = 0xe6a;
                goto LAB_140bc0361;
              }
              if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                  (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
                local_res20 = 0;
                if (1 < uVar9) {
                  pbVar10 = pbVar11 + 2;
                  uVar8 = (ulonglong)CONCAT11(*pbVar11,pbVar11[1]);
                  if (uVar8 <= uVar9 - 2) {
                    uVar9 = (uVar9 - 2) - uVar8;
                    pbVar11 = pbVar10 + uVar8;
                    local_48 = pbVar10;
                    uStack_40 = uVar8;
                    iVar2 = FUN_140c31dc0(param_1,&local_48,0x1000,&local_res20,0,lVar7 == 0);
                    if ((iVar2 != 0) &&
                       (iVar2 = FUN_140c32380(param_1,0x1000,local_res20,local_res8,lVar7,uVar9 == 0
                                             ), iVar2 != 0)) {
                      FUN_140b8d990(local_res20,"ssl\\statem\\statem_srvr.c",0xe7f);
                      goto LAB_140bc0220;
                    }
                    FUN_140b8d990(local_res20,"ssl\\statem\\statem_srvr.c",0xe7c);
                    lVar4 = 0;
                    goto LAB_140bc066b;
                  }
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe73,"tls_process_client_certificate");
                uVar12 = 0x10f;
                goto LAB_140bc064e;
              }
LAB_140bc0220:
              iVar2 = FUN_140b78340(lVar5,local_res8);
              if (iVar2 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe83,"tls_process_client_certificate");
                uVar3 = 0x50;
                uVar12 = 0x8000f;
                goto LAB_140bc0653;
              }
              local_res8 = 0;
              lVar7 = lVar7 + 1;
            }
            iVar2 = FUN_140b77980(lVar5);
            if (iVar2 < 1) {
              if (*(int *)(param_1 + 0x48) == 0x300) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe8d,"tls_process_client_certificate");
                uVar3 = 0x28;
                uVar12 = 0xb0;
              }
              else {
                if (((byte)*(undefined4 *)(param_1 + 0x948) & 3) != 3) {
                  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
                     (iVar2 = ssl3_digest_cached_records(param_1,0), iVar2 == 0))
                  goto LAB_140bc066b;
                  goto LAB_140bc0430;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xe94,"tls_process_client_certificate");
                uVar3 = 0x74;
                uVar12 = 199;
              }
            }
            else {
              iVar2 = FUN_140ba9860(param_1,lVar5);
              if (iVar2 < 1) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xea1,"tls_process_client_certificate");
                uVar3 = FUN_140bb5a20(*(undefined4 *)(param_1 + 0x990));
                uVar12 = 0x86;
              }
              else {
                uVar12 = FUN_140b77990(lVar5,0);
                lVar7 = FUN_140b74cd0(uVar12);
                if (lVar7 != 0) {
LAB_140bc0430:
                  if (*(int *)(param_1 + 0xba0) == 4) {
                    lVar7 = FUN_140ba55c0(*(undefined8 *)(param_1 + 0x8f8),0);
                    if (lVar7 == 0) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("ssl\\statem\\statem_srvr.c",0xeb6,"tls_process_client_certificate"
                                );
                      uVar3 = 0x50;
                      uVar12 = 0x80014;
                      goto LAB_140bc0653;
                    }
                    FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
                    *(longlong *)(param_1 + 0x8f8) = lVar7;
                  }
                  FUN_140b763d0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c0));
                  lVar7 = *(longlong *)(param_1 + 0x8f8);
                  uVar12 = FUN_140b78390(lVar5);
                  *(undefined8 *)(lVar7 + 0x2c0) = uVar12;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0) =
                       *(undefined4 *)(param_1 + 0x990);
                  FUN_140b9f7a0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8));
                  local_res18 = 0;
                  *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8) = lVar5;
                  FUN_140b7efe0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8));
                  *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) = 0;
                  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) !=
                         0) || (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) ||
                      (iVar2 == 0x10000)) ||
                     (iVar2 = ssl3_digest_cached_records(param_1,1), iVar2 != 0)) {
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) ==
                          0) && (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
                       (iVar2 != 0x10000)) {
                      iVar2 = ssl_handshake_hash(param_1,param_1 + 0x880,0x40,param_1 + 0x8c0);
                      lVar4 = 0;
                      if (iVar2 == 0) goto LAB_140bc066b;
                      *(undefined8 *)(param_1 + 0x1548) = 0;
                    }
                    lVar4 = 3;
                  }
                  goto LAB_140bc066b;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xea7,"tls_process_client_certificate");
                uVar3 = 0x28;
                uVar12 = 0xf7;
              }
            }
          }
LAB_140bc0653:
          FUN_140ba3290(param_1,uVar3,uVar12,0);
          goto LAB_140bc066b;
        }
      }
      else if ((uVar9 == *(ulonglong *)(param_1 + 0xbb0)) &&
              (iVar2 = FUN_14046e9f0(pbVar11), iVar2 == 0)) goto LAB_140bc0037;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_srvr.c",0xe4d,"tls_process_client_certificate");
  FUN_140ba3290(param_1,0x32,0x11a,0);
LAB_140bc066b:
  FUN_140b763d0(local_res8);
  FUN_140b9f7a0(local_res18);
  return lVar4;
}

