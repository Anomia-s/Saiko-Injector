/**
 * Function: failed_to_assign_value_to_constant_s
 * Address:  1405e68d0
 * Signature: undefined failed_to_assign_value_to_constant_s(void)
 * Body size: 3468 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void failed_to_assign_value_to_constant_s(longlong *param_1)

{
  Decoration<__int64> *pDVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int *piVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined1 auStack_1138 [32];
  ulonglong local_1118;
  longlong local_1110;
  undefined8 local_1108;
  char local_10fd;
  uint local_10fc;
  longlong local_10f8;
  longlong *local_10f0;
  longlong local_10e8;
  longlong local_10e0;
  undefined8 local_10d8;
  ulonglong local_10d0;
  ulonglong local_10c8;
  longlong local_10c0;
  ulonglong local_10b8;
  longlong local_10b0;
  undefined4 local_10a8;
  undefined4 uStack_10a4;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  undefined4 local_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  undefined4 local_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined8 local_1078;
  undefined8 *puStack_1070;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined8 local_858;
  undefined8 uStack_850;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1138;
  lVar18 = (longlong)*(int *)((longlong)param_1 + 0x14);
  if (0 < lVar18) {
    lVar20 = *param_1;
    local_10e0 = lVar20 + 0xcc0;
    local_10d8 = 0x8000017200000156;
    local_10d0 = 0x8000017200000000;
    lVar23 = 0;
    local_10f8 = lVar18;
    local_10f0 = param_1;
    local_10e8 = lVar20;
    do {
      lVar13 = *(longlong *)(param_1[3] + lVar23 * 8);
      lVar8 = FUN_1400bbfd0(lVar20,lVar13,0x126,0);
      if (lVar8 == 0) {
        local_1118 = FUN_1403af230(lVar20,lVar13);
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                      ,0x19c);
      }
      else {
        cVar5 = FUN_1400b9b40(lVar20,lVar8,0x164);
        if (cVar5 == '\0') {
          cVar5 = FUN_1400b9b40(lVar20,lVar8,0x165);
          if (cVar5 != '\0') {
            uVar22 = param_1[0x10];
            thunk_FUN_1400b7e20(lVar20,lVar8,0x165);
            plVar10 = (longlong *)FUN_1400ba6e0(lVar20,lVar8,0x166,0x18);
            FUN_1403b6ad0(&local_868,*plVar10);
            cVar5 = FUN_1403b6b00(&local_868);
            if (cVar5 != '\0') {
              pDVar1 = (Decoration<__int64> *)(plVar10 + 1);
              do {
                puVar12 = (undefined8 *)uStack_850[1];
                if (puVar12[3] == lVar13) {
                  (*DAT_1415033b0)(*puVar12);
                  FUN_1403b68e0(*plVar10,*uStack_850);
                  puVar14 = (undefined8 *)FUN_140106180(pDVar1);
                  uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar1);
                  if (0 < (int)uVar6) {
                    uVar19 = 0;
                    puVar3 = puVar14;
LAB_1405e6cd0:
                    if (puVar3[3] != puVar12[1]) goto code_r0x0001405e6cd6;
                    uVar6 = uVar6 - 1;
                    if ((int)uVar19 < (int)uVar6) {
                      uVar17 = uVar19;
                      if ((uVar6 - (int)uVar19 & 1) != 0) {
                        uVar17 = uVar19 + 1;
                        puVar3[2] = puVar3[6];
                        puVar3[3] = puVar3[7];
                        *puVar3 = puVar3[4];
                        puVar3[1] = puVar3[5];
                      }
                      if ((ulonglong)uVar6 - 1 != uVar19) {
                        lVar18 = uVar6 - uVar17;
                        puVar12 = puVar14 + uVar17 * 4;
                        do {
                          puVar12[2] = puVar12[6];
                          puVar12[3] = puVar12[7];
                          *puVar12 = puVar12[4];
                          puVar12[1] = puVar12[5];
                          puVar12[4] = puVar12[8];
                          puVar12[5] = puVar12[9];
                          puVar12[6] = puVar12[10];
                          puVar12[7] = puVar12[0xb];
                          lVar18 = lVar18 + -2;
                          puVar12 = puVar12 + 8;
                        } while (lVar18 != 0);
                      }
                    }
                    FUN_1403b3040(pDVar1);
                  }
                }
LAB_1405e6c60:
                cVar5 = FUN_1403b6b00(&local_868);
              } while (cVar5 != '\0');
            }
            cVar5 = FUN_1403b31d0();
            lVar20 = local_10e8;
            if (cVar5 == '\0') {
              lVar18 = *plVar10;
              if (lVar18 == 0) {
                bVar16 = 0;
              }
              else {
                bVar16 = (byte)*(undefined4 *)(lVar18 + 0xc);
              }
              uVar6 = 1 << (bVar16 & 0x1f);
            }
            else {
              lVar18 = FUN_1400b7610(local_10e8,uVar22 & 0xffffffff);
              if (lVar18 != 0x156) {
                local_1118 = 0;
                lVar18 = FUN_1403ae340(lVar20,0,lVar13,".");
                local_1118 = lVar18;
                FUN_140399630(0xfffffffd,
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                              ,299);
                (*DAT_1415033b0)(lVar18);
                lVar18 = local_10f8;
                param_1 = local_10f0;
                goto LAB_1405e699e;
              }
              puVar11 = (uint *)FUN_1400ba4f0(lVar20,lVar13,local_10d8);
              uVar6 = *puVar11;
              lVar18 = *plVar10;
            }
            if (lVar18 == 0) {
              lVar18 = (*DAT_141503398)(0x18);
              *plVar10 = lVar18;
              FUN_1403b61c0(lVar18,0);
              lVar18 = *plVar10;
            }
            FUN_1403b6ad0(&local_1088,lVar18);
            local_858 = local_1078;
            uStack_850 = puStack_1070;
            local_868 = local_1088;
            uStack_864 = uStack_1084;
            uStack_860 = uStack_1080;
            uStack_85c = uStack_107c;
            uVar22 = (ulonglong)uVar6;
            local_10fc = uVar6;
            do {
              cVar5 = FUN_1403b6b00(&local_868);
              lVar20 = local_10e8;
              if (cVar5 == '\0') {
                FUN_1403b6350(*plVar10,local_10e0);
                puVar12 = (undefined8 *)FUN_1403b6630(*plVar10,0x20,uVar22);
                lVar20 = local_10e8;
                pcVar4 = DAT_1415033b8;
                uVar25 = FUN_1403af230(local_10e8,lVar13);
                uVar25 = (*pcVar4)(uVar25);
                *puVar12 = uVar25;
                puVar12[1] = uVar22;
                puVar12[3] = lVar13;
                httplib::ClientImpl::vfunction4();
                puVar14 = (undefined8 *)FUN_1403b2f60(0,plVar10 + 1,0x20);
                *puVar14 = *puVar12;
                puVar14[1] = uVar22;
                puVar14[3] = puVar12[3];
                puVar11 = (uint *)FUN_1400ba6e0(lVar20,lVar13,local_10d8,4);
                uVar6 = local_10fc;
                *puVar11 = local_10fc;
                puVar11 = (uint *)FUN_1400ba6e0(lVar20,lVar13,lVar8);
                *puVar11 = uVar6;
                lVar18 = local_10f8;
                param_1 = local_10f0;
                goto LAB_1405e699e;
              }
              plVar2 = (longlong *)uStack_850[1];
            } while (plVar2[1] != uVar22);
            local_1118 = 0;
            lVar18 = FUN_1403ae340(local_10e8,0,lVar13,".");
            local_1110 = *plVar2;
            local_1118 = lVar18;
            FUN_140399630(0xfffffffd,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                          ,0x144);
            (*DAT_1415033b0)(lVar18);
            lVar18 = local_10f8;
            param_1 = local_10f0;
          }
        }
        else {
          uVar22 = param_1[0x10];
          puVar9 = (ulonglong *)FUN_1400ba6e0(lVar20,lVar8,0x164,8);
          plVar10 = (longlong *)FUN_1400ba6e0(lVar20,lVar8,0x166);
          uVar19 = *puVar9;
          if (uVar19 == 0) {
            cVar5 = FUN_1403b31d0(uVar22);
            uVar19 = 0x15b;
            if (cVar5 != '\0') {
              uVar19 = FUN_1400b7610(lVar20,uVar22 & 0xffffffff);
              *puVar9 = uVar19;
            }
          }
          puVar11 = (uint *)FUN_1400ba4f0(lVar20,uVar19,0x163);
          if (puVar11 == (uint *)0x0) {
            local_1118 = 0;
            lVar18 = FUN_1403ae340(lVar20,0,uVar19,".");
            uVar25 = 0x58;
            local_1118 = lVar18;
LAB_1405e6e9f:
            FUN_140399630(0xfffffffd,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                          ,uVar25);
LAB_1405e6fa4:
            (*DAT_1415033b0)(lVar18);
            lVar18 = local_10f8;
            param_1 = local_10f0;
          }
          else {
            local_10fc = *puVar11;
            lVar18 = *plVar10;
            if (lVar18 == 0) {
              lVar18 = (*DAT_141503398)(0x18);
              *plVar10 = lVar18;
              FUN_1403b61c0(lVar18,0);
              lVar18 = *plVar10;
            }
            FUN_1403b6ad0(&local_10a8,lVar18);
            cVar5 = FUN_1403b6b00(&local_10a8);
            if (cVar5 != '\0') {
              pDVar1 = (Decoration<__int64> *)(plVar10 + 1);
              do {
                puVar12 = *(undefined8 **)(CONCAT44(uStack_108c,uStack_1090) + 8);
                if (puVar12[3] == lVar13) {
                  (*DAT_1415033b0)(*puVar12);
                  FUN_1403b68e0(*plVar10,*(undefined8 *)CONCAT44(uStack_108c,uStack_1090));
                  puVar12 = (undefined8 *)FUN_140106180(pDVar1);
                  uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar1);
                  if (0 < (int)uVar6) {
                    uVar17 = 0;
                    puVar14 = puVar12;
LAB_1405e6b40:
                    if (puVar14[3] != lVar13) goto code_r0x0001405e6b46;
                    uVar6 = uVar6 - 1;
                    if ((int)uVar17 < (int)uVar6) {
                      uVar24 = uVar17;
                      if ((uVar6 - (int)uVar17 & 1) != 0) {
                        uVar24 = uVar17 + 1;
                        puVar14[2] = puVar14[6];
                        puVar14[3] = puVar14[7];
                        *puVar14 = puVar14[4];
                        puVar14[1] = puVar14[5];
                      }
                      if ((ulonglong)uVar6 - 1 != uVar17) {
                        lVar18 = uVar6 - uVar24;
                        puVar12 = puVar12 + uVar24 * 4;
                        do {
                          puVar12[2] = puVar12[6];
                          puVar12[3] = puVar12[7];
                          *puVar12 = puVar12[4];
                          puVar12[1] = puVar12[5];
                          puVar12[4] = puVar12[8];
                          puVar12[5] = puVar12[9];
                          puVar12[6] = puVar12[10];
                          puVar12[7] = puVar12[0xb];
                          lVar18 = lVar18 + -2;
                          puVar12 = puVar12 + 8;
                        } while (lVar18 != 0);
                      }
                    }
                    FUN_1403b3040(pDVar1);
                  }
                }
LAB_1405e6ad0:
                cVar5 = FUN_1403b6b00(&local_10a8);
              } while (cVar5 != '\0');
            }
            local_10b0 = 0;
            local_10b8 = 0;
            local_10fd = FUN_1403b31d0(uVar22);
            lVar20 = local_10e8;
            if (local_10fd != '\0') {
              local_10c0 = 0;
              uVar17 = uVar19 & 0xffffffff | local_10d0;
              local_10c8 = uVar19;
              local_10c0 = FUN_1400bb330(local_10e8,lVar13,uVar17);
              if (local_10c0 == 0) {
                uVar25 = FUN_1403b36e0(lVar20,uVar22);
                lVar18 = FUN_1403b36e0(lVar20,uVar17);
                local_1118 = 0;
                lVar13 = FUN_1403ae340(lVar20,0,lVar13,".");
                local_1118 = lVar13;
                local_1110 = lVar18;
                local_1108 = uVar25;
                FUN_140399630(0xfffffffd,
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                              ,0x8f);
                (*DAT_1415033b0)(lVar13);
                (*DAT_1415033b0)(uVar25);
                goto LAB_1405e6fa4;
              }
              if ((local_10fc & 0xfffffffc) == 4) {
                uVar25 = 0x157;
              }
              else {
                uVar25 = 0x15c;
              }
              cannot_open_scope_for_s_missing_reflection_da(&local_1088,lVar20,uVar25);
              memcpy(&local_868,&local_1088,0x820);
              iVar7 = value_pointer_is_null(&local_868,&local_10c8);
              if (iVar7 != 0) {
                local_1118 = 0;
                lVar18 = FUN_1403ae340(lVar20,0,lVar13,".");
                local_1118 = lVar18;
                FUN_140399630(0xfffffffd,
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                              ,0x9f);
                (*DAT_1415033b0)(lVar18);
                lVar18 = local_10f8;
                param_1 = local_10f0;
                goto LAB_1405e699e;
              }
            }
            FUN_1403b6ad0(&local_868,*plVar10);
            local_1098 = (undefined4)local_858;
            uStack_1094 = local_858._4_4_;
            uStack_1090 = (undefined4)uStack_850;
            uStack_108c = uStack_850._4_4_;
            local_10a8 = local_868;
            uStack_10a4 = uStack_864;
            uStack_10a0 = uStack_860;
            uStack_109c = uStack_85c;
            cVar5 = FUN_1403b6b00(&local_10a8);
            uVar6 = local_10fc & 0xfffffffc;
            if (cVar5 == '\0') {
              FUN_1403b6350(*plVar10,local_10e0);
              if (uVar6 == 4) goto LAB_1405e715e;
LAB_1405e71dc:
              puVar12 = (undefined8 *)FUN_1403b6630(*plVar10,0x20,local_10b0);
              puVar12[2] = 0;
              local_10fc = 0;
              lVar18 = local_10b0;
            }
            else {
              if (uVar6 != 4) {
                if (local_10fd == '\0') {
                  do {
                    lVar18 = *(longlong *)(*(longlong *)(CONCAT44(uStack_108c,uStack_1090) + 8) + 8)
                    ;
                    if (local_10b0 <= lVar18) {
                      local_10b0 = lVar18 + 1;
                    }
                    cVar5 = FUN_1403b6b00(&local_10a8);
                  } while (cVar5 != '\0');
                }
                else {
                  do {
                    puVar12 = *(undefined8 **)(CONCAT44(uStack_108c,uStack_1090) + 8);
                    if (puVar12[1] == local_10b0) {
                      local_1118 = 0;
                      lVar18 = FUN_1403ae340(lVar20,0,lVar13,".");
                      local_1108 = *puVar12;
                      uVar25 = 0xc0;
                      local_1118 = local_10b0;
                      local_1110 = lVar18;
                      goto LAB_1405e6e9f;
                    }
                    cVar5 = FUN_1403b6b00(&local_10a8);
                  } while (cVar5 != '\0');
                }
                FUN_1403b6350(*plVar10,local_10e0);
                goto LAB_1405e71dc;
              }
              if (local_10fd == '\0') {
                do {
                  uVar22 = *(ulonglong *)
                            (*(longlong *)(CONCAT44(uStack_108c,uStack_1090) + 8) + 0x10);
                  if (local_10b8 <= uVar22) {
                    local_10b8 = uVar22 + 1;
                  }
                  cVar5 = FUN_1403b6b00(&local_10a8);
                } while (cVar5 != '\0');
              }
              else {
                do {
                  puVar12 = *(undefined8 **)(CONCAT44(uStack_108c,uStack_1090) + 8);
                  if (puVar12[2] == local_10b8) {
                    local_1118 = 0;
                    local_1110 = FUN_1403ae340(lVar20,0,lVar13,".");
                    local_1108 = *puVar12;
                    local_1118 = local_10b8;
                    redabortreset_bluesreset
                              (7,
                               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                               ,0xb1,"conflicting constant value %u for \'%s\' (other is \'%s\')");
                    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  cVar5 = FUN_1403b6b00(&local_10a8);
                } while (cVar5 != '\0');
              }
              FUN_1403b6350(*plVar10,local_10e0);
LAB_1405e715e:
              puVar12 = (undefined8 *)FUN_1403b6630(*plVar10,0x20,local_10b8);
              puVar12[2] = local_10b8;
              local_10fc = (uint)CONCAT71((int7)(local_10b8 >> 8),1);
              lVar18 = 0;
            }
            lVar20 = local_10e8;
            puVar12[1] = lVar18;
            pcVar4 = DAT_1415033b8;
            uVar25 = FUN_1403af230(local_10e8,lVar13);
            uVar25 = (*pcVar4)(uVar25);
            *puVar12 = uVar25;
            puVar12[3] = lVar13;
            httplib::ClientImpl::vfunction4();
            puVar14 = (undefined8 *)FUN_1403b2f60(0,plVar10 + 1,0x20);
            *puVar14 = *puVar12;
            puVar14[1] = local_10b0;
            puVar14[2] = local_10b8;
            puVar14[3] = puVar12[3];
            if (local_10fd == '\0') {
              piVar15 = (int *)FUN_1403a5610(lVar20,uVar19);
              FUN_1400ba6e0(lVar20,lVar13,uVar19 & 0xffffffff | local_10d0,(longlong)*piVar15);
              cannot_open_scope_for_s_missing_reflection_da(&local_868,lVar20,uVar19);
              if ((char)local_10fc == '\0') {
                iVar7 = value_0f_is_out_of_bounds_for_type_s(&local_868,local_10b0);
                uVar21 = 0xf7;
                lVar20 = local_10e8;
              }
              else {
                iVar7 = value_0f_is_out_of_bounds_for_type_s(&local_868,local_10b8);
                uVar21 = 0xf0;
                lVar20 = local_10e8;
              }
              local_10e8 = lVar20;
              if (iVar7 != 0) {
                local_1118 = 0;
                lVar18 = FUN_1403ae340(lVar20,0,lVar13,".");
                local_1118 = lVar18;
                FUN_140399630(0xfffffffd,
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/enum_ts.c"
                              ,uVar21);
                (*DAT_1415033b0)(lVar18);
                lVar18 = local_10f8;
                param_1 = local_10f0;
                goto LAB_1405e699e;
              }
            }
            FUN_1400ba7b0(lVar20,lVar8,0x166);
            FUN_1400ba7b0(lVar20,lVar8,0x164);
            lVar18 = local_10f8;
            param_1 = local_10f0;
          }
        }
      }
LAB_1405e699e:
      lVar23 = lVar23 + 1;
    } while (lVar23 != lVar18);
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_1138)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_1138);
  }
  return;
code_r0x0001405e6cd6:
  uVar19 = uVar19 + 1;
  puVar3 = puVar3 + 4;
  if (uVar6 == uVar19) goto LAB_1405e6c60;
  goto LAB_1405e6cd0;
code_r0x0001405e6b46:
  uVar17 = uVar17 + 1;
  puVar14 = puVar14 + 4;
  if (uVar6 == uVar17) goto LAB_1405e6ad0;
  goto LAB_1405e6b40;
}

