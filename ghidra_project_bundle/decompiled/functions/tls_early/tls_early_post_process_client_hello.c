/**
 * Function: tls_early_post_process_client_hello
 * Address:  140bc1410
 * Signature: undefined tls_early_post_process_client_hello(void)
 * Body size: 3195 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_early_post_process_client_hello(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar19;
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  uint *puVar14;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uStack_48 = 0x140bc142a;
  lVar1 = *(longlong *)(param_1 + 8);
  puVar16 = (uint *)0x0;
  piVar2 = *(int **)(param_1 + 0xb50);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  puVar17 = (uint *)0x0;
  local_res8[0] = 0x50;
  local_res20 = 0;
  local_58 = 0;
  local_res10[0] = 0;
  if (*(code **)(lVar1 + 0x210) == (code *)0x0) {
LAB_140bc14ba:
    iVar3 = piVar2[3];
    iVar4 = piVar2[4];
    iVar13 = piVar2[5];
    *(int *)(param_1 + 0x184) = piVar2[2];
    *(int *)(param_1 + 0x188) = iVar3;
    *(int *)(param_1 + 0x18c) = iVar4;
    *(int *)(param_1 + 400) = iVar13;
    iVar3 = piVar2[7];
    iVar4 = piVar2[8];
    iVar13 = piVar2[9];
    *(int *)(param_1 + 0x194) = piVar2[6];
    *(int *)(param_1 + 0x198) = iVar3;
    *(int *)(param_1 + 0x19c) = iVar4;
    *(int *)(param_1 + 0x1a0) = iVar13;
    if (*piVar2 != 0) {
      uVar12 = piVar2[1];
      if ((uVar12 == 2) || ((uVar12 & 0xff00) != 0x300)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x6d6,"tls_early_post_process_client_hello");
        uVar9 = 0x46;
        iVar3 = 0xfc;
        goto LAB_140bc164b;
      }
      *(uint *)(param_1 + 0x9cc) = uVar12;
    }
    iVar3 = FUN_140bb6590(param_1,piVar2,local_res10);
    if (iVar3 == 0) {
      if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
           (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) &&
         (iVar3 = FUN_140baaca0(param_1 + 0xc48), iVar3 != 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0x6ec,"tls_early_post_process_client_hello");
        uVar9 = 10;
        iVar3 = 0xb6;
      }
      else {
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) ||
           (uVar5 = FUN_140b69530(param_1), (uVar5 >> 0xd & 1) == 0)) {
LAB_140bc16f2:
          *(undefined4 *)(param_1 + 0x508) = 0;
          iVar3 = ssl_cache_cipherlist(param_1,piVar2 + 0x56,*piVar2);
          if ((iVar3 == 0) ||
             (iVar3 = FUN_140b6dee0(param_1,piVar2 + 0x56,&local_res20,&local_58,
                                    CONCAT44(uVar9,*piVar2),CONCAT44(uVar19,1)), iVar3 == 0))
          goto LAB_140bc1656;
          *(undefined4 *)(param_1 + 0x4b0) = 0;
          if ((local_58 != 0) && (iVar3 = FUN_140b77980(), puVar14 = puVar16, 0 < iVar3)) {
            do {
              uVar6 = FUN_140b77990(local_58,puVar14);
              iVar3 = FUN_140ba5cc0(uVar6);
              if (iVar3 == 0x30000ff) {
                if (*(int *)(param_1 + 0xb98) != 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0x719,
                             "tls_early_post_process_client_hello");
                  iVar3 = 0x159;
                  goto LAB_140bc1646;
                }
                *(undefined4 *)(param_1 + 0x4b0) = 1;
              }
              else {
                iVar3 = FUN_140ba5cc0(uVar6);
                if ((iVar3 == 0x3005600) && (iVar3 = FUN_140bb6470(param_1), iVar3 == 0)) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",0x727,
                             "tls_early_post_process_client_hello");
                  uVar9 = 0x56;
                  iVar3 = 0x175;
                  goto LAB_140bc164b;
                }
              }
              uVar12 = (int)puVar14 + 1;
              puVar14 = (uint *)(ulonglong)uVar12;
              iVar3 = FUN_140b77980(local_58);
            } while ((int)uVar12 < iVar3);
          }
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
              (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
LAB_140bc18ff:
            iVar3 = FUN_140c32280(param_1,0xd,0x80,*(undefined8 *)(piVar2 + 0xa2),0,0);
            if (iVar3 == 0) goto LAB_140bc1656;
            if ((*piVar2 == 0) &&
               ((*(int *)(param_1 + 0x7c) == 0 || ((*(uint *)(param_1 + 0x9a8) >> 0x10 & 1) == 0))))
            {
              iVar3 = ssl_get_prev_session(param_1);
              if (iVar3 != 1) {
                if (iVar3 == -1) goto LAB_140bc1656;
                iVar3 = ssl_get_new_session(param_1);
                goto joined_r0x000140bc1989;
              }
              *(undefined4 *)(param_1 + 0x508) = 1;
            }
            else {
              iVar3 = ssl_get_new_session(param_1);
joined_r0x000140bc1989:
              if (iVar3 == 0) goto LAB_140bc1656;
            }
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
              memcpy((void *)(param_1 + 0x920),(void *)(*(longlong *)(param_1 + 0xb50) + 0x30),
                     *(size_t *)(*(longlong *)(param_1 + 0xb50) + 0x28));
              *(undefined8 *)(param_1 + 0x940) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0xb50) + 0x28);
            }
            if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                 (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
               (*(int *)(param_1 + 0x508) == 0)) {
LAB_140bc1a7d:
              if (*(size_t *)(piVar2 + 0x5a) == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\statem_srvr.c",0x79e,"tls_early_post_process_client_hello")
                ;
                uVar9 = 0x32;
                iVar3 = 0xbb;
              }
              else {
                pvVar8 = memchr(piVar2 + 0x5c,0,*(size_t *)(piVar2 + 0x5a));
                if (pvVar8 == (void *)0x0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  uVar10 = 0x7a5;
LAB_140bc1ad3:
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",uVar10,
                             "tls_early_post_process_client_hello");
                  uVar9 = 0x2f;
                  iVar3 = 0x156;
                }
                else {
                  if ((*(byte *)(param_1 + 0x9a8) & 0x40) != 0) {
                    uVar5 = *(ulonglong *)(piVar2 + 0x9e);
                    lVar7 = *(longlong *)(piVar2 + 0x9c);
                    if (((1 < uVar5) && (1 < uVar5 - 2)) && (1 < uVar5 - 4)) {
                      uVar11 = (ulonglong)
                               CONCAT11(*(undefined1 *)(lVar7 + 4),*(undefined1 *)(lVar7 + 5));
                      if (uVar11 <= uVar5 - 6) {
                        if (CONCAT11(*(undefined1 *)(lVar7 + 2),*(undefined1 *)(lVar7 + 3)) == 0) {
                          uVar12 = FUN_140b6be50(param_1);
                          if ((uVar12 & 0xffffff00) == 0x300) {
                            iVar3 = FUN_140b6be50(param_1);
                          }
                          else {
                            iVar3 = 0;
                          }
                          lVar15 = 0x12;
                          if (0x302 < iVar3) {
                            lVar15 = 0x22;
                          }
                          if ((uVar5 - 6) - uVar11 == lVar15) {
                            iVar3 = FUN_14046e9f0(lVar7 + uVar11 + 6,&DAT_141235b20);
                            bVar18 = iVar3 == 0;
                          }
                          else {
                            bVar18 = false;
                          }
                          *(bool *)(param_1 + 0x4dc) = bVar18;
                        }
                      }
                    }
                  }
                  uVar9 = 0;
                  iVar3 = FUN_140c32380(param_1,0x80,*(undefined8 *)(piVar2 + 0xa2),0,0,1);
                  if (iVar3 == 0) goto LAB_140bc1656;
                  iVar3 = FUN_140bed3e0(param_1,1,param_1 + 0x164,0x20,
                                        CONCAT44(uVar9,local_res10[0]));
                  if (iVar3 < 1) {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    uVar10 = 0x7bd;
                  }
                  else {
                    if (*(int *)(param_1 + 0x508) == 0) {
                      iVar3 = tls1_set_server_sigalgs(param_1);
                      if (iVar3 == 0) goto LAB_140bc1656;
                      if (((((*(int *)(param_1 + 0x508) == 0) && (0x300 < *(int *)(param_1 + 0x48)))
                           && ((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) &
                               8) == 0)) &&
                          ((iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304 || (iVar3 == 0x10000))
                          )) && (*(code **)(param_1 + 0xad8) != (code *)0x0)) {
                        local_50 = 0;
                        local_res18[0] = 0x200;
                        iVar3 = (**(code **)(param_1 + 0xad8))
                                          (uVar10,*(longlong *)(param_1 + 0x8f8) + 0x50,local_res18,
                                           local_res20,&local_50,*(undefined8 *)(param_1 + 0xae0));
                        if ((iVar3 != 0) && (0 < local_res18[0])) {
                          *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 8) =
                               (longlong)local_res18[0];
                          *(longlong *)(param_1 + 0x550) = local_res20;
                          *(undefined4 *)(param_1 + 0x508) = 1;
                          *(undefined4 *)(*(longlong *)(param_1 + 0x8f8) + 0x2d0) = 0;
                          local_res20 = 0;
                          if (local_50 == 0) {
                            uVar10 = *(undefined8 *)(param_1 + 0x550);
                            uVar6 = FUN_140b6b790(param_1);
                            local_50 = FUN_140bee480(param_1,uVar10,uVar6);
                            if (local_50 == 0) {
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              uVar10 = 0x7e5;
                              goto LAB_140bc183b;
                            }
                          }
                          *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8) = local_50;
                          FUN_140b77c10(*(undefined8 *)(param_1 + 0x558));
                          uVar10 = FUN_140b78410(*(undefined8 *)(param_1 + 0x550));
                          *(undefined8 *)(param_1 + 0x558) = uVar10;
                          FUN_140b77c10(*(undefined8 *)(param_1 + 0x560));
                          uVar10 = FUN_140b78410(*(undefined8 *)(param_1 + 0x550));
                          *(undefined8 *)(param_1 + 0x560) = uVar10;
                        }
                      }
                    }
                    iVar3 = 0;
                    *(undefined8 *)(param_1 + 0x390) = 0;
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) ==
                          0) && (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) &&
                       (iVar4 != 0x10000)) {
                      puVar17 = puVar16;
                      if (*(longlong *)(piVar2 + 0x5a) != 1) {
                        d_aplatformplatformopenssl_srccryptoerrerr_lo();
                        d_aplatformplatformopenssl_srccryptoerrerr_lo
                                  ("ssl\\statem\\statem_srvr.c",0x7ff,
                                   "tls_early_post_process_client_hello");
                        uVar9 = 0x2f;
                        iVar3 = 0x155;
                        goto LAB_140bc164b;
                      }
                    }
                    else {
                      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x2f0);
                      if (uVar12 != 0) {
                        iVar4 = FUN_140bb6180(param_1);
                        if (iVar4 == 0) {
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("ssl\\statem\\statem_srvr.c",0x80c,
                                     "tls_early_post_process_client_hello");
                          iVar3 = 0x154;
                        }
                        else {
                          iVar4 = FUN_140b77980(*(undefined8 *)(lVar1 + 0x118));
                          puVar17 = puVar16;
                          if (0 < iVar4) {
                            do {
                              puVar17 = (uint *)FUN_140b77990(*(undefined8 *)(lVar1 + 0x118),iVar3);
                              if (uVar12 == *puVar17) {
                                *(uint **)(param_1 + 0x390) = puVar17;
                                break;
                              }
                              iVar3 = iVar3 + 1;
                              iVar4 = FUN_140b77980(*(undefined8 *)(lVar1 + 0x118));
                            } while (iVar3 < iVar4);
                          }
                          if (*(longlong *)(param_1 + 0x390) != 0) {
                            uVar5 = *(ulonglong *)(piVar2 + 0x5a);
                            uVar11 = 0;
                            if (uVar5 != 0) {
                              do {
                                if (*(byte *)(uVar11 + 0x170 + (longlong)piVar2) == uVar12) break;
                                uVar11 = (ulonglong)((int)uVar11 + 1);
                              } while (uVar11 < uVar5);
                            }
                            if (uVar5 <= uVar11) {
                              d_aplatformplatformopenssl_srccryptoerrerr_lo();
                              uVar10 = 0x823;
                              goto LAB_140bc1ad3;
                            }
                            goto LAB_140bc1fb2;
                          }
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("ssl\\statem\\statem_srvr.c",0x819,
                                     "tls_early_post_process_client_hello");
                          iVar3 = 0x155;
                        }
                        goto LAB_140bc1646;
                      }
                      if (*(int *)(param_1 + 0x508) == 0) {
                        iVar4 = FUN_140bb6180(param_1);
                        if ((iVar4 == 0) || (*(longlong *)(lVar1 + 0x118) == 0)) goto LAB_140bc1fb2;
                        iVar4 = FUN_140b77980();
                        if (0 < iVar4) {
                          do {
                            puVar17 = (uint *)FUN_140b77990(*(undefined8 *)(lVar1 + 0x118),iVar3);
                            uVar12 = 0;
                            if (*(ulonglong *)(piVar2 + 0x5a) != 0) {
                              uVar5 = 0;
                              do {
                                if (*puVar17 == (uint)*(byte *)(uVar5 + 0x170 + (longlong)piVar2)) {
                                  *(uint **)(param_1 + 0x390) = puVar17;
                                  goto LAB_140bc1fb2;
                                }
                                uVar12 = uVar12 + 1;
                                uVar5 = (ulonglong)uVar12;
                              } while (uVar5 < *(ulonglong *)(piVar2 + 0x5a));
                            }
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < iVar4);
                        }
                      }
                      puVar17 = (uint *)0x0;
                    }
LAB_140bc1fb2:
                    if ((*(int *)(param_1 + 0x508) != 0) &&
                       ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) !=
                          0 || (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) ||
                        (iVar3 == 0x10000)))) {
LAB_140bc2016:
                      if (*(int *)(param_1 + 0x508) == 0) {
                        uVar12 = 0;
                        if (puVar17 != (uint *)0x0) {
                          uVar12 = *puVar17;
                        }
                        *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x2f0) = uVar12;
                      }
                      FUN_140b77c10(local_res20);
                      FUN_140b77c10(local_58);
                      FUN_140b8d990(*(undefined8 *)(piVar2 + 0xa2),"ssl\\statem\\statem_srvr.c",
                                    0x862);
                      FUN_140b8d990(*(undefined8 *)(param_1 + 0xb50),"ssl\\statem\\statem_srvr.c",
                                    0x863);
                      *(undefined8 *)(param_1 + 0xb50) = 0;
                      return 1;
                    }
                    FUN_140b77c10(*(undefined8 *)(param_1 + 0x550));
                    *(longlong *)(param_1 + 0x550) = local_res20;
                    if (local_res20 != 0) {
                      local_res20 = 0;
                      goto LAB_140bc2016;
                    }
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    uVar10 = 0x852;
                  }
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\statem\\statem_srvr.c",uVar10,
                             "tls_early_post_process_client_hello");
                  uVar9 = 0x50;
                  iVar3 = 0xc0103;
                }
              }
            }
            else {
              iVar13 = 0;
              iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2f8) + 0x18);
              iVar4 = FUN_140b77980(local_res20);
              if (0 < iVar4) {
                do {
                  lVar7 = FUN_140b77990(local_res20);
                  if (*(int *)(lVar7 + 0x18) == iVar3) goto LAB_140bc1a7d;
                  iVar13 = iVar13 + 1;
                  iVar4 = FUN_140b77980(local_res20);
                } while (iVar13 < iVar4);
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0x795,"tls_early_post_process_client_hello");
              uVar9 = 0x2f;
              iVar3 = 0xd7;
            }
            goto LAB_140bc164b;
          }
          uVar6 = FUN_140b6b790(param_1);
          lVar7 = FUN_140bee480(param_1,local_res20,uVar6);
          if (lVar7 != 0) {
            if ((*(int *)(param_1 + 0x8c8) == 1) &&
               ((*(longlong *)(param_1 + 0x300) == 0 ||
                (*(int *)(*(longlong *)(param_1 + 0x300) + 0x18) != *(int *)(lVar7 + 0x18))))) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_srvr.c",0x73d,"tls_early_post_process_client_hello");
              uVar9 = 0x2f;
              iVar3 = 0xba;
              goto LAB_140bc164b;
            }
            *(longlong *)(param_1 + 0x300) = lVar7;
            goto LAB_140bc18ff;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0x733;
LAB_140bc183b:
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",uVar10,"tls_early_post_process_client_hello");
          iVar3 = 0xc1;
        }
        else {
          if (*(code **)(lVar1 + 0xd8) == (code *)0x0) {
            _Size = *(size_t *)((longlong)*(void **)(param_1 + 0x4f0) + 0x100);
            if ((_Size == *(size_t *)(piVar2 + 0x14)) &&
               (iVar3 = memcmp(piVar2 + 0x16,*(void **)(param_1 + 0x4f0),_Size), iVar3 == 0))
            goto LAB_140bc16e1;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar10 = 0x6ff;
          }
          else {
            iVar3 = (**(code **)(lVar1 + 0xd8))(uVar10,piVar2 + 0x16,piVar2[0x14]);
            if (iVar3 != 0) {
LAB_140bc16e1:
              *(undefined4 *)(*(longlong *)(param_1 + 0x4f0) + 0x108) = 1;
              goto LAB_140bc16f2;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar10 = 0x6f7;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",uVar10,"tls_early_post_process_client_hello");
          iVar3 = 0x134;
        }
LAB_140bc1646:
        uVar9 = 0x28;
      }
    }
    else {
      if ((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) {
        iVar4 = piVar2[1];
        *(int *)(param_1 + 0x9cc) = iVar4;
        *(int *)(param_1 + 0x48) = iVar4;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x6e5,"tls_early_post_process_client_hello");
      uVar9 = 0x46;
    }
  }
  else {
    iVar3 = (**(code **)(lVar1 + 0x210))(uVar10,local_res8,*(undefined8 *)(lVar1 + 0x218));
    if (iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x68) = 7;
      return 0xffffffff;
    }
    if (iVar3 == 1) goto LAB_140bc14ba;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x6c4,"tls_early_post_process_client_hello");
    iVar3 = 0xea;
    uVar9 = local_res8[0];
  }
LAB_140bc164b:
  FUN_140ba3290(param_1,uVar9,iVar3,0);
LAB_140bc1656:
  FUN_140b77c10(local_res20);
  FUN_140b77c10(local_58);
  FUN_140b8d990(*(undefined8 *)(piVar2 + 0xa2),"ssl\\statem\\statem_srvr.c",0x869);
  FUN_140b8d990(*(undefined8 *)(param_1 + 0xb50),"ssl\\statem\\statem_srvr.c",0x86a);
  *(undefined8 *)(param_1 + 0xb50) = 0;
  return 0;
}

