/**
 * Function: tls_process_as_hello_retry_request
 * Address:  140c36e10
 * Signature: undefined tls_process_as_hello_retry_request(void)
 * Body size: 2834 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_as_hello_retry_request(longlong param_1,longlong *param_2)

{
  undefined4 *_Buf2;
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong _Size;
  ulonglong local_res8;
  undefined8 local_res10;
  byte *local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar20;
  byte *local_78;
  longlong lStack_70;
  undefined8 local_68;
  byte *local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uStack_48 = 0x140c36e2c;
  local_68 = *(undefined8 *)(param_1 + 0x40);
  bVar10 = false;
  local_res10 = 0;
  if ((ulonglong)param_2[1] < 2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar17 = 0x5ce;
    goto LAB_140c378cd;
  }
  puVar4 = (undefined1 *)*param_2;
  uVar1 = *puVar4;
  _Buf2 = (undefined4 *)(puVar4 + 2);
  uVar2 = puVar4[1];
  *param_2 = (longlong)_Buf2;
  uVar15 = param_2[1] - 2;
  param_2[1] = uVar15;
  if ((*(int *)(param_1 + 0x48) == 0x304) && (CONCAT11(uVar1,uVar2) == 0x303)) {
    if (0x1f < uVar15) {
      iVar11 = memcmp(&DAT_141235720,_Buf2,0x20);
      if (iVar11 != 0) goto LAB_140c36f68;
      if (*(int *)(param_1 + 0x8c8) != 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x5d8,"tls_process_server_hello");
        uVar17 = 10;
        uVar19 = 0xf4;
        goto LAB_140c378eb;
      }
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      iVar11 = FUN_140baccd0(param_1,0x304);
      if (iVar11 != 0) {
        bVar10 = true;
        if ((ulonglong)param_2[1] < 0x20) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar17 = 0x5e3;
          goto LAB_140c378cd;
        }
        *param_2 = *param_2 + 0x20;
        param_2[1] = param_2[1] - 0x20;
        goto LAB_140c36f86;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar17 = 0x5de;
LAB_140c36f11:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",uVar17,"tls_process_server_hello");
      uVar17 = 0x50;
      uVar19 = 0xc0103;
      goto LAB_140c378eb;
    }
LAB_140c378b7:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar17 = 0x5e8;
LAB_140c378cd:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",uVar17,"tls_process_server_hello");
    uVar19 = 0x9f;
LAB_140c378e6:
    uVar17 = 0x32;
  }
  else {
    if (uVar15 < 0x20) goto LAB_140c378b7;
LAB_140c36f68:
    uVar7 = *(undefined4 *)(puVar4 + 6);
    uVar8 = *(undefined4 *)(puVar4 + 10);
    uVar9 = *(undefined4 *)(puVar4 + 0xe);
    *(undefined4 *)(param_1 + 0x164) = *_Buf2;
    *(undefined4 *)(param_1 + 0x168) = uVar7;
    *(undefined4 *)(param_1 + 0x16c) = uVar8;
    *(undefined4 *)(param_1 + 0x170) = uVar9;
    uVar17 = *(undefined8 *)(puVar4 + 0x1a);
    *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(puVar4 + 0x12);
    *(undefined8 *)(param_1 + 0x17c) = uVar17;
    *param_2 = *param_2 + 0x20;
    param_2[1] = param_2[1] + -0x20;
LAB_140c36f86:
    local_78 = (byte *)*param_2;
    lStack_70 = param_2[1];
    if (param_2[1] == 0) {
LAB_140c378ab:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar17 = 0x5ef;
      goto LAB_140c378cd;
    }
    uVar15 = param_2[1] - 1;
    _Size = (ulonglong)*local_78;
    local_res18 = local_78 + 1;
    if (uVar15 < _Size) goto LAB_140c378ab;
    lStack_70 = uVar15 - _Size;
    local_78 = local_res18 + _Size;
    *param_2 = (longlong)local_78;
    param_2[1] = lStack_70;
    if (0x20 < _Size) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x5f5,"tls_process_server_hello");
      uVar17 = 0x2f;
      uVar19 = 300;
      goto LAB_140c378eb;
    }
    uVar15 = param_2[1];
    if (uVar15 < 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar17 = 0x5fa;
      goto LAB_140c378cd;
    }
    local_res20 = *param_2;
    *param_2 = local_res20 + 2;
    param_2[1] = uVar15 - 2;
    if (uVar15 - 2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar17 = 0x5ff;
      goto LAB_140c378cd;
    }
    bVar3 = *(byte *)(local_res20 + 2);
    *param_2 = local_res20 + 3;
    uVar16 = uVar15 - 3;
    local_res8 = CONCAT44(local_res8._4_4_,(uint)bVar3);
    param_2[1] = uVar16;
    if ((uVar16 != 0) || (bVar10)) {
      local_78 = (byte *)*param_2;
      lStack_70 = param_2[1];
      if (1 < uVar16) {
        pbVar13 = local_78 + 2;
        uVar16 = (ulonglong)CONCAT11(*local_78,local_78[1]);
        if (uVar16 <= uVar15 - 5) {
          local_78 = pbVar13 + uVar16;
          lStack_70 = (uVar15 - 5) - uVar16;
          if (lStack_70 == 0) {
            *param_2 = (longlong)local_78;
            param_2[1] = 0;
            local_60 = pbVar13;
            local_58 = uVar16;
            if (param_2[1] == 0) {
              if (!bVar10) goto LAB_140c37097;
              goto LAB_140c370da;
            }
          }
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0x608,"tls_process_server_hello");
      uVar19 = 0x10f;
      goto LAB_140c378e6;
    }
    local_60 = (byte *)0x0;
    local_58 = 0;
LAB_140c37097:
    uVar17 = CONCAT44(uVar20,1);
    iVar11 = FUN_140c31dc0(param_1,&local_60,0x300,&local_res10,0,uVar17);
    uVar20 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if ((iVar11 == 0) ||
       (iVar11 = ssl_choose_client_version(param_1,CONCAT11(uVar1,uVar2),local_res10), iVar11 == 0))
    goto LAB_140c378f6;
LAB_140c370da:
    uVar15 = local_res8;
    piVar5 = *(int **)(param_1 + 0x18);
    uVar18 = *(uint *)(*(longlong *)(piVar5 + 0x36) + 0x50) & 8;
    iVar11 = (int)local_res8;
    if (((uVar18 == 0) && ((0x303 < *piVar5 && (*piVar5 != 0x10000)))) || (bVar10)) {
      if ((int)local_res8 == 0) {
        if ((_Size == *(ulonglong *)(param_1 + 0x940)) &&
           (iVar12 = memcmp(local_res18,(void *)(param_1 + 0x920),_Size), iVar12 == 0)) {
          if (bVar10) {
            iVar11 = set_client_ciphersuite(param_1,local_res20);
            if (iVar11 != 0) {
              local_res8 = 0;
              if (*(int *)(param_1 + 0xf0) == 7) {
                uVar20 = 0;
                iVar11 = read_buffer_len(param_1,0x10000,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
                if (iVar11 == 0) goto LAB_140c372f9;
              }
              (**(code **)(*(longlong *)(param_1 + 0xc68) + 0x60))
                        (*(undefined8 *)(param_1 + 0xc78),0x304);
              iVar11 = FUN_140c31dc0(param_1,&local_60,0x800,&local_res8,0,CONCAT44(uVar20,1));
              if ((iVar11 != 0) &&
                 (iVar11 = FUN_140c32380(param_1,0x800,local_res8,0,0,1), iVar11 != 0)) {
                FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0x74c);
                local_res8 = 0;
                if ((*(longlong *)(param_1 + 0xb20) == 0) && (*(longlong *)(param_1 + 0x308) != 0))
                {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_clnt.c",0x754,"tls_process_as_hello_retry_request"
                            );
                  FUN_140ba3290(param_1,0x2f,0xd6,0);
                }
                else {
                  iVar11 = FUN_140bb6f10(param_1,0,0,0,0);
                  if ((iVar11 != 0) &&
                     (iVar11 = FUN_140c47560(param_1,*(undefined8 *)
                                                      (*(longlong *)(param_1 + 0xf8) + 8),
                                             *(longlong *)(param_1 + 0x108) + 4), iVar11 != 0)) {
                    return 1;
                  }
                }
              }
LAB_140c372f9:
              FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0x76f);
              return 0;
            }
            goto LAB_140c378f6;
          }
          goto LAB_140c3734b;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x625,"tls_process_server_hello");
        uVar17 = 0x2f;
        uVar19 = 999;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x61e,"tls_process_server_hello");
        uVar17 = 0x2f;
        uVar19 = 0x155;
      }
    }
    else {
LAB_140c3734b:
      if (((uVar18 != 0) || (*piVar5 < 0x304)) || (uVar17 = 0x200, *piVar5 == 0x10000)) {
        uVar17 = 0x100;
      }
      iVar12 = FUN_140c31c10(param_1,uVar17,local_res10);
      if (iVar12 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x63a,"tls_process_server_hello");
        uVar17 = 0x2f;
        uVar19 = 0x6e;
      }
      else {
        *(undefined4 *)(param_1 + 0x508) = 0;
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
            (iVar12 = **(int **)(param_1 + 0x18), 0x303 < iVar12)) && (iVar12 != 0x10000)) {
          iVar12 = FUN_140baaca0(param_1 + 0xc48);
          if (iVar12 != 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0x647,"tls_process_server_hello");
            uVar17 = 10;
            uVar19 = 0xb6;
            goto LAB_140c378eb;
          }
          uVar20 = 0;
          iVar12 = FUN_140c32280(param_1,0x1c,0x200,local_res10,0,0);
          if (iVar12 == 0) goto LAB_140c378f6;
        }
        else {
          if (((0x300 < *(int *)(param_1 + 0x48)) && (*(code **)(param_1 + 0xad8) != (code *)0x0))
             && (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 800) != 0)) {
            uVar19 = *(undefined8 *)(param_1 + 0xae0);
            local_78 = (byte *)0x0;
            local_res8 = CONCAT44(local_res8._4_4_,0x200);
            iVar12 = (**(code **)(param_1 + 0xad8))
                               (local_68,*(longlong *)(param_1 + 0x8f8) + 0x50,&local_res8,0,
                                &local_78,uVar19);
            uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
            if (iVar12 != 0) {
              if (0 < (int)local_res8) {
                *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 8) = (longlong)(int)local_res8;
                pbVar13 = local_78;
                if (local_78 == (byte *)0x0) {
                  pbVar13 = (byte *)FUN_140ba7030(param_1,local_res20,0);
                }
                *(byte **)(*(longlong *)(param_1 + 0x8f8) + 0x2f8) = pbVar13;
                goto LAB_140c374e6;
              }
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar17 = 0x672;
            goto LAB_140c36f11;
          }
LAB_140c374e6:
          if (((_Size != 0) && (_Size == *(ulonglong *)(*(longlong *)(param_1 + 0x8f8) + 0x250))) &&
             (iVar12 = memcmp(local_res18,(void *)(*(longlong *)(param_1 + 0x8f8) + 600),_Size),
             iVar12 == 0)) {
            *(undefined4 *)(param_1 + 0x508) = 1;
          }
        }
        lVar14 = *(longlong *)(param_1 + 0x8f8);
        if (*(int *)(param_1 + 0x508) == 0) {
          if (*(longlong *)(lVar14 + 0x250) != 0) {
            LOCK();
            piVar5 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x90);
            *piVar5 = *piVar5 + 1;
            UNLOCK();
            iVar12 = ssl_get_new_session(param_1,0);
            if (iVar12 == 0) goto LAB_140c378f6;
          }
          **(undefined4 **)(param_1 + 0x8f8) = *(undefined4 *)(param_1 + 0x48);
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
              (iVar12 = **(int **)(param_1 + 0x18), iVar12 < 0x304)) || (iVar12 == 0x10000)) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x8f8) + 0x250) = _Size;
            if (_Size != 0) {
              memcpy((void *)(*(longlong *)(param_1 + 0x8f8) + 600),local_res18,_Size);
            }
          }
        }
        else if ((*(size_t *)(param_1 + 0x8d0) != *(size_t *)(lVar14 + 0x278)) ||
                (iVar12 = memcmp((void *)(lVar14 + 0x280),(void *)(param_1 + 0x8d8),
                                 *(size_t *)(param_1 + 0x8d0)), iVar12 != 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0x683,"tls_process_server_hello");
          uVar17 = 0x2f;
          uVar19 = 0x110;
          goto LAB_140c378eb;
        }
        lVar14 = 0;
        iVar12 = *(int *)(param_1 + 0x48);
        if (iVar12 == **(int **)(param_1 + 0x8f8)) {
          *(int *)(param_1 + 0x418) = iVar12;
          *(int *)(param_1 + 0x41c) = iVar12;
          iVar12 = set_client_ciphersuite(param_1,local_res20);
          if (iVar12 == 0) goto LAB_140c378f6;
          if ((*(int *)(param_1 + 0x508) == 0) ||
             (iVar11 == *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x2f0))) {
            if (iVar11 == 0) {
LAB_140c376c6:
              *(longlong *)(param_1 + 0x390) = lVar14;
              iVar11 = FUN_140c32380(param_1,uVar17,local_res10,0,0,CONCAT44(uVar20,1));
              if (iVar11 != 0) {
                puVar6 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
                if (((((*(byte *)(puVar6 + 10) & 8) != 0) ||
                     (iVar11 = **(int **)(param_1 + 0x18), iVar11 < 0x304)) || (iVar11 == 0x10000))
                   || (((iVar11 = (*(code *)*puVar6)(param_1), iVar11 != 0 &&
                        (iVar11 = FUN_140bba600(param_1), iVar11 != 0)) &&
                       (((((*(uint *)(param_1 + 0x160) & 0x2000) == 0 &&
                          ((*(int *)(param_1 + 0xf0) != 0 ||
                           ((*(uint *)(param_1 + 0x9a8) >> 0x14 & 1) != 0)))) ||
                         (iVar11 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8)
                                               + 0x10))(param_1,0x92), iVar11 != 0)) &&
                        (iVar11 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) +
                                              0x10))(param_1,0x91), iVar11 != 0)))))) {
                  FUN_140b8d990(local_res10,"ssl\\statem\\statem_clnt.c",0x727);
                  return 3;
                }
              }
              goto LAB_140c378f6;
            }
            iVar11 = FUN_140bb6180(param_1);
            if (iVar11 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_clnt.c",0x6cf,"tls_process_server_hello");
              uVar17 = 0x2f;
              uVar19 = 0x157;
            }
            else {
              lVar14 = FUN_140ba75a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x118),
                                     uVar15 & 0xffffffff);
              if (lVar14 != 0) goto LAB_140c376c6;
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_clnt.c",0x6d8,"tls_process_server_hello");
              uVar17 = 0x2f;
              uVar19 = 0x101;
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0x6c9,"tls_process_server_hello");
            uVar17 = 0x2f;
            uVar19 = 0x158;
          }
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0x6a9,"tls_process_server_hello");
          uVar17 = 0x46;
          uVar19 = 0xd2;
        }
      }
    }
  }
LAB_140c378eb:
  FUN_140ba3290(param_1,uVar17,uVar19,0);
LAB_140c378f6:
  FUN_140b8d990(local_res10,"ssl\\statem\\statem_clnt.c",0x72a);
  return 0;
}

