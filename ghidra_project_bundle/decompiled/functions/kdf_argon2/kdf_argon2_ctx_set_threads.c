/**
 * Function: kdf_argon2_ctx_set_threads
 * Address:  140d26050
 * Signature: undefined kdf_argon2_ctx_set_threads(void)
 * Body size: 1659 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 kdf_argon2_ctx_set_threads(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint local_res10 [2];
  ulonglong local_res18;
  
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
LAB_140d266af:
    uVar4 = 1;
  }
  else {
    lVar2 = FUN_140b93540(param_2,&DAT_1413a5ba0);
    uVar4 = 0xffffffff;
    if (lVar2 == 0) {
LAB_140d2615a:
      lVar2 = FUN_140b93540(param_2,&DAT_1413a5aa0);
      if (lVar2 == 0) {
LAB_140d2623e:
        lVar2 = FUN_140b93540(param_2,"secret");
        if (lVar2 == 0) {
LAB_140d262cb:
          lVar2 = FUN_140b93540(param_2,&DAT_1413a645c);
          if (lVar2 == 0) {
LAB_140d26358:
            lVar2 = FUN_140b93540(param_2,&DAT_1413a61f4);
            if ((lVar2 == 0) ||
               ((iVar1 = FUN_140b93b70(lVar2,local_res10), iVar1 != 0 &&
                (iVar1 = FUN_140d266e0(param_1,local_res10[0]), iVar1 != 0)))) {
              lVar2 = FUN_140b93540(param_2,&DAT_1413a5da4);
              if (lVar2 != 0) {
                iVar1 = FUN_140b93b70(lVar2,local_res10);
                if (iVar1 == 0) goto LAB_140d26491;
                if (local_res10[0] == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("providers\\implementations\\kdfs\\argon2.c",0x4a7,
                             "kdf_argon2_ctx_set_t_cost");
                  FUN_140b91cc0(0x39,0x7b,"min: %u",1);
                  return 0;
                }
                *(uint *)(param_1 + 0x4c) = local_res10[0];
              }
              lVar2 = FUN_140b93540(param_2,"threads");
              uVar3 = 0xffffff;
              if (lVar2 == 0) {
LAB_140d2649b:
                lVar2 = FUN_140b93540(param_2,"lanes");
                if (lVar2 == 0) {
LAB_140d2650e:
                  lVar2 = FUN_140b93540(param_2,"memcost");
                  if (lVar2 != 0) {
                    iVar1 = FUN_140b93b70(lVar2,local_res10);
                    if (iVar1 == 0) goto LAB_140d26491;
                    if (local_res10[0] < 8) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("providers\\implementations\\kdfs\\argon2.c",0x4b5,
                                 "kdf_argon2_ctx_set_m_cost");
                      FUN_140b91cc0(0x39,0xeb,"min: %u",8);
                      return 0;
                    }
                    *(uint *)(param_1 + 0x50) = local_res10[0];
                  }
                  lVar2 = FUN_140b93540(param_2,"early_clean");
                  if (lVar2 != 0) {
                    iVar1 = FUN_140b93b70(lVar2,local_res10);
                    if (iVar1 == 0) goto LAB_140d26491;
                    *(uint *)(param_1 + 0x60) = (uint)(local_res10[0] != 0);
                  }
                  lVar2 = FUN_140b93540(param_2,"version");
                  if (lVar2 != 0) {
                    iVar1 = FUN_140b93b70(lVar2,local_res10);
                    if (iVar1 == 0) goto LAB_140d26491;
                    if ((local_res10[0] != 0x10) && (local_res10[0] != 0x13)) {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("providers\\implementations\\kdfs\\argon2.c",0x559,
                                 "kdf_argon2_ctx_set_version");
                      FUN_140b91cc0(0x39,0x7d,"invalid Argon2 version");
                      return 0;
                    }
                    *(uint *)(param_1 + 0x5c) = local_res10[0];
                  }
                  lVar2 = FUN_140b93540(param_2,"properties");
                  if (lVar2 == 0) goto LAB_140d266af;
                  if (*(int *)(lVar2 + 8) == 4) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    FUN_140b8d990(*(undefined8 *)(param_1 + 0x98),
                                  "providers\\implementations\\kdfs\\argon2.c",0x561);
                    *(undefined8 *)(param_1 + 0x98) = 0;
                    if (lVar2 != 0) {
                      lVar2 = FUN_140b8c830(lVar2,"providers\\implementations\\kdfs\\argon2.c",0x564
                                           );
                      *(longlong *)(param_1 + 0x98) = lVar2;
                      if (lVar2 == 0) goto LAB_140d26491;
                    }
                    FUN_140b719e0(*(undefined8 *)(param_1 + 0x88));
                    *(undefined8 *)(param_1 + 0x88) = 0;
                    FUN_140c45300(*(undefined8 *)(param_1 + 0x90));
                    *(undefined8 *)(param_1 + 0x90) = 0;
                    goto LAB_140d266af;
                  }
                }
                else {
                  iVar1 = FUN_140b93b70(lVar2,local_res10);
                  if (iVar1 != 0) {
                    if (local_res10[0] < 0x1000000) {
                      if (local_res10[0] != 0) {
                        *(uint *)(param_1 + 0x54) = local_res10[0];
                        goto LAB_140d2650e;
                      }
                      pcVar7 = "min lanes: %u";
                      uVar3 = 1;
                      uVar6 = 0x499;
                      pcVar5 = "kdf_argon2_ctx_set_lanes";
                      uVar4 = 0x68;
                    }
                    else {
                      pcVar7 = "max lanes: %u";
                      uVar6 = 0x493;
                      pcVar5 = "kdf_argon2_ctx_set_lanes";
                      uVar4 = 0x68;
                    }
LAB_140d2646a:
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("providers\\implementations\\kdfs\\argon2.c",uVar6,pcVar5);
                    FUN_140b91cc0(0x39,uVar4,pcVar7,uVar3);
                  }
                }
              }
              else {
                iVar1 = FUN_140b93b70(lVar2,local_res10);
                if (iVar1 != 0) {
                  if (local_res10[0] == 0) {
                    pcVar7 = "min threads: %u";
                    uVar6 = 0x481;
                    uVar3 = 1;
                  }
                  else {
                    if (local_res10[0] < 0x1000000) {
                      *(uint *)(param_1 + 0x58) = local_res10[0];
                      goto LAB_140d2649b;
                    }
                    pcVar7 = "max threads: %u";
                    uVar6 = 0x487;
                    uVar3 = 0xffffff;
                  }
                  pcVar5 = "kdf_argon2_ctx_set_threads";
                  uVar4 = 0xea;
                  goto LAB_140d2646a;
                }
              }
            }
          }
          else if (*(longlong *)(lVar2 + 0x10) != 0) {
            if (*(longlong *)(param_1 + 0x40) != 0) {
              FUN_140b8db20(*(longlong *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48),
                            "providers\\implementations\\kdfs\\argon2.c",0x539);
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            iVar1 = FUN_140b95120(lVar2,param_1 + 0x40,0,&local_res18);
            if (iVar1 != 0) {
              if (0xffffffff < local_res18) {
                FUN_140b8d990(*(undefined8 *)(param_1 + 0x40),
                              "providers\\implementations\\kdfs\\argon2.c",0x542);
                *(undefined8 *)(param_1 + 0x40) = 0;
                *(undefined4 *)(param_1 + 0x48) = 0;
                return 0;
              }
              *(int *)(param_1 + 0x48) = (int)local_res18;
              goto LAB_140d26358;
            }
          }
        }
        else if (*(longlong *)(lVar2 + 0x10) != 0) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_140b8db20(*(longlong *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                          "providers\\implementations\\kdfs\\argon2.c",0x4d8);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
          }
          iVar1 = FUN_140b95120(lVar2,param_1 + 0x30,0,&local_res18);
          if (iVar1 != 0) {
            if (0xffffffff < local_res18) {
              FUN_140b8d990(*(undefined8 *)(param_1 + 0x30),
                            "providers\\implementations\\kdfs\\argon2.c",0x4e1);
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined4 *)(param_1 + 0x38) = 0;
              return 0;
            }
            *(int *)(param_1 + 0x38) = (int)local_res18;
            goto LAB_140d262cb;
          }
        }
      }
      else if (*(longlong *)(lVar2 + 0x10) != 0) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_140b8db20(*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                        "providers\\implementations\\kdfs\\argon2.c",0x513);
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        iVar1 = FUN_140b95120(lVar2,param_1 + 0x20,0,&local_res18);
        if (iVar1 != 0) {
          if (local_res18 < 8) {
            pcVar5 = "min: %u";
            uVar4 = 8;
            uVar6 = 0x51c;
LAB_140d261ee:
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\kdfs\\argon2.c",uVar6,"kdf_argon2_ctx_set_salt")
            ;
            FUN_140b91cc0(0x39,0x70,pcVar5,uVar4);
            FUN_140b8d990(*(undefined8 *)(param_1 + 0x20),
                          "providers\\implementations\\kdfs\\argon2.c",0x52b);
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            return 0;
          }
          if (0xffffffff < local_res18) {
            pcVar5 = "max: %u";
            uVar6 = 0x522;
            goto LAB_140d261ee;
          }
          *(int *)(param_1 + 0x28) = (int)local_res18;
          goto LAB_140d2623e;
        }
      }
    }
    else if (*(longlong *)(lVar2 + 0x10) != 0) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_140b8db20(*(longlong *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                      "providers\\implementations\\kdfs\\argon2.c",0x4f3);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      iVar1 = FUN_140b95120(lVar2,param_1 + 0x10,0,&local_res18);
      if (iVar1 != 0) {
        if (0xffffffff < local_res18) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kdfs\\argon2.c",0x4fc,"kdf_argon2_ctx_set_pwd");
          FUN_140b91cc0(0x39,0x70,"max: %u",0xffffffff);
          FUN_140b8d990(*(undefined8 *)(param_1 + 0x10),"providers\\implementations\\kdfs\\argon2.c"
                        ,0x505);
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          return 0;
        }
        *(int *)(param_1 + 0x18) = (int)local_res18;
        goto LAB_140d2615a;
      }
    }
LAB_140d26491:
    uVar4 = 0;
  }
  return uVar4;
}

