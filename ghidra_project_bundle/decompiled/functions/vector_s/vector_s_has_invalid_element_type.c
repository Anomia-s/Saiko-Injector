/**
 * Function: vector_s_has_invalid_element_type
 * Address:  1405e1a80
 * Signature: undefined vector_s_has_invalid_element_type(void)
 * Body size: 3520 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vector_s_has_invalid_element_type(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  char cVar11;
  char cVar18;
  ushort uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint3 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  code *pcVar31;
  char cVar32;
  byte bVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  undefined8 uVar37;
  Decoration<__int64> *this;
  longlong lVar38;
  longlong lVar39;
  void *pvVar40;
  code *pcVar41;
  code *pcVar42;
  undefined8 *puVar43;
  byte bVar44;
  code *pcVar45;
  undefined1 *puVar46;
  byte bVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong *plVar53;
  code *pcVar54;
  bool bVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  short sVar69;
  undefined1 auVar77 [16];
  short sVar70;
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auStack_268 [32];
  char *local_248;
  uint local_23c;
  uint local_238;
  uint local_234;
  undefined8 local_230;
  uint local_224;
  longlong local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  code *local_198;
  undefined1 local_190 [16];
  code *local_180;
  undefined1 local_158 [16];
  uint local_148;
  longlong *local_110;
  code *local_f8;
  ulonglong local_f0;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined4 uVar71;
  undefined6 uVar72;
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [14];
  undefined1 auVar76 [14];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  
  local_f0 = DAT_1414ef3c0 ^ (ulonglong)auStack_268;
  uVar2 = *param_1;
  lVar36 = FUN_1400c4580(param_1,8,0);
  auVar30 = _DAT_1411f5c60;
  auVar29 = _DAT_140dc7970;
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    uVar51 = 0x800000000000010e;
    lVar48 = 0;
    auVar67._8_8_ = FUN_1405e3420;
    auVar67._0_8_ = FUN_1405e3390;
    auVar68._8_8_ = FUN_1405e2dc0;
    auVar68._0_8_ = FUN_1405e2cf0;
    local_1e0 = 0x800000000000010e;
    local_1d8 = lVar36;
    local_1d0 = param_1;
    do {
      if (*(char *)(lVar36 + 4 + lVar48 * 8) == '\0') {
        lVar3 = *(longlong *)(param_1[3] + lVar48 * 8);
        uVar37 = FUN_1403963b0(uVar2);
        cVar32 = FUN_1403b38e0(uVar37,lVar3);
        if ((cVar32 == '\0') &&
           (cVar32 = FUN_1403b38e0(uVar37,lVar3 << 0x20 | uVar51), cVar32 == '\0')) {
          local_220 = FUN_1403a5610(uVar2,lVar3);
          iVar35 = *(int *)(lVar36 + lVar48 * 8);
          if (iVar35 == 5) {
            puVar43 = (undefined8 *)FUN_1400ba4f0(uVar2,lVar3,0x16b);
            cVar32 = FUN_1400b8670(uVar2,*puVar43);
            if (cVar32 == '\0') {
              local_248 = (char *)FUN_1403af230(uVar2,lVar3);
              uVar37 = 0x382;
            }
            else {
              lVar36 = FUN_1403a5610(uVar2,*puVar43);
              if (lVar36 != 0) {
                plVar53 = (longlong *)(*DAT_141503398)(8);
                *plVar53 = lVar36;
                uVar34 = *(uint *)(lVar36 + 0x58);
                pvVar40 = (void *)FUN_1403a55c0(uVar2,lVar3);
                memcpy(&local_198,pvVar40,0xa8);
                if (local_f8 != (code *)0x0) {
                  (*local_f8)(local_110);
                }
                local_f8 = (code *)&LAB_1405e2f00;
                local_198 = FUN_1405e2f10;
                local_180 = FUN_1405e3020;
                local_190._8_8_ = FUN_1405e3160;
                local_190._0_8_ = FUN_1405e2f80;
                auVar57._0_4_ = -(uint)(*(int *)(lVar36 + 0x48) == 0);
                auVar57._4_4_ = -(uint)(*(int *)(lVar36 + 0x4c) == 0);
                auVar57._8_4_ = -(uint)(*(int *)(lVar36 + 0x50) == 0);
                auVar57._12_4_ = -(uint)(*(int *)(lVar36 + 0x54) == 0);
                auVar65._4_4_ = auVar57._0_4_;
                auVar65._0_4_ = auVar57._4_4_;
                auVar65._8_4_ = auVar57._12_4_;
                auVar65._12_4_ = auVar57._8_4_;
                auVar83._0_4_ = -(uint)((uVar34 & 0x80000) == 0);
                auVar83._4_4_ = -(uint)((uVar34 & 0x80000) == 0);
                auVar83._8_4_ = -(uint)((uVar34 & 0x100000) == 0);
                auVar83._12_4_ = -(uint)((uVar34 & 0x100000) == 0);
                local_158 = ~(auVar65 & auVar57) & auVar83 & auVar67;
                local_148 = local_148 & 0x1ff400 | uVar34 & 0x180000;
                local_110 = plVar53;
                goto LAB_1405e20eb;
              }
              local_248 = (char *)FUN_1403af230(uVar2,lVar3);
              uVar37 = 0x389;
            }
            FUN_140399630(0xfffffffd,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/rtt_lifecycle.c"
                          ,uVar37,"vector \'%s\' has invalid element type");
          }
          else if (iVar35 == 4) {
            local_230 = (undefined8 *)FUN_1400ba4f0(uVar2,lVar3,0x16a);
            lVar36 = FUN_1403a5610(uVar2,*local_230);
            uVar34 = *(uint *)(lVar36 + 0x58);
            pcVar42 = *(code **)(lVar36 + 8);
            local_23c = CONCAT31(local_23c._1_3_,*(longlong *)(lVar36 + 0x50) != 0);
            bVar55 = (uVar34 & 0x400) == 0;
            pcVar54 = (code *)0x0;
            if (bVar55 && (pcVar42 != FUN_1403a47f0 && pcVar42 != (code *)0x0)) {
              pcVar54 = FUN_1405e2c90;
            }
            iVar35 = *(int *)(lVar36 + 0x10);
            iVar26 = *(int *)(lVar36 + 0x14);
            iVar27 = *(int *)(lVar36 + 0x18);
            iVar28 = *(int *)(lVar36 + 0x1c);
            uVar37 = *(undefined8 *)(lVar36 + 0x20);
            uVar1 = *(undefined8 *)(lVar36 + 0x48);
            pvVar40 = (void *)FUN_1403a55c0(uVar2,lVar3);
            memcpy(&local_198,pvVar40,0xa8);
            pcVar31 = local_f8;
            auVar82._0_4_ = ~-(uint)(iVar35 == 0 && iVar26 == 0) & -(uint)((uVar34 & 0x1000) == 0);
            auVar82._4_4_ =
                 ~-(uint)((int)uVar37 == 0 && (int)((ulonglong)uVar37 >> 0x20) == 0) &
                 -(uint)((uVar34 & 0x4000) == 0);
            auVar82._8_4_ = ~-(uint)(iVar27 == 0 && iVar28 == 0) & -(uint)((uVar34 & 0x2000) == 0);
            auVar82._12_4_ =
                 ~-(uint)((int)uVar1 == 0 && (int)((ulonglong)uVar1 >> 0x20) == 0) &
                 -(uint)((uVar34 & 0x80000) == 0);
            local_180 = (code *)0x0;
            if ((auVar82._4_4_ & 1) != 0) {
              local_180 = FUN_1405e2d50;
            }
            auVar59._0_4_ = (int)(auVar82._0_4_ << 0x1f) >> 0x1f;
            auVar59._4_4_ = (int)(auVar82._0_4_ << 0x1f) >> 0x1f;
            auVar59._8_4_ = (int)(auVar82._8_4_ << 0x1f) >> 0x1f;
            auVar59._12_4_ = (int)(auVar82._8_4_ << 0x1f) >> 0x1f;
            local_190 = auVar59 & auVar68;
            local_158._0_8_ = (code *)0x0;
            if ((auVar82._12_4_ & 1) != 0) {
              local_158._0_8_ = FUN_1405e2e30;
            }
            bVar33 = (uVar34 & 0x100000) == 0 & (byte)local_23c;
            pcVar41 = (code *)0x0;
            if (bVar33 != 0) {
              pcVar41 = FUN_1405e2ea0;
            }
            local_158._8_8_ = pcVar41;
            pcVar45 = (code *)0x0;
            local_1b8 = auVar82;
            local_198 = pcVar54;
            if (local_f8 != (code *)0x0) {
              pcVar41 = (code *)(*local_f8)(local_110);
              pcVar45 = httplib::ClientImpl::vfunction4;
              local_f8 = httplib::ClientImpl::vfunction4;
            }
            iVar35 = movmskps((int)pcVar41,auVar82);
            if ((bVar55 && (pcVar42 != FUN_1403a47f0 && pcVar42 != (code *)0x0) || bVar33 != 0) ||
                iVar35 != 0) {
              plVar53 = (longlong *)(*DAT_141503398)(0x10);
              *plVar53 = lVar36;
              *(undefined4 *)(plVar53 + 1) = *(undefined4 *)(local_230 + 1);
              if (pcVar31 != (code *)0x0) {
                (*pcVar45)(local_110);
              }
              local_f8 = (code *)&LAB_1405e2f00;
              local_110 = plVar53;
            }
            local_148 = uVar34 & 0x1ff400;
LAB_1405e20eb:
            FUN_1403a4930(uVar2,lVar3,&local_198);
          }
          else if (iVar35 == 3) {
            this = (Decoration<__int64> *)FUN_1400ba4f0(uVar2,lVar3,0x169);
            uVar34 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
            lVar38 = FUN_140106180(this);
            lVar36 = local_220;
            local_1f8 = (ulonglong)uVar34;
            if ((int)uVar34 < 1) {
              auVar83 = (undefined1  [16])0x0;
              uVar25 = (uint3)(uVar34 >> 8);
              local_234 = (uint)CONCAT71((uint7)uVar25,1);
              uVar50 = 0;
              local_238 = CONCAT31(uVar25,1);
              local_23c = 0;
              local_230 = (undefined8 *)((ulonglong)local_230._4_4_ << 0x20);
            }
            else {
              lVar49 = local_1f8 * 0x68;
              auVar83 = (undefined1  [16])0x0;
              lVar52 = 0;
              local_230 = (undefined8 *)((ulonglong)local_230._4_4_ << 0x20);
              local_23c = 0;
              uVar50 = 0;
              auVar81 = auVar30;
              local_224 = uVar34;
              do {
                lVar39 = FUN_1403a5610(uVar2,*(undefined8 *)(lVar38 + 8 + lVar52));
                if ((lVar39 != 0) && (lVar39 != lVar36)) {
                  local_230 = (undefined8 *)
                              CONCAT44(local_230._4_4_,
                                       CONCAT31((int3)((ulonglong)local_230 >> 8),
                                                (byte)local_230 |
                                                (*(code **)(lVar39 + 8) != FUN_1403a47f0 &&
                                                *(code **)(lVar39 + 8) != (code *)0x0)));
                  local_23c = CONCAT31((int3)(local_23c >> 8),
                                       (byte)local_23c | *(longlong *)(lVar39 + 0x20) != 0);
                  auVar56._0_4_ = -(uint)(*(int *)(lVar39 + 0x10) == 0);
                  auVar56._4_4_ = -(uint)(*(int *)(lVar39 + 0x14) == 0);
                  auVar56._8_4_ = -(uint)(*(int *)(lVar39 + 0x18) == 0);
                  auVar56._12_4_ = -(uint)(*(int *)(lVar39 + 0x1c) == 0);
                  auVar62._4_4_ = auVar56._0_4_;
                  auVar62._0_4_ = auVar56._4_4_;
                  auVar62._8_4_ = auVar56._12_4_;
                  auVar62._12_4_ = auVar56._8_4_;
                  auVar23._8_4_ = 0xffffffff;
                  auVar23._0_8_ = 0xffffffffffffffff;
                  auVar23._12_4_ = 0xffffffff;
                  auVar83 = auVar83 | auVar62 & auVar56 ^ auVar23;
                  auVar77[0] = -(auVar81[0] == '\0');
                  auVar77[1] = -(auVar81[0] == '\0');
                  auVar77[2] = -(auVar81[1] == '\0');
                  auVar77[3] = -(auVar81[1] == '\0');
                  auVar77[4] = -(auVar81[2] == '\0');
                  auVar77[5] = -(auVar81[2] == '\0');
                  auVar77[6] = -(auVar81[3] == '\0');
                  auVar77[7] = -(auVar81[3] == '\0');
                  auVar77[8] = -(auVar81[4] == '\0');
                  auVar77[9] = -(auVar81[4] == '\0');
                  auVar77[10] = -(auVar81[5] == '\0');
                  auVar77[0xb] = -(auVar81[5] == '\0');
                  auVar77[0xc] = -(auVar81[6] == '\0');
                  auVar77[0xd] = -(auVar81[6] == '\0');
                  auVar77[0xe] = -(auVar81[7] == '\0');
                  auVar77[0xf] = -(auVar81[7] == '\0');
                  auVar24._8_4_ = 0xffffffff;
                  auVar24._0_8_ = 0xffffffffffffffff;
                  auVar24._12_4_ = 0xffffffff;
                  auVar57 = pshuflw(auVar56,auVar77 ^ auVar24,0x50);
                  auVar58._0_4_ = auVar57._0_4_;
                  auVar58._4_4_ = auVar58._0_4_;
                  auVar58._8_4_ = auVar57._4_4_;
                  auVar58._12_4_ = auVar57._4_4_;
                  auVar63._0_4_ = -(uint)(*(int *)(lVar39 + 0x48) == 0);
                  auVar63._4_4_ = -(uint)(*(int *)(lVar39 + 0x4c) == 0);
                  auVar63._8_4_ = -(uint)(*(int *)(lVar39 + 0x50) == 0);
                  auVar63._12_4_ = -(uint)(*(int *)(lVar39 + 0x54) == 0);
                  auVar78._4_4_ = auVar63._0_4_;
                  auVar78._0_4_ = auVar63._4_4_;
                  auVar78._8_4_ = auVar63._12_4_;
                  auVar78._12_4_ = auVar63._8_4_;
                  auVar57 = ~(auVar78 & auVar63) & auVar58 & auVar29;
                  sVar4 = auVar57._0_2_;
                  cVar32 = (0 < sVar4) * (sVar4 < 0x100) * auVar57[0] - (0xff < sVar4);
                  sVar5 = auVar57._2_2_;
                  sVar69 = CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar57[2] - (0xff < sVar5),
                                    cVar32);
                  sVar6 = auVar57._4_2_;
                  cVar11 = (0 < sVar6) * (sVar6 < 0x100) * auVar57[4] - (0xff < sVar6);
                  sVar7 = auVar57._6_2_;
                  uVar71 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar57[6] - (0xff < sVar7),
                                    CONCAT12(cVar11,sVar69));
                  sVar8 = auVar57._8_2_;
                  cVar12 = (0 < sVar8) * (sVar8 < 0x100) * auVar57[8] - (0xff < sVar8);
                  sVar9 = auVar57._10_2_;
                  uVar72 = CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar57[10] - (0xff < sVar9),
                                    CONCAT14(cVar12,uVar71));
                  sVar10 = auVar57._12_2_;
                  cVar13 = (0 < sVar10) * (sVar10 < 0x100) * auVar57[0xc] - (0xff < sVar10);
                  sVar70 = auVar57._14_2_;
                  uVar37 = CONCAT17((0 < sVar70) * (sVar70 < 0x100) * auVar57[0xe] - (0xff < sVar70)
                                    ,CONCAT16(cVar13,uVar72));
                  cVar14 = (0 < sVar4) * (sVar4 < 0x100) * auVar57[0] - (0xff < sVar4);
                  auVar73._0_10_ =
                       CONCAT19((0 < sVar5) * (sVar5 < 0x100) * auVar57[2] - (0xff < sVar5),
                                CONCAT18(cVar14,uVar37));
                  cVar15 = (0 < sVar6) * (sVar6 < 0x100) * auVar57[4] - (0xff < sVar6);
                  auVar73[10] = cVar15;
                  auVar73[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar57[6] - (0xff < sVar7);
                  cVar16 = (0 < sVar8) * (sVar8 < 0x100) * auVar57[8] - (0xff < sVar8);
                  auVar75[0xc] = cVar16;
                  auVar75._0_12_ = auVar73;
                  auVar75[0xd] = (0 < sVar9) * (sVar9 < 0x100) * auVar57[10] - (0xff < sVar9);
                  cVar17 = (0 < sVar10) * (sVar10 < 0x100) * auVar57[0xc] - (0xff < sVar10);
                  auVar79[0xe] = cVar17;
                  auVar79._0_14_ = auVar75;
                  auVar79[0xf] = (0 < sVar70) * (sVar70 < 0x100) * auVar57[0xe] - (0xff < sVar70);
                  cVar18 = (0 < sVar69) * (sVar69 < 0x100) * cVar32 - (0xff < sVar69);
                  sVar4 = (short)((uint)uVar71 >> 0x10);
                  sVar70 = CONCAT11((0 < sVar4) * (sVar4 < 0x100) * cVar11 - (0xff < sVar4),cVar18);
                  sVar5 = (short)((uint6)uVar72 >> 0x20);
                  cVar19 = (0 < sVar5) * (sVar5 < 0x100) * cVar12 - (0xff < sVar5);
                  sVar6 = (short)((ulonglong)uVar37 >> 0x30);
                  uVar71 = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * cVar13 - (0xff < sVar6),
                                    CONCAT12(cVar19,sVar70));
                  sVar7 = (short)((unkuint10)auVar73._0_10_ >> 0x40);
                  cVar20 = (0 < sVar7) * (sVar7 < 0x100) * cVar14 - (0xff < sVar7);
                  sVar8 = auVar73._10_2_;
                  uVar72 = CONCAT15((0 < sVar8) * (sVar8 < 0x100) * cVar15 - (0xff < sVar8),
                                    CONCAT14(cVar20,uVar71));
                  sVar9 = auVar75._12_2_;
                  cVar21 = (0 < sVar9) * (sVar9 < 0x100) * cVar16 - (0xff < sVar9);
                  sVar10 = auVar79._14_2_;
                  uVar37 = CONCAT17((0 < sVar10) * (sVar10 < 0x100) * cVar17 - (0xff < sVar10),
                                    CONCAT16(cVar21,uVar72));
                  cVar32 = (0 < sVar69) * (sVar69 < 0x100) * cVar32 - (0xff < sVar69);
                  auVar74._0_10_ =
                       CONCAT19((0 < sVar4) * (sVar4 < 0x100) * cVar11 - (0xff < sVar4),
                                CONCAT18(cVar32,uVar37));
                  cVar11 = (0 < sVar5) * (sVar5 < 0x100) * cVar12 - (0xff < sVar5);
                  auVar74[10] = cVar11;
                  auVar74[0xb] = (0 < sVar6) * (sVar6 < 0x100) * cVar13 - (0xff < sVar6);
                  cVar12 = (0 < sVar7) * (sVar7 < 0x100) * cVar14 - (0xff < sVar7);
                  auVar76[0xc] = cVar12;
                  auVar76._0_12_ = auVar74;
                  auVar76[0xd] = (0 < sVar8) * (sVar8 < 0x100) * cVar15 - (0xff < sVar8);
                  cVar13 = (0 < sVar9) * (sVar9 < 0x100) * cVar16 - (0xff < sVar9);
                  auVar80[0xe] = cVar13;
                  auVar80._0_14_ = auVar76;
                  auVar80[0xf] = (0 < sVar10) * (sVar10 < 0x100) * cVar17 - (0xff < sVar10);
                  sVar4 = (short)((uint)uVar71 >> 0x10);
                  auVar81[1] = (0 < sVar4) * (sVar4 < 0x100) * cVar19 - (0xff < sVar4);
                  auVar81[0] = (0 < sVar70) * (sVar70 < 0x100) * cVar18 - (0xff < sVar70);
                  sVar5 = (short)((uint6)uVar72 >> 0x20);
                  auVar81[2] = (0 < sVar5) * (sVar5 < 0x100) * cVar20 - (0xff < sVar5);
                  sVar6 = (short)((ulonglong)uVar37 >> 0x30);
                  auVar81[3] = (0 < sVar6) * (sVar6 < 0x100) * cVar21 - (0xff < sVar6);
                  sVar7 = (short)((unkuint10)auVar74._0_10_ >> 0x40);
                  auVar81[4] = (0 < sVar7) * (sVar7 < 0x100) * cVar32 - (0xff < sVar7);
                  sVar8 = auVar74._10_2_;
                  auVar81[5] = (0 < sVar8) * (sVar8 < 0x100) * cVar11 - (0xff < sVar8);
                  sVar9 = auVar76._12_2_;
                  auVar81[6] = (0 < sVar9) * (sVar9 < 0x100) * cVar12 - (0xff < sVar9);
                  sVar10 = auVar80._14_2_;
                  auVar81[7] = (0 < sVar10) * (sVar10 < 0x100) * cVar13 - (0xff < sVar10);
                  auVar81[8] = (0 < sVar70) * (sVar70 < 0x100) * cVar18 - (0xff < sVar70);
                  auVar81[9] = (0 < sVar4) * (sVar4 < 0x100) * cVar19 - (0xff < sVar4);
                  auVar81[10] = (0 < sVar5) * (sVar5 < 0x100) * cVar20 - (0xff < sVar5);
                  auVar81[0xb] = (0 < sVar6) * (sVar6 < 0x100) * cVar21 - (0xff < sVar6);
                  auVar81[0xc] = (0 < sVar7) * (sVar7 < 0x100) * cVar32 - (0xff < sVar7);
                  auVar81[0xd] = (0 < sVar8) * (sVar8 < 0x100) * cVar11 - (0xff < sVar8);
                  auVar81[0xe] = (0 < sVar9) * (sVar9 < 0x100) * cVar12 - (0xff < sVar9);
                  auVar81[0xf] = (0 < sVar10) * (sVar10 < 0x100) * cVar13 - (0xff < sVar10);
                  uVar50 = uVar50 | *(uint *)(lVar39 + 0x58);
                }
                lVar52 = lVar52 + 0x68;
              } while (lVar49 - lVar52 != 0);
              uVar34 = auVar81._0_4_;
              local_218 = (longlong *)CONCAT44(local_218._4_4_,uVar34);
              local_200 = (longlong *)CONCAT44(local_200._4_4_,uVar34);
              local_208 = (longlong *)CONCAT44(local_208._4_4_,uVar34);
              local_210 = (longlong *)(CONCAT44(local_210._4_4_,uVar34) & 0xffffffff0000ffff);
              auVar60._0_8_ =
                   CONCAT44(CONCAT22(CONCAT11((char)(uVar34 >> 7),(char)(uVar34 >> 6)),
                                     CONCAT11((char)(uVar34 >> 5),(char)(uVar34 >> 4))),
                            CONCAT22(CONCAT11((char)(uVar34 >> 3),(char)(uVar34 >> 2)),
                                     CONCAT11((char)(uVar34 >> 1),auVar81[0]))) & 0x101010101010101;
              auVar60._8_8_ =
                   CONCAT44(CONCAT22(CONCAT11((char)((uint)local_210 >> 0xf),(char)(uVar34 >> 0xe)),
                                     CONCAT11((char)(uVar34 >> 0xd),(char)(uVar34 >> 0xc))),
                            CONCAT22(CONCAT11((char)(uVar34 >> 0xb),(char)(uVar34 >> 10)),
                                     CONCAT11((char)(uVar34 >> 9),auVar81[1]))) & 0xff01010101010101
              ;
              auVar57 = psllw(auVar60,7);
              uVar22 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar57[0xf] >> 7) << 0xf;
              local_238 = (uint)uVar22;
              local_234 = uVar22 >> 8 & 1;
              uVar34 = local_224;
            }
            memcpy(&local_198,(void *)(local_220 + 8),0xa8);
            if (local_f8 != (code *)0x0) {
              (*local_f8)(local_110);
            }
            bVar33 = (uVar50 & 0x400) == 0 & (byte)local_230;
            local_198 = (code *)0x0;
            if (bVar33 != 0) {
              local_198 = FUN_1405e2860;
            }
            bVar44 = (uVar50 & 0x4000) == 0 & (byte)local_23c;
            local_180 = (code *)0x0;
            if (bVar44 != 0) {
              local_180 = FUN_1405e29a0;
            }
            auVar61._0_4_ = -(uint)((uVar50 & 0x1000) == 0);
            auVar61._4_4_ = -(uint)((uVar50 & 0x1000) == 0);
            auVar61._8_4_ = -(uint)((uVar50 & 0x2000) == 0);
            auVar61._12_4_ = -(uint)((uVar50 & 0x2000) == 0);
            local_1c8 = auVar61 & auVar83;
            auVar64._0_4_ = (local_1c8._0_4_ << 0x1f) >> 0x1f;
            auVar64._4_4_ = (local_1c8._0_4_ << 0x1f) >> 0x1f;
            auVar64._8_4_ = (local_1c8._8_4_ << 0x1f) >> 0x1f;
            auVar64._12_4_ = (local_1c8._8_4_ << 0x1f) >> 0x1f;
            auVar66._8_8_ = FUN_1405e2a50;
            auVar66._0_8_ = FUN_1405e2900;
            local_190 = auVar66 & auVar64;
            bVar47 = (uVar50 & 0x80000) == 0 & (byte)local_238;
            local_158._0_8_ = (code *)0x0;
            if (bVar47 != 0) {
              local_158._0_8_ = FUN_1405e2b00;
            }
            bVar55 = ((byte)local_234 & (uVar50 & 0x100000) == 0) != 0;
            local_158._8_8_ = (code *)0x0;
            if (bVar55) {
              local_158._8_8_ = FUN_1405e2b80;
            }
            if ((((bVar55) || (bVar47 != 0)) || ((local_1c8[0] & 1) != 0)) ||
               (((local_1c8[8] & 1) != 0 || (bVar33 != 0)))) {
LAB_1405e2400:
              plVar53 = (longlong *)(*DAT_141503398)(0x60);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53,0x18,0);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53 + 2,0x18,0);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53 + 4,0x18,0);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53 + 6,0x18,0);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53 + 8,0x18,0);
              local_248 = "vec<ecs_rtt_call_data_t>";
              FUN_1403b2710(0,plVar53 + 10,0x18,0);
              pcVar42 = FUN_1405e2c00;
            }
            else {
              plVar53 = (longlong *)0x0;
              pcVar42 = httplib::ClientImpl::vfunction4;
              if (bVar44 != 0) goto LAB_1405e2400;
            }
            local_148 = uVar50 & 0x1ff400;
            local_110 = plVar53;
            local_f8 = pcVar42;
            FUN_1403a4930(uVar2,*(undefined8 *)(local_220 + 0xb0),&local_198);
            local_218 = plVar53;
            if (plVar53 != (longlong *)0x0 && 0 < (int)uVar34) {
              local_1f0 = plVar53 + 2;
              local_200 = plVar53 + 4;
              local_208 = plVar53 + 6;
              local_210 = plVar53 + 8;
              local_1e8 = plVar53 + 10;
              auVar84._0_8_ = auVar83._0_8_ << 0x3f;
              auVar84._8_8_ = auVar83._8_8_ << 0x3f;
              local_224 = movmskpd((int)local_1e8,auVar84);
              bVar33 = (byte)local_224;
              lVar36 = local_1f8 * 0x68;
              lVar49 = 0;
              do {
                lVar52 = FUN_1403a5610(uVar2,*(undefined8 *)(lVar38 + 8 + lVar49));
                if ((lVar52 != 0) && (lVar52 != local_220)) {
                  if (((ulonglong)local_230 & 1) != 0) {
                    plVar53 = (longlong *)FUN_1403b2f60(0,local_218,0x18);
                    iVar35 = *(int *)(lVar38 + 0x10 + lVar49);
                    *(uint *)((longlong)plVar53 + 0x14) = iVar35 + (uint)(iVar35 == 0);
                    *(undefined4 *)(plVar53 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    plVar53[1] = lVar52;
                    pcVar42 = *(code **)(lVar52 + 8);
                    if (pcVar42 == (code *)0x0) {
                      pcVar42 = FUN_1403a47f0;
                    }
                    *plVar53 = (longlong)pcVar42;
                  }
                  if (((local_224 & 1) != 0) && (*(longlong *)(lVar52 + 0x10) != 0)) {
                    puVar43 = (undefined8 *)FUN_1403b2f60(0,local_1f0,0x18);
                    iVar35 = *(int *)(lVar38 + 0x10 + lVar49);
                    *(uint *)((longlong)puVar43 + 0x14) = iVar35 + (uint)(iVar35 == 0);
                    *(undefined4 *)(puVar43 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    puVar43[1] = lVar52;
                    *puVar43 = *(undefined8 *)(lVar52 + 0x10);
                  }
                  if ((local_23c & 1) == 0) {
                    if (bVar33 >> 1 == 0) goto LAB_1405e2621;
LAB_1405e2687:
                    puVar43 = (undefined8 *)FUN_1403b2f60(0,local_208,0x18);
                    *(undefined4 *)(puVar43 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    puVar43[1] = lVar52;
                    iVar35 = *(int *)(lVar38 + 0x10 + lVar49);
                    *(uint *)((longlong)puVar43 + 0x14) = iVar35 + (uint)(iVar35 == 0);
                    puVar46 = *(undefined1 **)(lVar52 + 0x18);
                    if (puVar46 == (undefined1 *)0x0) {
                      puVar46 = &LAB_1405e2850;
                    }
                    *puVar43 = puVar46;
                    if ((local_238 & 1) != 0) goto LAB_1405e26d4;
LAB_1405e262c:
                  }
                  else {
                    puVar43 = (undefined8 *)FUN_1403b2f60(0,local_200,0x18);
                    *(undefined4 *)(puVar43 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    puVar43[1] = lVar52;
                    iVar35 = *(int *)(lVar38 + 0x10 + lVar49);
                    *(uint *)((longlong)puVar43 + 0x14) = iVar35 + (uint)(iVar35 == 0);
                    puVar46 = *(undefined1 **)(lVar52 + 0x20);
                    if (puVar46 == (undefined1 *)0x0) {
                      puVar46 = &LAB_1405e2850;
                    }
                    *puVar43 = puVar46;
                    if (bVar33 >> 1 != 0) goto LAB_1405e2687;
LAB_1405e2621:
                    if ((local_238 & 1) == 0) goto LAB_1405e262c;
LAB_1405e26d4:
                    puVar43 = (undefined8 *)FUN_1403b2f60(0,local_210,0x18);
                    *(undefined4 *)(puVar43 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    puVar43[1] = lVar52;
                    *(undefined4 *)((longlong)puVar43 + 0x14) = 1;
                    *puVar43 = *(undefined8 *)(lVar52 + 0x48);
                  }
                  if ((byte)local_234 != '\0') {
                    puVar43 = (undefined8 *)FUN_1403b2f60(0,local_1e8,0x18);
                    *(undefined4 *)(puVar43 + 2) = *(undefined4 *)(lVar38 + 0x14 + lVar49);
                    puVar43[1] = lVar52;
                    *(undefined4 *)((longlong)puVar43 + 0x14) = 1;
                    *puVar43 = *(undefined8 *)(lVar52 + 0x50);
                  }
                }
                lVar49 = lVar49 + 0x68;
              } while (lVar36 - lVar49 != 0);
            }
          }
          lVar36 = local_220;
          memcpy(&local_198,(void *)(local_220 + 8),0xa8);
          if ((*(longlong *)(lVar36 + 8) == 0) && ((*(byte *)(lVar36 + 0x59) & 4) == 0)) {
            local_198 = FUN_1403a47f0;
          }
          local_148 = local_148 & 0x1ff400;
          FUN_1403a4930(uVar2,lVar3,&local_198);
          param_1 = local_1d0;
          uVar51 = local_1e0;
          lVar36 = local_1d8;
        }
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < *(int *)((longlong)param_1 + 0x14));
  }
  if (DAT_1414ef3c0 == (local_f0 ^ (ulonglong)auStack_268)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_f0 ^ (ulonglong)auStack_268);
}

