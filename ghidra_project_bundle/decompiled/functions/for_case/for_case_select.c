/**
 * Function: for_case_select
 * Address:  1408ea2b0
 * Signature: undefined for_case_select(void)
 * Body size: 19444 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void for_case_select(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  size_t sVar15;
  longlong lVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  uint uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  undefined1 uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  bool bVar28;
  ulonglong in_stack_ffffffffffffee38;
  undefined1 local_11b0 [1048];
  undefined1 local_d98 [1048];
  undefined1 local_980 [1047];
  char cStack_569;
  undefined1 local_568;
  char acStack_567 [503];
  int local_370;
  uint uStack_36c;
  undefined2 local_368;
  int local_364;
  char local_360 [256];
  undefined8 local_260;
  undefined1 local_252;
  undefined1 local_251;
  int local_248;
  char local_244 [4];
  longlong local_240;
  int local_238;
  char local_234 [4];
  longlong local_230;
  int local_228;
  char local_224 [4];
  longlong local_220;
  undefined1 (*local_218) [16];
  undefined1 *local_210;
  undefined1 (*local_208) [16];
  undefined8 *local_200;
  int local_1f8;
  char local_1f4 [4];
  longlong local_1f0;
  int local_1e8;
  char local_1e4 [4];
  longlong local_1e0;
  undefined1 local_1d8 [16];
  uint local_1c8;
  int aiStack_1c4 [7];
  uint auStack_1a8 [7];
  uint auStack_18c [9];
  longlong local_168;
  uint local_15c;
  ulonglong local_158;
  uint local_14c;
  int local_148;
  int local_144;
  undefined8 *local_140 [2];
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_108;
  longlong local_100;
  undefined8 local_f0;
  undefined2 local_e8;
  uint local_e4;
  undefined8 local_e0;
  longlong lStack_d8;
  uint uStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1408ea2c6;
  local_c0 = 0xfffffffffffffffe;
  local_260 = *param_4;
  FUN_140a8b860(local_980,0);
  FUN_140a8b860(local_11b0,0);
  FUN_140a8b860(local_d98,0);
  FUN_140a8b940(local_980,"| || |& & && ; ;; ( ) { }");
  FUN_140a8b940(local_11b0,"if elif fi while until else then do done esac eval");
  FUN_140a8b940(local_d98,"for case select");
  in_stack_ffffffffffffee38 = in_stack_ffffffffffffee38 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_1e8,3,&DAT_14135fdac,0x80,in_stack_ffffffffffffee38);
  in_stack_ffffffffffffee38 = in_stack_ffffffffffffee38 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_1f8,7,&DAT_1413802e4,0x80,in_stack_ffffffffffffee38);
  local_210 = (undefined1 *)thunk_FUN_140b65d30(0x80);
  *(undefined8 *)(local_210 + 0x70) = 0;
  *(undefined8 *)(local_210 + 0x78) = 0;
  *(undefined8 *)(local_210 + 0x21) = 0;
  *(undefined8 *)(local_210 + 0x29) = 0;
  *(undefined8 *)(local_210 + 0x31) = 0;
  *(undefined8 *)(local_210 + 0x39) = 0;
  *(undefined8 *)(local_210 + 0x11) = 0;
  *(undefined8 *)(local_210 + 0x19) = 0;
  *(undefined8 *)(local_210 + 1) = 0;
  *(undefined8 *)(local_210 + 9) = 0;
  *(undefined8 *)(local_210 + 0x61) = 0;
  *(undefined8 *)(local_210 + 0x69) = 0;
  *(undefined8 *)(local_210 + 0x51) = 0;
  *(undefined8 *)(local_210 + 0x59) = 0;
  *(undefined8 *)(local_210 + 0x41) = 0;
  *(undefined8 *)(local_210 + 0x49) = 0;
  local_210[0x7c] = 1;
  local_210[0x26] = 1;
  *(undefined2 *)(local_210 + 0x3b) = 0x101;
  *(undefined2 *)(local_210 + 0x28) = 0x101;
  local_210[0x3e] = 1;
  local_210[0x20] = 1;
  *(undefined2 *)(local_210 + 9) = 0x101;
  local_210[0xd] = 1;
  *local_210 = 1;
  local_200 = (undefined8 *)thunk_FUN_140b65d30(0x80);
  local_200[4] = 0;
  local_200[5] = 0;
  local_200[10] = 0;
  local_200[0xb] = 0;
  local_200[6] = 0;
  local_200[7] = 0;
  local_200[8] = 0;
  local_200[9] = 0;
  local_200[0xe] = 0;
  local_200[0xf] = 0;
  local_200[0xc] = 0;
  local_200[0xd] = 0;
  local_200[2] = 0;
  local_200[3] = 0;
  *local_200 = 0;
  local_200[1] = 0;
  *(undefined2 *)((longlong)local_200 + 0x25) = 0x101;
  *(undefined1 *)((longlong)local_200 + 0x5b) = 1;
  *(undefined2 *)((longlong)local_200 + 0x5d) = 0x101;
  *(undefined1 *)((longlong)local_200 + 0x21) = 1;
  local_200[5] = 0x101010101010101;
  *(undefined4 *)((longlong)local_200 + 0x3a) = 0x1010101;
  *(undefined4 *)((longlong)local_200 + 0x3d) = 0x1010101;
  *(undefined4 *)((longlong)local_200 + 0x7b) = 0x1010101;
  local_218 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_218[7] = (undefined1  [16])0x0;
  local_218[5] = (undefined1  [16])0x0;
  local_218[6] = (undefined1  [16])0x0;
  local_218[4] = (undefined1  [16])0x0;
  local_218[3] = (undefined1  [16])0x0;
  local_218[2] = (undefined1  [16])0x0;
  local_218[1] = (undefined1  [16])0x0;
  *local_218 = (undefined1  [16])0x0;
  *(undefined2 *)(local_218[7] + 7) = 0x101;
  *(undefined2 *)(local_218[5] + 2) = 0x101;
  *(undefined2 *)(local_218[5] + 7) = 0x101;
  local_218[7][10] = 1;
  local_218[7][0] = 1;
  *(undefined2 *)(local_218[6] + 0xb) = 0x101;
  local_218[5][4] = 1;
  *(undefined2 *)(local_218[4] + 1) = 0x101;
  local_218[4][3] = 1;
  local_218[4][7] = 1;
  *(undefined2 *)(local_218[6] + 0xe) = 0x101;
  *(undefined4 *)(local_218[4] + 0xc) = 0x1010101;
  *(undefined8 *)(local_218[6] + 1) = 0x101010101010101;
  *(undefined4 *)(local_218[7] + 2) = 0x1010101;
  in_stack_ffffffffffffee38 = in_stack_ffffffffffffee38 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_248,7,&DAT_14135fdab,0x80,in_stack_ffffffffffffee38);
  in_stack_ffffffffffffee38 = in_stack_ffffffffffffee38 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_238,3,"_\\-+!%*,./:?@[]^`{}~",0x80,in_stack_ffffffffffffee38);
  FUN_1408d58e0(&local_228,7,"_-+!%*,./:=?@[]^`{}~",0x80,
                in_stack_ffffffffffffee38 & 0xffffffffffffff00);
  local_208 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_208[2] = (undefined1  [16])0x0;
  local_208[3] = (undefined1  [16])0x0;
  local_208[7] = (undefined1  [16])0x0;
  local_208[6] = (undefined1  [16])0x0;
  local_208[5] = (undefined1  [16])0x0;
  local_208[4] = (undefined1  [16])0x0;
  local_208[1] = (undefined1  [16])0x0;
  *local_208 = (undefined1  [16])0x0;
  local_208[2][4] = 1;
  *(undefined8 *)local_208[3] = 0x101010101010101;
  *(undefined2 *)(local_208[3] + 8) = 0x101;
  local_364 = 0;
  local_360[0] = '\0';
  local_370 = 0;
  uStack_36c = 0;
  local_368 = 0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = 0;
  lVar11 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,param_1);
  if (0 < lVar11) {
    lVar12 = (**(code **)(*(longlong *)*param_5 + 0x30))((longlong *)*param_5,lVar11);
    lVar11 = lVar11 - (ulonglong)(param_1 == lVar12);
  }
  do {
    lVar12 = (**(code **)(*(longlong *)*param_5 + 0x30))((longlong *)*param_5,lVar11);
    if (lVar11 == 0) break;
    iVar8 = (**(code **)(*(longlong *)*param_5 + 0x48))((longlong *)*param_5,lVar11);
    lVar11 = lVar11 + -1;
  } while (iVar8 != 1);
  FUN_1408c6740(local_140,lVar12,(param_2 + param_1) - lVar12,0,param_5,0xff);
  local_14c = 0;
  local_15c = 0;
  local_144 = 0;
  uVar22 = 1;
  local_148 = 0;
  local_158 = 0;
  do {
    if (local_130 <= local_108) {
      FUN_1408c6b70(local_140);
      if (local_e4 == 0xd) {
        (**(code **)(*(longlong *)*param_5 + 0x80))((longlong *)*param_5,local_108,param_5[0x1f9]);
      }
      FUN_1408c6b70(local_140);
      thunk_FUN_140b68ba8(local_208);
      if (local_220 != 0) {
        thunk_FUN_140b68ba8();
      }
      if (local_230 != 0) {
        thunk_FUN_140b68ba8();
      }
      if (local_240 != 0) {
        thunk_FUN_140b68ba8();
      }
      thunk_FUN_140b68ba8(local_218);
      thunk_FUN_140b68ba8(local_200);
      thunk_FUN_140b68ba8(local_210);
      if (local_1f0 != 0) {
        thunk_FUN_140b68ba8();
      }
      if (local_1e0 != 0) {
        thunk_FUN_140b68ba8();
      }
      FUN_140a8b880(local_d98);
      FUN_140a8b880(local_11b0);
      FUN_140a8b880(local_980);
      return;
    }
    if ((char)local_e8 == '\x01') {
      lVar11 = (**(code **)(*(longlong *)*param_5 + 0x28))();
      puVar21 = local_140[0];
      if ((local_e4 < 0xe) && ((0x2c64U >> (local_e4 & 0x1f) & 1) != 0)) {
        (**(code **)(*(longlong *)*param_5 + 0x50))((longlong *)*param_5,lVar11,0);
      }
      else {
        uVar10 = uVar22;
        if (0 < lVar11) {
          lVar12 = local_108 - 3;
          lVar14 = local_140[0][0x1f6];
          if ((lVar12 < lVar14) || ((longlong)local_140[0][0x1f7] <= lVar12)) {
            lVar14 = local_108 - 0x1f7;
            local_140[0][0x1f6] = lVar14;
            lVar16 = local_140[0][0x1f9];
            lVar13 = lVar16 + -4000;
            if ((longlong)(local_108 + 0xda9) <= lVar16) {
              lVar13 = lVar14;
            }
            if (lVar16 < (longlong)(local_108 + 0xda9) || lVar13 < 0) {
              if (lVar13 < 1) {
                lVar13 = 0;
              }
              local_140[0][0x1f6] = lVar13;
              lVar14 = lVar13;
            }
            if (lVar14 + 4000 < lVar16) {
              lVar16 = lVar14 + 4000;
            }
            local_140[0][0x1f7] = lVar16;
            (**(code **)(*(longlong *)*local_140[0] + 0x18))
                      ((longlong *)*local_140[0],local_140[0] + 1,lVar14,lVar16 - lVar14);
            *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
            lVar14 = puVar21[0x1f6];
            if ((lVar14 <= lVar12) && (lVar12 < (longlong)puVar21[0x1f7])) goto LAB_1408eafcd;
          }
          else {
LAB_1408eafcd:
            puVar4 = local_140[0];
            if (*(char *)((longlong)puVar21 + (lVar12 - lVar14) + 8) == '\\') {
              lVar12 = local_108 - 2;
              lVar14 = local_140[0][0x1f6];
              if ((lVar12 < lVar14) || ((longlong)local_140[0][0x1f7] <= lVar12)) {
                lVar14 = local_108 - 0x1f6;
                local_140[0][0x1f6] = lVar14;
                lVar16 = local_140[0][0x1f9];
                lVar13 = lVar16 + -4000;
                if ((longlong)(local_108 + 0xdaa) <= lVar16) {
                  lVar13 = lVar14;
                }
                if (lVar16 < (longlong)(local_108 + 0xdaa) || lVar13 < 0) {
                  if (lVar13 < 1) {
                    lVar13 = 0;
                  }
                  local_140[0][0x1f6] = lVar13;
                  lVar14 = lVar13;
                }
                if (lVar14 + 4000 < lVar16) {
                  lVar16 = lVar14 + 4000;
                }
                local_140[0][0x1f7] = lVar16;
                (**(code **)(*(longlong *)*local_140[0] + 0x18))
                          ((longlong *)*local_140[0],local_140[0] + 1,lVar14,lVar16 - lVar14);
                *(undefined1 *)((longlong)puVar4 + (puVar4[0x1f7] - puVar4[0x1f6]) + 8) = 0;
                lVar14 = puVar4[0x1f6];
                if ((lVar12 < lVar14) || ((longlong)puVar4[0x1f7] <= lVar12)) goto LAB_1408eb0b7;
              }
              if ((*(char *)((longlong)puVar4 + (lVar12 - lVar14) + 8) == '\r') &&
                 ((int)local_e0 == 10)) goto LAB_1408eb194;
            }
          }
LAB_1408eb0b7:
          puVar21 = local_140[0];
          lVar12 = local_108 - 2;
          lVar14 = local_140[0][0x1f6];
          if ((lVar12 < lVar14) || ((longlong)local_140[0][0x1f7] <= lVar12)) {
            lVar14 = local_108 - 0x1f6;
            local_140[0][0x1f6] = lVar14;
            lVar16 = local_140[0][0x1f9];
            lVar13 = lVar16 + -4000;
            if ((longlong)(local_108 + 0xdaa) <= lVar16) {
              lVar13 = lVar14;
            }
            if (lVar16 < (longlong)(local_108 + 0xdaa) || lVar13 < 0) {
              if (lVar13 < 1) {
                lVar13 = 0;
              }
              local_140[0][0x1f6] = lVar13;
              lVar14 = lVar13;
            }
            if (lVar14 + 4000 < lVar16) {
              lVar16 = lVar14 + 4000;
            }
            local_140[0][0x1f7] = lVar16;
            (**(code **)(*(longlong *)*local_140[0] + 0x18))
                      ((longlong *)*local_140[0],local_140[0] + 1,lVar14,lVar16 - lVar14);
            *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
            lVar14 = puVar21[0x1f6];
            uVar10 = 1;
            if ((lVar12 < lVar14) || ((longlong)puVar21[0x1f7] <= lVar12)) goto LAB_1408eb194;
          }
          uVar10 = uVar22;
          if (*(char *)((longlong)puVar21 + (lVar12 - lVar14) + 8) != '\\') {
            uVar10 = 1;
          }
        }
LAB_1408eb194:
        uVar22 = uVar10;
        (**(code **)(*(longlong *)*param_5 + 0x50))((longlong *)*param_5,lVar11,uVar22);
      }
    }
    uVar10 = local_e4;
    puVar21 = local_140[0];
    uVar27 = 0;
    if (uVar22 - 2 < 3) {
      uVar27 = uVar22;
    }
    switch(local_e4) {
    case 2:
      if ((local_e8._1_1_ == '\x01') && ((int)local_e0 != 0x5c)) {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 == uVar18 - 1) {
LAB_1408eb489:
          lVar11 = uVar25 + 1;
        }
        else {
          if (uVar25 < uVar18) goto LAB_1408ec175;
          lVar12 = local_140[0][0x3ee];
          lVar11 = uVar25 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 2;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
        }
LAB_1408ec16e:
        puVar21[0x3ef] = lVar11;
LAB_1408ec175:
        local_e4 = 0;
      }
      break;
    case 3:
      uVar9 = local_e0._4_4_ - 0x30;
      iVar8 = (int)local_158;
      uVar19 = uVar9;
      if (uVar9 < 10) {
joined_r0x0001408eb7c2:
        if (iVar8 != 0x41) goto LAB_1408eaca3;
LAB_1408eb365:
        if (9 < uVar19) {
LAB_1408ec11b:
          local_e4 = 1;
          local_158 = 0x41;
          uVar24 = 1;
          goto LAB_1408ec12e;
        }
LAB_1408eb36e:
        local_158 = 0x41;
      }
      else {
        if (local_e0._4_4_ - 0x61 < 0x1a) {
          uVar19 = local_e0._4_4_ - 0x57;
          goto joined_r0x0001408eb7c2;
        }
        if (local_e0._4_4_ - 0x41 < 0x1a) {
          uVar19 = local_e0._4_4_ - 0x1d;
          goto joined_r0x0001408eb7c2;
        }
        uVar19 = (uint)(local_e0._4_4_ != 0x5f) * 2 + 0x3f;
        if (local_e0._4_4_ == 0x40) {
          uVar19 = 0x3e;
        }
        if (iVar8 == 0x41) goto LAB_1408eb365;
LAB_1408eaca3:
        if (iVar8 == 0x43) {
          if (9 < uVar9) {
            local_158 = 0x43;
            uVar24 = 3;
            if ((0x25 < local_e0._4_4_ - 0x41) ||
               ((0x3f0000003fU >> ((ulonglong)(local_e0._4_4_ - 0x41) & 0x3f) & 1) == 0))
            goto LAB_1408ec12e;
          }
          local_158 = 0x43;
        }
        else {
          if (iVar8 != 0x42) {
            uVar24 = 3;
            if (uVar19 != 0x41) {
              uVar9 = uVar19 - 0x1a;
              if (uVar19 < 0x24) {
                uVar9 = uVar19;
              }
              if (0x24 < iVar8) {
                uVar9 = uVar19;
              }
              if ((int)uVar9 < iVar8) break;
              if ((int)uVar9 < 10) goto LAB_1408eb36e;
            }
LAB_1408ec12e:
            puVar21 = local_140[0];
            uVar18 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar25 = local_140[0][0x3ef];
            if (uVar18 == uVar25 - 1) goto LAB_1408ec168;
            if (uVar18 < uVar25) goto LAB_1408ec175;
            lVar12 = local_140[0][0x3ee];
            lVar11 = uVar18 + 1;
            if ((0 < lVar12) && (3999 < (lVar11 - uVar25) + lVar12)) {
              (**(code **)(*(longlong *)*local_140[0] + 0x68))();
              uVar25 = puVar21[0x3ef];
              puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
              puVar21[0x3ee] = 0;
              lVar12 = 0;
            }
            if (lVar12 + (uVar18 - uVar25) + 1 < 4000) {
              for (; uVar25 <= uVar18; uVar25 = uVar25 + 1) {
                lVar12 = puVar21[0x3ee];
                puVar21[0x3ee] = lVar12 + 1;
                *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = uVar24;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar21 + 0x60))
                        ((longlong *)*puVar21,(uVar18 - uVar25) + 1);
            }
            goto LAB_1408ec16e;
          }
          if (local_e0._4_4_ == 0x23) {
            FUN_140a8b5b0(local_140,&local_568);
            if (local_568 == '\0') {
              bVar28 = false;
              local_158 = 0;
            }
            else {
              local_158 = 0;
              uVar9 = 0xffffffff;
              pcVar20 = acStack_567;
              cVar7 = local_568;
              do {
                local_158 = (ulonglong)(((int)cVar7 + (int)local_158 * 10) - 0x30);
                cVar7 = *pcVar20;
                uVar9 = uVar9 + 1;
                pcVar20 = pcVar20 + 1;
              } while (cVar7 != '\0');
              bVar28 = 1 < uVar9;
            }
            if ((bool)(0x40 < (int)local_158 | bVar28)) goto LAB_1408ec11b;
          }
          else {
            uVar24 = 3;
            local_158 = 0x42;
            if (9 < uVar9) goto LAB_1408ec12e;
            local_158 = 0x42;
          }
        }
      }
      break;
    case 4:
      if (-1 < (longlong)(int)local_e0._4_4_) {
        pcVar20 = (char *)((int)local_e0._4_4_ + local_1f0);
        if (local_1f8 <= (int)local_e0._4_4_) {
          pcVar20 = local_1f4;
        }
        if (*pcVar20 != '\0') break;
      }
      FUN_140a8b5b0(local_140,&local_568);
      local_252 = (char)(local_e0 >> 0x20);
      local_251 = 0;
      bVar5 = 1;
      if ((local_e0._4_4_ - 9 < 0x18 & (byte)(0x80001f >> ((byte)(local_e0._4_4_ - 9) & 0x1f))) == 0
         ) {
        bVar5 = FUN_140a8bc50(local_980,&local_252);
      }
      puVar21 = local_140[0];
      if (uVar22 == 2) {
        uVar9 = 0;
        if (((bVar5 & (acStack_567[1] == '\0' && (short)_local_568 == 0x6e69)) == 0) &&
           (uVar9 = 1, (bVar5 & (acStack_567[1] == '\0' && (short)_local_568 == 0x6f64)) == 0)) {
          local_e4 = 8;
          uVar9 = uVar27;
        }
        uVar19 = local_e4;
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        uVar27 = uVar9;
        if (uVar25 == uVar18 - 1) {
          local_140[0][0x3ef] = uVar25 + 1;
        }
        else if (uVar18 <= uVar25) {
          lVar11 = local_140[0][0x3ee];
          if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar11 = 0;
          }
          if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar11 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar11 + 1;
              *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar19;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
          puVar21[0x3ef] = uVar25 + 1;
        }
      }
      else {
        if (acStack_567[3] == '\0' && _local_568 == 0x74736574) {
          if ((uVar22 == 1 & bVar5) == 0) goto LAB_1408ec456;
          uVar27 = 3;
          local_148 = 0;
        }
        else {
          cVar7 = FUN_140a8bc50(local_11b0,&local_568);
          if (cVar7 == '\0') {
            cVar7 = FUN_140a8bc50(local_d98,&local_568);
            if (cVar7 == '\0') {
              if (local_568 == '-') {
                if (uVar22 != 3) {
LAB_1408ec456:
                  local_e4 = 8;
                }
              }
              else if ((uVar22 != 1) ||
                      (bVar6 = FUN_140a8bc50(local_260,&local_568), (bVar5 & bVar6) == 0))
              goto LAB_1408ec456;
            }
            else {
              if ((uVar22 == 1 & bVar5) == 0) goto LAB_1408ec456;
              uVar27 = 2;
            }
          }
          else {
            if ((uVar22 == 1 & bVar5) == 0) goto LAB_1408ec456;
            uVar27 = 1;
          }
        }
        uVar9 = local_e4;
        puVar21 = local_140[0];
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 != uVar18 - 1) {
          if (uVar25 < uVar18) goto LAB_1408ec4ae;
          lVar11 = local_140[0][0x3ee];
          if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar11 = 0;
          }
          if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar11 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar11 + 1;
              *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar9;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
        }
        puVar21[0x3ef] = uVar25 + 1;
      }
LAB_1408ec4ae:
      local_e4 = 0;
      break;
    case 5:
    case 0xb:
      uVar17 = local_1d8._4_4_;
      uVar3 = local_1d8._12_4_;
      if (local_1d8._4_4_ == 0x5c || local_e0._4_4_ != 0x5c) {
        bVar28 = local_e0._4_4_ == local_1d8._8_4_;
        auVar1 = local_1d8._4_12_;
        uVar2 = local_1d8._8_8_;
        if (bVar28) {
          local_1d8._0_4_ = local_1d8._0_4_ + -1;
          local_1d8 = CONCAT124(auVar1,local_1d8._0_4_);
          if (local_1d8._0_4_ == 0) {
            if ((int)local_1c8 < 1) {
              FUN_1408c69d0(local_140,0);
            }
            else {
              local_1c8 = local_1c8 - 1;
              local_1d8._0_4_ = aiStack_1c4[local_1c8];
              local_1d8 = CONCAT124(auVar1,local_1d8._0_4_);
              local_1d8._4_4_ = auStack_1a8[local_1c8];
              local_1d8 = CONCAT88(uVar2,local_1d8._0_8_);
              local_1d8._12_4_ = auStack_18c[local_1c8];
              if ((int)local_1d8._4_4_ < 0x5b) {
                if (local_1d8._4_4_ == 0x28) {
                  local_1d8._8_4_ = 0x29;
                }
                else if (local_1d8._4_4_ == 0x3c) {
                  local_1d8._8_4_ = 0x3e;
                }
                else {
LAB_1408ede6b:
                  local_1d8._8_4_ = local_1d8._4_4_;
                }
              }
              else if (local_1d8._4_4_ == 0x7b) {
                local_1d8._8_4_ = 0x7d;
              }
              else {
                if (local_1d8._4_4_ != 0x5b) goto LAB_1408ede6b;
                local_1d8._8_4_ = 0x5d;
              }
            }
          }
        }
        else if (local_e0._4_4_ == uVar17) {
          local_1d8._0_4_ = local_1d8._0_4_ + 1;
          local_1d8 = CONCAT124(auVar1,local_1d8._0_4_);
        }
        else if ((uVar3 & 0xfffffffd) == 1) {
          if (local_e0._4_4_ == 0x60) {
LAB_1408eb81d:
            if ((longlong)(int)local_1c8 < 7) {
              aiStack_1c4[(int)local_1c8] = local_1d8._0_4_;
              auStack_1a8[(int)local_1c8] = uVar17;
              auStack_18c[(int)local_1c8] = uVar3;
              local_1c8 = local_1c8 + 1;
              local_1d8._8_8_ = 0x500000060;
              local_1d8._0_8_ = 0x6000000001;
            }
          }
          else if ((local_e0._4_4_ == 0x24) && (uStack_d0 == 0x28)) {
            if (local_108 < local_130) {
              local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
              uVar18 = 0x2800000024;
              if (local_e8._1_1_ == '\x01') {
                lVar11 = local_100 + 2;
                local_100 = local_100 + 1;
                local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                     ((longlong *)*local_140[0],lVar11);
                uVar18 = CONCAT44(uStack_d0,local_e0._4_4_);
              }
              local_108 = local_108 + lStack_d8;
              lStack_d8 = local_c8;
              local_e0 = uVar18;
              FUN_1408c6cd0(local_140);
              iVar8 = local_e0._4_4_;
            }
            else {
              local_e8 = 0x100;
              local_e0 = 0x2000000020;
              uStack_d0 = 0x20;
              iVar8 = 0x20;
            }
            if ((longlong)(int)local_1c8 < 7) {
              aiStack_1c4[(int)local_1c8] = local_1d8._0_4_;
              auStack_1a8[(int)local_1c8] = local_1d8._4_4_;
              auStack_18c[(int)local_1c8] = local_1d8._12_4_;
              local_1c8 = local_1c8 + 1;
              local_1d8._4_4_ = iVar8;
              local_1d8._0_4_ = 1;
              if (iVar8 < 0x5b) {
                if (iVar8 == 0x28) {
                  iVar8 = 0x29;
                }
                else if (iVar8 == 0x3c) {
                  iVar8 = 0x3e;
                }
              }
              else if (iVar8 == 0x7b) {
                iVar8 = 0x7d;
              }
              else if (iVar8 == 0x5b) {
                iVar8 = 0x5d;
              }
              local_1d8._8_4_ = iVar8;
              local_1d8._12_4_ = 4;
            }
          }
        }
        else if ((uVar3 & 0xfffffffe) == 4) {
          if ((int)local_e0._4_4_ < 0x27) {
            if (local_e0._4_4_ == 0x22) {
              if ((longlong)(int)local_1c8 < 7) {
                aiStack_1c4[(int)local_1c8] = local_1d8._0_4_;
                auStack_1a8[(int)local_1c8] = uVar17;
                auStack_18c[(int)local_1c8] = uVar3;
                local_1c8 = local_1c8 + 1;
                local_1d8._8_8_ = 0x100000022;
                local_1d8._0_8_ = 0x2200000001;
              }
            }
            else if (local_e0._4_4_ == 0x24) {
              if (uStack_d0 == 0x22) {
                FUN_1408ef8e0(local_140);
                FUN_1408ef980(local_1d8,local_e0._4_4_);
              }
              else if (uStack_d0 == 0x28) {
                FUN_1408ef8e0(local_140);
                FUN_1408ef980(local_1d8,local_e0._4_4_);
              }
              else if (uStack_d0 == 0x27) {
                FUN_1408ef8e0(local_140);
                FUN_1408ef980(local_1d8,local_e0._4_4_);
              }
            }
          }
          else {
            if (local_e0._4_4_ == 0x60) goto LAB_1408eb81d;
            if ((local_e0._4_4_ == 0x27) && ((longlong)(int)local_1c8 < 7)) {
              aiStack_1c4[(int)local_1c8] = local_1d8._0_4_;
              auStack_1a8[(int)local_1c8] = uVar17;
              auStack_18c[(int)local_1c8] = uVar3;
              local_1c8 = local_1c8 + 1;
              local_1d8._8_8_ = 0x27;
              local_1d8._0_8_ = 0x2700000001;
            }
          }
        }
      }
      else if (local_1d8._12_4_ != 0) {
        if (local_130 <= local_108) goto LAB_1408eb1b1;
        local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
        uVar17 = 0x5c;
        if (local_e8._1_1_ == '\x01') {
          lVar11 = local_100 + 2;
          local_100 = local_100 + 1;
          local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                               ((longlong *)*local_140[0],lVar11);
          uVar17 = local_e0._4_4_;
        }
        local_108 = local_108 + lStack_d8;
        local_e0 = CONCAT44(uStack_d0,uVar17);
        lStack_d8 = local_c8;
        FUN_1408c6cd0(local_140);
      }
      break;
    case 6:
      if (local_e0._4_4_ == local_14c) {
        if (local_144 == 1) {
          local_144 = 0;
          FUN_1408c69d0(local_140,0);
        }
        else {
LAB_1408eb21b:
          local_144 = local_144 + -1;
        }
      }
      break;
    case 7:
      uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
      uVar18 = local_140[0][0x3ef];
      if (uVar25 == uVar18 - 1) {
LAB_1408ea8ed:
        puVar21[0x3ef] = uVar25 + 1;
      }
      else if (uVar18 <= uVar25) {
        lVar11 = local_140[0][0x3ee];
        if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
          (**(code **)(*(longlong *)*local_140[0] + 0x68))();
          uVar18 = puVar21[0x3ef];
          puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
          puVar21[0x3ee] = 0;
          lVar11 = 0;
        }
        if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
          for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
            lVar11 = puVar21[0x3ee];
            puVar21[0x3ee] = lVar11 + 1;
            *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 7;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
        }
        goto LAB_1408ea8ed;
      }
      local_e4 = 0;
      if (uVar22 == 5) {
        uVar27 = 1;
      }
      else if ((int)local_e0 == 0x5c) {
        uVar27 = uVar22;
      }
      break;
    case 8:
      if ((int)local_e0 != 0x5c) {
        lVar11 = (longlong)(int)local_e0._4_4_;
        if (-1 < lVar11) {
          pcVar20 = (char *)(local_1f0 + lVar11);
          if (local_1f8 <= (int)local_e0._4_4_) {
            pcVar20 = local_1f4;
          }
          if (*pcVar20 != '\0') {
            if (uVar22 == 4) {
              pcVar20 = (char *)(lVar11 + local_1e0);
              if (local_1e8 <= (int)local_e0._4_4_) {
                pcVar20 = local_1e4;
              }
              if (*pcVar20 == '\0') {
                uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
                uVar18 = local_140[0][0x3ef];
                if (uVar25 != uVar18 - 1) {
                  if (uVar18 <= uVar25) {
                    lVar12 = local_140[0][0x3ee];
                    lVar11 = uVar25 + 1;
                    if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
                      (**(code **)(*(longlong *)*local_140[0] + 0x68))();
                      uVar18 = puVar21[0x3ef];
                      puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                      puVar21[0x3ee] = 0;
                      lVar12 = 0;
                    }
                    if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
                      for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                        lVar12 = puVar21[0x3ee];
                        puVar21[0x3ee] = lVar12 + 1;
                        *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 8;
                      }
                    }
                    else {
                      (**(code **)(*(longlong *)*puVar21 + 0x60))
                                ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
                    }
                    goto LAB_1408ec16e;
                  }
                  goto LAB_1408ec175;
                }
                goto LAB_1408eb489;
              }
            }
            break;
          }
        }
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 == uVar18 - 1) goto LAB_1408eb489;
        if (uVar18 <= uVar25) {
          lVar12 = local_140[0][0x3ee];
          lVar11 = uVar25 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 8;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
          goto LAB_1408ec16e;
        }
        goto LAB_1408ec175;
      }
      FUN_1408c69d0(local_140,0);
      break;
    case 9:
      if (-1 < (longlong)(int)local_e0._4_4_) {
        pcVar20 = (char *)((int)local_e0._4_4_ + local_240);
        if (local_248 <= (int)local_e0._4_4_) {
          pcVar20 = local_244;
        }
        if (*pcVar20 != '\0') break;
      }
      uVar18 = local_140[0][0x3ef];
      if (local_108 - uVar18 != 1) {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        if (uVar25 == uVar18 - 1) goto LAB_1408eb489;
        if (uVar18 <= uVar25) {
          lVar12 = local_140[0][0x3ee];
          lVar11 = uVar25 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 9;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
          goto LAB_1408ec16e;
        }
        goto LAB_1408ec175;
      }
      FUN_1408c69d0(local_140,0);
      break;
    case 10:
      if (local_15c == 0x5c || local_e0._4_4_ != 0x5c) {
        if (local_e0._4_4_ == local_14c) {
          if (local_144 != 1) goto LAB_1408eb21b;
          local_144 = 0;
          FUN_1408c69d0(local_140,0);
        }
        else {
          local_144 = local_144 + (uint)(local_e0._4_4_ == local_15c);
        }
      }
      else if (local_108 < local_130) {
        local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
        uVar17 = 0x5c;
        if (local_e8._1_1_ == '\x01') {
          lVar11 = local_100 + 2;
          local_100 = local_100 + 1;
          local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                               ((longlong *)*local_140[0],lVar11);
          uVar17 = local_e0._4_4_;
        }
        local_108 = local_108 + lStack_d8;
        local_e0 = CONCAT44(uStack_d0,uVar17);
        lStack_d8 = local_c8;
        FUN_1408c6cd0(local_140);
      }
      else {
LAB_1408eb1b1:
        local_e8 = 0x100;
        local_e0 = 0x2000000020;
        uStack_d0 = 0x20;
      }
      break;
    case 0xc:
      if (local_370 == 1) {
        uVar9 = local_e0._4_4_;
        if (((local_e0._4_4_ == 0x27 || uStack_36c != 0x27) &&
            (((local_368 & 1) == 0 || (local_e0._4_4_ == uStack_36c || local_e0._4_4_ == 0x5c)))) &&
           ((uStack_36c == 0x27 || ((int)local_e0 != 0x5c)))) {
          if (-1 < (longlong)local_e0) {
            pcVar20 = (char *)((ulonglong)local_e0._4_4_ + local_220);
            if (local_228 <= (int)local_e0._4_4_) {
              pcVar20 = local_224;
            }
            if (*pcVar20 == '\x01') goto LAB_1408eb55d;
          }
          if ((local_368 & 1) == 0) {
            if (local_e0._4_4_ != 0x5c) {
              FUN_1408c6890(local_140,0);
            }
          }
          else if (local_e0._4_4_ == uStack_36c) {
            FUN_1408c69d0(local_140,0);
          }
          else if ((local_e0._4_4_ == 0x5c) &&
                  (uVar9 = 0x5c, uStack_d0 != uStack_36c && uStack_d0 != 0x5c)) goto LAB_1408eb55d;
        }
        else {
LAB_1408eb55d:
          lVar11 = (longlong)local_364;
          local_364 = local_364 + 1;
          local_360[lVar11] = (char)uVar9;
          local_360[local_364] = '\0';
        }
        uVar9 = local_e4;
        puVar21 = local_140[0];
        if (0xfe < local_364) {
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = local_140[0][0x3ef];
          if (uVar25 == uVar18 - 1) {
LAB_1408eb5d0:
            puVar21[0x3ef] = uVar25 + 1;
          }
          else if (uVar18 <= uVar25) {
            lVar11 = local_140[0][0x3ee];
            if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
              (**(code **)(*(longlong *)*local_140[0] + 0x68))();
              uVar18 = puVar21[0x3ef];
              puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
              puVar21[0x3ee] = 0;
              lVar11 = 0;
            }
            if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
              for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                lVar11 = puVar21[0x3ee];
                puVar21[0x3ee] = lVar11 + 1;
                *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar9;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar21 + 0x60))
                        ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
            }
            goto LAB_1408eb5d0;
          }
          local_e4 = 1;
          local_370 = 0;
        }
      }
      else if (local_370 == 0) {
        uVar18 = (ulonglong)uStack_d0;
        uStack_36c = uStack_d0;
        local_368 = local_368 & 0xff00;
        local_364 = 0;
        local_360[0] = '\0';
        if ((uVar18 == 0x27) || (uStack_d0 == 0x22)) {
          if (local_108 < local_130) {
            local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
            if (local_e8._1_1_ == '\x01') {
              lVar11 = local_100 + 2;
              local_100 = local_100 + 1;
              local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                   ((longlong *)*local_140[0],lVar11);
            }
            local_108 = local_108 + lStack_d8;
            local_e0 = CONCAT44(uStack_d0,local_e0._4_4_);
            lStack_d8 = local_c8;
            FUN_1408c6cd0(local_140);
          }
          else {
            local_e8 = 0x100;
            local_e0 = 0x2000000020;
            uStack_d0 = 0x20;
          }
          local_368 = CONCAT11(local_368._1_1_,1);
          local_370 = 1;
        }
        else {
          if (-1 < (int)uStack_d0) {
            pcVar20 = (char *)(local_230 + uVar18);
            if (local_238 <= (int)uStack_d0) {
              pcVar20 = local_234;
            }
            if ((*pcVar20 == '\0') && (uVar22 == 4 || uStack_d0 != 0x3d)) {
              if ((4 < uStack_d0 - 9) && (uStack_d0 != 0x20)) {
                if (uStack_d0 != 0x3c) {
                  if (uStack_d0 < 0x80) {
                    if (((*local_208)[uVar18] != '\0') || (uVar22 == 4 && uStack_d0 == 0x3d)) {
                      local_e4 = 7;
                      FUN_1408c69d0(local_140,0);
                      break;
                    }
                  }
                  goto LAB_1408ebe79;
                }
                if (local_108 < local_130) {
                  local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
                  uVar9 = 0x3c;
                  if (local_e8._1_1_ == '\x01') {
                    lVar11 = local_100 + 2;
                    local_100 = local_100 + 1;
                    local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                         ((longlong *)*local_140[0],lVar11);
                    uVar9 = uStack_d0;
                  }
                  local_108 = local_108 + lStack_d8;
                  local_e0 = CONCAT44(uVar9,local_e0._4_4_);
                  lStack_d8 = local_c8;
                  FUN_1408c6cd0(local_140);
                }
                else {
                  local_e8 = 0x100;
                  local_e0 = 0x2000000020;
                  uStack_d0 = 0x20;
                }
                FUN_1408c69d0(local_140,0);
              }
              break;
            }
          }
LAB_1408ebe79:
          local_370 = 1;
        }
      }
      break;
    case 0xd:
      if ((char)local_e8 == '\x01') {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 == uVar18 - 1) {
LAB_1408ea943:
          puVar21[0x3ef] = uVar25 + 1;
        }
        else if (uVar18 <= uVar25) {
          lVar11 = local_140[0][0x3ee];
          if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))
                      ((longlong *)*local_140[0],lVar11,local_140[0] + 0x1fa);
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar11 = 0;
          }
          if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar11 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar11 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0xd;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))
                      ((longlong *)*puVar21,(uVar25 - uVar18) + 1,0xd);
          }
          goto LAB_1408ea943;
        }
        local_e4 = 0xd;
        iVar8 = 0;
        while ((uVar9 = local_e4, puVar21 = local_140[0], local_e0._4_4_ == 9 &&
               (local_e8._1_1_ == '\0'))) {
          local_e8 = 0;
          if (local_108 < local_130) {
            local_108 = local_108 + lStack_d8;
            local_e0 = CONCAT44(uStack_d0,9);
            lStack_d8 = local_c8;
            FUN_1408c6cd0(local_140);
          }
          else {
            local_e0 = 0x2000000020;
            uStack_d0 = 0x20;
            local_e8 = 0x100;
          }
          iVar8 = iVar8 + 1;
        }
        if (iVar8 != 0) {
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = local_140[0][0x3ef];
          if (uVar25 == uVar18 - 1) {
            lVar11 = uVar25 + 1;
LAB_1408eb751:
            puVar21[0x3ef] = lVar11;
          }
          else if (uVar18 <= uVar25) {
            lVar11 = local_140[0][0x3ee];
            local_168 = uVar25 + 1;
            if ((0 < lVar11) && (3999 < (local_168 - uVar18) + lVar11)) {
              (**(code **)(*(longlong *)*local_140[0] + 0x68))
                        ((longlong *)*local_140[0],lVar11,local_140[0] + 0x1fa);
              uVar18 = puVar21[0x3ef];
              puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
              puVar21[0x3ee] = 0;
              lVar11 = 0;
            }
            if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
              for (; lVar11 = local_168, uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                lVar11 = puVar21[0x3ee];
                puVar21[0x3ee] = lVar11 + 1;
                *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar9;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar21 + 0x60))
                        ((longlong *)*puVar21,(uVar25 - uVar18) + 1,uVar9);
              lVar11 = local_168;
            }
            goto LAB_1408eb751;
          }
          local_e4 = 0xd;
        }
        while (local_e8._1_1_ == '\0') {
          local_e8 = 0;
          if (local_108 < local_130) {
            local_108 = local_108 + lStack_d8;
            local_e0 = CONCAT44(uStack_d0,local_e0._4_4_);
            lStack_d8 = local_c8;
            FUN_1408c6cd0(local_140);
          }
          else {
            local_e0 = 0x2000000020;
            uStack_d0 = 0x20;
            local_e8 = 0x100;
          }
        }
        FUN_140a8b5b0(local_140,&local_568);
        uVar9 = local_e4;
        uVar18 = local_108;
        puVar21 = local_140[0];
        if (local_108 == local_140[0][0x3ef]) {
          if (((iVar8 != 0 && (local_368 & 0x100) == 0) || ((local_368 & 1) == 0)) ||
             (local_364 != 0)) break;
          uVar18 = ~(ulonglong)(local_128 < local_108) + local_108;
          if (local_128 < local_108) {
            if (local_108 <= uVar18) {
              lVar11 = local_140[0][0x3ee];
              local_168 = uVar18 + 1;
              uVar25 = local_108;
              if ((0 < lVar11) && (3999 < ((uVar18 + 1) - local_108) + lVar11)) {
                (**(code **)(*(longlong *)*local_140[0] + 0x68))();
                uVar25 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if ((uVar18 - uVar25) + lVar11 + 1 < 4000) {
                for (; lVar11 = local_168, uVar25 <= uVar18; uVar25 = uVar25 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar9;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar18 - uVar25) + 1);
                lVar11 = local_168;
              }
              goto LAB_1408ec16e;
            }
            goto LAB_1408ec175;
          }
LAB_1408ec168:
          lVar11 = uVar18 + 1;
          goto LAB_1408ec16e;
        }
        sVar15 = strlen(&local_568);
        if ((&local_568)[sVar15 - 1] == '\r') {
          (&cStack_569)[sVar15] = '\0';
        }
        iVar23 = strcmp(local_360,&local_568);
        uVar9 = local_e4;
        if ((iVar23 != 0) || (iVar8 != 0 && (local_368 & 0x100) == 0)) break;
        uVar18 = (-1 - (ulonglong)(local_128 < uVar18)) + uVar18;
        uVar25 = puVar21[0x3ef];
        if (uVar18 == uVar25 - 1) goto LAB_1408ec168;
        if (uVar25 <= uVar18) {
          lVar12 = puVar21[0x3ee];
          lVar11 = uVar18 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar25) + lVar12)) {
            (**(code **)(*(longlong *)*puVar21 + 0x68))();
            uVar25 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar18 - uVar25) + 1 < 4000) {
            for (; uVar25 <= uVar18; uVar25 = uVar25 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(char *)((longlong)puVar21 + lVar12 + 0xfd0) = (char)uVar9;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar18 - uVar25) + 1);
          }
          goto LAB_1408ec16e;
        }
        goto LAB_1408ec175;
      }
    }
    puVar21 = local_140[0];
    if ((local_370 != 1) || (local_e8._1_1_ == '\0')) {
      if (local_e4 != 0) {
        uVar27 = uVar22;
      }
      if (uVar10 == 0) {
        uVar27 = uVar22;
      }
      if (local_e4 == 0) goto joined_r0x0001408ec607;
      goto LAB_1408ee280;
    }
    local_370 = 2;
    uVar24 = (undefined1)local_e4;
    if ((local_368 & 1) == 0) {
      if (local_364 != 0) {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 == uVar18 - 1) goto LAB_1408ec76c;
        if (uVar18 <= uVar25) {
          lVar12 = local_140[0][0x3ee];
          lVar11 = uVar25 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = uVar24;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
          goto LAB_1408ec772;
        }
        goto LAB_1408ec779;
      }
      local_e4 = 1;
      uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
      uVar18 = local_140[0][0x3ef];
      if (uVar25 == uVar18 - 1) goto LAB_1408ec839;
      if (uVar18 <= uVar25) {
        lVar12 = local_140[0][0x3ee];
        lVar11 = uVar25 + 1;
        if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
          (**(code **)(*(longlong *)*local_140[0] + 0x68))();
          uVar18 = puVar21[0x3ef];
          puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
          puVar21[0x3ee] = 0;
          lVar12 = 0;
        }
        if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
          for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
            lVar12 = puVar21[0x3ee];
            puVar21[0x3ee] = lVar12 + 1;
            *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 1;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
        }
        goto LAB_1408ec83f;
      }
    }
    else {
      if (local_e4 != 0xc) {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 == uVar18 - 1) {
LAB_1408ec76c:
          lVar11 = uVar25 + 1;
        }
        else {
          if (uVar25 < uVar18) goto LAB_1408ec779;
          lVar12 = local_140[0][0x3ee];
          lVar11 = uVar25 + 1;
          if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar12 = 0;
          }
          if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar12 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar12 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = uVar24;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
        }
LAB_1408ec772:
        puVar21[0x3ef] = lVar11;
LAB_1408ec779:
        local_e4 = 0xd;
        goto LAB_1408ee280;
      }
      local_e4 = 1;
      uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
      uVar18 = local_140[0][0x3ef];
      if (uVar25 == uVar18 - 1) {
LAB_1408ec839:
        lVar11 = uVar25 + 1;
      }
      else {
        if (uVar25 < uVar18) goto LAB_1408ec846;
        lVar12 = local_140[0][0x3ee];
        lVar11 = uVar25 + 1;
        if ((0 < lVar12) && (3999 < (lVar11 - uVar18) + lVar12)) {
          (**(code **)(*(longlong *)*local_140[0] + 0x68))();
          uVar18 = puVar21[0x3ef];
          puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
          puVar21[0x3ee] = 0;
          lVar12 = 0;
        }
        if (lVar12 + (uVar25 - uVar18) + 1 < 4000) {
          for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
            lVar12 = puVar21[0x3ee];
            puVar21[0x3ee] = lVar12 + 1;
            *(undefined1 *)((longlong)puVar21 + lVar12 + 0xfd0) = 1;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
        }
      }
LAB_1408ec83f:
      puVar21[0x3ef] = lVar11;
    }
LAB_1408ec846:
    local_e4 = 0;
    puVar21 = local_140[0];
    if (uVar10 == 0) {
      uVar27 = uVar22;
    }
joined_r0x0001408ec607:
    uVar22 = uVar27;
    uVar18 = local_e0 >> 0x20;
    local_140[0] = puVar21;
    if (uVar18 == 0x5c) {
      uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
      uVar18 = puVar21[0x3ef];
      if (uVar25 == uVar18 - 1) {
LAB_1408ec64a:
        puVar21[0x3ef] = uVar25 + 1;
      }
      else if (uVar18 <= uVar25) {
        lVar11 = puVar21[0x3ee];
        if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
          (**(code **)(*(longlong *)*puVar21 + 0x68))();
          uVar18 = puVar21[0x3ef];
          puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
          puVar21[0x3ee] = 0;
          lVar11 = 0;
        }
        if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
          for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
            lVar11 = puVar21[0x3ee];
            puVar21[0x3ee] = lVar11 + 1;
            *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
        }
        goto LAB_1408ec64a;
      }
      puVar21 = local_140[0];
      local_e4 = 8;
      if ((uStack_d0 == 0xd) || (uStack_d0 == 10)) {
        uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar18 = local_140[0][0x3ef];
        if (uVar25 != uVar18 - 1) {
          if (uVar25 < uVar18) goto LAB_1408ec9db;
          lVar11 = local_140[0][0x3ee];
          if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
            (**(code **)(*(longlong *)*local_140[0] + 0x68))();
            uVar18 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar11 = 0;
          }
          if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
            for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
              lVar11 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar11 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 8;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar25 - uVar18) + 1);
          }
        }
        puVar21[0x3ef] = uVar25 + 1;
LAB_1408ec9db:
        local_e4 = 7;
      }
    }
    else {
      iVar8 = (int)(local_e0 >> 0x20);
      if (iVar8 - 0x30U < 10) {
        uVar26 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
        uVar25 = puVar21[0x3ef];
        if (uVar26 == uVar25 - 1) {
LAB_1408ec8ae:
          puVar21[0x3ef] = uVar26 + 1;
          uVar18 = local_e0 >> 0x20;
        }
        else if (uVar25 <= uVar26) {
          lVar11 = puVar21[0x3ee];
          if ((0 < lVar11) && (3999 < ((uVar26 + 1) - uVar25) + lVar11)) {
            (**(code **)(*(longlong *)*puVar21 + 0x68))();
            uVar25 = puVar21[0x3ef];
            puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
            puVar21[0x3ee] = 0;
            lVar11 = 0;
          }
          if (lVar11 + (uVar26 - uVar25) + 1 < 4000) {
            for (; uVar25 <= uVar26; uVar25 = uVar25 + 1) {
              lVar11 = puVar21[0x3ee];
              puVar21[0x3ee] = lVar11 + 1;
              *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar21 + 0x60))((longlong *)*puVar21,(uVar26 - uVar25) + 1);
          }
          goto LAB_1408ec8ae;
        }
        local_e4 = 3;
        if ((int)uVar18 == 0x30) {
          if ((uStack_d0 & 0xffffffdf) == 0x58) {
            if (local_108 < local_130) {
              local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
              uVar17 = 0x30;
              if (local_e8._1_1_ == '\x01') {
                lVar11 = local_100 + 2;
                local_100 = local_100 + 1;
                local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                     ((longlong *)*local_140[0],lVar11);
                uVar17 = local_e0._4_4_;
              }
              local_108 = local_108 + lStack_d8;
              local_e0 = CONCAT44(uStack_d0,uVar17);
              lStack_d8 = local_c8;
              local_158 = 0x43;
              FUN_1408c6cd0(local_140);
            }
            else {
              local_e0 = 0x2000000020;
              uStack_d0 = 0x20;
              local_e8 = 0x100;
              local_158 = 0x43;
            }
          }
          else {
            local_158 = (ulonglong)((uStack_d0 - 0x30 < 10) + 0x42);
          }
        }
        else {
          local_158 = 0x42;
        }
      }
      else {
        if (-1 < (longlong)local_e0) {
          pcVar20 = (char *)(uVar18 + local_1e0);
          if (local_1e8 <= iVar8) {
            pcVar20 = local_1e4;
          }
          if (*pcVar20 == '\x01') {
            uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar18 = puVar21[0x3ef];
            if (uVar25 == uVar18 - 1) {
LAB_1408ec921:
              puVar21[0x3ef] = uVar25 + 1;
            }
            else if (uVar18 <= uVar25) {
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ec921;
            }
            local_e4 = 4;
            goto LAB_1408ee280;
          }
        }
        switch(iVar8) {
        case 0x22:
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = puVar21[0x3ef];
          if (uVar25 == uVar18 - 1) {
LAB_1408ec986:
            puVar21[0x3ef] = uVar25 + 1;
            local_e4 = 5;
            local_1d8._4_4_ = local_e0._4_4_;
            local_1d8._0_4_ = 1;
            local_1d8._8_4_ = local_e0._4_4_;
            if ((int)local_e0._4_4_ < 0x5b) {
              if (local_e0._4_4_ == 0x28) {
                local_1d8._8_4_ = 0x29;
              }
              else if (local_e0._4_4_ == 0x3c) {
                local_1d8._8_4_ = 0x3e;
              }
            }
            else if (local_e0._4_4_ == 0x7b) {
              local_1d8._8_4_ = 0x7d;
            }
            else if (local_e0._4_4_ == 0x5b) {
              local_1d8._8_4_ = 0x5d;
            }
          }
          else {
            if (uVar18 <= uVar25) {
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ec986;
            }
            local_e4 = 5;
            local_1d8._0_8_ = 0x2200000001;
            local_1d8._8_4_ = 0x22;
          }
          local_e4 = 5;
          local_1d8._12_4_ = 1;
          break;
        case 0x23:
          if (((uVar10 == 4) || (uVar10 == 8)) ||
             ((local_108 != 0 &&
              ((0x7f < (local_e0 & 0xffffffff) || (local_210[local_e0 & 0xffffffff] != '\x01'))))))
          {
            uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar18 = puVar21[0x3ef];
            if (uVar25 != uVar18 - 1) {
              uVar10 = 4;
              if (uVar25 < uVar18) goto LAB_1408ed56f;
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
            }
            puVar21[0x3ef] = uVar25 + 1;
            uVar10 = 4;
          }
          else {
            uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar18 = puVar21[0x3ef];
            if (uVar25 != uVar18 - 1) {
              uVar10 = 2;
              if (uVar25 < uVar18) goto LAB_1408ed56f;
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
            }
            puVar21[0x3ef] = uVar25 + 1;
            uVar10 = 2;
          }
LAB_1408ed56f:
          puVar21 = local_140[0];
          local_e4 = uVar10;
          if (uVar22 == 4) {
            if ((int)local_e0 == 0x5b) {
              uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
              uVar18 = local_140[0][0x3ef];
              if (uVar25 == uVar18 - 1) {
LAB_1408ed5c9:
                puVar21[0x3ef] = uVar25 + 1;
              }
              else if (uVar18 <= uVar25) {
                lVar11 = local_140[0][0x3ee];
                if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                  (**(code **)(*(longlong *)*local_140[0] + 0x68))();
                  uVar18 = puVar21[0x3ef];
                  puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                  puVar21[0x3ee] = 0;
                  lVar11 = 0;
                }
                if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                  for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                    lVar11 = puVar21[0x3ee];
                    puVar21[0x3ee] = lVar11 + 1;
                    *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar10;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar21 + 0x60))
                            ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
                }
                goto LAB_1408ed5c9;
              }
              local_e4 = 4;
              uVar22 = 4;
              if (uStack_d0 == 0x23) {
                if (local_108 < local_130) {
                  local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
                  uVar10 = 0x23;
                  if (local_e8._1_1_ == '\x01') {
                    lVar11 = local_100 + 2;
                    local_100 = local_100 + 1;
                    local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                         ((longlong *)*local_140[0],lVar11);
                    uVar10 = uStack_d0;
                  }
                  local_108 = local_108 + lStack_d8;
                  local_e0 = CONCAT44(uVar10,local_e0._4_4_);
                  lStack_d8 = local_c8;
                  FUN_1408c6cd0(local_140);
                  break;
                }
                goto LAB_1408ee080;
              }
            }
            else {
              cVar7 = FUN_1408de0e0(local_140,&DAT_14135fdae);
              puVar21 = local_140[0];
              if (cVar7 != '\0') {
                lVar11 = local_108 + 3;
                lVar12 = local_140[0][0x1f6];
                if ((lVar11 < lVar12) || ((longlong)local_140[0][0x1f7] <= lVar11)) {
                  lVar12 = local_108 - 0x1f1;
                  local_140[0][0x1f6] = lVar12;
                  lVar14 = local_140[0][0x1f9];
                  lVar16 = lVar14 + -4000;
                  if ((longlong)(local_108 + 0xdaf) <= lVar14) {
                    lVar16 = lVar12;
                  }
                  if (lVar14 < (longlong)(local_108 + 0xdaf) || lVar16 < 0) {
                    if (lVar16 < 1) {
                      lVar16 = 0;
                    }
                    local_140[0][0x1f6] = lVar16;
                    lVar12 = lVar16;
                  }
                  if (lVar12 + 4000 < lVar14) {
                    lVar14 = lVar12 + 4000;
                  }
                  local_140[0][0x1f7] = lVar14;
                  (**(code **)(*(longlong *)*local_140[0] + 0x18))
                            ((longlong *)*local_140[0],local_140[0] + 1,lVar12,lVar14 - lVar12);
                  *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
                  lVar12 = puVar21[0x1f6];
                  if ((lVar11 < lVar12) || ((longlong)puVar21[0x1f7] <= lVar11)) goto LAB_1408edcab;
                }
                if ((byte)(*(char *)((longlong)puVar21 + (lVar11 - lVar12) + 8) + 0xbfU) < 0x1a) {
                  FUN_1408c6890(local_140,8);
                  uVar22 = 4;
                  FUN_1408efa00(local_140,3);
                  break;
                }
              }
LAB_1408edcab:
              puVar21 = local_140[0];
              if (uStack_d0 == 0x23) {
                lVar11 = local_108 + 2;
                lVar12 = local_140[0][0x1f6];
                if ((lVar11 < lVar12) || ((longlong)local_140[0][0x1f7] <= lVar11)) {
                  lVar12 = local_108 - 0x1f2;
                  local_140[0][0x1f6] = lVar12;
                  lVar14 = local_140[0][0x1f9];
                  lVar16 = lVar14 + -4000;
                  if ((longlong)(local_108 + 0xdae) <= lVar14) {
                    lVar16 = lVar12;
                  }
                  if (lVar14 < (longlong)(local_108 + 0xdae) || lVar16 < 0) {
                    if (lVar16 < 1) {
                      lVar16 = 0;
                    }
                    local_140[0][0x1f6] = lVar16;
                    lVar12 = lVar16;
                  }
                  if (lVar12 + 4000 < lVar14) {
                    lVar14 = lVar12 + 4000;
                  }
                  local_140[0][0x1f7] = lVar14;
                  (**(code **)(*(longlong *)*local_140[0] + 0x18))
                            ((longlong *)*local_140[0],local_140[0] + 1,lVar12,lVar14 - lVar12);
                  *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
                  lVar12 = puVar21[0x1f6];
                  if ((lVar12 <= lVar11) && (lVar11 < (longlong)puVar21[0x1f7])) goto LAB_1408edd87;
                }
                else {
LAB_1408edd87:
                  bVar5 = *(byte *)((longlong)puVar21 + (lVar11 - lVar12) + 8);
                  if ((bVar5 - 9 < 5) || (bVar5 == 0x20)) goto LAB_1408edda1;
                }
                FUN_1408c6890(local_140,8);
                uVar22 = 4;
                FUN_1408efa00(local_140,2);
              }
              else {
LAB_1408edda1:
                uVar22 = 4;
                if (-1 < (int)uStack_d0) {
                  pcVar20 = (char *)((ulonglong)uStack_d0 + local_1e0);
                  if (local_1e8 <= (int)uStack_d0) {
                    pcVar20 = local_1e4;
                  }
                  if (*pcVar20 == '\x01') {
                    FUN_1408c6890(local_140,8);
                  }
                }
              }
            }
          }
          break;
        case 0x24:
          cVar7 = FUN_1408de0e0(local_140,&DAT_14139bf52);
          puVar21 = local_140[0];
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = local_140[0][0x3ef];
          uVar24 = (undefined1)local_e4;
          if (cVar7 == '\0') {
            if (uVar25 == uVar18 - 1) {
LAB_1408ed54d:
              puVar21[0x3ef] = uVar25 + 1;
            }
            else if (uVar18 <= uVar25) {
              lVar11 = local_140[0][0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*local_140[0] + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = uVar24;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ed54d;
            }
            local_e4 = 9;
            if (local_108 < local_130) {
              local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
              if (local_e8._1_1_ == '\x01') {
                lVar11 = local_100 + 2;
                local_100 = local_100 + 1;
                local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                     ((longlong *)*local_140[0],lVar11);
              }
              local_108 = local_108 + lStack_d8;
              local_e0 = CONCAT44(uStack_d0,local_e0._4_4_);
              lStack_d8 = local_c8;
              FUN_1408c6cd0(local_140);
              if ((int)local_e0._4_4_ < 0x28) {
                if (local_e0._4_4_ == 0x22) {
                  local_e4 = 5;
                  local_1d8._8_8_ = 0x300000022;
                  local_1d8._0_8_ = 0x2200000001;
                }
                else if (local_e0._4_4_ == 0x27) {
                  local_e4 = 5;
                  local_1d8._8_8_ = 0x200000027;
                  local_1d8._0_8_ = 0x2700000001;
                }
              }
              else if (local_e0._4_4_ == 0x28) {
                local_e4 = 0xb;
                local_1d8._8_8_ = 0x400000029;
                local_1d8._0_8_ = 0x2800000001;
              }
              else if (local_e0._4_4_ == 0x60) {
                local_e4 = 0xb;
                local_1d8._8_8_ = 0x500000060;
                local_1d8._0_8_ = 0x6000000001;
              }
              else if (local_e0._4_4_ == 0x7b) {
                local_e4 = 10;
                local_144 = 1;
                local_15c = 0x7b;
                local_14c = 0x7d;
              }
              break;
            }
LAB_1408ee080:
            local_e8 = 0x100;
            local_e0 = 0x2000000020;
            uStack_d0 = 0x20;
            break;
          }
          if (uVar25 == uVar18 - 1) {
LAB_1408ed096:
            puVar21[0x3ef] = uVar25 + 1;
          }
          else if (uVar18 <= uVar25) {
            lVar11 = local_140[0][0x3ee];
            if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
              (**(code **)(*(longlong *)*local_140[0] + 0x68))();
              uVar18 = puVar21[0x3ef];
              puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
              puVar21[0x3ee] = 0;
              lVar11 = 0;
            }
            if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
              for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                lVar11 = puVar21[0x3ee];
                puVar21[0x3ee] = lVar11 + 1;
                *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = uVar24;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar21 + 0x60))
                        ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
            }
            goto LAB_1408ed096;
          }
          goto LAB_1408ec9db;
        case 0x25:
        case 0x26:
switchD_1408ec947_caseD_25:
          if (uStack_d0 == 0x3c && iVar8 == 0x3c) {
            uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar18 = puVar21[0x3ef];
            if (uVar25 == uVar18 - 1) {
LAB_1408ecfaf:
              puVar21[0x3ef] = uVar25 + 1;
            }
            else if (uVar18 <= uVar25) {
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ecfaf;
            }
            puVar21 = local_140[0];
            local_e4 = 0xc;
            local_370 = 0;
            lVar11 = local_108 + 2;
            lVar12 = local_140[0][0x1f6];
            if ((lVar11 < lVar12) || ((longlong)local_140[0][0x1f7] <= lVar11)) {
              lVar12 = local_108 - 0x1f2;
              local_140[0][0x1f6] = lVar12;
              lVar14 = local_140[0][0x1f9];
              lVar16 = lVar14 + -4000;
              if ((lVar14 < (longlong)(local_108 + 0xdae)) || (lVar16 = lVar12, lVar12 < 0)) {
                lVar12 = lVar16;
                if (lVar12 < 1) {
                  lVar12 = 0;
                }
                local_140[0][0x1f6] = lVar12;
              }
              if (lVar12 + 4000 < lVar14) {
                lVar14 = lVar12 + 4000;
              }
              local_140[0][0x1f7] = lVar14;
              (**(code **)(*(longlong *)*local_140[0] + 0x18))
                        ((longlong *)*local_140[0],local_140[0] + 1,lVar12,lVar14 - lVar12);
              *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
              lVar12 = puVar21[0x1f6];
              if ((lVar12 <= lVar11) && (lVar11 < (longlong)puVar21[0x1f7])) goto LAB_1408ed75c;
            }
            else {
LAB_1408ed75c:
              if (*(char *)((longlong)puVar21 + (lVar11 - lVar12) + 8) == '-') {
                local_368 = CONCAT11(1,(undefined1)local_368);
                if (local_130 <= local_108) goto LAB_1408ee080;
                local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
                if (local_e8._1_1_ == '\x01') {
                  lVar11 = local_100 + 2;
                  local_100 = local_100 + 1;
                  local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                                       ((longlong *)*local_140[0],lVar11);
                }
                local_108 = local_108 + lStack_d8;
                local_e0 = CONCAT44(uStack_d0,local_e0._4_4_);
                lStack_d8 = local_c8;
                FUN_1408c6cd0(local_140);
                break;
              }
            }
            local_368 = local_368 & 0xff;
          }
          else {
            if ((uStack_d0 < 0x80 && (-1 < (int)uStack_d0 && iVar8 == 0x2d)) &&
               ((*local_218)[uStack_d0] == '\x01')) {
              lVar11 = local_108 + 2;
              lVar12 = puVar21[0x1f6];
              if ((lVar11 < lVar12) || ((longlong)puVar21[0x1f7] <= lVar11)) {
                lVar12 = local_108 - 0x1f2;
                puVar21[0x1f6] = lVar12;
                lVar14 = puVar21[0x1f9];
                lVar16 = lVar14 + -4000;
                if ((longlong)(local_108 + 0xdae) <= lVar14) {
                  lVar16 = lVar12;
                }
                if (lVar14 < (longlong)(local_108 + 0xdae) || lVar16 < 0) {
                  if (lVar16 < 1) {
                    lVar16 = 0;
                  }
                  puVar21[0x1f6] = lVar16;
                  lVar12 = lVar16;
                }
                if (lVar12 + 4000 < lVar14) {
                  lVar14 = lVar12 + 4000;
                }
                puVar21[0x1f7] = lVar14;
                (**(code **)(*(longlong *)*puVar21 + 0x18))
                          ((longlong *)*puVar21,puVar21 + 1,lVar12,lVar14 - lVar12);
                *(undefined1 *)((longlong)puVar21 + (puVar21[0x1f7] - puVar21[0x1f6]) + 8) = 0;
                lVar12 = puVar21[0x1f6];
                uVar18 = 0;
                if ((lVar12 <= lVar11) && (lVar11 < (longlong)puVar21[0x1f7])) goto LAB_1408ed3b4;
              }
              else {
LAB_1408ed3b4:
                uVar18 = (ulonglong)*(byte *)((longlong)puVar21 + (lVar11 - lVar12) + 8);
              }
              pcVar20 = (char *)(uVar18 + local_1f0);
              if (local_1f8 <= (int)uVar18) {
                pcVar20 = local_1f4;
              }
              if ((*pcVar20 == '\0') && (((int)local_e0 - 9U < 5 || ((int)local_e0 == 0x20)))) {
                FUN_1408c6890(local_140,4);
                FUN_1408ef8e0(local_140);
                break;
              }
            }
            uVar10 = local_e4;
            puVar21 = local_140[0];
            if ((0x7f < (ulonglong)local_e0._4_4_) ||
               (*(char *)((longlong)local_200 + (ulonglong)local_e0._4_4_) != '\x01')) break;
            uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
            uVar18 = local_140[0][0x3ef];
            if (uVar25 == uVar18 - 1) {
LAB_1408ed43d:
              puVar21[0x3ef] = uVar25 + 1;
            }
            else if (uVar18 <= uVar25) {
              lVar11 = local_140[0][0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*local_140[0] + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(char *)((longlong)puVar21 + lVar11 + 0xfd0) = (char)uVar10;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ed43d;
            }
            local_e4 = 7;
            if (((uVar22 != 4) && (local_e0._4_4_ == 0x28)) && (uStack_d0 != 0x28)) {
              uVar10 = FUN_1408e1c40(local_140,1);
              if (uVar10 < 0x2a) {
                uVar18 = (ulonglong)uVar10;
                if ((0x28500003e01U >> (uVar18 & 0x3f) & 1) != 0) goto LAB_1408ee696;
                if (uVar18 == 0x23) {
                  iVar8 = 2;
                  iVar23 = 0;
                }
                else {
                  if (uVar18 != 0x28) goto LAB_1408eeaff;
                  iVar8 = 0;
                  iVar23 = 1;
                }
              }
              else {
LAB_1408eeaff:
                iVar23 = 0;
                iVar8 = 0;
              }
              uVar18 = 1;
              do {
                while( true ) {
                  uVar18 = uVar18 + 1;
                  uVar10 = FUN_1408e1c40(local_140,uVar18);
                  if (uVar10 < 0x28) break;
LAB_1408eeb46:
                  if (uVar10 == 0x23 && iVar8 == 0) {
                    iVar8 = 1;
                  }
                  else if (uVar10 == 0x29) {
                    if (iVar23 == 0) {
                      if (iVar8 != 0) {
                        FUN_1408c6890(local_140,8);
                        FUN_1408efa00(local_140,uVar18 & 0xffffffff);
                        goto LAB_1408ee280;
                      }
                      goto LAB_1408ee696;
                    }
                    iVar23 = iVar23 + -1;
                  }
                  else if (uVar10 == 0x28) {
                    iVar23 = iVar23 + 1;
                  }
                }
                if ((0x100003e01U >> ((ulonglong)uVar10 & 0x3f) & 1) != 0) break;
                if ((0x8400000000U >> ((ulonglong)uVar10 & 0x3f) & 1) == 0) goto LAB_1408eeb46;
                bVar28 = iVar8 == 2;
                iVar8 = 2;
              } while (bVar28);
            }
LAB_1408ee696:
            if (uVar22 < 2) {
              if (uStack_d0 != 0x28 || local_e0._4_4_ != 0x28) {
                if (uStack_d0 != 0x5b || local_e0._4_4_ != 0x5b) {
LAB_1408eeb8e:
                  if (local_e0._4_4_ == 0x5b) {
                    if (uStack_d0 - 9 < 5 || uStack_d0 == 0x20) {
                      uVar22 = 3;
                      local_148 = 2;
                    }
                    goto LAB_1408eebca;
                  }
                  goto LAB_1408eec36;
                }
                iVar8 = FUN_1408ef810(local_140,2);
                if ((4 < iVar8 - 9U) && (iVar8 != 0x20)) {
                  goto LAB_1408eeb8e;
                }
                local_148 = 1;
                FUN_1408ef8e0(local_140);
                goto LAB_1408eed01;
              }
              FUN_1408ef8e0(local_140);
            }
            else {
LAB_1408eebca:
              if (uVar22 == 2) {
                if (uStack_d0 == 0x28 && local_e0._4_4_ == 0x28) {
                  uVar22 = 4;
                  FUN_1408ef8e0(local_140);
                  break;
                }
                uVar10 = 2;
LAB_1408eec44:
                iVar8 = _local_568;
                _local_568 = CONCAT31(acStack_567._0_3_,(char)local_e0._4_4_);
                if ((uStack_d0 < 0x80) &&
                   (*(char *)((longlong)local_200 + (ulonglong)uStack_d0) == '\x01')) {
                  _local_568 = CONCAT11((char)uStack_d0,(char)local_e0._4_4_);
                  acStack_567[2] = SUB41(iVar8,3);
                  _local_568 = (uint3)_local_568;
                  cVar7 = FUN_140a8bc50(local_980,&local_568);
                  if (cVar7 != '\0') {
                    uVar22 = 5;
                    FUN_1408ef8e0(local_140);
                    break;
                  }
                }
                _local_568 = (ushort)local_568;
                cVar7 = FUN_140a8bc50(local_980,&local_568);
                uVar22 = 5;
                if (cVar7 != '\0') break;
              }
              else {
                if (uVar22 < 3) {
LAB_1408eec36:
                  uVar10 = uVar22;
                  goto LAB_1408eec44;
                }
                uVar10 = uVar22;
                if ((uVar22 == 3) && (local_148 == 0)) {
                  local_148 = 0;
                  uVar22 = 3;
                  goto LAB_1408eec36;
                }
              }
              uVar22 = uVar10;
              if (uVar22 == 3) {
LAB_1408eed01:
                if (((int)local_e0 - 9U < 5) || (uVar22 = 3, (int)local_e0 == 0x20)) {
                  if ((local_e0._4_4_ == 0x5d) && ((uStack_d0 == 0x5d && (local_148 == 1)))) {
                    FUN_1408ef8e0(local_140);
                    local_148 = 1;
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = (uint)(local_148 != 2 || local_e0._4_4_ != 0x5d) * 3;
                  }
                }
                break;
              }
              if (uVar22 != 4) break;
            }
            uVar22 = 4;
            if ((local_e0._4_4_ == 0x29) && (uStack_d0 == 0x29)) {
              FUN_1408ef8e0(local_140);
              uVar22 = 0;
            }
          }
          break;
        case 0x27:
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = puVar21[0x3ef];
          if (uVar25 != uVar18 - 1) {
            if (uVar25 < uVar18) {
              local_e4 = 6;
              local_144 = 1;
              local_14c = 0x27;
              local_15c = 0x27;
              break;
            }
            lVar11 = puVar21[0x3ee];
            if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
              (**(code **)(*(longlong *)*puVar21 + 0x68))();
              uVar18 = puVar21[0x3ef];
              puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
              puVar21[0x3ee] = 0;
              lVar11 = 0;
            }
            if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
              for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                lVar11 = puVar21[0x3ee];
                puVar21[0x3ee] = lVar11 + 1;
                *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar21 + 0x60))
                        ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
            }
          }
          puVar21[0x3ef] = uVar25 + 1;
          local_e4 = 6;
          local_15c = local_e0._4_4_;
          if ((int)local_e0._4_4_ < 0x5b) {
            local_144 = 1;
            if (local_e0._4_4_ == 0x28) {
              local_14c = 0x29;
            }
            else if (local_e0._4_4_ == 0x3c) {
              local_14c = 0x3e;
            }
            else {
LAB_1408ede96:
              local_144 = 1;
              local_14c = local_e0._4_4_;
            }
          }
          else {
            local_144 = 1;
            if (local_e0._4_4_ == 0x7b) {
              local_14c = 0x7d;
            }
            else {
              if (local_e0._4_4_ != 0x5b) goto LAB_1408ede96;
              local_14c = 0x5d;
            }
          }
          break;
        default:
          if (iVar8 != 0x60) goto switchD_1408ec947_caseD_25;
          uVar25 = (-1 - (ulonglong)(local_128 < local_108)) + local_108;
          uVar18 = puVar21[0x3ef];
          if (uVar25 == uVar18 - 1) {
LAB_1408ece4d:
            puVar21[0x3ef] = uVar25 + 1;
            local_e4 = 0xb;
            local_1d8._4_4_ = local_e0._4_4_;
            local_1d8._0_4_ = 1;
            local_1d8._8_4_ = local_e0._4_4_;
            if ((int)local_e0._4_4_ < 0x5b) {
              if (local_e0._4_4_ == 0x28) {
                local_1d8._8_4_ = 0x29;
              }
              else if (local_e0._4_4_ == 0x3c) {
                local_1d8._8_4_ = 0x3e;
              }
            }
            else if (local_e0._4_4_ == 0x7b) {
              local_1d8._8_4_ = 0x7d;
            }
            else if (local_e0._4_4_ == 0x5b) {
              local_1d8._8_4_ = 0x5d;
            }
          }
          else {
            if (uVar18 <= uVar25) {
              lVar11 = puVar21[0x3ee];
              if ((0 < lVar11) && (3999 < ((uVar25 + 1) - uVar18) + lVar11)) {
                (**(code **)(*(longlong *)*puVar21 + 0x68))();
                uVar18 = puVar21[0x3ef];
                puVar21[0x3f0] = puVar21[0x3f0] + puVar21[0x3ee];
                puVar21[0x3ee] = 0;
                lVar11 = 0;
              }
              if (lVar11 + (uVar25 - uVar18) + 1 < 4000) {
                for (; uVar18 <= uVar25; uVar18 = uVar18 + 1) {
                  lVar11 = puVar21[0x3ee];
                  puVar21[0x3ee] = lVar11 + 1;
                  *(undefined1 *)((longlong)puVar21 + lVar11 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar21 + 0x60))
                          ((longlong *)*puVar21,(uVar25 - uVar18) + 1);
              }
              goto LAB_1408ece4d;
            }
            local_e4 = 0xb;
            local_1d8._0_8_ = 0x6000000001;
            local_1d8._8_4_ = 0x60;
          }
          local_e4 = 0xb;
          local_1d8._12_4_ = 5;
        }
      }
    }
LAB_1408ee280:
    if (local_108 < local_130) {
      local_e8 = CONCAT11(local_e8._1_1_,local_e8._1_1_);
      if (local_e8._1_1_ == '\x01') {
        lVar11 = local_100 + 2;
        local_100 = local_100 + 1;
        local_f0 = (**(code **)(*(longlong *)*local_140[0] + 0x30))
                             ((longlong *)*local_140[0],lVar11);
      }
      local_108 = local_108 + lStack_d8;
      local_e0 = CONCAT44(uStack_d0,local_e0._4_4_);
      lStack_d8 = local_c8;
      FUN_1408c6cd0(local_140);
    }
    else {
      local_e8 = 0x100;
      local_e0 = 0x2000000020;
      uStack_d0 = 0x20;
    }
  } while( true );
}

