/**
 * Function: animation_missing_canonical_rig_at_sn
 * Address:  14020bb40
 * Signature: undefined animation_missing_canonical_rig_at_sn(void)
 * Body size: 8091 bytes
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * animation_missing_canonical_rig_at_sn(ulonglong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  undefined2 *puVar3;
  undefined1 (*pauVar4) [32];
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  size_t _Size;
  longlong lVar20;
  undefined8 *puVar21;
  undefined2 *puVar22;
  undefined4 *puVar23;
  void *_Dst;
  byte bVar24;
  uint uVar25;
  undefined1 auVar26 [8];
  undefined8 *******pppppppuVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined **ppuVar31;
  undefined2 *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  longlong *plVar38;
  float *pfVar39;
  ulonglong *puVar40;
  undefined4 *puVar41;
  undefined1 (*pauVar42) [32];
  longlong lVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  undefined1 (*pauVar46) [32];
  longlong *plVar47;
  undefined8 *puVar48;
  undefined1 *puVar49;
  char *pcVar50;
  longlong lVar51;
  bool bVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [16];
  undefined1 in_register_00001344 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined2 *puStack_1f8;
  undefined2 *puStack_1f0;
  undefined1 local_1e8 [64];
  undefined1 local_1a8 [8];
  undefined **ppuStack_1a0;
  undefined1 auStack_198 [16];
  ulonglong uStack_190;
  undefined1 local_188 [32];
  undefined8 local_160;
  undefined8 *******local_158 [3];
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  undefined8 *******local_128;
  undefined8 local_120;
  undefined **local_118;
  ulonglong local_110;
  undefined1 local_108 [8];
  float *pfStack_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 (*local_e0) [32];
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined **ppuStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  undefined **ppuStack_b8;
  undefined4 *puStack_b0;
  longlong lStack_a8;
  undefined1 (*local_a0) [32];
  ulonglong local_98;
  longlong *local_90;
  undefined1 (*local_88) [32];
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_98 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x140) < DAT_1416b6c90) && (FUN_140b6864c(&DAT_1416b6c90), DAT_1416b6c90 == -1)) {
    FUN_140210270();
    atexit(FUN_140210450);
    _Init_thread_footer(&DAT_1416b6c90);
  }
  iVar13 = _Mtx_lock(&DAT_1416b6bc0);
  if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (DAT_1416b6c0c == 0x7fffffff) {
    DAT_1416b6c0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar15 = ((param_1 >> 0x30 & 0xff ^
            (param_1 >> 0x28 & 0xff ^
            (param_1 >> 0x20 & 0xff ^
            (param_1 >> 0x18 & 0xff ^
            (param_1 >> 0x10 & 0xff ^
            (param_1 >> 8 & 0xff ^ (param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3 ^ param_1 >> 0x38) * 0x100000001b3;
  uVar33 = DAT_1416b6c40 & uVar15;
  pauVar19 = (undefined1 (*) [32])DAT_1416b6c28[uVar33 * 2 + 1];
  if (pauVar19 != DAT_1416b6c18) {
    if (param_1 != *(ulonglong *)(*pauVar19 + 0x10)) {
      do {
        if (pauVar19 == (undefined1 (*) [32])DAT_1416b6c28[uVar33 * 2]) goto LAB_14020bcbd;
        pauVar19 = *(undefined1 (**) [32])(*pauVar19 + 8);
      } while (param_1 != *(ulonglong *)(*pauVar19 + 0x10));
    }
    if (pauVar19 != DAT_1416b6c18) {
      puVar49 = *pauVar19 + 0x18;
      goto LAB_14020c12e;
    }
  }
LAB_14020bcbd:
  lVar16 = (uVar15 & _DAT_1416b6c80) * 0x10;
  lVar43 = *(longlong *)(DAT_1416b6c68 + 8 + lVar16);
  if (lVar43 != DAT_1416b6c58) {
    if (param_1 == *(ulonglong *)(lVar43 + 0x10)) {
      puVar49 = (undefined1 *)0x0;
    }
    else {
      puVar49 = (undefined1 *)0x0;
      do {
        if (lVar43 == *(longlong *)(DAT_1416b6c68 + lVar16)) goto LAB_14020bd14;
        lVar43 = *(longlong *)(lVar43 + 8);
      } while (param_1 != *(ulonglong *)(lVar43 + 0x10));
    }
    goto LAB_14020c12e;
  }
LAB_14020bd14:
  puStack_1f8 = (undefined2 *)0x0;
  puStack_1f0 = (undefined2 *)0x0;
  local_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_200 = 0;
  auVar2._28_4_ = 0;
  auVar2._0_28_ = stack0xfffffffffffffe5c;
  _local_1a8 = auVar2 << 0x20;
  FUN_140210830(local_1e8,local_1a8,&local_d8);
  if (param_1 == 0) {
    local_d8 = 0xd2;
    uStack_d7 = 0xee;
    uStack_d6 = 0x4135;
    uStack_d4 = 1;
    ppuStack_d0 = (undefined **)0xd;
    uVar14 = FUN_140b6625c();
    FUN_140004460(local_1a8,uVar14,&local_d8);
    local_128 = (undefined8 *******)&DAT_1413355ff;
    local_120 = 4;
    uVar14 = FUN_140b6625c();
    FUN_140004460(local_158,uVar14,&local_128);
    uVar17 = FUN_14022dd80();
    FUN_140003330(&local_d8,uVar17,local_158);
    FUN_140003330(&local_128,&local_d8,local_1a8);
    if (&DAT_00000007 < puStack_c0) {
      lVar16 = CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)));
      uVar15 = (longlong)puStack_c0 * 2 + 2;
      lVar43 = lVar16;
      if (0xfff < uVar15) {
        lVar43 = *(longlong *)(lVar16 + -8);
        if (0x1f < (ulonglong)((lVar16 + -8) - lVar43)) goto LAB_14020da20;
        uVar15 = (longlong)puStack_c0 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(lVar43,uVar15);
    }
    puStack_c8 = (undefined4 *)0x0;
    puStack_c0 = (undefined4 *)&DAT_00000007;
    local_d8 = 0;
    uStack_d7 = 0;
    if (7 < local_140) {
      uVar15 = local_140 * 2 + 2;
      pppppppuVar27 = local_158[0];
      if (0xfff < uVar15) {
        pppppppuVar27 = (undefined8 *******)local_158[0][-1];
        if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)pppppppuVar27)))
        goto LAB_14020da20;
        uVar15 = local_140 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppppuVar27,uVar15);
    }
    if (7 < uStack_190) {
      uVar15 = uStack_190 * 2 + 2;
      auVar26 = local_1a8;
      if (0xfff < uVar15) {
        auVar26 = *(undefined1 (*) [8])((longlong)local_1a8 + -8);
        if (0x1f < (ulonglong)(((longlong)local_1a8 + -8) - (longlong)auVar26)) goto LAB_14020da20;
        uVar15 = uStack_190 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(auVar26,uVar15);
    }
    pppppppuVar27 = &local_128;
    if (7 < local_110) {
      pppppppuVar27 = local_128;
    }
    iVar13 = FUN_140b65f14(pppppppuVar27,local_1a8,3,0xffffffff);
    if (iVar13 < 0x40) {
      if (iVar13 - 2U < 2) goto LAB_14020bf32;
      if (iVar13 != 0) {
        if (iVar13 != 0x35) goto LAB_14020da89;
        goto LAB_14020bf32;
      }
      pppppppuVar27 = local_128;
      if (local_110 < 8) {
        pppppppuVar27 = &local_128;
      }
      ppuStack_1a0 = local_118;
      local_1a8 = (undefined1  [8])pppppppuVar27;
      uVar14 = FUN_140b6625c();
      FUN_14003e640(local_158,uVar14,local_1a8);
      pppppppuVar27 = local_158;
      if (0xf < local_140) {
        pppppppuVar27 = local_158[0];
      }
      _local_1a8 = ZEXT1232(ZEXT812(0));
      local_f0 = 0;
      local_188 = _local_1a8;
      iVar13 = FUN_140500280(local_1a8,pppppppuVar27,&local_f0);
      if (iVar13 == 0) {
        iVar13 = FUN_1405004d0(local_1a8,local_f0);
        if (iVar13 != 0) {
          FUN_140500ab0(local_f0);
          goto LAB_14020c400;
        }
        auVar64 = ZEXT1264(ZEXT812(0));
        auVar66 = ZEXT1264(ZEXT812(0));
        auVar67 = ZEXT1664(ZEXT816(0x40cc200000000000));
        for (uVar15 = 0; lVar43 = local_f0, uVar15 < *(ulonglong *)(local_f0 + 0x138);
            uVar15 = uVar15 + 1) {
          pauVar19 = (undefined1 (*) [32])FUN_140b65d30(0x40);
          *pauVar19 = ZEXT1232(ZEXT812(0));
          *(undefined8 *)pauVar19[1] = 0;
          *(undefined8 *)(*pauVar19 + 0x18) = 0xf;
          pauVar19[1][4] = 1;
          *(undefined1 (*) [16])(pauVar19[1] + 8) = auVar64._0_16_;
          *(undefined8 *)(pauVar19[1] + 0x18) = 0;
          lVar43 = *(longlong *)(lVar43 + 0x130);
          pcVar50 = *(char **)(lVar43 + uVar15 * 0x50);
          if (pcVar50 == (char *)0x0) {
            pcVar50 = "";
          }
          auVar64 = ZEXT1664(auVar64._0_16_);
          auVar66 = ZEXT1664(auVar66._0_16_);
          auVar67 = ZEXT1664(auVar67._0_16_);
          local_e8 = uVar15;
          _Size = strlen(pcVar50);
          if (_Size < 0x10) {
            *(size_t *)(*pauVar19 + 0x10) = _Size;
            memmove(pauVar19,pcVar50,_Size);
            (*pauVar19)[_Size] = 0;
            lVar16 = *(longlong *)(*pauVar19 + 0x10);
          }
          else {
            local_a0 = pauVar19;
            FUN_1400069b0(pauVar19,_Size);
            lVar16 = *(longlong *)(*pauVar19 + 0x10);
          }
          bVar52 = true;
          if (lVar16 == 4) {
            pauVar42 = pauVar19;
            if (0xf < *(ulonglong *)(*pauVar19 + 0x18)) {
              pauVar42 = *(undefined1 (**) [32])*pauVar19;
            }
            bVar52 = *(int *)*pauVar42 != 0x706d756a;
          }
          plVar47 = (longlong *)(pauVar19[1] + 8);
          lVar43 = lVar43 + uVar15 * 0x50;
          pauVar19[1][4] = bVar52;
          uVar15 = *(ulonglong *)(lVar43 + 0x20);
          lVar16 = *(longlong *)(pauVar19[1] + 8);
          local_88 = pauVar19;
          if ((ulonglong)((*(longlong *)(pauVar19[1] + 0x18) - lVar16 >> 3) * 0x6db6db6db6db6db7) <
              uVar15) {
            if (0x492492492492492 < uVar15) {
              local_a0 = pauVar19;
                    /* WARNING: Subroutine does not return */
              vector_too_long();
            }
            lVar35 = *(longlong *)(pauVar19[1] + 0x10);
            lVar51 = uVar15 * 0x38;
            if (uVar15 < 0x4a) {
              local_a0 = pauVar19;
              uVar15 = FUN_140b65d30(lVar51);
            }
            else {
              if (uVar15 == 0x492492492492492) {
                local_a0 = pauVar19;
                    /* WARNING: Subroutine does not return */
                std::bad_array_new_length::bad_array_new_length();
              }
              local_a0 = pauVar19;
              lVar20 = FUN_140b65d30(lVar51 + 0x27);
              uVar15 = lVar20 + 0x27U & 0xffffffffffffffe0;
              *(longlong *)(uVar15 - 8) = lVar20;
            }
            pauVar19 = local_88;
            lVar20 = *(longlong *)(local_88[1] + 8);
            lVar30 = *(longlong *)(local_88[1] + 0x10);
            if (lVar20 != lVar30) {
              lVar34 = 0;
              do {
                *(undefined2 *)(uVar15 + lVar34) = *(undefined2 *)(lVar20 + lVar34);
                uVar17 = *(undefined8 *)(lVar20 + 0x18 + lVar34);
                *(undefined8 *)(lVar20 + 0x18 + lVar34) = 0;
                puVar21 = (undefined8 *)(lVar20 + 8 + lVar34);
                uVar6 = *puVar21;
                uVar7 = puVar21[1];
                *(undefined1 (*) [16])(lVar20 + 8 + lVar34) = auVar64._0_16_;
                puVar21 = (undefined8 *)(uVar15 + 8 + lVar34);
                *puVar21 = uVar6;
                puVar21[1] = uVar7;
                *(undefined8 *)(uVar15 + 0x18 + lVar34) = uVar17;
                uVar17 = *(undefined8 *)(lVar20 + 0x30 + lVar34);
                *(undefined8 *)(lVar20 + 0x30 + lVar34) = 0;
                auVar63 = *(undefined1 (*) [16])(lVar20 + 0x20 + lVar34);
                *(undefined1 (*) [16])(lVar20 + 0x20 + lVar34) = auVar64._0_16_;
                *(undefined1 (*) [16])(uVar15 + 0x20 + lVar34) = auVar63;
                *(undefined8 *)(uVar15 + 0x30 + lVar34) = uVar17;
                lVar1 = lVar20 + lVar34;
                lVar34 = lVar34 + 0x38;
              } while (lVar1 + 0x38 != lVar30);
              lVar20 = *plVar47;
            }
            if (lVar20 != 0) {
              local_90 = plVar47;
              FUN_140210d30(lVar20,*(undefined8 *)(local_88[1] + 0x10));
              plVar47 = local_90;
              lVar20 = *(longlong *)(pauVar19[1] + 8);
              uVar33 = *(longlong *)(pauVar19[1] + 0x18) - lVar20;
              lVar30 = lVar20;
              if (0xfff < uVar33) {
                lVar30 = *(longlong *)(lVar20 + -8);
                if (0x1f < (ulonglong)((lVar20 + -8) - lVar30)) goto LAB_14020da20;
                uVar33 = uVar33 + 0x27;
              }
              thunk_FUN_140b68ba8(lVar30,uVar33);
            }
            *(ulonglong *)(local_88[1] + 8) = uVar15;
            *(ulonglong *)(local_88[1] + 0x10) = (lVar35 - lVar16) + uVar15;
            *(ulonglong *)(local_88[1] + 0x18) = lVar51 + uVar15;
          }
          uVar15 = 0;
          local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
          while( true ) {
            auVar54 = auVar67._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            if (*(ulonglong *)(lVar43 + 0x20) <= uVar15) break;
            puVar21 = *(undefined8 **)(*(longlong *)(lVar43 + 0x18) + 8 + uVar15 * 0x40);
            if ((((puVar21 != (undefined8 *)0x0) &&
                 (plVar38 = (longlong *)(*(longlong *)(lVar43 + 0x18) + uVar15 * 0x40),
                 *plVar38 != 0)) && ((int)plVar38[2] == 2)) &&
               (pcVar50 = (char *)*puVar21, pcVar50 != (char *)0x0)) {
              iVar13 = strcmp(pcVar50,"Head");
              auVar54 = auVar67._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
              if (iVar13 == 0) {
                uVar11 = 0;
              }
              else {
                iVar13 = strcmp(pcVar50,"Torso");
                auVar54 = auVar67._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                if (iVar13 == 0) {
                  uVar11 = 1;
                }
                else {
                  iVar13 = strcmp(pcVar50,"Arm.L");
                  auVar54 = auVar67._0_16_;
                  auVar65 = auVar66._0_16_;
                  auVar63 = auVar64._0_16_;
                  uVar11 = 2;
                  if (iVar13 != 0) {
                    iVar13 = strcmp(pcVar50,"LeftArm");
                    auVar54 = auVar67._0_16_;
                    auVar65 = auVar66._0_16_;
                    auVar63 = auVar64._0_16_;
                    if (iVar13 != 0) {
                      iVar13 = strcmp(pcVar50,"Arm.R");
                      auVar54 = auVar67._0_16_;
                      auVar65 = auVar66._0_16_;
                      auVar63 = auVar64._0_16_;
                      uVar11 = 3;
                      if (iVar13 != 0) {
                        iVar13 = strcmp(pcVar50,"RightArm");
                        auVar54 = auVar67._0_16_;
                        auVar65 = auVar66._0_16_;
                        auVar63 = auVar64._0_16_;
                        if (iVar13 != 0) {
                          iVar13 = strcmp(pcVar50,"Leg.L");
                          auVar54 = auVar67._0_16_;
                          auVar65 = auVar66._0_16_;
                          auVar63 = auVar64._0_16_;
                          uVar11 = 4;
                          if (iVar13 != 0) {
                            iVar13 = strcmp(pcVar50,"LeftLeg");
                            auVar54 = auVar67._0_16_;
                            auVar65 = auVar66._0_16_;
                            auVar63 = auVar64._0_16_;
                            if (iVar13 != 0) {
                              iVar13 = strcmp(pcVar50,"Leg.R");
                              auVar54 = auVar67._0_16_;
                              auVar65 = auVar66._0_16_;
                              auVar63 = auVar64._0_16_;
                              uVar11 = 5;
                              if (iVar13 != 0) {
                                iVar13 = strcmp(pcVar50,"RightLeg");
                                auVar54 = auVar67._0_16_;
                                auVar65 = auVar66._0_16_;
                                auVar63 = auVar64._0_16_;
                                if (iVar13 != 0) goto LAB_14020c810;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_d8 = uVar11;
              puStack_b0 = (undefined4 *)0x0;
              lStack_a8 = 0;
              ppuStack_d0 = (undefined **)0x0;
              puStack_c8 = (undefined4 *)0x0;
              puStack_c0 = (undefined4 *)0x0;
              ppuStack_b8 = (undefined **)0x0;
              uStack_d7 = 0;
              local_f8 = 0;
              auVar64 = ZEXT1664(auVar63);
              auVar66 = ZEXT1664(auVar65);
              auVar67 = ZEXT1664(auVar54);
              _local_108 = auVar63;
              cVar12 = FUN_140210ef0(*(undefined8 *)*plVar38,local_108);
              if ((cVar12 == '\0') ||
                 (cVar12 = FUN_140210ef0(*(undefined8 *)(*plVar38 + 8),&ppuStack_b8), cVar12 == '\0'
                 )) {
LAB_14020ce46:
              }
              else if (local_108 != (undefined1  [8])pfStack_100) {
                local_138 = (longlong)pfStack_100 - (longlong)local_108 >> 2;
                pfVar39 = pfStack_100;
                auVar26 = local_108;
                if ((ulonglong)((longlong)pfStack_100 - (longlong)local_108) <=
                    (ulonglong)((longlong)puStack_c0 - (longlong)ppuStack_d0)) goto LAB_14020cae4;
                if (local_138 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  vector_too_long();
                }
                FUN_14020aca0(&ppuStack_d0,&local_138);
                pfVar39 = pfStack_100;
                auVar26 = local_108;
                if (local_108 != (undefined1  [8])pfStack_100) {
                  do {
                    while( true ) {
                      uVar14 = 0;
                      if (auVar66._0_4_ < *(float *)auVar26) {
                        uVar14 = lround(auVar67._0_8_ * (double)*(float *)auVar26);
                      }
                      local_138 = CONCAT44(local_138._4_4_,uVar14);
                      if (puStack_c8 == puStack_c0) break;
                      *puStack_c8 = uVar14;
                      puStack_c8 = puStack_c8 + 1;
                      auVar26 = (undefined1  [8])((longlong)auVar26 + 4);
LAB_14020cae4:
                      if (auVar26 == (undefined1  [8])pfVar39) goto LAB_14020ca20;
                    }
                    FUN_1401e93d0(&ppuStack_d0);
                    auVar26 = (undefined1  [8])((longlong)auVar26 + 4);
                  } while (auVar26 != (undefined1  [8])pfVar39);
                }
LAB_14020ca20:
                lVar16 = lStack_a8;
                puVar41 = puStack_c0;
                puVar37 = puStack_c8;
                ppuVar31 = ppuStack_d0;
                uVar25 = (uint)local_90;
                if ((uint)local_90 < (uint)puStack_c8[-1]) {
                  uVar25 = puStack_c8[-1];
                }
                local_90 = (longlong *)CONCAT44(local_90._4_4_,uVar25);
                puVar3 = *(undefined2 **)(local_88[1] + 0x10);
                if (puVar3 != *(undefined2 **)(local_88[1] + 0x18)) {
                  *puVar3 = CONCAT11(uStack_d7,local_d8);
                  puStack_c0 = (undefined4 *)0x0;
                  ppuStack_d0 = auVar64._0_8_;
                  puStack_c8 = auVar64._8_8_;
                  *(undefined ***)(puVar3 + 4) = ppuVar31;
                  *(undefined4 **)(puVar3 + 8) = puVar37;
                  *(undefined4 **)(puVar3 + 0xc) = puVar41;
                  lStack_a8 = 0;
                  auVar63._8_8_ = puStack_b0;
                  auVar63._0_8_ = ppuStack_b8;
                  *(undefined1 (*) [16])(puVar3 + 0x10) = auVar63;
                  *(longlong *)(puVar3 + 0x18) = lVar16;
                  *(longlong *)(local_88[1] + 0x10) = *(longlong *)(local_88[1] + 0x10) + 0x38;
                  ppuStack_b8 = ppuStack_d0;
                  puStack_b0 = puStack_c8;
                  goto LAB_14020ce46;
                }
                lVar16 = (longlong)puVar3 - *plVar47;
                uVar33 = (lVar16 >> 3) * 0x6db6db6db6db6db7;
                local_130 = (undefined8 *)(uVar33 + 1);
                uVar18 = 0x492492492492492 - (uVar33 >> 1);
                puVar21 = (undefined8 *)((uVar33 >> 1) + uVar33);
                if (puVar21 <= local_130) {
                  puVar21 = local_130;
                }
                if (uVar18 <= uVar33 && uVar33 - uVar18 != 0) {
                  puVar21 = (undefined8 *)0x492492492492492;
                }
                if ((undefined8 *)0x492492492492492 < puVar21) {
                    /* WARNING: Subroutine does not return */
                  std::bad_array_new_length::bad_array_new_length();
                }
                lVar35 = (longlong)puVar21 * 0x38;
                if (puVar21 == (undefined8 *)0x0) {
                  uVar33 = 0;
                }
                else if (puVar21 < (undefined8 *)0x4a) {
                  uVar33 = FUN_140b65d30(lVar35);
                }
                else {
                  if (puVar21 == (undefined8 *)0x492492492492492) {
                    /* WARNING: Subroutine does not return */
                    std::bad_array_new_length::bad_array_new_length();
                  }
                  lVar51 = FUN_140b65d30(lVar35 + 0x27);
                  uVar33 = lVar51 + 0x27U & 0xffffffffffffffe0;
                  *(longlong *)(uVar33 - 8) = lVar51;
                }
                pauVar19 = local_88;
                lVar51 = lStack_a8;
                puVar41 = puStack_c0;
                puVar37 = puStack_c8;
                ppuVar31 = ppuStack_d0;
                *(ushort *)(uVar33 + lVar16) = CONCAT11(uStack_d7,local_d8);
                puStack_c0 = (undefined4 *)0x0;
                auVar63 = auVar64._0_16_;
                ppuStack_d0 = auVar64._0_8_;
                puStack_c8 = auVar64._8_8_;
                plVar38 = (longlong *)(uVar33 + 8 + lVar16);
                *plVar38 = (longlong)ppuVar31;
                plVar38[1] = (longlong)puVar37;
                *(undefined4 **)(uVar33 + 0x18 + lVar16) = puVar41;
                lStack_a8 = 0;
                auVar65._8_8_ = puStack_b0;
                auVar65._0_8_ = ppuStack_b8;
                *(undefined1 (*) [16])(uVar33 + 0x20 + lVar16) = auVar65;
                *(longlong *)(uVar33 + 0x30 + lVar16) = lVar51;
                puVar32 = *(undefined2 **)(local_88[1] + 8);
                puVar22 = *(undefined2 **)(local_88[1] + 0x10);
                if (puVar3 == puVar22) {
                  if (puVar32 != puVar3) {
                    lVar16 = 0;
                    do {
                      *(undefined2 *)(uVar33 + lVar16) = *(undefined2 *)((longlong)puVar32 + lVar16)
                      ;
                      uVar17 = *(undefined8 *)((longlong)puVar32 + lVar16 + 0x18);
                      *(undefined8 *)((longlong)puVar32 + lVar16 + 0x18) = 0;
                      puVar21 = (undefined8 *)((longlong)puVar32 + lVar16 + 8);
                      uVar6 = *puVar21;
                      uVar7 = puVar21[1];
                      *(undefined1 (*) [16])((longlong)puVar32 + lVar16 + 8) = auVar63;
                      puVar21 = (undefined8 *)(uVar33 + 8 + lVar16);
                      *puVar21 = uVar6;
                      puVar21[1] = uVar7;
                      *(undefined8 *)(uVar33 + 0x18 + lVar16) = uVar17;
                      uVar17 = *(undefined8 *)((longlong)puVar32 + lVar16 + 0x30);
                      *(undefined8 *)((longlong)puVar32 + lVar16 + 0x30) = 0;
                      auVar65 = *(undefined1 (*) [16])((longlong)puVar32 + lVar16 + 0x20);
                      *(undefined1 (*) [16])((longlong)puVar32 + lVar16 + 0x20) = auVar63;
                      *(undefined1 (*) [16])(uVar33 + 0x20 + lVar16) = auVar65;
                      *(undefined8 *)(uVar33 + 0x30 + lVar16) = uVar17;
                      lVar51 = lVar16 + 0x38;
                      lVar16 = lVar16 + 0x38;
                    } while ((undefined2 *)((longlong)puVar32 + lVar51) != puVar3);
                    goto LAB_14020cdd4;
                  }
                }
                else {
                  if (puVar32 != puVar3) {
                    lVar51 = 0;
                    do {
                      *(undefined2 *)(uVar33 + lVar51) = *(undefined2 *)((longlong)puVar32 + lVar51)
                      ;
                      uVar17 = *(undefined8 *)((longlong)puVar32 + lVar51 + 0x18);
                      *(undefined8 *)((longlong)puVar32 + lVar51 + 0x18) = 0;
                      puVar21 = (undefined8 *)((longlong)puVar32 + lVar51 + 8);
                      uVar6 = *puVar21;
                      uVar7 = puVar21[1];
                      *(undefined1 (*) [16])((longlong)puVar32 + lVar51 + 8) = auVar63;
                      puVar21 = (undefined8 *)(uVar33 + 8 + lVar51);
                      *puVar21 = uVar6;
                      puVar21[1] = uVar7;
                      *(undefined8 *)(uVar33 + 0x18 + lVar51) = uVar17;
                      uVar17 = *(undefined8 *)((longlong)puVar32 + lVar51 + 0x30);
                      *(undefined8 *)((longlong)puVar32 + lVar51 + 0x30) = 0;
                      auVar65 = *(undefined1 (*) [16])((longlong)puVar32 + lVar51 + 0x20);
                      *(undefined1 (*) [16])((longlong)puVar32 + lVar51 + 0x20) = auVar63;
                      *(undefined1 (*) [16])(uVar33 + 0x20 + lVar51) = auVar65;
                      *(undefined8 *)(uVar33 + 0x30 + lVar51) = uVar17;
                      lVar20 = lVar51 + 0x38;
                      lVar51 = lVar51 + 0x38;
                    } while ((undefined2 *)((longlong)puVar32 + lVar20) != puVar3);
                    puVar22 = *(undefined2 **)(local_88[1] + 0x10);
                  }
                  if (puVar3 != puVar22) {
                    lVar16 = uVar33 + lVar16;
                    lVar51 = 0;
                    do {
                      *(undefined2 *)(lVar16 + 0x38 + lVar51) =
                           *(undefined2 *)((longlong)puVar3 + lVar51);
                      uVar17 = *(undefined8 *)((longlong)puVar3 + lVar51 + 0x18);
                      *(undefined8 *)((longlong)puVar3 + lVar51 + 0x18) = 0;
                      puVar21 = (undefined8 *)((longlong)puVar3 + lVar51 + 8);
                      uVar6 = *puVar21;
                      uVar7 = puVar21[1];
                      *(undefined1 (*) [16])((longlong)puVar3 + lVar51 + 8) = auVar63;
                      puVar21 = (undefined8 *)(lVar16 + 0x40 + lVar51);
                      *puVar21 = uVar6;
                      puVar21[1] = uVar7;
                      *(undefined8 *)(lVar16 + 0x50 + lVar51) = uVar17;
                      uVar17 = *(undefined8 *)((longlong)puVar3 + lVar51 + 0x30);
                      *(undefined8 *)((longlong)puVar3 + lVar51 + 0x30) = 0;
                      auVar65 = *(undefined1 (*) [16])((longlong)puVar3 + lVar51 + 0x20);
                      *(undefined1 (*) [16])((longlong)puVar3 + lVar51 + 0x20) = auVar63;
                      *(undefined1 (*) [16])(lVar16 + 0x58 + lVar51) = auVar65;
                      *(undefined8 *)(lVar16 + 0x68 + lVar51) = uVar17;
                      lVar20 = lVar51 + 0x38;
                      lVar51 = lVar51 + 0x38;
                    } while ((undefined2 *)((longlong)puVar3 + lVar20) != puVar22);
                  }
LAB_14020cdd4:
                  puVar32 = (undefined2 *)*plVar47;
                }
                ppuStack_b8 = ppuStack_d0;
                puStack_b0 = puStack_c8;
                if (puVar32 != (undefined2 *)0x0) {
                  FUN_140210d30(puVar32,*(undefined8 *)(local_88[1] + 0x10));
                  lVar16 = *(longlong *)(pauVar19[1] + 8);
                  uVar18 = *(longlong *)(pauVar19[1] + 0x18) - lVar16;
                  lVar51 = lVar16;
                  if (0xfff < uVar18) {
                    lVar51 = *(longlong *)(lVar16 + -8);
                    if (0x1f < (ulonglong)((lVar16 + -8) - lVar51)) goto LAB_14020da20;
                    uVar18 = uVar18 + 0x27;
                  }
                  thunk_FUN_140b68ba8(lVar51,uVar18);
                }
                *(ulonglong *)(local_88[1] + 8) = uVar33;
                *(ulonglong *)(local_88[1] + 0x10) = (longlong)local_130 * 0x38 + uVar33;
                *(ulonglong *)(local_88[1] + 0x18) = lVar35 + uVar33;
                goto LAB_14020ce46;
              }
              if (local_108 != (undefined1  [8])0x0) {
                uVar33 = local_f8 - (longlong)local_108;
                pfVar39 = (float *)local_108;
                if (0xfff < uVar33) {
                  pfVar39 = *(float **)((longlong)local_108 + -8);
                  if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pfVar39)))
                  goto LAB_14020da20;
                  uVar33 = uVar33 + 0x27;
                }
                thunk_FUN_140b68ba8(pfVar39,uVar33);
              }
              if (ppuStack_b8 != (undefined **)0x0) {
                uVar33 = lStack_a8 - (longlong)ppuStack_b8;
                ppuVar31 = ppuStack_b8;
                if (0xfff < uVar33) {
                  ppuVar31 = (undefined **)ppuStack_b8[-1];
                  if (0x1f < (ulonglong)((longlong)ppuStack_b8 + (-8 - (longlong)ppuVar31)))
                  goto LAB_14020da20;
                  uVar33 = uVar33 + 0x27;
                }
                thunk_FUN_140b68ba8(ppuVar31,uVar33);
                ppuStack_b8 = auVar64._0_8_;
                puStack_b0 = auVar64._8_8_;
                lStack_a8 = 0;
              }
              if (ppuStack_d0 != (undefined **)0x0) {
                uVar33 = (longlong)puStack_c0 - (longlong)ppuStack_d0;
                ppuVar31 = ppuStack_d0;
                if (0xfff < uVar33) {
                  ppuVar31 = (undefined **)ppuStack_d0[-1];
                  if (0x1f < (ulonglong)((longlong)ppuStack_d0 + (-8 - (longlong)ppuVar31)))
                  goto LAB_14020da20;
                  uVar33 = uVar33 + 0x27;
                }
                thunk_FUN_140b68ba8(ppuVar31,uVar33);
              }
            }
LAB_14020c810:
            uVar15 = uVar15 + 1;
          }
          *(uint *)local_88[1] = (uint)local_90;
          pauVar19 = local_88;
          uVar15 = local_e8;
          if (*(longlong *)(local_88[1] + 8) != *(longlong *)(local_88[1] + 0x10)) {
            local_d8 = 0;
            uStack_d7 = 0;
            uStack_d6 = 0;
            uStack_d4 = 0;
            ppuStack_d0 = (undefined **)0x0;
            puStack_c8 = (undefined4 *)0x0;
            puStack_c0 = (undefined4 *)0x0;
            pauVar42 = local_88;
            if (0xf < *(ulonglong *)(*local_88 + 0x18)) {
              pauVar42 = *(undefined1 (**) [32])*local_88;
            }
            puVar37 = *(undefined4 **)(*local_88 + 0x10);
            if ((longlong)puVar37 < 0) {
              local_a0 = local_88;
                    /* WARNING: Subroutine does not return */
              string_too_long();
            }
            if (puVar37 < (undefined4 *)0x10) {
              puStack_c0 = (undefined4 *)0xf;
              uVar17 = *(undefined8 *)*pauVar42;
              ppuStack_d0 = *(undefined ***)(*pauVar42 + 8);
              local_d8 = (undefined1)uVar17;
              uStack_d7 = (undefined1)((ulonglong)uVar17 >> 8);
              uStack_d6 = (undefined2)((ulonglong)uVar17 >> 0x10);
              uStack_d4 = (undefined4)((ulonglong)uVar17 >> 0x20);
              puVar21 = puStack_210;
              puStack_c8 = puVar37;
            }
            else {
              puVar23 = (undefined4 *)((ulonglong)puVar37 | 0xf);
              puVar41 = (undefined4 *)0x16;
              if ((undefined4 *)0x16 < puVar23) {
                puVar41 = puVar23;
              }
              if (puVar23 < (undefined4 *)0xfff) {
                local_a0 = local_88;
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar67 = ZEXT1664(auVar54);
                _Dst = (void *)FUN_140b65d30((undefined1 *)((longlong)puVar41 + 1));
              }
              else {
                local_a0 = local_88;
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar67 = ZEXT1664(auVar54);
                lVar43 = FUN_140b65d30(puVar41 + 10);
                _Dst = (void *)(lVar43 + 0x27U & 0xffffffffffffffe0);
                *(longlong *)((longlong)_Dst - 8) = lVar43;
              }
              local_d8 = SUB81(_Dst,0);
              uStack_d7 = (undefined1)((ulonglong)_Dst >> 8);
              uStack_d6 = (undefined2)((ulonglong)_Dst >> 0x10);
              uStack_d4 = (undefined4)((ulonglong)_Dst >> 0x20);
              puStack_c8 = puVar37;
              puStack_c0 = puVar41;
              memcpy(_Dst,pauVar42,(size_t)((longlong)puVar37 + 1));
              auVar54 = auVar67._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
              puVar21 = puStack_210;
              pauVar19 = local_88;
            }
            puStack_210 = puVar21;
            local_88 = pauVar19;
            if (puStack_c8 != (undefined4 *)0x0) {
              auVar54 = auVar67._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
              lVar43 = (longlong)puVar21 - (longlong)local_218;
              uVar15 = lVar43 >> 3;
              if (puVar21 == puStack_208) {
                plVar47 = (longlong *)(uVar15 + 1);
                plVar38 = (longlong *)((uVar15 >> 1) + uVar15);
                if (plVar38 <= plVar47) {
                  plVar38 = plVar47;
                }
                if (0x1fffffffffffffff - (uVar15 >> 1) < uVar15) {
                  plVar38 = (longlong *)0x1fffffffffffffff;
                }
                if ((ulonglong)plVar38 >> 0x3d != 0) {
                  local_e0 = pauVar19;
                    /* WARNING: Subroutine does not return */
                  std::bad_array_new_length::bad_array_new_length();
                }
                local_130 = local_218;
                local_90 = plVar47;
                if (plVar38 == (longlong *)0x0) {
                  puVar48 = (undefined8 *)0x0;
                }
                else if (plVar38 < (longlong *)0x200) {
                  auVar64 = ZEXT1664(auVar63);
                  auVar66 = ZEXT1664(auVar65);
                  auVar67 = ZEXT1664(auVar54);
                  local_e0 = pauVar19;
                  puVar48 = (undefined8 *)FUN_140b65d30();
                }
                else {
                  if ((longlong *)0x1ffffffffffffffb < plVar38) {
                    local_e0 = pauVar19;
                    /* WARNING: Subroutine does not return */
                    std::bad_array_new_length::bad_array_new_length();
                  }
                  auVar64 = ZEXT1664(auVar63);
                  auVar66 = ZEXT1664(auVar65);
                  auVar67 = ZEXT1664(auVar54);
                  local_e0 = pauVar19;
                  lVar16 = FUN_140b65d30();
                  puVar48 = (undefined8 *)(lVar16 + 0x27U & 0xffffffffffffffe0);
                  puVar48[-1] = lVar16;
                }
                puVar10 = puStack_210;
                auVar54 = auVar67._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
                *(undefined1 (**) [32])((longlong)puVar48 + lVar43) = local_88;
                if (puVar21 == puStack_210) {
                  if (local_218 != puVar21) {
                    uVar33 = (longlong)puVar21 + (-8 - (longlong)local_218);
                    puVar36 = local_218;
                    puVar44 = puVar48;
                    if ((0x17 < uVar33) &&
                       (((undefined8 *)((longlong)puVar48 + (uVar33 & 0xfffffffffffffff8) + 8) <=
                         local_218 ||
                        ((undefined8 *)((longlong)local_218 + (uVar33 & 0xfffffffffffffff8) + 8) <=
                         puVar48)))) {
                      uVar18 = (uVar33 >> 3) + 1;
                      if (uVar33 < 0x78) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = uVar18 & 0xfffffffffffffff0;
                        uVar29 = 0;
                        auVar62 = ZEXT816(0);
                        do {
                          puVar36 = local_218 + uVar29;
                          uVar17 = *puVar36;
                          uVar6 = puVar36[1];
                          uVar7 = puVar36[2];
                          uVar8 = puVar36[3];
                          auVar2 = *(undefined1 (*) [32])(local_218 + uVar29 + 4);
                          auVar61 = *(undefined1 (*) [32])(local_218 + uVar29 + 8);
                          auVar60 = *(undefined1 (*) [32])(local_218 + uVar29 + 0xc);
                          *(undefined1 (*) [32])(local_218 + uVar29) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 4) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 8) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 0xc) = ZEXT1632(auVar62);
                          puVar36 = puVar48 + uVar29;
                          *puVar36 = uVar17;
                          puVar36[1] = uVar6;
                          puVar36[2] = uVar7;
                          puVar36[3] = uVar8;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 4) = auVar2;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 8) = auVar61;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 0xc) = auVar60;
                          uVar29 = uVar29 + 0x10;
                        } while (uVar33 != uVar29);
                        if (uVar18 == uVar33) goto LAB_14020d280;
                        if ((uVar18 & 0xc) == 0) {
                          puVar36 = local_218 + uVar33;
                          puVar44 = puVar48 + uVar33;
                          goto LAB_14020d262;
                        }
                      }
                      uVar29 = uVar18 & 0xfffffffffffffffc;
                      do {
                        puVar36 = local_218 + uVar33;
                        uVar17 = *puVar36;
                        uVar6 = puVar36[1];
                        uVar7 = puVar36[2];
                        uVar8 = puVar36[3];
                        *(undefined1 (*) [32])(local_218 + uVar33) = ZEXT1232(ZEXT812(0));
                        puVar36 = puVar48 + uVar33;
                        *puVar36 = uVar17;
                        puVar36[1] = uVar6;
                        puVar36[2] = uVar7;
                        puVar36[3] = uVar8;
                        uVar33 = uVar33 + 4;
                      } while (uVar29 != uVar33);
                      puVar36 = local_218 + uVar29;
                      puVar44 = puVar48 + uVar29;
                      if (uVar18 == uVar29) goto LAB_14020d280;
                    }
LAB_14020d262:
                    do {
                      uVar17 = *puVar36;
                      *puVar36 = 0;
                      *puVar44 = uVar17;
                      puVar36 = puVar36 + 1;
                      puVar44 = puVar44 + 1;
                    } while (puVar36 != puVar21);
                  }
                }
                else {
                  if (local_218 != puVar21) {
                    uVar33 = (longlong)puVar21 + (-8 - (longlong)local_218);
                    puVar36 = local_218;
                    puVar44 = puVar48;
                    if ((0x17 < uVar33) &&
                       (((undefined8 *)((longlong)puVar48 + (uVar33 & 0xfffffffffffffff8) + 8) <=
                         local_218 ||
                        ((undefined8 *)((longlong)local_218 + (uVar33 & 0xfffffffffffffff8) + 8) <=
                         puVar48)))) {
                      uVar18 = (uVar33 >> 3) + 1;
                      if (uVar33 < 0x78) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = uVar18 & 0xfffffffffffffff0;
                        uVar29 = 0;
                        auVar62 = ZEXT816(0);
                        do {
                          puVar36 = local_218 + uVar29;
                          uVar17 = *puVar36;
                          uVar6 = puVar36[1];
                          uVar7 = puVar36[2];
                          uVar8 = puVar36[3];
                          auVar2 = *(undefined1 (*) [32])(local_218 + uVar29 + 4);
                          auVar61 = *(undefined1 (*) [32])(local_218 + uVar29 + 8);
                          auVar60 = *(undefined1 (*) [32])(local_218 + uVar29 + 0xc);
                          *(undefined1 (*) [32])(local_218 + uVar29) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 4) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 8) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(local_218 + uVar29 + 0xc) = ZEXT1632(auVar62);
                          puVar36 = puVar48 + uVar29;
                          *puVar36 = uVar17;
                          puVar36[1] = uVar6;
                          puVar36[2] = uVar7;
                          puVar36[3] = uVar8;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 4) = auVar2;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 8) = auVar61;
                          *(undefined1 (*) [32])(puVar48 + uVar29 + 0xc) = auVar60;
                          uVar29 = uVar29 + 0x10;
                        } while (uVar33 != uVar29);
                        if (uVar18 == uVar33) goto LAB_14020d1a2;
                        if ((uVar18 & 0xc) == 0) {
                          puVar36 = local_218 + uVar33;
                          puVar44 = puVar48 + uVar33;
                          goto LAB_14020d184;
                        }
                      }
                      uVar29 = uVar18 & 0xfffffffffffffffc;
                      do {
                        puVar36 = local_218 + uVar33;
                        uVar17 = *puVar36;
                        uVar6 = puVar36[1];
                        uVar7 = puVar36[2];
                        uVar8 = puVar36[3];
                        *(undefined1 (*) [32])(local_218 + uVar33) = ZEXT1232(ZEXT812(0));
                        puVar36 = puVar48 + uVar33;
                        *puVar36 = uVar17;
                        puVar36[1] = uVar6;
                        puVar36[2] = uVar7;
                        puVar36[3] = uVar8;
                        uVar33 = uVar33 + 4;
                      } while (uVar29 != uVar33);
                      puVar36 = local_218 + uVar29;
                      puVar44 = puVar48 + uVar29;
                      if (uVar18 == uVar29) goto LAB_14020d1a2;
                    }
