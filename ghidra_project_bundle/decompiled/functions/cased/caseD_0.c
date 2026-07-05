/**
 * Function: caseD_0
 * Address:  1408a2220
 * Signature: undefined caseD_0(void)
 * Body size: 780 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong switchD_1408a3228::caseD_0
                    (undefined8 param_1,undefined8 param_2,undefined2 *param_3,ulonglong param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM1 [16];
  undefined1 auStack_2208 [32];
  undefined2 *local_21e8;
  ulonglong local_21e0;
  undefined8 local_21d8;
  undefined8 local_21d0;
  undefined2 *local_21c8;
  ulonglong local_21c0;
  ulonglong local_21b8;
  uint local_21b0;
  uint local_21ac;
  undefined2 local_21a8;
  undefined8 local_21a6;
  undefined1 auStack_2196 [8190];
  uint local_198 [20];
  byte local_148 [256];
  ulonglong local_48;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2208;
  memset(&local_21a8,0,0x2002);
  local_21ac = 0;
  local_21b0 = 0;
  local_21e8 = param_3;
  local_21e0 = param_4;
  uVar3 = FUN_1408a18d0(local_148,local_198,&local_21b0,&local_21ac);
  uVar4 = uVar3;
  if ((uVar3 < 0xffffffffffffff89) && (uVar4 = 0xffffffffffffffd4, local_21ac < 0xd)) {
    local_21a8 = (undefined2)local_21ac;
    if (local_21ac != 0) {
      if (local_21ac == 1) {
        uVar10 = 0;
        lVar5 = 1;
      }
      else {
        uVar10 = 0;
        lVar5 = 1;
        do {
          uVar11 = (local_198[lVar5] << ((byte)lVar5 - 1 & 0x1f)) + uVar10;
          local_198[lVar5] = uVar10;
          uVar10 = (local_198[lVar5 + 1] << ((byte)lVar5 & 0x1f)) + uVar11;
          local_198[lVar5 + 1] = uVar11;
          lVar1 = lVar5 - (ulonglong)(local_21ac & 0xe);
          lVar5 = lVar5 + 2;
        } while (lVar1 != -1);
      }
      if ((local_21ac & 1) != 0) {
        local_198[lVar5] = uVar10;
      }
    }
    if ((ulonglong)local_21b0 != 0) {
      uVar4 = 0;
      do {
        bVar2 = local_148[uVar4];
        uVar10 = local_198[bVar2];
        uVar12 = (ulonglong)uVar10;
        uVar11 = ((1 << (bVar2 & 0x1f)) >> 1) + uVar10;
        if (uVar10 < uVar11) {
          bVar7 = ((char)local_21ac + '\x01') - bVar2;
          uVar8 = uVar11 - uVar12;
          uVar9 = (undefined1)uVar4;
          if (3 < uVar8) {
            if (uVar8 < 0x10) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar8 & 0xfffffffffffffff0;
              in_XMM1 = pshuflw(in_XMM1,ZEXT216(CONCAT11(bVar7,bVar7)),0);
              auVar22 = pshuflw(ZEXT216(CONCAT11(uVar9,uVar9)),ZEXT216(CONCAT11(uVar9,uVar9)),0);
              auVar21._0_14_ = auVar22._0_14_;
              auVar21[0xe] = auVar22[7];
              auVar21[0xf] = in_XMM1[7];
              auVar20._14_2_ = auVar21._14_2_;
              auVar20._0_13_ = auVar22._0_13_;
              auVar20[0xd] = in_XMM1[6];
              auVar19._13_3_ = auVar20._13_3_;
              auVar19._0_12_ = auVar22._0_12_;
              auVar19[0xc] = auVar22[6];
              auVar18._12_4_ = auVar19._12_4_;
              auVar18._0_11_ = auVar22._0_11_;
              auVar18[0xb] = in_XMM1[5];
              auVar17._11_5_ = auVar18._11_5_;
              auVar17._0_10_ = auVar22._0_10_;
              auVar17[10] = auVar22[5];
              auVar16._10_6_ = auVar17._10_6_;
              auVar16._0_9_ = auVar22._0_9_;
              auVar16[9] = in_XMM1[4];
              auVar15._9_7_ = auVar16._9_7_;
              auVar15._0_8_ = auVar22._0_8_;
              auVar15[8] = auVar22[4];
              auVar14._8_8_ = auVar15._8_8_;
              auVar14[7] = in_XMM1[3];
              auVar14[6] = auVar22[3];
              auVar14[5] = in_XMM1[2];
              auVar14[4] = auVar22[2];
              auVar14[3] = in_XMM1[1];
              auVar14[2] = auVar22[1];
              auVar14[0] = auVar22[0];
              auVar14[1] = in_XMM1[0];
              uVar6 = 0;
              do {
                *(undefined1 (*) [16])((longlong)&local_21a6 + uVar6 * 2 + uVar12 * 2) = auVar14;
                *(undefined1 (*) [16])(auStack_2196 + uVar6 * 2 + uVar12 * 2) = auVar14;
                uVar6 = uVar6 + 0x10;
              } while (uVar13 != uVar6);
              if (uVar8 == uVar13) goto LAB_1408a2380;
              if ((uVar8 & 0xc) == 0) {
                uVar12 = uVar13 + uVar12;
                goto LAB_1408a24b0;
              }
            }
            uVar6 = uVar8 & 0xfffffffffffffffc;
            in_XMM1 = ZEXT216(CONCAT11(bVar7,uVar9));
            auVar22 = pshuflw(ZEXT116(bVar7),in_XMM1,0);
            do {
              *(longlong *)((longlong)&local_21a6 + uVar13 * 2 + uVar12 * 2) = auVar22._0_8_;
              uVar13 = uVar13 + 4;
            } while (uVar6 != uVar13);
            uVar12 = uVar6 + uVar12;
            if (uVar8 == uVar6) goto LAB_1408a2380;
          }
LAB_1408a24b0:
          do {
            *(undefined1 *)((longlong)&local_21a6 + uVar12 * 2) = uVar9;
            *(byte *)((longlong)&local_21a6 + uVar12 * 2 + 1) = bVar7;
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
        }
LAB_1408a2380:
        local_198[bVar2] = uVar11;
        uVar4 = uVar4 + 1;
      } while (uVar4 != local_21b0);
    }
    uVar4 = 0xffffffffffffffb8;
    local_21d8 = param_1;
    local_21d0 = param_2;
    local_21c8 = param_3;
    local_21c0 = uVar3;
    local_21b8 = param_4;
    if (uVar3 < param_4) {
      local_21e8 = &local_21a8;
      uVar4 = FUN_14089bfb0(param_1,param_2,(longlong)param_3 + uVar3);
    }
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_2208)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_2208);
  }
  return uVar4;
}

