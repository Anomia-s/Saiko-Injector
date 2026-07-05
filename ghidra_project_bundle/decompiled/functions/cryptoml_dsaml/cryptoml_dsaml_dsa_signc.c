/**
 * Function: cryptoml_dsaml_dsa_signc
 * Address:  140daa1c0
 * Signature: undefined cryptoml_dsaml_dsa_signc(void)
 * Body size: 1289 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoml_dsaml_dsa_signc
               (longlong param_1,int param_2,undefined1 *param_3,longlong param_4,undefined8 param_5
               ,undefined8 param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  size_t _Size;
  undefined8 uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  longlong local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  uint local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  int local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 *local_180;
  size_t local_178;
  longlong local_170;
  int *local_168;
  ulonglong local_160;
  undefined8 local_158;
  longlong local_150;
  int *local_148;
  longlong local_140;
  ulonglong local_138;
  undefined1 *local_130;
  size_t local_128;
  longlong local_120;
  ulonglong local_118;
  int *local_110;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140daa1e2;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_208;
  local_170 = *(longlong *)(param_1 + 8);
  local_158 = param_5;
  uVar14 = *(uint *)(local_170 + 0x28);
  local_168 = (int *)(ulonglong)uVar14;
  uVar2 = *(uint *)(local_170 + 0x20);
  uVar25 = (ulonglong)uVar2;
  iVar16 = *(int *)(local_170 + 0x18);
  local_1c0 = *(int *)(local_170 + 0x10) >> 2;
  local_178 = (size_t)(int)local_1c0;
  iVar13 = 0x80;
  if (iVar16 == 0x17400) {
    iVar13 = 0xc0;
  }
  local_198 = 0;
  local_188 = (ulonglong)(iVar13 * uVar2);
  local_1a8 = param_2;
  local_180 = local_108;
  local_1c8 = FUN_140b8d8d0(((longlong)local_168 +
                            (ulonglong)(uVar14 + uVar2) +
                            (ulonglong)(uVar14 * uVar2) + (ulonglong)(uVar2 * 2) + 1) * 0x400 +
                            local_188,"crypto\\ml_dsa\\ml_dsa_sign.c",0xf0);
  if (local_1c8 == 0) goto LAB_140daa6ba;
  local_1a0 = FUN_140b70980();
  lVar23 = local_1c8;
  uVar11 = local_198;
  if (local_1a0 != 0) {
    local_190 = local_188 + local_1c8;
    local_120 = local_1c8 + 0x400 + local_188;
    local_110 = local_168;
    local_140 = (ulonglong)(uVar14 * uVar2) * 0x400 + local_120;
    local_148 = local_168;
    local_150 = uVar25 * 0x400 + local_140;
    local_130 = local_c8;
    local_128 = local_178;
    local_1b8 = (ulonglong)(uVar14 + uVar2) * 0x400 + local_140;
    piVar21 = (int *)(uVar25 * 0x400 + local_1b8);
    local_1b0 = uVar25;
    local_168 = piVar21;
    local_160 = uVar25;
    local_138 = uVar25;
    local_118 = uVar25;
    iVar13 = FUN_140da05e0(&local_150,local_158,param_6,*(undefined8 *)(param_1 + 8));
    lVar22 = local_1a0;
    lVar23 = local_1c8;
    uVar11 = local_198;
    if ((iVar13 != 0) &&
       (iVar13 = FUN_140db6c40(local_1a0,*(undefined8 *)(param_1 + 0x10),param_1 + 0x20,&local_120),
       lVar23 = local_1c8, uVar11 = local_198, iVar13 != 0)) {
      if (local_1a8 == 0) {
        local_1d0 = 0x40;
        local_1e8 = param_3;
        local_1e0 = param_4;
        local_1d8 = local_108;
        iVar13 = FUN_140da95b0(lVar22,*(undefined8 *)(param_1 + 0x18),param_1 + 0x40,0x40);
        lVar23 = local_1c8;
        uVar11 = local_198;
        puVar12 = local_180;
        if (iVar13 != 0) goto LAB_140daa3c8;
      }
      else {
        puVar12 = param_3;
        if (param_4 == 0x40) {
LAB_140daa3c8:
          local_180 = puVar12;
          lVar10 = local_190;
          local_1e0 = CONCAT44(local_1e0._4_4_,*(undefined4 *)(local_170 + 0xc));
          local_1e8 = *(undefined1 **)(param_1 + 0x18);
          iVar13 = FUN_140db7020(local_190,local_c8,local_1c0,lVar22);
          lVar23 = local_1c8;
          uVar11 = local_198;
          if (iVar13 != 0) {
            FUN_140db74e0(lVar10);
            uVar24 = 0;
            piVar19 = piVar21;
            if (*(longlong *)(param_1 + 200) != 0) {
              do {
                piVar18 = (int *)((longlong)piVar19 +
                                 (*(longlong *)(param_1 + 0xc0) - (longlong)piVar21));
                if ((piVar18 + 0xff < piVar19) || (piVar19 + 0xff < piVar18)) {
                  lVar22 = (longlong)piVar18 - (longlong)piVar19;
                  lVar23 = 0x10;
                  piVar18 = piVar19 + 4;
                  do {
                    piVar1 = (int *)(lVar22 + -0x10 + (longlong)piVar18);
                    iVar13 = piVar1[1];
                    iVar3 = piVar1[2];
                    iVar4 = piVar1[3];
                    piVar17 = (int *)(lVar22 + (longlong)piVar18);
                    iVar5 = *piVar17;
                    iVar6 = piVar17[1];
                    iVar7 = piVar17[2];
                    iVar8 = piVar17[3];
                    piVar17 = piVar18 + 0x10;
                    piVar18[-4] = *piVar1 << 0xd;
                    piVar18[-3] = iVar13 << 0xd;
                    piVar18[-2] = iVar3 << 0xd;
                    piVar18[-1] = iVar4 << 0xd;
                    piVar1 = (int *)(lVar22 + -0x30 + (longlong)piVar17);
                    iVar13 = *piVar1;
                    iVar3 = piVar1[1];
                    iVar4 = piVar1[2];
                    iVar9 = piVar1[3];
                    *piVar18 = iVar5 << 0xd;
                    piVar18[1] = iVar6 << 0xd;
                    piVar18[2] = iVar7 << 0xd;
                    piVar18[3] = iVar8 << 0xd;
                    piVar1 = (int *)(lVar22 + -0x20 + (longlong)piVar17);
                    iVar5 = *piVar1;
                    iVar6 = piVar1[1];
                    iVar7 = piVar1[2];
                    iVar8 = piVar1[3];
                    piVar18[4] = iVar13 << 0xd;
                    piVar18[5] = iVar3 << 0xd;
                    piVar18[6] = iVar4 << 0xd;
                    piVar18[7] = iVar9 << 0xd;
                    piVar18[8] = iVar5 << 0xd;
                    piVar18[9] = iVar6 << 0xd;
                    piVar18[10] = iVar7 << 0xd;
                    piVar18[0xb] = iVar8 << 0xd;
                    lVar23 = lVar23 + -1;
                    piVar18 = piVar17;
                  } while (lVar23 != 0);
                }
                else {
                  lVar23 = 0x100;
                  piVar17 = piVar19;
                  do {
                    *piVar17 = *(int *)(((longlong)piVar18 - (longlong)piVar19) + (longlong)piVar17)
                               << 0xd;
                    lVar23 = lVar23 + -1;
                    piVar17 = piVar17 + 1;
                  } while (lVar23 != 0);
                }
                uVar24 = uVar24 + 1;
                piVar19 = piVar19 + 0x100;
              } while (uVar24 < *(ulonglong *)(param_1 + 200));
            }
            piVar19 = piVar21;
            uVar24 = uVar25;
            if (uVar25 != 0) {
              do {
                FUN_140db74e0(piVar19);
                lVar23 = local_190;
                uVar24 = uVar24 - 1;
                piVar19 = piVar19 + 0x100;
              } while (uVar24 != 0);
              for (; uVar25 != 0; uVar25 = uVar25 - 1) {
                FUN_140db7920(piVar21,lVar23,piVar21);
                piVar21 = piVar21 + 0x100;
              }
            }
            uVar24 = 0;
            uVar14 = FUN_140da94e0(&local_150);
            local_1c0 = uVar14;
            FUN_140da9440(&local_150);
            FUN_140db7380(&local_120,&local_150,&local_1b8);
            FUN_140da9380(&local_1b8,&local_168,&local_1b8);
            FUN_140da9490(&local_1b8);
            uVar25 = uVar24;
            if (local_1b0 != 0) {
              do {
                lVar22 = 0x100;
                puVar20 = (undefined4 *)(local_140 + uVar24);
                lVar23 = (local_1b8 + uVar24) - (longlong)puVar20;
                do {
                  uVar15 = FUN_140db7c10(*puVar20,*(undefined4 *)((longlong)puVar20 + lVar23),iVar16
                                        );
                  *(undefined4 *)((longlong)puVar20 + lVar23) = uVar15;
                  puVar20 = puVar20 + 1;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                uVar25 = uVar25 + 1;
                uVar24 = uVar24 + 0x400;
                uVar14 = local_1c0;
              } while (uVar25 < local_1b0);
            }
            uVar25 = local_188;
            lVar23 = local_1c8;
            FUN_140da07a0(&local_1b8,iVar16,local_1c8,local_188);
            lVar22 = local_1a0;
            iVar16 = FUN_140b70fd0(local_1a0,*(undefined8 *)(param_1 + 0x18),0);
            uVar11 = local_198;
            if ((((iVar16 != 0) &&
                 (iVar16 = evp_digestupdate(lVar22,local_180,0x40), uVar11 = local_198, iVar16 != 0)
                 ) && (iVar16 = evp_digestupdate(lVar22,lVar23,uVar25), uVar11 = local_198,
                      iVar16 != 0)) &&
               (((iVar16 = evp_digestupdate(lVar22,0,0), _Size = local_178, uVar11 = local_198,
                 iVar16 != 0 &&
                 (iVar16 = FUN_140b71890(lVar22,local_88,local_178), uVar11 = local_198, iVar16 != 0
                 )) && ((uVar11 = 0,
                        uVar14 < (uint)(*(int *)(local_170 + 0x14) - *(int *)(local_170 + 0x34)) &&
                        (iVar16 = memcmp(local_88,local_130,_Size), iVar16 == 0)))))) {
              local_198 = CONCAT44(local_198._4_4_,1);
              uVar11 = local_198;
            }
          }
        }
      }
    }
  }
  local_198 = uVar11;
  FUN_140b8d990(lVar23,"crypto\\ml_dsa\\ml_dsa_sign.c",0x12e);
  FUN_140b709d0(local_1a0);
LAB_140daa6ba:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_208);
}