LAB_14020d184:
                    do {
                      uVar17 = *puVar36;
                      *puVar36 = 0;
                      *puVar44 = uVar17;
                      puVar36 = puVar36 + 1;
                      puVar44 = puVar44 + 1;
                    } while (puVar36 != puVar21);
                  }
LAB_14020d1a2:
                  if (puVar21 != puStack_210) {
                    puVar36 = (undefined8 *)((longlong)puVar48 + lVar43);
                    uVar33 = (longlong)puStack_210 + (-8 - (longlong)puVar21);
                    if ((0x17 < uVar33) &&
                       (((undefined8 *)
                         ((longlong)puVar48 +
                         (longlong)puVar21 +
                         ((uVar33 & 0xfffffffffffffff8) - (longlong)local_130) + 0x10) <= puVar21 ||
                        ((longlong)puVar21 + (uVar33 & 0xfffffffffffffff8) + 8 <=
                         (ulonglong)((longlong)puVar48 + lVar43 + 8))))) {
                      uVar18 = (uVar33 >> 3) + 1;
                      if (uVar33 < 0x78) {
                        uVar33 = 0;
                      }
                      else {
                        uVar33 = uVar18 & 0xfffffffffffffff0;
                        uVar29 = 0;
                        auVar62._0_12_ = ZEXT812(0);
                        auVar62._12_4_ = 0;
                        do {
                          puVar44 = puVar21 + uVar29;
                          uVar17 = *puVar44;
                          uVar6 = puVar44[1];
                          uVar7 = puVar44[2];
                          uVar8 = puVar44[3];
                          auVar2 = *(undefined1 (*) [32])(puVar21 + uVar29 + 4);
                          auVar61 = *(undefined1 (*) [32])(puVar21 + uVar29 + 8);
                          auVar60 = *(undefined1 (*) [32])(puVar21 + uVar29 + 0xc);
                          *(undefined1 (*) [32])(puVar21 + uVar29) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(puVar21 + uVar29 + 4) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(puVar21 + uVar29 + 8) = ZEXT1632(auVar62);
                          *(undefined1 (*) [32])(puVar21 + uVar29 + 0xc) = ZEXT1632(auVar62);
                          puVar44 = (undefined8 *)((longlong)puVar48 + uVar29 * 8 + lVar43 + 8);
                          *puVar44 = uVar17;
                          puVar44[1] = uVar6;
                          puVar44[2] = uVar7;
                          puVar44[3] = uVar8;
                          *(undefined1 (*) [32])((longlong)puVar48 + uVar29 * 8 + lVar43 + 0x28) =
                               auVar2;
                          *(undefined1 (*) [32])((longlong)puVar48 + uVar29 * 8 + lVar43 + 0x48) =
                               auVar61;
                          *(undefined1 (*) [32])((longlong)puVar48 + uVar29 * 8 + lVar43 + 0x68) =
                               auVar60;
                          uVar29 = uVar29 + 0x10;
                        } while (uVar33 != uVar29);
                        if (uVar18 == uVar33) goto LAB_14020d280;
                        if ((uVar18 & 0xc) == 0) {
                          puVar21 = puVar21 + uVar33;
                          puVar36 = puVar36 + uVar33;
                          goto LAB_14020d203;
                        }
                      }
                      uVar29 = uVar18 & 0xfffffffffffffffc;
                      do {
                        puVar44 = puVar21 + uVar33;
                        uVar17 = *puVar44;
                        uVar6 = puVar44[1];
                        uVar7 = puVar44[2];
                        uVar8 = puVar44[3];
                        *(undefined1 (*) [32])(puVar21 + uVar33) = ZEXT1232(ZEXT812(0));
                        puVar44 = puVar36 + uVar33 + 1;
                        *puVar44 = uVar17;
                        puVar44[1] = uVar6;
                        puVar44[2] = uVar7;
                        puVar44[3] = uVar8;
                        uVar33 = uVar33 + 4;
                      } while (uVar29 != uVar33);
                      puVar21 = puVar21 + uVar29;
                      puVar36 = puVar36 + uVar29;
                      if (uVar18 == uVar29) goto LAB_14020d280;
                    }
LAB_14020d203:
                    do {
                      uVar17 = *puVar21;
                      *puVar21 = 0;
                      puVar36[1] = uVar17;
                      puVar21 = puVar21 + 1;
                      puVar36 = puVar36 + 1;
                    } while (puVar21 != puStack_210);
                  }
                }
