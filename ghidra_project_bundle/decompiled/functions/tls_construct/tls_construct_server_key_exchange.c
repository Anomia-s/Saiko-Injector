/**
 * Function: tls_construct_server_key_exchange
 * Address:  140bbef60
 * Signature: undefined tls_construct_server_key_exchange(void)
 * Body size: 3189 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void tls_construct_server_key_exchange(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  char *_Str;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  size_t sVar11;
  undefined8 uVar12;
  size_t sVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  void *local_b0;
  ulonglong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [5];
  undefined8 uStack_40;
  
  uStack_40 = 0x140bbef7a;
  local_68[4] = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  sVar11 = *(size_t *)(param_1 + 0x3d0);
  lVar9 = 0;
  local_b8 = 0;
  local_98 = (undefined8 *)0x0;
  local_a8 = local_a8 & 0xffffffff00000000;
  lVar8 = FUN_140b70980();
  local_90 = 0;
  local_88 = *(undefined8 **)(param_1 + 8);
  local_a0 = 0;
  local_9c = 0;
  iVar5 = FUN_140c22710(param_2,&local_78);
  if (iVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x9fa,"tls_construct_server_key_exchange");
    uVar14 = 0xc0103;
  }
  else {
    if (lVar8 != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
      local_68[3] = 0;
      local_68[2] = 0;
      local_68[1] = 0;
      local_68[0] = 0;
      if ((uVar1 & 0x48) == 0) {
        if ((uVar1 & 0x102) == 0) {
          if ((uVar1 & 0x84) != 0) {
            if (*(longlong *)(param_1 + 0x308) != 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa49,"tls_construct_server_key_exchange");
              uVar14 = 0xc0103;
              goto LAB_140bbf531;
            }
            uVar4 = FUN_140baf170(param_1,0xfffffffe);
            local_a8 = CONCAT44(local_a8._4_4_,(uint)uVar4);
            if (uVar4 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa51,"tls_construct_server_key_exchange");
              uVar12 = 0x28;
              uVar14 = 0x13b;
              goto LAB_140bbf536;
            }
            *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x304) = (uint)uVar4;
            lVar9 = FUN_140bf0530(param_1,uVar4);
            *(longlong *)(param_1 + 0x308) = lVar9;
            if (lVar9 != 0) {
              local_98 = (undefined8 *)FUN_140b7f740(lVar9,&local_b8);
              if (local_98 != (undefined8 *)0x0) {
                local_68[0] = 0;
                local_68[1] = 0;
                local_68[2] = 0;
                local_68[3] = 0;
                goto LAB_140bbf43c;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa61,"tls_construct_server_key_exchange");
              uVar14 = 0x80010;
              goto LAB_140bbf531;
            }
            goto LAB_140bbfaea;
          }
          if ((uVar1 & 0x20) == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_srvr.c",0xa7d,"tls_construct_server_key_exchange");
            uVar14 = 0xfa;
          }
          else {
            if ((((*(longlong *)(param_1 + 0xbf0) != 0) && (*(longlong *)(param_1 + 0xbf8) != 0)) &&
                (*(longlong *)(param_1 + 0xc00) != 0)) && (*(longlong *)(param_1 + 0xc08) != 0)) {
              local_68[0] = *(longlong *)(param_1 + 0xbf0);
              local_68[1] = *(longlong *)(param_1 + 0xbf8);
              local_68[2] = *(longlong *)(param_1 + 0xc00);
              local_68[3] = *(longlong *)(param_1 + 0xc08);
              goto LAB_140bbf43c;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_srvr.c",0xa73,"tls_construct_server_key_exchange");
            uVar14 = 0x166;
          }
LAB_140bbf531:
          uVar12 = 0x50;
LAB_140bbf536:
          FUN_140ba3290(param_1,uVar12,uVar14,0);
          lVar9 = 0;
        }
        else {
          if (*(int *)(*(longlong *)(param_1 + 0x878) + 0x18) == 0) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x878) + 8);
            if (lVar10 == 0) {
              pcVar2 = *(code **)(*(longlong *)(param_1 + 0x878) + 0x10);
              if (pcVar2 == (code *)0x0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xa25,"tls_construct_server_key_exchange");
                uVar14 = 0xab;
                goto LAB_140bbf531;
              }
              uVar14 = (*pcVar2)(*(undefined8 *)(param_1 + 0x40),0,0x400);
              lVar9 = FUN_140bc3ee0(uVar14);
              lVar10 = lVar9;
              if (lVar9 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xa1e,"tls_construct_server_key_exchange");
                FUN_140ba3290(param_1,0x50,0xc0103,0);
                goto LAB_140bbf543;
              }
            }
          }
          else {
            lVar9 = FUN_140bb1640(param_1);
            lVar10 = lVar9;
            if (lVar9 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa12,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbf543;
            }
          }
          uVar6 = FUN_140b7dfb0(lVar10);
          local_d8 = lVar10;
          iVar5 = FUN_140ba9d00(param_1,0x40007,uVar6,0);
          if (iVar5 != 0) {
            if (*(longlong *)(param_1 + 0x308) != 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa2e,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbf543;
            }
            lVar10 = FUN_140bed6f0(param_1,lVar10);
            *(longlong *)(param_1 + 0x308) = lVar10;
            if (lVar10 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xa34,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbf543;
            }
            FUN_140b7efe0(lVar9);
            local_a0 = 1;
            iVar5 = FUN_140b7fd30(*(undefined8 *)(param_1 + 0x308),"p",local_68);
            if (((iVar5 != 0) &&
                (iVar5 = FUN_140b7fd30(*(undefined8 *)(param_1 + 0x308),&DAT_1413a619c,local_68 + 1)
                , iVar5 != 0)) &&
               (iVar5 = FUN_140b7fd30(*(undefined8 *)(param_1 + 0x308),&DAT_1413a64f0,local_68 + 2),
               iVar5 != 0)) goto LAB_140bbf43c;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_srvr.c",0xa43,"tls_construct_server_key_exchange");
            FUN_140ba3290(param_1,0x50,0xc0103,0);
            FUN_140b7efe0(0);
            FUN_140b8d990(local_b8,"ssl\\statem\\statem_srvr.c",0xb13);
            FUN_140b709d0(lVar8);
            goto LAB_140bbfb16;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",0xa2a,"tls_construct_server_key_exchange");
          FUN_140ba3290(param_1,0x28,0x18a,0);
        }
LAB_140bbf543:
        FUN_140b7efe0(lVar9);
        FUN_140b8d990(local_b8,"ssl\\statem\\statem_srvr.c",0xb13);
        FUN_140b709d0(lVar8);
      }
      else {
LAB_140bbf43c:
        sVar13 = 0;
        sVar15 = sVar13;
        if ((((*(byte *)(*(longlong *)(param_1 + 0x300) + 0x20) & 0x44) == 0) &&
            ((*(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c) & 0x1c8) == 0)) &&
           (sVar15 = sVar11, sVar11 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",0xa85,"tls_construct_server_key_exchange");
          uVar14 = 0x32;
LAB_140bbf485:
          FUN_140ba3290(param_1,uVar14,0xc0103,0);
        }
        else {
          if (((uVar1 & 0x1c8) != 0) &&
             (((_Str = *(char **)(*(longlong *)(param_1 + 0x878) + 0xa8), sVar11 = sVar13,
               _Str != (char *)0x0 && (sVar11 = strlen(_Str), 0x100 < sVar11)) ||
              (iVar5 = FUN_140c22660(param_2,_Str,sVar11,2), iVar5 == 0)))) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_srvr.c",0xa95,"tls_construct_server_key_exchange");
            uVar14 = 0x50;
            goto LAB_140bbf485;
          }
          do {
            if (local_68[sVar13] == 0) break;
            if ((sVar13 != 2) || (uVar14 = 1, (uVar1 & 0x20) == 0)) {
              uVar14 = 2;
            }
            iVar5 = FUN_140c22090(param_2,uVar14);
            if (iVar5 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xaa7,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbfaea;
            }
            if ((sVar13 == 2) && ((uVar1 & 0x102) != 0)) {
              iVar5 = FUN_140bfc870(local_68[0]);
              iVar7 = FUN_140bfc870(local_68[2]);
              iVar5 = ((int)((iVar5 + 7 >> 0x1f & 7U) + iVar5 + 7) >> 3) -
                      ((int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3);
              if (iVar5 != 0) {
                iVar7 = FUN_140c221d0(param_2,(longlong)iVar5,&local_b0);
                if (iVar7 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0xab5,"tls_construct_server_key_exchange")
                  ;
                  FUN_140ba3290(param_1,0x50,0xc0103,0);
                  goto LAB_140bbfaea;
                }
                memset(local_b0,0,(longlong)iVar5);
              }
            }
            iVar5 = FUN_140bfc870(local_68[sVar13]);
            iVar5 = FUN_140c221d0(param_2,(longlong)
                                          ((int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3),
                                  &local_b0);
            if ((iVar5 == 0) || (iVar5 = FUN_140c21e20(param_2), iVar5 == 0)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xabe,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbfaea;
            }
            FUN_140bfcc70(local_68[sVar13],local_b0);
            sVar13 = sVar13 + 1;
          } while ((longlong)sVar13 < 4);
          if ((uVar1 & 0x84) != 0) {
            iVar5 = FUN_140c22430(param_2,3,1);
            if ((((iVar5 == 0) || (iVar5 = FUN_140c22430(param_2,0,1), iVar5 == 0)) ||
                (iVar5 = FUN_140c22430(param_2,local_a8 & 0xffffffff,1), iVar5 == 0)) ||
               (iVar5 = FUN_140c22660(param_2,local_b8,local_98,1), iVar5 == 0)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xad0,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              goto LAB_140bbfaea;
            }
            FUN_140b8d990(local_b8,"ssl\\statem\\statem_srvr.c",0xad3);
            local_b8 = 0;
          }
          puVar3 = local_88;
          uVar14 = 0;
          if (sVar15 == 0) {
LAB_140bbfae0:
            local_9c = 1;
          }
          else {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3d8) + 8);
            local_a8 = 0;
            if ((lVar9 == 0) || (iVar5 = FUN_140bb2550(local_88,sVar15,&local_80), iVar5 == 0)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0xae0,"tls_construct_server_key_exchange");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
            }
            else {
              iVar5 = FUN_140c22730(param_2,&local_70);
              if (iVar5 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xae5,"tls_construct_server_key_exchange");
                FUN_140ba3290(param_1,0x50,0xc0103,0);
              }
              else if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2)
                        == 0) ||
                      (iVar5 = FUN_140c22430(param_2,*(undefined2 *)(sVar15 + 0x10),2), iVar5 != 0))
              {
                if (local_80 != 0) {
                  uVar14 = FUN_140b97a80();
                }
                local_d8 = puVar3[0x8c];
                local_c8 = 0;
                local_d0 = lVar9;
                iVar5 = FUN_140bd0680(lVar8,&local_90,uVar14,*puVar3);
                if (iVar5 < 1) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0xaf2,"tls_construct_server_key_exchange")
                  ;
                  FUN_140ba3290(param_1,0x50,0xc0103,0);
                }
                else if ((*(int *)(sVar15 + 0x1c) == 0x390) &&
                        ((iVar5 = FUN_140c29750(local_90,6), iVar5 < 1 ||
                         (iVar5 = FUN_140c29810(local_90,0xffffffff), iVar5 < 1)))) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0xaf8,"tls_construct_server_key_exchange")
                  ;
                  FUN_140ba3290(param_1,0x50,0x80006,0);
                }
                else {
                  lVar9 = FUN_140bb7480(param_1,&local_b0,
                                        local_78 + *(longlong *)(*(longlong *)(param_1 + 0xf8) + 8),
                                        local_70);
                  if (lVar9 != 0) {
                    local_d8 = lVar9;
                    iVar5 = s_digest_sign_update_s(lVar8,0,&local_a8,local_b0);
                    if ((((0 < iVar5) &&
                         (iVar5 = FUN_140c223d0(param_2,local_a8,&local_98,2), iVar5 != 0)) &&
                        (local_d8 = lVar9,
                        iVar5 = s_digest_sign_update_s(lVar8,local_98,&local_a8,local_b0), 0 < iVar5
                        )) && ((iVar5 = FUN_140c22220(param_2,local_a8,&local_88,2), iVar5 != 0 &&
                               (local_98 == local_88)))) {
                      FUN_140b8d990(local_b0,"ssl\\statem\\statem_srvr.c",0xb0d);
                      goto LAB_140bbfae0;
                    }
                    FUN_140b8d990(local_b0,"ssl\\statem\\statem_srvr.c",0xb09);
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("ssl\\statem\\statem_srvr.c",0xb0a,
                               "tls_construct_server_key_exchange");
                    FUN_140ba3290(param_1,0x50,0xc0103,0);
                  }
                }
              }
              else {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0xaea,"tls_construct_server_key_exchange");
                FUN_140ba3290(param_1,0x50,0xc0103,0);
              }
            }
          }
        }
LAB_140bbfaea:
        FUN_140b7efe0(0);
        FUN_140b8d990(local_b8,"ssl\\statem\\statem_srvr.c",0xb13);
        FUN_140b709d0(lVar8);
        if (local_a0 == 0) goto LAB_140bbfb42;
LAB_140bbfb16:
        FUN_140bfcf10(local_68[0]);
        FUN_140bfcf10(local_68[1]);
        FUN_140bfcf10(local_68[2]);
        FUN_140bfcf10(local_68[3]);
      }
      goto LAB_140bbfb42;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x9ff,"tls_construct_server_key_exchange");
    uVar14 = 0x80006;
  }
  FUN_140ba3290(param_1,0x50,uVar14,0);
  FUN_140b7efe0(0);
  FUN_140b8d990(local_b8,"ssl\\statem\\statem_srvr.c",0xb13);
  FUN_140b709d0(lVar8);
LAB_140bbfb42:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_68[4] ^ (ulonglong)auStack_f8);
}

