/**
 * Function: invalid_server_public_key
 * Address:  14017fdf0
 * Signature: undefined invalid_server_public_key(void)
 * Body size: 2089 bytes
 */


ulonglong invalid_server_public_key
                    (longlong param_1,undefined8 param_2,ushort param_3,undefined8 *param_4,
                    undefined8 *param_5,char param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffdc8;
  int local_218 [8];
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong local_1d0;
  char local_1c0;
  undefined1 local_1bf [263];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [4];
  ushort local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  ushort local_4a [5];
  
  local_4a[1] = 0xfffe;
  local_4a[2] = 0xffff;
  local_4a[3] = 0xffff;
  local_4a[4] = 0xffff;
  if (*(longlong *)(param_1 + 0x328) == 0) {
    plVar1 = (longlong *)(param_1 + 0x328);
    uVar6 = in_stack_fffffffffffffdc8 & 0xffffffff00000000;
    local_88 = param_2;
    local_4a[0] = param_3;
    lVar4 = FUN_140217780(0,1,3,0,uVar6);
    uVar11 = (undefined4)(uVar6 >> 0x20);
    *plVar1 = lVar4;
    if (lVar4 == 0) {
      builtin_strncpy((char *)(param_1 + 0x43617),"te netwo",8);
      builtin_strncpy((char *)(param_1 + 0x4361f),"rk host",8);
      builtin_strncpy((char *)(param_1 + 0x43609),"Could no",8);
      builtin_strncpy((char *)(param_1 + 0x43611),"t create",8);
    }
    else {
      FUN_140218500(local_90,param_2);
      local_8c = param_3;
      lVar4 = FUN_140217b50(*(undefined8 *)(param_1 + 0x328),local_90,3,0);
      *(longlong *)(param_1 + 0x330) = lVar4;
      if (lVar4 == 0) {
        FUN_140217ab0(*(undefined8 *)(param_1 + 0x328));
        *(undefined8 *)(param_1 + 0x328) = 0;
        builtin_strncpy((char *)(param_1 + 0x43609),"Could no",8);
        builtin_strncpy((char *)(param_1 + 0x43611),"t initia",8);
        builtin_strncpy((char *)(param_1 + 0x43617),"iate con",8);
        builtin_strncpy((char *)(param_1 + 0x4361f),"nection",8);
      }
      else {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        iVar3 = FUN_140215450(*plVar1,local_218,5000);
        if ((iVar3 < 1) || (local_218[0] != 1)) {
          FUN_1400a3c00(param_1 + 0x43609,0x80,"Server unreachable (%s:%u)",param_2,
                        CONCAT44(uVar11,(uint)param_3));
        }
        else {
          FUN_140214130(*(undefined8 *)(param_1 + 0x330),0,15000,30000);
          *(undefined1 *)(param_1 + 0x43608) = 2;
          lVar4 = param_5[2];
          if (lVar4 == 0) {
            if (param_6 == '\0') {
              iVar3 = FUN_140215450(*plVar1,&local_1f8,500);
              if ((0 < iVar3) && ((int)local_1f8 == 3)) {
                FUN_140217730(CONCAT44(uStack_1dc,uStack_1e0));
              }
              local_78 = 0;
              lStack_70 = 0;
              local_68 = 0;
              local_58 = (char *)CONCAT71(local_58._1_7_,1);
              FUN_1401806e0(&local_78,&local_58);
              puVar2 = param_4 + 2;
              if (0xf < (ulonglong)param_4[3]) {
                param_4 = (undefined8 *)*param_4;
              }
              FUN_140183430(&local_78,lStack_70,param_4,*puVar2);
              uVar9 = FUN_140217690(local_78,lStack_70 - local_78,1);
              FUN_140213780(*(undefined8 *)(param_1 + 0x330),0,uVar9);
              FUN_1400017d0(&local_78);
LAB_14018042c:
              FUN_140214b00(*(undefined8 *)(param_1 + 0x328));
              *(undefined1 *)(param_1 + 0x43608) = 3;
              uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
              if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
                local_1f8 = " (encrypted)";
                if (lVar4 == 0) {
                  local_1f8 = "";
                }
                FUN_140b5a970(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee348,
                              &local_88,local_4a,&local_1f8);
              }
              goto LAB_140180363;
            }
            if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
              FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee2a8);
            }
            builtin_strncpy((char *)(param_1 + 0x43628),"er key p",8);
            builtin_strncpy((char *)(param_1 + 0x43630),"rovided",8);
            builtin_strncpy((char *)(param_1 + 0x43619),"red but ",8);
            builtin_strncpy((char *)(param_1 + 0x43621),"no serve",8);
            uVar11._0_1_ = 'E';
            uVar11._1_1_ = 'n';
            uVar11._2_1_ = 'c';
            uVar11._3_1_ = 'r';
            uVar12._0_1_ = 'y';
            uVar12._1_1_ = 'p';
            uVar12._2_1_ = 't';
            uVar12._3_1_ = 'i';
            uVar13._0_1_ = 'o';
            uVar13._1_1_ = 'n';
            uVar13._2_1_ = ' ';
            uVar13._3_1_ = 'r';
            uVar14._0_1_ = 'e';
            uVar14._1_1_ = 'q';
            uVar14._2_1_ = 'u';
            uVar14._3_1_ = 'i';
          }
          else {
            if (0xf < (ulonglong)param_5[3]) {
              param_5 = (undefined8 *)*param_5;
            }
            lVar5 = FUN_14046e5c0(&local_b8,0x20,param_5,lVar4);
            if (lVar5 == 0x20) {
              local_80 = lVar4;
              FUN_14005b880(&local_1f8);
              lVar4 = (longlong)local_1f8 + 5000000000;
LAB_14017ffd3:
              do {
                do {
                  uVar6 = _Query_perf_frequency();
                  uVar7 = _Query_perf_counter();
                  if (uVar6 == 24000000) {
                    uVar6 = ((longlong)uVar7 / 24000000) * 1000000000;
                    lVar5 = (((longlong)uVar7 % 24000000) * 1000000000) / 24000000;
LAB_140180089:
                    lVar5 = lVar5 + uVar6;
                  }
                  else {
                    if (uVar6 != 10000000) {
                      if ((uVar7 | uVar6) >> 0x20 == 0) {
                        uVar8 = (uVar7 & 0xffffffff) / (uVar6 & 0xffffffff);
                        uVar7 = (uVar7 & 0xffffffff) % (uVar6 & 0xffffffff);
                      }
                      else {
                        uVar8 = (longlong)uVar7 / (longlong)uVar6;
                        uVar7 = (longlong)uVar7 % (longlong)uVar6;
                      }
                      uVar7 = uVar7 * 1000000000;
                      if ((uVar6 | uVar7) >> 0x20 == 0) {
                        uVar6 = (uVar7 & 0xffffffff) / (uVar6 & 0xffffffff);
                      }
                      else {
                        uVar6 = (longlong)uVar7 / (longlong)uVar6;
                      }
                      lVar5 = uVar8 * 1000000000;
                      goto LAB_140180089;
                    }
                    lVar5 = uVar7 * 100;
                  }
                  if (lVar4 <= lVar5) {
LAB_1401802da:
                    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                      FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee320)
                      ;
                    }
                    builtin_strncpy((char *)(param_1 + 0x43615),"nge from",8);
                    builtin_strncpy((char *)(param_1 + 0x4361d)," server",8);
                    uVar11._0_1_ = 'N';
                    uVar11._1_1_ = 'o';
                    uVar11._2_1_ = ' ';
                    uVar11._3_1_ = 'k';
                    uVar12._0_1_ = 'e';
                    uVar12._1_1_ = 'y';
                    uVar12._2_1_ = ' ';
                    uVar12._3_1_ = 'e';
                    uVar13._0_1_ = 'x';
                    uVar13._1_1_ = 'c';
                    uVar13._2_1_ = 'h';
                    uVar13._3_1_ = 'a';
                    uVar14._0_1_ = 'n';
                    uVar14._1_1_ = 'g';
                    uVar14._2_1_ = 'e';
                    uVar14._3_1_ = ' ';
                    goto LAB_14018030a;
                  }
                  uVar6 = _Query_perf_frequency();
                  uVar7 = _Query_perf_counter();
                  if (uVar6 == 24000000) {
                    uVar6 = ((longlong)uVar7 / 24000000) * 1000000000;
                    lVar5 = (((longlong)uVar7 % 24000000) * 1000000000) / 24000000;
LAB_14018014b:
                    lVar5 = lVar5 + uVar6;
                  }
                  else {
                    if (uVar6 != 10000000) {
                      if ((uVar7 | uVar6) >> 0x20 == 0) {
                        uVar8 = (uVar7 & 0xffffffff) / (uVar6 & 0xffffffff);
                        uVar7 = (uVar7 & 0xffffffff) % (uVar6 & 0xffffffff);
                      }
                      else {
                        uVar8 = (longlong)uVar7 / (longlong)uVar6;
                        uVar7 = (longlong)uVar7 % (longlong)uVar6;
                      }
                      uVar7 = uVar7 * 1000000000;
                      if ((uVar6 | uVar7) >> 0x20 == 0) {
                        uVar6 = (uVar7 & 0xffffffff) / (uVar6 & 0xffffffff);
                      }
                      else {
                        uVar6 = (longlong)uVar7 / (longlong)uVar6;
                      }
                      lVar5 = uVar8 * 1000000000;
                      goto LAB_14018014b;
                    }
                    lVar5 = uVar7 * 100;
                  }
                  lVar5 = (lVar4 - lVar5) / 1000000;
                  if (lVar5 < 1) {
                    lVar5 = 0;
                  }
                  iVar3 = FUN_140215450(*plVar1,&local_1f8,lVar5);
                  if (iVar3 < 0) goto LAB_1401802da;
                } while (iVar3 == 0);
                if ((int)local_1f8 == 3) {
                  lVar5 = CONCAT44(uStack_1dc,uStack_1e0);
                  if ((*(longlong *)(lVar5 + 0x18) == 0x41) && (**(char **)(lVar5 + 0x10) == '\a'))
                  {
                    iVar3 = FUN_14046e9f0(*(char **)(lVar5 + 0x10) + 1,&local_b8,0x20);
                    if (iVar3 != 0) {
                      if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                        FUN_140b53500(DAT_14151e360,
                                      &PTR_s__opt_actions_runner__work_Platfo_140dee2f8);
                      }
                      FUN_140217730(CONCAT44(uStack_1dc,uStack_1e0));
                      builtin_strncpy((char *)(param_1 + 0x43619),"tch (pos",8);
                      builtin_strncpy((char *)(param_1 + 0x43621),"sible MI",8);
                      builtin_strncpy((char *)(param_1 + 0x43609),"Serv",4);
                      builtin_strncpy((char *)(param_1 + 0x4360d),"er k",4);
                      builtin_strncpy((char *)(param_1 + 0x43611),"ey m",4);
                      builtin_strncpy((char *)(param_1 + 0x43615),"isma",4);
                      *(undefined4 *)(param_1 + 0x43629) = 0x294d54;
                      goto LAB_140180311;
                    }
                    lVar4 = *(longlong *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x10);
                    local_78 = *(longlong *)(lVar4 + 0x21);
                    lStack_70 = *(longlong *)(lVar4 + 0x29);
                    local_68 = *(undefined8 *)(lVar4 + 0x31);
                    uStack_60 = *(undefined4 *)(lVar4 + 0x39);
                    uStack_5c = *(undefined4 *)(lVar4 + 0x3d);
                    FUN_140217730();
                    lVar4 = local_80;
                    puVar2 = param_4 + 2;
                    if (0xf < (ulonglong)param_4[3]) {
                      param_4 = (undefined8 *)*param_4;
                    }
                    token_encryption_failed
                              (&local_1f8,*(undefined8 *)(param_1 + 0x328),
                               *(undefined8 *)(param_1 + 0x330),param_4,*puVar2,&local_b8,&local_78)
                    ;
                    if (local_1c0 != '\0') {
                      *(undefined4 *)(param_1 + 0x348) = local_1e8;
                      *(uint *)(param_1 + 0x34c) = uStack_1e4;
                      *(undefined4 *)(param_1 + 0x350) = uStack_1e0;
                      *(undefined4 *)(param_1 + 0x354) = uStack_1dc;
                      *(int *)(param_1 + 0x338) = (int)local_1f8;
                      *(undefined4 *)(param_1 + 0x33c) = local_1f8._4_4_;
                      *(undefined4 *)(param_1 + 0x340) = uStack_1f0;
                      *(undefined4 *)(param_1 + 0x344) = uStack_1ec;
                      FUN_14046e980(&local_1f8,0x20);
                      *(undefined1 *)(param_1 + 0x358) = 1;
                      uVar9 = FUN_140217690(local_1d8,local_1d0 - local_1d8,1);
                      FUN_140213780(*(undefined8 *)(param_1 + 0x330),0,uVar9);
                      FUN_140180660(&local_1f8);
                      goto LAB_14018042c;
                    }
                    FUN_1400a3c00(param_1 + 0x43609,0x80,&DAT_141339891,local_1bf);
                    FUN_140180660(&local_1f8);
                    goto LAB_140180311;
                  }
                  FUN_140217730(lVar5);
                  goto LAB_14017ffd3;
                }
              } while ((int)local_1f8 != 2);
              if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
                if (uStack_1e4 - 1 < 5) {
                  local_58 = (&PTR_s_authentication_rejected__bad_tok_140dee418)[uStack_1e4 - 1];
                }
                else {
                  local_58 = "connection closed";
                }
                index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee2d0,
                                    &local_58,&uStack_1e4);
              }
              if ((ulonglong)uStack_1e4 < 6) {
                pcVar10 = (&PTR_s_Server_disconnected_during_key_e_140dee3e8)[uStack_1e4];
              }
              else {
                pcVar10 = "connection closed";
              }
              FUN_1400a3c00(param_1 + 0x43609,0x80,&DAT_141339891,pcVar10);
              goto LAB_140180311;
            }
            if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
              FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee280);
            }
            builtin_strncpy((char *)(param_1 + 0x43613),"rver pub",8);
            builtin_strncpy((char *)(param_1 + 0x4361b),"lic key",8);
            uVar11._0_1_ = 'I';
            uVar11._1_1_ = 'n';
            uVar11._2_1_ = 'v';
            uVar11._3_1_ = 'a';
            uVar12._0_1_ = 'l';
            uVar12._1_1_ = 'i';
            uVar12._2_1_ = 'd';
            uVar12._3_1_ = ' ';
            uVar13._0_1_ = 's';
            uVar13._1_1_ = 'e';
            uVar13._2_1_ = 'r';
            uVar13._3_1_ = 'v';
            uVar14._0_1_ = 'e';
            uVar14._1_1_ = 'r';
            uVar14._2_1_ = ' ';
            uVar14._3_1_ = 'p';
          }
LAB_14018030a:
          *(undefined4 *)(param_1 + 0x43609) = uVar11;
          *(undefined4 *)(param_1 + 0x4360d) = uVar12;
          *(undefined4 *)(param_1 + 0x43611) = uVar13;
          *(undefined4 *)(param_1 + 0x43615) = uVar14;
        }
LAB_140180311:
        FUN_140213fd0(*(undefined8 *)(param_1 + 0x330));
        FUN_140217ab0(*(undefined8 *)(param_1 + 0x328));
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x330) = 0;
        if (*(char *)(param_1 + 0x43608) == '\x05') goto LAB_140180361;
        builtin_strncpy((char *)(param_1 + 0x43609),"Authenti",8);
        builtin_strncpy((char *)(param_1 + 0x43611),"cation f",8);
        *(undefined8 *)(param_1 + 0x43617) = 0x64656c69616620;
      }
    }
    *(undefined1 *)(param_1 + 0x43608) = 5;
  }
LAB_140180361:
  uVar6 = 0;
LAB_140180363:
  return uVar6 & 0xffffffff;
}