LAB_14020d280:
                puVar21 = local_218;
                if (local_218 != (undefined8 *)0x0) {
                  for (; puVar21 != puVar10; puVar21 = puVar21 + 1) {
                    auVar64 = ZEXT1664(auVar64._0_16_);
                    auVar66 = ZEXT1664(auVar66._0_16_);
                    auVar67 = ZEXT1664(auVar67._0_16_);
                    FUN_140210c50();
                    auVar54 = auVar67._0_16_;
                    auVar65 = auVar66._0_16_;
                    auVar63 = auVar64._0_16_;
                  }
                  uVar33 = (longlong)puStack_208 - (longlong)local_218;
                  puVar21 = local_218;
                  if (0xfff < uVar33) {
                    puVar21 = (undefined8 *)local_218[-1];
                    if (0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)puVar21)))
                    goto LAB_14020da20;
                    uVar33 = uVar33 + 0x27;
                  }
                  auVar64 = ZEXT1664(auVar63);
                  auVar66 = ZEXT1664(auVar65);
                  auVar67 = ZEXT1664(auVar54);
                  thunk_FUN_140b68ba8(puVar21,uVar33);
                  auVar54 = auVar67._0_16_;
                  auVar65 = auVar66._0_16_;
                  auVar63 = auVar64._0_16_;
                }
                puStack_210 = puVar48 + (longlong)local_90;
                puStack_208 = puVar48 + (longlong)plVar38;
                local_218 = puVar48;
              }
              else {
                *puVar21 = pauVar19;
                puStack_210 = puVar21 + 1;
              }
              auVar9._14_2_ = 0;
              auVar9._0_14_ = stack0xfffffffffffffefa;
              _local_108 = auVar9 << 0x10;
              if (puStack_1f8 == puStack_1f0) {
                local_e0 = (undefined1 (*) [32])0x0;
                auVar64 = ZEXT1664(auVar63);
                auVar66 = ZEXT1664(auVar65);
                auVar67 = ZEXT1664(auVar54);
                FUN_14005f020(&uStack_200,puStack_1f8,local_108);
                auVar54 = auVar67._0_16_;
                auVar65 = auVar66._0_16_;
                auVar63 = auVar64._0_16_;
              }
              else {
                *puStack_1f8 = 0;
                puStack_1f8 = puStack_1f8 + 1;
              }
              local_e0 = (undefined1 (*) [32])0x0;
              auVar64 = ZEXT1664(auVar63);
              auVar66 = ZEXT1664(auVar65);
              auVar67 = ZEXT1664(auVar54);
              unordered_map_set_too_long(local_1e8,local_108);
              auVar54 = auVar67._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
              *(uint *)((longlong)local_108 + 0x30) = (uint)uVar15 & 0xffff;
              pauVar19 = (undefined1 (*) [32])0x0;
            }
            uVar15 = local_e8;
            if ((undefined4 *)0xf < puStack_c0) {
              lVar16 = CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)));
              puVar37 = (undefined4 *)((longlong)puStack_c0 + 1);
              lVar43 = lVar16;
              if ((undefined4 *)0xfff < puVar37) {
                lVar43 = *(longlong *)(lVar16 + -8);
                if (0x1f < (ulonglong)((lVar16 + -8) - lVar43)) goto LAB_14020da20;
                puVar37 = puStack_c0 + 10;
              }
              auVar64 = ZEXT1664(auVar63);
              auVar66 = ZEXT1664(auVar65);
              auVar67 = ZEXT1664(auVar54);
              thunk_FUN_140b68ba8(lVar43,puVar37);
              auVar54 = auVar67._0_16_;
              auVar65 = auVar66._0_16_;
              auVar63 = auVar64._0_16_;
            }
          }
          auVar64 = ZEXT1664(auVar63);
          auVar66 = ZEXT1664(auVar65);
          auVar67 = ZEXT1664(auVar54);
          FUN_140210c50(pauVar19);
        }
        FUN_140500ab0(local_f0);
        bVar52 = local_218 != puStack_210;
      }
      else {
LAB_14020c400:
        bVar52 = false;
      }
      if (0xf < local_140) {
        uVar15 = local_140 + 1;
        pppppppuVar27 = local_158[0];
        if (0xfff < uVar15) {
          pppppppuVar27 = (undefined8 *******)local_158[0][-1];
          if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)pppppppuVar27)))
          goto LAB_14020da20;
          uVar15 = local_140 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar27,uVar15);
      }
    }
    else {
      if (((iVar13 != 0x40) && (iVar13 != 0x7b)) && (iVar13 != 0x10b)) {
LAB_14020da89:
        local_d8 = (undefined1)iVar13;
        uStack_d7 = (undefined1)((uint)iVar13 >> 8);
        uStack_d6 = (undefined2)((uint)iVar13 >> 0x10);
        ppuStack_d0 = &PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
        FUN_140005380("exists",&local_d8,&local_128);
      }
LAB_14020bf32:
      pppppppuVar27 = local_128;
      if (local_110 < 8) {
        pppppppuVar27 = &local_128;
      }
      local_d8 = SUB81(pppppppuVar27,0);
      uStack_d7 = (undefined1)((ulonglong)pppppppuVar27 >> 8);
      uStack_d6 = (undefined2)((ulonglong)pppppppuVar27 >> 0x10);
      uStack_d4 = (undefined4)((ulonglong)pppppppuVar27 >> 0x20);
      ppuStack_d0 = local_118;
      uVar14 = FUN_140b6625c();
      FUN_14003e640(local_1a8,uVar14,&local_d8);
      auVar26 = (undefined1  [8])local_1a8;
      if (0xf < uStack_190) {
        auVar26 = local_1a8;
      }
      uVar17 = __acrt_iob_func(2);
      FUN_14002b100(uVar17,"animation: missing canonical rig at %s\n",auVar26);
      if (0xf < uStack_190) {
        uVar15 = uStack_190 + 1;
        auVar26 = local_1a8;
        if (0xfff < uVar15) {
          auVar26 = *(undefined1 (*) [8])((longlong)local_1a8 + -8);
          if (0x1f < (ulonglong)(((longlong)local_1a8 + -8) - (longlong)auVar26))
          goto LAB_14020da20;
          uVar15 = uStack_190 + 0x28;
        }
        thunk_FUN_140b68ba8(auVar26,uVar15);
      }
      bVar52 = false;
    }
    if (7 < local_110) {
      uVar15 = local_110 * 2 + 2;
      pppppppuVar27 = local_128;
      if (0xfff < uVar15) {
        pppppppuVar27 = (undefined8 *******)local_128[-1];
        if ((undefined *)0x1f < (undefined *)((longlong)local_128 + (-8 - (longlong)pppppppuVar27)))
        goto LAB_14020da20;
        uVar15 = local_110 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(pppppppuVar27,uVar15);
    }
    uVar15 = local_98;
    if (!bVar52) goto LAB_14020c108;
    uVar33 = (local_98 >> 0x38 ^
             (local_98 >> 0x30 & 0xff ^
             (local_98 >> 0x28 & 0xff ^
             (local_98 >> 0x20 & 0xff ^
             (local_98 >> 0x18 & 0xff ^
             (local_98 >> 0x10 & 0xff ^
             (local_98 >> 8 & 0xff ^ (local_98 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
             0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
             0x100000001b3) * 0x100000001b3;
    pauVar19 = (undefined1 (*) [32])DAT_1416b6c28[(DAT_1416b6c40 & uVar33) * 2 + 1];
    pauVar42 = DAT_1416b6c18;
    if (pauVar19 == DAT_1416b6c18) {
LAB_14020c18d:
      if (DAT_1416b6c20 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("unordered_map/set too long");
      }
      local_160 = 0;
      local_88 = (undefined1 (*) [32])FUN_140b65d30(0x88);
      puVar3 = puStack_1f0;
      uVar17 = uStack_200;
      puVar10 = puStack_208;
      puVar48 = puStack_210;
      puVar21 = local_218;
      *(ulonglong *)(*local_88 + 0x10) = uVar15;
      local_90 = (longlong *)(*local_88 + 0x18);
      local_218 = (undefined8 *)0x0;
      puStack_210 = (undefined8 *)0x0;
      puStack_208 = (undefined8 *)0x0;
      uStack_200 = 0;
      *(undefined8 **)(*local_88 + 0x18) = puVar21;
      *(undefined8 **)local_88[1] = puVar48;
      *(undefined8 **)(local_88[1] + 8) = puVar10;
      *(undefined8 *)(local_88[1] + 0x10) = uVar17;
      puStack_1f0 = (undefined2 *)0x0;
      *(undefined2 **)(local_88[1] + 0x18) = puStack_1f8;
      *(undefined2 **)local_88[2] = puVar3;
      puStack_1f8 = (undefined2 *)0x0;
      FUN_140211c00(local_88[2] + 8,local_1e8);
      puVar28 = DAT_1416b6c30;
      puVar40 = DAT_1416b6c28;
      pauVar19 = DAT_1416b6c18;
      if ((longlong)(DAT_1416b6c20 + 1U) < 0) {
        in_register_00001344 = (undefined1  [12])0x0;
      }
      fVar53 = (float)(DAT_1416b6c20 + 1U);
      if (DAT_1416b6c10 < fVar53 / (float)DAT_1416b6c48) {
        auVar54._0_4_ = fVar53 / DAT_1416b6c10;
        auVar54._4_12_ = in_register_00001344;
        auVar63 = vroundss_avx(auVar54,auVar54,10);
        uVar18 = (ulonglong)auVar63._0_4_;
        uVar18 = (longlong)(auVar63._0_4_ - 9.223372e+18) & (longlong)uVar18 >> 0x3f | uVar18;
        uVar15 = 8;
        if (8 < uVar18) {
          uVar15 = uVar18;
        }
        uVar18 = DAT_1416b6c48;
        if (DAT_1416b6c48 < uVar15) {
          uVar18 = DAT_1416b6c48 * 8;
          if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
            uVar18 = uVar15;
          }
          if (0x1ff < DAT_1416b6c48) {
            uVar18 = uVar15;
          }
        }
        if (0x800000000000000 < uVar18) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("invalid hash bucket count");
        }
        cVar12 = (char)LZCOUNT(uVar18 - 1 | 1);
        bVar24 = -cVar12;
        uVar15 = 1L << (bVar24 & 0x3f);
        if ((ulonglong)((longlong)DAT_1416b6c30 - (longlong)DAT_1416b6c28 >> 3) <
            (ulonglong)(2L << (bVar24 & 0x3f))) {
          lVar43 = 0x10L << (0x40U - cVar12 & 0x3f);
          if (uVar18 - 1 < 0x80) {
            puVar40 = (ulonglong *)FUN_140b65d30(lVar43);
          }
          else {
            uVar18 = FUN_140b65d30(lVar43 + 0x27);
            puVar40 = (ulonglong *)(uVar18 + 0x27 & 0xffffffffffffffe0);
            puVar40[-1] = uVar18;
          }
          if (DAT_1416b6c38 != DAT_1416b6c28) {
            puVar28 = DAT_1416b6c28;
            if ((0xfff < (ulonglong)((longlong)DAT_1416b6c38 - (longlong)DAT_1416b6c28)) &&
               (puVar28 = (ulonglong *)DAT_1416b6c28[-1],
               0x1f < (ulonglong)((longlong)DAT_1416b6c28 + (-8 - (longlong)puVar28)))) {
LAB_14020da20:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            thunk_FUN_140b68ba8(puVar28);
          }
          puVar28 = (ulonglong *)((longlong)puVar40 + lVar43);
          uVar18 = lVar43 - 8;
          DAT_1416b6c28 = puVar40;
          DAT_1416b6c30 = puVar28;
          DAT_1416b6c38 = puVar28;
          if (0x17 < uVar18) {
            uVar29 = (uVar18 >> 3) + 1;
            if (uVar18 < 0x78) {
              uVar18 = 0;
            }
            else {
              uVar18 = uVar29 & 0xfffffffffffffff0;
              auVar56._8_8_ = 0;
              auVar56._0_8_ = pauVar19;
              auVar63 = vpshufd_avx(auVar56,0x44);
              auVar58._16_16_ = auVar63;
              auVar58._0_16_ = auVar63;
              uVar45 = 0;
              do {
                *(undefined1 (*) [32])(puVar40 + uVar45) = auVar58;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 4) = auVar58;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 8) = auVar58;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 0xc) = auVar58;
                uVar45 = uVar45 + 0x10;
              } while (uVar18 != uVar45);
              if (uVar29 == uVar18) goto LAB_14020d7ae;
              if ((uVar29 & 0xc) == 0) {
                puVar40 = puVar40 + uVar18;
                goto LAB_14020d790;
              }
            }
            uVar45 = uVar29 & 0xfffffffffffffffc;
            auVar57._8_8_ = 0;
            auVar57._0_8_ = pauVar19;
            auVar63 = vpshufd_avx(auVar57,0x44);
            auVar59._16_16_ = auVar63;
            auVar59._0_16_ = auVar63;
            do {
              *(undefined1 (*) [32])(puVar40 + uVar18) = auVar59;
              uVar18 = uVar18 + 4;
            } while (uVar45 != uVar18);
            puVar40 = puVar40 + uVar45;
            if (uVar29 == uVar45) goto LAB_14020d7ae;
          }
LAB_14020d790:
          do {
            *puVar40 = (ulonglong)pauVar19;
            puVar40 = puVar40 + 1;
          } while (puVar40 != puVar28);
        }
        else if (DAT_1416b6c28 != DAT_1416b6c30) {
          uVar18 = ((longlong)DAT_1416b6c30 - (longlong)DAT_1416b6c28) - 8;
          if (0x17 < uVar18) {
            uVar29 = (uVar18 >> 3) + 1;
            auVar55._8_8_ = 0;
            auVar55._0_8_ = DAT_1416b6c18;
            if (uVar18 < 0x78) {
              uVar18 = 0;
            }
            else {
              uVar18 = uVar29 & 0xfffffffffffffff0;
              auVar63 = vpshufd_avx(auVar55,0x44);
              auVar61._16_16_ = auVar63;
              auVar61._0_16_ = auVar63;
              uVar45 = 0;
              do {
                *(undefined1 (*) [32])(puVar40 + uVar45) = auVar61;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 4) = auVar61;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 8) = auVar61;
                *(undefined1 (*) [32])(puVar40 + uVar45 + 0xc) = auVar61;
                uVar45 = uVar45 + 0x10;
              } while (uVar18 != uVar45);
              if (uVar29 == uVar18) goto LAB_14020d7ae;
              if ((uVar29 & 0xc) == 0) {
                puVar40 = puVar40 + uVar18;
                goto LAB_14020d7a2;
              }
            }
            uVar45 = uVar29 & 0xfffffffffffffffc;
            auVar63 = vpshufd_avx(auVar55,0x44);
            auVar60._16_16_ = auVar63;
            auVar60._0_16_ = auVar63;
            do {
              *(undefined1 (*) [32])(puVar40 + uVar18) = auVar60;
              uVar18 = uVar18 + 4;
            } while (uVar45 != uVar18);
            puVar40 = puVar40 + uVar45;
            if (uVar29 == uVar45) goto LAB_14020d7ae;
          }
LAB_14020d7a2:
          do {
            *puVar40 = (ulonglong)pauVar19;
            puVar40 = puVar40 + 1;
          } while (puVar40 != puVar28);
        }
LAB_14020d7ae:
        DAT_1416b6c40 = uVar15 - 1;
        DAT_1416b6c48 = uVar15;
        pauVar42 = *(undefined1 (**) [32])*DAT_1416b6c18;
        puVar40 = DAT_1416b6c28;
joined_r0x00014020d7cd:
        DAT_1416b6c28 = puVar40;
        if (pauVar42 != pauVar19) {
          pauVar4 = *(undefined1 (**) [32])*pauVar42;
          uVar15 = ((ulonglong)(byte)(*pauVar42)[0x17] ^
                   ((ulonglong)(byte)(*pauVar42)[0x16] ^
                   ((ulonglong)(byte)(*pauVar42)[0x15] ^
                   ((ulonglong)(byte)(*pauVar42)[0x14] ^
                   ((ulonglong)(byte)(*pauVar42)[0x13] ^
                   ((ulonglong)(byte)(*pauVar42)[0x12] ^
                   ((ulonglong)(byte)(*pauVar42)[0x11] ^
                   ((ulonglong)(byte)(*pauVar42)[0x10] ^ 0xcbf29ce484222325) * 0x100000001b3) *
                   0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3
                   ) * 0x100000001b3) * 0x100000001b3 & DAT_1416b6c40;
          if ((undefined1 (*) [32])puVar40[uVar15 * 2] == pauVar19) {
            puVar40[uVar15 * 2] = (ulonglong)pauVar42;
          }
          else {
            pauVar46 = (undefined1 (*) [32])puVar40[uVar15 * 2 + 1];
            if (*(longlong *)(*pauVar42 + 0x10) != *(longlong *)(*pauVar46 + 0x10)) {
              do {
                if ((undefined1 (*) [32])puVar40[uVar15 * 2] == pauVar46) {
                  plVar47 = *(longlong **)(*pauVar42 + 8);
                  *plVar47 = (longlong)pauVar4;
                  puVar21 = *(undefined8 **)(*pauVar4 + 8);
                  *puVar21 = pauVar46;
                  plVar38 = *(longlong **)(*pauVar46 + 8);
                  *plVar38 = (longlong)pauVar42;
                  *(undefined8 **)(*pauVar46 + 8) = puVar21;
                  *(longlong **)(*pauVar4 + 8) = plVar47;
                  *(longlong **)(*pauVar42 + 8) = plVar38;
                  puVar40[uVar15 * 2] = (ulonglong)pauVar42;
                  pauVar42 = pauVar4;
                  puVar40 = DAT_1416b6c28;
                  goto joined_r0x00014020d7cd;
                }
                pauVar46 = *(undefined1 (**) [32])(*pauVar46 + 8);
              } while (*(longlong *)(*pauVar42 + 0x10) != *(longlong *)(*pauVar46 + 0x10));
              lVar43 = *(longlong *)*pauVar46;
              plVar47 = *(longlong **)(*pauVar42 + 8);
              *plVar47 = (longlong)pauVar4;
              plVar38 = *(longlong **)(*pauVar4 + 8);
              *plVar38 = lVar43;
              plVar5 = *(longlong **)(lVar43 + 8);
              *plVar5 = (longlong)pauVar42;
              *(longlong **)(lVar43 + 8) = plVar38;
              *(longlong **)(*pauVar4 + 8) = plVar47;
              *(longlong **)(*pauVar42 + 8) = plVar5;
              pauVar42 = pauVar4;
              puVar40 = DAT_1416b6c28;
              goto joined_r0x00014020d7cd;
            }
            pauVar46 = *(undefined1 (**) [32])*pauVar46;
            if (pauVar46 != pauVar42) {
              plVar47 = *(longlong **)(*pauVar42 + 8);
              *plVar47 = (longlong)pauVar4;
              plVar38 = *(longlong **)(*pauVar4 + 8);
              *plVar38 = (longlong)pauVar46;
              plVar5 = *(longlong **)(*pauVar46 + 8);
              *plVar5 = (longlong)pauVar42;
              *(longlong **)(*pauVar46 + 8) = plVar38;
              *(longlong **)(*pauVar4 + 8) = plVar47;
              *(longlong **)(*pauVar42 + 8) = plVar5;
            }
          }
          puVar40[uVar15 * 2 + 1] = (ulonglong)pauVar42;
          pauVar42 = pauVar4;
          puVar40 = DAT_1416b6c28;
          goto joined_r0x00014020d7cd;
        }
        pauVar19 = (undefined1 (*) [32])puVar40[(DAT_1416b6c40 & uVar33) * 2 + 1];
        pauVar42 = DAT_1416b6c18;
        if (pauVar19 != DAT_1416b6c18) {
          if (*(longlong *)(*local_88 + 0x10) != *(longlong *)(*pauVar19 + 0x10)) {
            do {
              pauVar42 = pauVar19;
              if (pauVar19 == (undefined1 (*) [32])puVar40[(DAT_1416b6c40 & uVar33) * 2])
              goto LAB_14020d964;
              pauVar19 = *(undefined1 (**) [32])(*pauVar19 + 8);
            } while (*(longlong *)(*local_88 + 0x10) != *(longlong *)(*pauVar19 + 0x10));
          }
          pauVar42 = *(undefined1 (**) [32])*pauVar19;
        }
      }
LAB_14020d964:
      puVar21 = *(undefined8 **)(*pauVar42 + 8);
      DAT_1416b6c20 = DAT_1416b6c20 + 1;
      *(undefined1 (**) [32])*local_88 = pauVar42;
      *(undefined8 **)(*local_88 + 8) = puVar21;
      *puVar21 = local_88;
      *(undefined1 (**) [32])(*pauVar42 + 8) = local_88;
      puVar40 = DAT_1416b6c28;
      uVar33 = uVar33 & DAT_1416b6c40;
      if ((undefined1 (*) [32])DAT_1416b6c28[uVar33 * 2] == DAT_1416b6c18) {
        DAT_1416b6c28[uVar33 * 2] = (ulonglong)local_88;
        puVar40[uVar33 * 2 + 1] = (ulonglong)local_88;
        pauVar42 = local_88;
      }
      else if ((undefined1 (*) [32])DAT_1416b6c28[uVar33 * 2] == pauVar42) {
        DAT_1416b6c28[uVar33 * 2] = (ulonglong)local_88;
        pauVar42 = local_88;
      }
      else {
        pauVar42 = local_88;
        if ((undefined8 *)DAT_1416b6c28[uVar33 * 2 + 1] == puVar21) {
          DAT_1416b6c28[uVar33 * 2 + 1] = (ulonglong)local_88;
        }
      }
    }
    else {
      pauVar42 = pauVar19;
      if (local_98 != *(ulonglong *)(*pauVar19 + 0x10)) {
        do {
          if (pauVar42 == (undefined1 (*) [32])DAT_1416b6c28[(DAT_1416b6c40 & uVar33) * 2])
          goto LAB_14020c18d;
          pauVar42 = *(undefined1 (**) [32])(*pauVar42 + 8);
        } while (local_98 != *(ulonglong *)(*pauVar42 + 0x10));
      }
    }
    puVar49 = *pauVar42 + 0x18;
  }
  else {
LAB_14020c108:
    unordered_map_set_too_long(&DAT_1416b6c50,local_1a8,&local_98);
    puVar49 = (undefined1 *)0x0;
  }
  FUN_140210130(&local_218);
LAB_14020c12e:
  _Mtx_unlock(&DAT_1416b6bc0);
  return puVar49;
}

