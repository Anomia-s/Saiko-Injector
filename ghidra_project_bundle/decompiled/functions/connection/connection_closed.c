/**
 * Function: connection_closed
 * Address:  1401808f0
 * Signature: undefined connection_closed(void)
 * Body size: 2367 bytes
 */


void connection_closed(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  void *_Dst;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  char *pcVar21;
  size_t _Size;
  longlong lVar22;
  undefined8 local_1c8;
  int local_1c0 [4];
  char local_1b0;
  uint local_1ac;
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  char *local_180 [8];
  undefined1 local_140 [256];
  
  FUN_140180700();
  iVar11 = FUN_140215450(param_1[0x65],local_1c0,0);
  if (0 < iVar11) {
    puVar1 = param_1 + 0x8702;
    local_188 = param_1 + 0x67;
    local_198 = param_1 + 0x86ff;
    local_1a0 = param_1 + 0x86ba;
    local_190 = param_1 + 0x78;
    do {
      if (local_1c0[0] == 2) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
          local_180[0] = "connection closed";
          if (local_1ac - 1 < 5) {
            local_180[0] = (&PTR_s_authentication_rejected__bad_tok_140dee418)[local_1ac - 1];
          }
          index_out_of_bounds(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140dee398,
                              local_180,&local_1ac);
        }
        pcVar21 = "connection closed";
        if ((ulonglong)local_1ac < 6) {
          pcVar21 = (&PTR_DAT_140dee440)[local_1ac];
        }
        FUN_1400a3c00((longlong)param_1 + 0x43609,0x80,&DAT_141339891,pcVar21);
        param_1[0x66] = 0;
        *(undefined1 *)(param_1 + 0x86c1) = 6;
        param_1[0x6f] = 0;
        if (param_1[0x8704] != 0) {
          puVar16 = (undefined8 *)param_1[0x8703];
          if ((ulonglong)param_1[0x8704] < (ulonglong)param_1[0x8709] >> 3) {
            FUN_140098440(puVar1,*puVar16);
          }
          else {
            *(undefined8 *)puVar16[1] = 0;
            puVar16 = (undefined8 *)*puVar16;
            while (puVar16 != (undefined8 *)0x0) {
              puVar4 = (undefined8 *)*puVar16;
              thunk_FUN_140b68ba8(puVar16,0x20);
              puVar16 = puVar4;
            }
            lVar22 = param_1[0x8703];
            *(longlong *)lVar22 = lVar22;
            *(longlong *)(lVar22 + 8) = lVar22;
            param_1[0x8704] = 0;
            puVar20 = (undefined4 *)param_1[0x8705];
            puVar5 = (undefined4 *)param_1[0x8706];
            if (puVar20 != puVar5) {
              uVar6 = *(undefined4 *)(param_1 + 0x8703);
              uVar7 = *(undefined4 *)((longlong)param_1 + 0x4381c);
              uVar14 = (longlong)puVar5 + (-8 - (longlong)puVar20);
              if (0x17 < uVar14) {
                uVar14 = (uVar14 >> 3) + 1;
                uVar15 = uVar14 & 0xfffffffffffffffc;
                uVar19 = 0;
                do {
                  puVar2 = puVar20 + uVar19 * 2;
                  *puVar2 = uVar6;
                  puVar2[1] = uVar7;
                  puVar2[2] = uVar6;
                  puVar2[3] = uVar7;
                  puVar2 = puVar20 + uVar19 * 2 + 4;
                  *puVar2 = uVar6;
                  puVar2[1] = uVar7;
                  puVar2[2] = uVar6;
                  puVar2[3] = uVar7;
                  uVar19 = uVar19 + 4;
                } while (uVar15 != uVar19);
                puVar20 = puVar20 + uVar15 * 2;
                if (uVar14 == uVar15) goto LAB_140180990;
              }
              do {
                *puVar20 = uVar6;
                puVar20[1] = uVar7;
                puVar20 = puVar20 + 2;
              } while (puVar20 != puVar5);
            }
          }
        }
LAB_140180990:
        param_1[0x59] = 0;
        *(undefined1 *)((longlong)param_1 + 0x435ce) = 0;
        *(undefined2 *)((longlong)param_1 + 0x435cc) = 0;
        *(undefined4 *)(param_1 + 0x86b9) = 0x40000000;
        *(undefined2 *)((longlong)param_1 + 0x435c4) = *(undefined2 *)(param_1 + 0x8078);
        *(undefined1 *)((longlong)param_1 + 0x403c2) = 0;
        *(undefined1 *)(param_1 + 0x86bd) = 0;
      }
      else if (local_1c0[0] == 3) {
        puVar18 = *(undefined1 **)(local_1a8 + 0x10);
        uVar14 = *(ulonglong *)(local_1a8 + 0x18);
        if (*(char *)(param_1 + 0x6b) == '\x01') {
          if (uVar14 < 0x18) {
            FUN_140217730();
          }
          else {
            puVar13 = (undefined1 *)thunk_FUN_140b65d30(uVar14);
            local_180[0] = (char *)0x0;
            uVar14 = FUN_14046e370(puVar13,uVar14,puVar18,uVar14,local_188,1,local_180);
            if ((uVar14 != 0) && (local_180[0] != (char *)0x0)) {
              pcVar21 = (char *)param_1[0x6d];
              uVar15 = (longlong)local_180[0] - (longlong)pcVar21;
              puVar18 = puVar13;
              if (pcVar21 <= local_180[0] && uVar15 != 0) {
                uVar19 = param_1[0x6e] << ((byte)uVar15 & 0x3f) | 1;
                if (0x3f < uVar15) {
                  uVar19 = 1;
                }
                param_1[0x6e] = uVar19;
                param_1[0x6d] = local_180[0];
LAB_140180b76:
                puVar16 = local_190;
                cVar10 = local_1b0;
                switch(*puVar18) {
                case 2:
                  if (uVar14 != 1) {
                    if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
                      local_180[0] = "connection closed";
                      if ((byte)(puVar18[1] - 1) < 5) {
                        local_180[0] = (&PTR_s_authentication_rejected__bad_tok_140dee418)
                                       [(byte)(puVar18[1] - 1)];
                      }
                      index_out_of_bounds(DAT_14151e360,
                                          &PTR_s__opt_actions_runner__work_Platfo_140dee370,
                                          local_180,puVar18 + 1);
                    }
                    pcVar21 = "connection closed";
                    if ((byte)(puVar18[1] - 1) < 5) {
                      pcVar21 = (&PTR_s_authentication_rejected__bad_tok_140dee418)
                                [(byte)(puVar18[1] - 1)];
                    }
                    FUN_1400a3c00((longlong)param_1 + 0x43609,0x80,&DAT_141339891,pcVar21);
                    *(undefined1 *)(param_1 + 0x86c1) = 6;
                  }
                  break;
                case 4:
                  FUN_140181240(param_1,puVar18,uVar14,local_1b0 == '\x01');
                  break;
                case 5:
                  if (5 < uVar14) {
                    iVar11 = *(int *)(puVar18 + 1);
                    local_180[0] = (char *)CONCAT44(local_180[0]._4_4_,iVar11);
                    if (0xfffbffff < iVar11 - 0x40001U) {
                      iVar12 = FUN_14046f070(puVar18 + 5,local_190,(int)uVar14 + -5,iVar11);
                      local_1c8 = CONCAT44(local_1c8._4_4_,iVar12);
                      if (iVar12 == iVar11) {
                        FUN_140181240(param_1,puVar16,iVar11,cVar10 == '\x01');
                      }
                      else if (*(byte *)(DAT_14151e360 + 0x39) < 7) {
                        FUN_140b5ae00(DAT_14151e360,
                                      &PTR_s__opt_actions_runner__work_Platfo_140dee3c0,local_180,
                                      &local_1c8);
                      }
                    }
                  }
                  break;
                case 6:
                  if (uVar14 == 9) {
                    uVar14 = *(ulonglong *)(puVar18 + 1);
                    param_1[0x6f] = uVar14;
                    lVar17 = ((uVar14 >> 0x38 ^
                              (uVar14 >> 0x30 & 0xff ^
                              (uVar14 >> 0x28 & 0xff ^
                              (uVar14 >> 0x20 & 0xff ^
                              (uVar14 >> 0x18 & 0xff ^
                              (uVar14 >> 0x10 & 0xff ^
                              (uVar14 >> 8 & 0xff ^
                              (uVar14 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3)
                              * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                              0x100000001b3) * 0x100000001b3 & param_1[0x76]) * 0x10;
                    lVar22 = *(longlong *)(param_1[0x73] + 8 + lVar17);
                    if (lVar22 != param_1[0x71]) {
                      if (uVar14 != *(ulonglong *)(lVar22 + 0x10)) {
                        do {
                          if (lVar22 == *(longlong *)(param_1[0x73] + lVar17)) goto LAB_140181048;
                          lVar22 = *(longlong *)(lVar22 + 8);
                        } while (uVar14 != *(ulonglong *)(lVar22 + 0x10));
                      }
                      if (((lVar22 != param_1[0x71]) &&
                          (cVar10 = FUN_1400b8670(*param_1,*(undefined8 *)(lVar22 + 0x18)),
                          cVar10 != '\0')) &&
                         (puVar16 = (undefined8 *)
                                    FUN_1400ba4f0(*param_1,*(undefined8 *)(lVar22 + 0x18),
                                                  DAT_14151f6f8), puVar16 != (undefined8 *)0x0)) {
                        local_1a0[2] = puVar16[2];
                        uVar8 = puVar16[1];
                        *local_1a0 = *puVar16;
                        local_1a0[1] = uVar8;
                        *(undefined1 *)(param_1 + 0x86bd) = 1;
                      }
                    }
LAB_140181048:
                    iVar11 = *(int *)((longlong)param_1 + 0x4368c);
joined_r0x000140181076:
                    if (iVar11 == 0) {
                      *(undefined1 *)(param_1 + 0x86c1) = 4;
                    }
                  }
                  break;
                case 9:
                  if (uVar14 == 5) {
                    iVar11 = *(int *)(puVar18 + 1);
                    *(int *)((longlong)param_1 + 0x4368c) = iVar11;
                    *(undefined4 *)(param_1 + 0x86d2) = 0;
                    goto joined_r0x000140181076;
                  }
                  break;
                case 10:
                  if (2 < uVar14) {
                    bVar9 = puVar18[2];
                    uVar15 = (ulonglong)bVar9 + 3;
                    _Size = uVar14 - uVar15;
                    if (uVar15 <= uVar14) {
                      memset(local_180,0,0x140);
                      if (0x3e < bVar9) {
                        bVar9 = 0x3f;
                      }
                      memcpy(local_180,puVar18 + 3,(ulonglong)bVar9);
                      *(undefined1 *)((longlong)local_180 + (ulonglong)bVar9) = 0;
                      if (0xfe < _Size) {
                        _Size = 0xff;
                      }
                      memcpy(local_140,puVar18 + uVar15,_Size);
                      local_140[_Size] = 0;
                      _Dst = (void *)param_1[0x8700];
                      if (_Dst == (void *)param_1[0x8701]) {
                        FUN_140183670(local_198,_Dst,local_180);
                      }
                      else {
                        memcpy(_Dst,local_180,0x140);
                        param_1[0x8700] = param_1[0x8700] + 0x140;
                      }
                    }
                  }
                  break;
                case 0xc:
                  if (2 < uVar14) {
                    uVar3 = *(ushort *)(puVar18 + 1);
                    if ((ulonglong)uVar3 * 9 + 3 <= uVar14) {
                      if (param_1[0x8704] != 0) {
                        puVar16 = (undefined8 *)param_1[0x8703];
                        if ((ulonglong)param_1[0x8704] < (ulonglong)param_1[0x8709] >> 3) {
                          FUN_140098440(puVar1,*puVar16);
                        }
                        else {
                          *(undefined8 *)puVar16[1] = 0;
                          puVar16 = (undefined8 *)*puVar16;
                          while (puVar16 != (undefined8 *)0x0) {
                            puVar4 = (undefined8 *)*puVar16;
                            thunk_FUN_140b68ba8(puVar16,0x20);
                            puVar16 = puVar4;
                          }
                          lVar22 = param_1[0x8703];
                          *(longlong *)lVar22 = lVar22;
                          *(longlong *)(lVar22 + 8) = lVar22;
                          param_1[0x8704] = 0;
                          puVar20 = (undefined4 *)param_1[0x8705];
                          puVar5 = (undefined4 *)param_1[0x8706];
                          if (puVar20 != puVar5) {
                            uVar6 = *(undefined4 *)(param_1 + 0x8703);
                            uVar7 = *(undefined4 *)((longlong)param_1 + 0x4381c);
                            uVar14 = (longlong)puVar5 + (-8 - (longlong)puVar20);
                            if (0x17 < uVar14) {
                              uVar14 = (uVar14 >> 3) + 1;
                              uVar15 = uVar14 & 0xfffffffffffffffc;
                              uVar19 = 0;
                              do {
                                puVar2 = puVar20 + uVar19 * 2;
                                *puVar2 = uVar6;
                                puVar2[1] = uVar7;
                                puVar2[2] = uVar6;
                                puVar2[3] = uVar7;
                                puVar2 = puVar20 + uVar19 * 2 + 4;
                                *puVar2 = uVar6;
                                puVar2[1] = uVar7;
                                puVar2[2] = uVar6;
                                puVar2[3] = uVar7;
                                uVar19 = uVar19 + 4;
                              } while (uVar15 != uVar19);
                              puVar20 = puVar20 + uVar15 * 2;
                              if (uVar14 == uVar15) goto LAB_1401811ac;
                            }
                            do {
                              *puVar20 = uVar6;
                              puVar20[1] = uVar7;
                              puVar20 = puVar20 + 2;
                            } while (puVar20 != puVar5);
                          }
                        }
                      }
LAB_1401811ac:
                      if (uVar3 != 0) {
                        lVar22 = 0;
                        do {
                          local_1c8 = *(undefined8 *)(puVar18 + lVar22 + 3);
                          cVar10 = puVar18[lVar22 + 0xb];
                          unordered_map_set_too_long(puVar1,local_180,&local_1c8);
                          local_180[0][0x18] = cVar10;
                          lVar22 = lVar22 + 9;
                        } while ((ulonglong)uVar3 * 9 != lVar22);
                      }
                    }
                  }
                }
                if (puVar13 != (undefined1 *)0x0) {
                  thunk_FUN_140b68ba8(puVar13);
                }
                goto LAB_140181210;
              }
              uVar15 = (longlong)pcVar21 - (longlong)local_180[0];
              if (uVar15 < 0x40) {
                if (((ulonglong)param_1[0x6e] >> (uVar15 & 0x3f) & 1) == 0) {
                  param_1[0x6e] = param_1[0x6e] | 1L << ((byte)uVar15 & 0x3f);
                  goto LAB_140180b76;
                }
              }
            }
            thunk_FUN_140b68ba8(puVar13);
            FUN_140217730(local_1a8);
          }
        }
        else {
          if (uVar14 != 0) {
            puVar13 = (undefined1 *)0x0;
            goto LAB_140180b76;
          }
LAB_140181210:
          FUN_140217730(local_1a8);
        }
      }
      iVar11 = FUN_140215450(param_1[0x65],local_1c0,0);
    } while (0 < iVar11);
  }
  return;
}

