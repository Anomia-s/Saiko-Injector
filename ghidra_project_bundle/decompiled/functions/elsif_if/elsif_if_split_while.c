/**
 * Function: elsif_if_split_while
 * Address:  1409b2d20
 * Signature: void __thiscall elsif_if_split_while(void * this, char * param_1, longlong param_2, ulonglong param_3, longlong * param_4)
 * Body size: 14071 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001409b3f34) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
elsif_if_split_while(void *this,char *param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 (*pauVar20) [16];
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  void *pvVar28;
  byte *pbVar29;
  char *pcVar30;
  ulonglong uVar31;
  byte bVar32;
  uint uVar33;
  bool bVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  ulonglong in_stack_ffffffffffffd8e8;
  char local_2700 [1048];
  longlong *local_22e8;
  byte local_22e0 [4008];
  char *local_1338;
  char *local_1330;
  int local_1328;
  undefined4 local_1324;
  char *local_1320;
  char local_1318 [4000];
  undefined1 local_378 [16];
  longlong local_368;
  undefined4 local_360;
  undefined8 local_358;
  char cStack_350;
  undefined8 local_2f0;
  byte local_2e8;
  int local_2e4;
  byte local_2e0 [256];
  char *local_1e0;
  longlong local_1d8;
  int local_1d0;
  char acStack_1cc [4];
  longlong local_1c8;
  int local_1c0;
  char acStack_1bc [4];
  longlong local_1b8;
  int local_1b0;
  char local_1ac [4];
  longlong local_1a8;
  int local_1a0;
  char local_19c [4];
  longlong local_198;
  char *pcStack_190;
  char *local_188;
  undefined1 (*local_180) [16];
  undefined1 (*local_178) [16];
  undefined1 (*local_170) [16];
  undefined1 (*local_168) [16];
  undefined1 (*local_160) [16];
  undefined1 (*local_158) [16];
  int local_150;
  char local_14c [4];
  longlong local_148;
  int local_140;
  char local_13c [4];
  longlong local_138;
  undefined1 (*local_130) [16];
  char *local_128;
  int local_11c;
  char *local_118;
  char *local_110;
  void *local_108;
  ulonglong local_100;
  char local_f5;
  uint local_f4;
  char *local_f0;
  longlong *local_e8;
  char *local_e0;
  char *local_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined2 local_98;
  uint local_94;
  undefined8 local_90;
  longlong lStack_88;
  uint uStack_80;
  longlong local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x1409b2d36;
  local_60 = 0xfffffffffffffffe;
  uVar31 = param_3 & 0xffffffff;
  local_22e8 = param_4;
  local_1338 = (char *)0x7fffffff;
  local_1330 = (char *)0x0;
  local_108 = this;
  iVar10 = (**(code **)(*param_4 + 0x88))(param_4);
  local_1324 = 0;
  local_1328 = iVar10;
  local_1320 = (char *)(**(code **)(*param_4 + 0x10))(param_4);
  local_378 = (undefined1  [16])0x0;
  local_368 = 0;
  local_360 = (**(code **)*param_4)(param_4);
  local_22e0[0] = 0;
  local_1318[0] = '\0';
  if ((0x12 < iVar10 - 0x3a4U) || ((0x60011U >> (iVar10 - 0x3a4U & 0x1f) & 1) == 0)) {
    if (iVar10 == 0xfde9) {
      local_1324 = 1;
      goto LAB_1409b2e11;
    }
    if (iVar10 != 0x551) goto LAB_1409b2e11;
  }
  local_1324 = 2;
LAB_1409b2e11:
  FUN_140a8b860(local_2700,0);
  FUN_140a8b940(local_2700,"elsif if split while");
  local_158 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_158[7] = (undefined1  [16])0x0;
  local_158[6] = (undefined1  [16])0x0;
  local_158[5] = (undefined1  [16])0x0;
  local_158[4] = (undefined1  [16])0x0;
  local_158[3] = (undefined1  [16])0x0;
  local_158[2] = (undefined1  [16])0x0;
  local_158[1] = (undefined1  [16])0x0;
  *local_158 = (undefined1  [16])0x0;
  *(undefined2 *)(local_158[7] + 7) = 0x101;
  local_158[6][0xf] = 1;
  *(undefined2 *)(local_158[5] + 2) = 0x101;
  *(undefined2 *)(local_158[5] + 7) = 0x101;
  local_158[4][0xf] = 1;
  local_158[7][10] = 1;
  local_158[7][0] = 1;
  *(undefined2 *)(local_158[6] + 0xb) = 0x101;
  local_158[5][4] = 1;
  local_158[4][2] = 1;
  local_158[4][0xd] = 1;
  local_158[4][1] = 1;
  local_158[4][3] = 1;
  *(undefined2 *)(local_158[6] + 6) = 0x101;
  *(undefined4 *)(local_158[6] + 2) = 0x1010101;
  *(undefined4 *)(local_158[7] + 2) = 0x1010101;
  local_170 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_170[2] = (undefined1  [16])0x0;
  local_170[3] = (undefined1  [16])0x0;
  local_170[5] = (undefined1  [16])0x0;
  local_170[7] = (undefined1  [16])0x0;
  local_170[6] = (undefined1  [16])0x0;
  local_170[4] = (undefined1  [16])0x0;
  local_170[1] = (undefined1  [16])0x0;
  *local_170 = (undefined1  [16])0x0;
  local_170[2][6] = 1;
  *(undefined2 *)(local_170[2] + 8) = 0x101;
  local_170[3][0xd] = 1;
  *(undefined2 *)(local_170[3] + 10) = 0x101;
  *(undefined2 *)(local_170[3] + 0xe) = 0x101;
  local_170[2][1] = 1;
  *(undefined4 *)(local_170[2] + 0xb) = 0x1010101;
  *(undefined4 *)(local_170[5] + 0xb) = 0x1010101;
  *(undefined4 *)(local_170[7] + 0xb) = 0x1010101;
  local_178 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_178[7] = (undefined1  [16])0x0;
  local_178[6] = (undefined1  [16])0x0;
  local_178[5] = (undefined1  [16])0x0;
  local_178[4] = (undefined1  [16])0x0;
  local_178[3] = (undefined1  [16])0x0;
  local_178[2] = (undefined1  [16])0x0;
  local_178[1] = (undefined1  [16])0x0;
  *local_178 = (undefined1  [16])0x0;
  *(undefined2 *)(local_178[7] + 1) = 0x101;
  *(undefined2 *)(local_178[7] + 7) = 0x101;
  in_stack_ffffffffffffd8e8 = in_stack_ffffffffffffd8e8 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_140,3,&DAT_1413a2ad6,0x80,in_stack_ffffffffffffd8e8);
  local_180 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_180[2] = (undefined1  [16])0x0;
  local_180[3] = (undefined1  [16])0x0;
  local_180[7] = (undefined1  [16])0x0;
  local_180[6] = (undefined1  [16])0x0;
  local_180[5] = (undefined1  [16])0x0;
  local_180[4] = (undefined1  [16])0x0;
  local_180[1] = (undefined1  [16])0x0;
  *local_180 = (undefined1  [16])0x0;
  local_180[2][10] = 1;
  local_180[2][0xf] = 1;
  local_180[3][0xc] = 1;
  local_180[2][5] = 1;
  uVar13 = CONCAT71((int7)(in_stack_ffffffffffffd8e8 >> 8),1);
  FUN_1408d58e0(&local_1d0,7,&DAT_14139d40a,0x80,uVar13);
  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  FUN_1408d58e0(&local_1c0,3,"#$_+-",0x80,uVar13);
  uVar15 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  FUN_1408d58e0(&local_1b0,3,"#$_!^+-",0x80,uVar15);
  local_168 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_168[3] = (undefined1  [16])0x0;
  local_168[2] = (undefined1  [16])0x0;
  local_168[4] = (undefined1  [16])0x0;
  local_168[7] = (undefined1  [16])0x0;
  local_168[6] = (undefined1  [16])0x0;
  local_168[5] = (undefined1  [16])0x0;
  local_168[1] = (undefined1  [16])0x0;
  *local_168 = (undefined1  [16])0x0;
  local_168[3][0xd] = 1;
  local_168[2][4] = 1;
  local_168[4][0] = 1;
  *(undefined8 *)local_168[3] = 0x101010101010101;
  *(undefined2 *)(local_168[3] + 8) = 0x101;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_1408d58e0(&local_150,7,&DAT_14135fdac,0x80,uVar15);
  local_130 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_130[5] = (undefined1  [16])0x0;
  local_130[2] = (undefined1  [16])0x0;
  local_130[4] = (undefined1  [16])0x0;
  local_130[3] = (undefined1  [16])0x0;
  *local_130 = (undefined1  [16])0x0;
  local_130[7] = (undefined1  [16])0x0;
  local_130[6] = (undefined1  [16])0x0;
  local_130[1] = (undefined1  [16])0x0;
  *(undefined2 *)(local_130[5] + 0xb) = 0x101;
  local_130[2][4] = 1;
  local_130[4][0] = 1;
  *(undefined2 *)(local_130[2] + 5) = 0x101;
  *(undefined2 *)(local_130[2] + 10) = 0x101;
  local_130[5][0xd] = 1;
  local_130[3][0xb] = 1;
  local_130[5][0xf] = 1;
  local_130[2][0] = 1;
  (*local_130)[9] = 1;
  local_160 = (undefined1 (*) [16])thunk_FUN_140b65d30(0x80);
  local_160[2] = (undefined1  [16])0x0;
  local_160[3] = (undefined1  [16])0x0;
  local_160[7] = (undefined1  [16])0x0;
  local_160[6] = (undefined1  [16])0x0;
  local_160[5] = (undefined1  [16])0x0;
  local_160[4] = (undefined1  [16])0x0;
  local_160[1] = (undefined1  [16])0x0;
  *local_160 = (undefined1  [16])0x0;
  local_160[2][9] = 1;
  local_160[2][2] = 1;
  local_160[2][7] = 1;
  *(undefined8 *)local_160[3] = 0x101010101010101;
  *(undefined2 *)(local_160[3] + 8) = 0x101;
  FUN_1408d58e0(&local_1a0,3,&DAT_14136c184,0x80,uVar15 & 0xffffffffffffff00);
  local_2e4 = 0;
  local_2e0[0] = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  uVar33 = (uint)param_3;
  pcVar14 = param_1;
  if ((uVar33 < 0x3f) && ((0x6000040003800000U >> (param_3 & 0x3f) & 1) != 0)) {
    cVar7 = '\x16';
    if (uVar33 == 0x2a) {
      cVar7 = ')';
    }
    while (((char *)0x1 < pcVar14 &&
           (cVar6 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar14), cVar7 != cVar6))) {
      pcVar14 = pcVar14 + -1;
    }
    uVar13 = (**(code **)(*local_22e8 + 0x28))(local_22e8,pcVar14);
    pcVar14 = (char *)(**(code **)(*local_22e8 + 0x30))(local_22e8,uVar13);
    cVar7 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar14 + -1);
    uVar33 = (uint)cVar7;
    uVar31 = (ulonglong)uVar33;
  }
  if (uVar33 - 1 < 0x42) {
                    /* WARNING: Could not recover jumptable at 0x0001409b3277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_1412a7618 + *(int *)(&DAT_1412a7618 + (ulonglong)(uVar33 - 1) * 4)))();
    return;
  }
  if (pcVar14 == (char *)0x0) {
    pcVar14 = (char *)0x0;
    local_118 = (char *)0x0;
    local_64 = 0;
  }
  else {
    pcVar22 = pcVar14 + -1;
    if (pcVar22 == (char *)0x0) {
      pcVar22 = (char *)0x0;
      pcVar14 = (char *)0x1;
    }
    else {
      do {
        uVar15 = (**(code **)(*local_22e8 + 0x20))();
        if ((uVar15 & 0xfd) != 0) goto LAB_1409b336f;
        pcVar22 = pcVar22 + -1;
      } while (pcVar22 != (char *)0x0);
      pcVar22 = (char *)0x0;
    }
LAB_1409b336f:
    local_118 = pcVar22;
    cVar7 = (**(code **)(*local_22e8 + 0x20))();
    local_64 = 1;
    if (cVar7 != '\n') {
      cVar7 = (**(code **)(*local_22e8 + 0x20))(local_22e8,local_118);
      local_64 = (uint)(cVar7 == '\x05') * 2;
    }
    local_118 = local_118 + 1;
  }
  local_128 = param_1 + param_2;
  FUN_1408c6740(&local_f0,pcVar14,local_128 + -(longlong)pcVar14,uVar31,&local_22e8,0xff);
  local_1e0 = local_128 + -1;
  local_110 = (char *)((longlong)local_108 + 0x2c);
  local_1d8 = (longlong)local_108 + 0x58;
  local_188 = (char *)((longlong)local_108 + 0x1c);
  local_f4 = 5;
  local_70 = 1;
  local_68 = 0;
  local_6c = 0;
  iVar10 = 0;
  local_100 = 0;
LAB_1409b3564:
  uVar12 = uStack_80;
  uVar33 = local_94;
  pcVar22 = local_f0;
  if (local_e0 <= local_b8) {
    FUN_1408c6b70(&local_f0);
    if (((ulonglong)local_94 < 0x2b) && ((0x40003800000U >> ((ulonglong)local_94 & 0x3f) & 1) != 0))
    {
      (**(code **)(*local_22e8 + 0x80))(local_22e8,local_b8,local_1320);
    }
    FUN_1408c6b70(&local_f0);
    if (local_198 != 0) {
      thunk_FUN_140b68ba8();
    }
    thunk_FUN_140b68ba8(local_160);
    thunk_FUN_140b68ba8(local_130);
    if (local_148 != 0) {
      thunk_FUN_140b68ba8();
    }
    thunk_FUN_140b68ba8(local_168);
    pauVar20 = local_180;
    if (local_1a8 != 0) {
      thunk_FUN_140b68ba8();
    }
    if (local_1b8 != 0) {
      thunk_FUN_140b68ba8();
    }
    if (local_1c8 != 0) {
      thunk_FUN_140b68ba8();
    }
    thunk_FUN_140b68ba8(pauVar20);
    if (local_138 != 0) {
      thunk_FUN_140b68ba8();
    }
    thunk_FUN_140b68ba8(local_178);
    thunk_FUN_140b68ba8(local_170);
    thunk_FUN_140b68ba8(local_158);
    FUN_140a8b880(local_2700);
    return;
  }
  cVar7 = (char)local_94;
  switch(local_94) {
  case 2:
    if (local_98._1_1_ == '\x01') {
      pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar14 = *(char **)(local_f0 + 0x1f78);
      if (pcVar23 == pcVar14 + -1) goto code_r0x0001409b5158;
      if (pcVar23 < pcVar14) goto code_r0x0001409b5165;
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      pcVar30 = pcVar23 + 1;
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\x02';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),2);
      }
      goto code_r0x0001409b515e;
    }
    break;
  case 3:
  case 0x1f:
    local_358 = local_b8;
    lVar24 = (**(code **)(*local_22e8 + 0x28))();
    if (((char)local_98 == '\x01') &&
       (cVar7 = FUN_1408de0e0(&local_f0,&UNK_14132b08f), uVar33 = local_94, pcVar22 = local_f0,
       cVar7 != '\0')) {
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar23 = *(char **)(local_f0 + 0x1f78);
      if (pcVar30 == pcVar23 + -1) {
code_r0x0001409b417f:
        *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
      }
      else if (pcVar23 <= pcVar30) {
        pcVar14 = (char *)(ulonglong)local_94;
        lVar26 = *(longlong *)(local_f0 + 0x1f70);
        if ((0 < lVar26) && ((char *)0xf9f < pcVar30 + lVar26 + (1 - (longlong)pcVar23))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar26,local_f0 + 0xfd0);
          pcVar23 = *(char **)(pcVar22 + 0x1f78);
          *(longlong *)(pcVar22 + 0x1f80) =
               *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
          pcVar22[0x1f70] = '\0';
          pcVar22[0x1f71] = '\0';
          pcVar22[0x1f72] = '\0';
          pcVar22[0x1f73] = '\0';
          pcVar22[0x1f74] = '\0';
          pcVar22[0x1f75] = '\0';
          pcVar22[0x1f76] = '\0';
          pcVar22[0x1f77] = '\0';
          lVar26 = 0;
        }
        if (pcVar30 + (lVar26 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
          for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
            lVar26 = *(longlong *)(pcVar22 + 0x1f70);
            *(longlong *)(pcVar22 + 0x1f70) = lVar26 + 1;
            pcVar22[lVar26 + 0xfd0] = (char)uVar33;
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar22 + 0x60))
                    (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),uVar33);
        }
        goto code_r0x0001409b417f;
      }
      local_94 = 3;
      if (local_b8 < local_e0) {
        lVar26 = 0;
        do {
          if (local_b8 < local_e0) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar25 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar25);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 != 4);
        pcVar14 = (char *)(ulonglong)(byte)local_94;
      }
      else {
        local_98 = 0x100;
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
        pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),3);
      }
      pcVar23 = local_f0;
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar22 = *(char **)(local_f0 + 0x1f78);
      if (pcVar30 == pcVar22 + -1) {
code_r0x0001409b6902:
        *(char **)(pcVar23 + 0x1f78) = pcVar30 + 1;
      }
      else if (pcVar22 <= pcVar30) {
        lVar26 = *(longlong *)(local_f0 + 0x1f70);
        if ((0 < lVar26) && ((char *)0xf9f < pcVar30 + lVar26 + (1 - (longlong)pcVar22))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar26,local_f0 + 0xfd0);
          pcVar22 = *(char **)(pcVar23 + 0x1f78);
          *(longlong *)(pcVar23 + 0x1f80) =
               *(longlong *)(pcVar23 + 0x1f80) + *(longlong *)(pcVar23 + 0x1f70);
          pcVar23[0x1f70] = '\0';
          pcVar23[0x1f71] = '\0';
          pcVar23[0x1f72] = '\0';
          pcVar23[0x1f73] = '\0';
          pcVar23[0x1f74] = '\0';
          pcVar23[0x1f75] = '\0';
          pcVar23[0x1f76] = '\0';
          pcVar23[0x1f77] = '\0';
          lVar26 = 0;
        }
        if (pcVar30 + (lVar26 - (longlong)pcVar22) + 1 < (char *)0xfa0) {
          for (; pcVar22 <= pcVar30; pcVar22 = pcVar22 + 1) {
            lVar26 = *(longlong *)(pcVar23 + 0x1f70);
            *(longlong *)(pcVar23 + 0x1f70) = lVar26 + 1;
            pcVar23[lVar26 + 0xfd0] = (char)pcVar14;
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar23 + 0x60))
                    (*(longlong **)pcVar23,pcVar30 + (1 - (longlong)pcVar22),
                     (ulonglong)pcVar14 & 0xffffffff);
        }
        goto code_r0x0001409b6902;
      }
      local_94 = 0;
      (**(code **)(*local_22e8 + 0x50))(local_22e8,lVar24,3);
    }
    else {
      uVar33 = FUN_1409bb770(&local_22e8,&local_358,local_128);
      (**(code **)(*local_22e8 + 0x50))(local_22e8,lVar24,uVar33);
      if (uVar33 == 0x1f) {
        iVar11 = (**(code **)(*local_22e8 + 0x48))(local_22e8,lVar24 + -1);
        uVar33 = 0x1f;
        if (iVar11 == 3) {
          uVar33 = 3;
          (**(code **)(*local_22e8 + 0x50))(local_22e8,lVar24,3);
        }
code_r0x0001409b528e:
        uVar12 = local_94;
        pcVar22 = local_f0;
        pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
        pcVar14 = *(char **)(local_f0 + 0x1f78);
        if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b52c7:
          *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
        }
        else if (pcVar14 <= pcVar23) {
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar14 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
            for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = (char)uVar12;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),uVar12);
          }
          goto code_r0x0001409b52c7;
        }
        local_94 = uVar33;
        pcVar22 = local_358;
        pcVar23 = local_358;
      }
      else {
        if (uVar33 == 3) {
          iVar11 = (**(code **)(*local_22e8 + 0x48))(local_22e8,lVar24 + -1);
          uVar33 = 3;
          if (iVar11 == 0x1f) {
            uVar33 = 0x1f;
            (**(code **)(*local_22e8 + 0x50))(local_22e8,lVar24,0x1f);
          }
          goto code_r0x0001409b528e;
        }
        if (uVar33 != 0) goto code_r0x0001409b528e;
        pcVar22 = local_358;
        pcVar23 = local_358;
        if (local_94 == 0x1f) {
          iVar11 = 0;
          pcVar14 = local_358;
          pcVar30 = local_358;
          while ((pcVar23 = pcVar14, uVar33 = local_94, pcVar14 = local_f0, iVar11 == 0 &&
                 (pcVar23 < local_1e0))) {
            pcStack_190 = pcVar23 + 1;
            local_358 = pcVar23;
            iVar11 = FUN_1409bb770(&local_22e8,&pcStack_190,local_128);
            pcVar14 = pcStack_190;
            uVar13 = (**(code **)(*local_22e8 + 0x28))(local_22e8,pcStack_190);
            (**(code **)(*local_22e8 + 0x50))(local_22e8,uVar13,iVar11);
            pcVar30 = pcVar23;
          }
          pcVar22 = pcVar23;
          if (iVar11 == 3) {
            pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
            pcVar22 = *(char **)(local_f0 + 0x1f78);
            if (pcVar23 == pcVar22 + -1) {
code_r0x0001409b6d85:
              *(char **)(pcVar14 + 0x1f78) = pcVar23 + 1;
            }
            else if (pcVar22 <= pcVar23) {
              lVar24 = *(longlong *)(local_f0 + 0x1f70);
              if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar22))) {
                (**(code **)(**(longlong **)local_f0 + 0x68))
                          (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
                pcVar22 = *(char **)(pcVar14 + 0x1f78);
                *(longlong *)(pcVar14 + 0x1f80) =
                     *(longlong *)(pcVar14 + 0x1f80) + *(longlong *)(pcVar14 + 0x1f70);
                pcVar14[0x1f70] = '\0';
                pcVar14[0x1f71] = '\0';
                pcVar14[0x1f72] = '\0';
                pcVar14[0x1f73] = '\0';
                pcVar14[0x1f74] = '\0';
                pcVar14[0x1f75] = '\0';
                pcVar14[0x1f76] = '\0';
                pcVar14[0x1f77] = '\0';
                lVar24 = 0;
              }
              if (pcVar23 + (lVar24 - (longlong)pcVar22) + 1 < (char *)0xfa0) {
                for (; pcVar22 <= pcVar23; pcVar22 = pcVar22 + 1) {
                  lVar24 = *(longlong *)(pcVar14 + 0x1f70);
                  *(longlong *)(pcVar14 + 0x1f70) = lVar24 + 1;
                  pcVar14[lVar24 + 0xfd0] = (char)uVar33;
                }
              }
              else {
                (**(code **)(**(longlong **)pcVar14 + 0x60))
                          (*(longlong **)pcVar14,pcVar23 + (1 - (longlong)pcVar22),uVar33);
              }
              goto code_r0x0001409b6d85;
            }
            local_94 = 3;
            pcVar22 = local_358;
            pcVar23 = pcVar30;
          }
        }
      }
      do {
        local_358 = pcVar22;
        pcVar30 = local_b8;
        pcVar14 = local_b8;
        if (pcVar23 <= local_b8) break;
        if (local_e0 <= local_b8) goto code_r0x0001409b545f;
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        pcVar14 = local_b8;
        pcVar22 = local_358;
      } while (local_b8 != pcVar30);
    }
    break;
  case 4:
    if ((ulonglong)local_90._4_4_ != 0x5f) {
      iVar11 = (int)local_100;
      if (local_90._4_4_ == 0x2e) {
        if (uStack_80 == 0x2e) goto code_r0x0001409b45ef;
        if (3 < (int)local_f4) {
          uVar31 = (ulonglong)(iVar11 + 1);
          if (local_f4 == 4) {
            if ((iVar11 < 1) &&
               ((uStack_80 - 0x30 < 10 ||
                ((uStack_80 - 0x41 < 0x26 &&
                 ((0x3f0000003fU >> ((ulonglong)(uStack_80 - 0x41) & 0x3f) & 1) != 0)))))) {
              local_f4 = 4;
              goto code_r0x0001409b728d;
            }
            pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
            pcVar14 = *(char **)(local_f0 + 0x1f78);
            if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b8e2a:
              *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
            }
            else if (pcVar14 <= pcVar23) {
              lVar24 = *(longlong *)(local_f0 + 0x1f70);
              if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
                (**(code **)(**(longlong **)local_f0 + 0x68))
                          (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
                pcVar14 = *(char **)(pcVar22 + 0x1f78);
                *(longlong *)(pcVar22 + 0x1f80) =
                     *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
                pcVar22[0x1f70] = '\0';
                pcVar22[0x1f71] = '\0';
                pcVar22[0x1f72] = '\0';
                pcVar22[0x1f73] = '\0';
                pcVar22[0x1f74] = '\0';
                pcVar22[0x1f75] = '\0';
                pcVar22[0x1f76] = '\0';
                pcVar22[0x1f77] = '\0';
                lVar24 = 0;
              }
              if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
                for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
                  lVar24 = *(longlong *)(pcVar22 + 0x1f70);
                  *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
                  pcVar22[lVar24 + 0xfd0] = '\x04';
                }
              }
              else {
                (**(code **)(**(longlong **)pcVar22 + 0x60))
                          (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),4);
              }
              goto code_r0x0001409b8e2a;
            }
            local_94 = 10;
            local_f4 = 4;
            pcVar14 = pcVar22;
          }
          else if (local_f4 == 5) {
            if (iVar11 < 1) {
              local_f4 = 5;
            }
            else {
              if (uStack_80 - 0x30 < 10) {
                local_100 = uVar31;
                local_f4 = 6;
                break;
              }
code_r0x0001409b45f9:
              pcVar14 = (char *)((ulonglong)(local_f4 != 8) * 3 + 1);
              if ((local_f4 & 0xfffffffe) == 6) {
                pcVar14 = (char *)0x6;
              }
              local_94 = (uint)pcVar14;
              pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
              pcVar23 = *(char **)(local_f0 + 0x1f78);
              if (pcVar30 == pcVar23 + -1) {
code_r0x0001409b464e:
                *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
              }
              else if (pcVar23 <= pcVar30) {
                lVar24 = *(longlong *)(local_f0 + 0x1f70);
                if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
                  (**(code **)(**(longlong **)local_f0 + 0x68))
                            (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
                  pcVar23 = *(char **)(pcVar22 + 0x1f78);
                  *(longlong *)(pcVar22 + 0x1f80) =
                       *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
                  pcVar22[0x1f70] = '\0';
                  pcVar22[0x1f71] = '\0';
                  pcVar22[0x1f72] = '\0';
                  pcVar22[0x1f73] = '\0';
                  pcVar22[0x1f74] = '\0';
                  pcVar22[0x1f75] = '\0';
                  pcVar22[0x1f76] = '\0';
                  pcVar22[0x1f77] = '\0';
                  lVar24 = 0;
                }
                if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
                  for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
                    lVar24 = *(longlong *)(pcVar22 + 0x1f70);
                    *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
                    pcVar22[lVar24 + 0xfd0] = (char)pcVar14;
                  }
                }
                else {
                  (**(code **)(**(longlong **)pcVar22 + 0x60))
                            (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),pcVar14);
                }
                goto code_r0x0001409b464e;
              }
              local_94 = 0;
            }
          }
          else if (9 < uStack_80 - 0x30) goto code_r0x0001409b45f9;
code_r0x0001409b728d:
          local_100 = uVar31;
          break;
        }
        pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
        pcVar14 = *(char **)(local_f0 + 0x1f78);
        if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b6f87:
          *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
        }
        else if (pcVar14 <= pcVar23) {
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar14 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
            for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = '\x04';
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),4);
          }
          goto code_r0x0001409b6f87;
        }
        local_94 = 10;
        pcVar14 = pcVar22;
      }
      else if (local_f4 == 4) {
        if ((local_90._4_4_ & 0xffffffdf) == 0x50) {
          local_f4 = 3;
          if ((uStack_80 == 0x2d) || (uStack_80 == 0x2b)) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
        }
        else {
          if (9 < local_90._4_4_ - 0x30) {
            if (0x25 < local_90._4_4_ - 0x41) goto code_r0x0001409b45ef;
            uVar31 = local_100 & 0xffffffff;
            if ((0x3f0000003fU >> ((ulonglong)(local_90._4_4_ - 0x41) & 0x3f) & 1) == 0)
            goto code_r0x0001409b45f9;
          }
          local_f4 = 4;
        }
      }
      else if (local_f4 == 5) {
        if ((local_90._4_4_ & 0xffffffdf) == 0x45) {
          local_f4 = 3;
          if ((uStack_80 == 0x2d) || (uStack_80 == 0x2b)) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
        }
        else {
          uVar31 = local_100 & 0xffffffff;
          if (9 < local_90._4_4_ - 0x30) goto code_r0x0001409b45f9;
          local_f4 = 5;
        }
      }
      else if ((local_f4 & 0xfffffffe) == 6) {
        if (9 < local_90._4_4_ - 0x30) {
          if (-1 < (longlong)local_90) {
            pcVar23 = (char *)((ulonglong)local_90._4_4_ + *(longlong *)((longlong)local_108 + 0x30)
                              );
            if (*(int *)((longlong)local_108 + 0x28) <= (int)local_90._4_4_) {
              pcVar23 = local_110;
            }
            if (*pcVar23 == '\x01') {
              uVar31 = local_100 & 0xffffffff;
              if (iVar11 != 0) goto code_r0x0001409b45f9;
              local_94 = 0xb;
              local_100 = 0;
              break;
            }
          }
code_r0x0001409b45ef:
          uVar31 = local_100 & 0xffffffff;
          goto code_r0x0001409b45f9;
        }
      }
      else {
        if (9 < local_90._4_4_ - 0x30) goto code_r0x0001409b45ef;
        if (local_f4 != 3) {
          if (local_f4 == 2) {
            if (local_90._4_4_ < 0x38) {
              local_f4 = 2;
            }
            else {
code_r0x0001409b9adf:
              local_f4 = 8;
            }
          }
          else {
            if (local_f4 != 1 || 0x31 < local_90._4_4_) goto code_r0x0001409b9adf;
            local_f4 = 1;
          }
        }
      }
    }
    break;
  case 5:
    if (-1 < (longlong)(int)local_90._4_4_) {
      pcVar22 = (char *)((longlong)(int)local_90._4_4_ + *(longlong *)((longlong)local_108 + 0x30));
      if (*(int *)((longlong)local_108 + 0x28) <= (int)local_90._4_4_) {
        pcVar22 = local_110;
      }
      if (*pcVar22 != '\0') break;
    }
    FUN_140a8b5b0(&local_f0,&local_358,100);
    pcVar22 = local_f0;
    if ((cStack_350 == '\0' && local_358 == (char *)0x5f5f415441445f5f) ||
       (local_358 == (char *)0x5f5f444e455f5f)) {
      local_94 = 0x15;
    }
    else {
      iVar11 = (int)local_358;
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar23 = *(char **)(local_f0 + 0x1f78);
      pcVar14 = (char *)(ulonglong)local_94;
      cVar7 = (char)local_94;
      if (local_358._3_4_ == 0x74616d && iVar11 == 0x6d726f66) {
        if (pcVar30 == pcVar23 + -1) {
code_r0x0001409b72ab:
          *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
        }
        else if (pcVar23 <= pcVar30) {
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar23 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
            for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = cVar7;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),pcVar14);
          }
          goto code_r0x0001409b72ab;
        }
        local_94 = 0x29;
        local_2f0 = local_2f0 & 0xffffffff00000000;
      }
      else {
        if (pcVar30 == pcVar23 + -1) {
code_r0x0001409b45b4:
          *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
        }
        else if (pcVar23 <= pcVar30) {
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar23 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
            for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = cVar7;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),pcVar14);
          }
          goto code_r0x0001409b45b4;
        }
        local_94 = 0;
      }
      local_64 = 2;
      local_118 = local_b8;
    }
    break;
  case 6:
  case 7:
  case 0x14:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (((local_68 != 0) || (local_90._4_4_ - 9 < 5)) || (local_90._4_4_ == 0x20)) {
      pcVar14 = (char *)0x0;
      do {
        uVar33 = FUN_1408e1c40(&local_f0,pcVar14);
        if ((uVar33 < 0x21) && ((0x100003e01U >> ((ulonglong)uVar33 & 0x3f) & 1) != 0)) {
          bVar1 = false;
          bVar34 = false;
          bVar2 = false;
          goto joined_r0x0001409b3633;
        }
        if ((uVar33 == 0x5c) && (local_6c != 0x5c)) {
          bVar2 = false;
          bVar1 = true;
          bVar34 = true;
          goto joined_r0x0001409b3633;
        }
        if (uVar33 == local_68) {
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto code_r0x0001409b3617;
        }
        else {
          iVar10 = iVar10 + (uint)(uVar33 == local_6c);
        }
        pcVar14 = (char *)(ulonglong)((int)pcVar14 + 1);
      } while( true );
    }
code_r0x0001409b4e82:
    iVar10 = iVar10 + 1;
    if ((int)local_90._4_4_ < 0x5b) {
      if (local_90._4_4_ == 0x28) {
        local_68 = 0x29;
        local_6c = local_90._4_4_;
      }
      else if (local_90._4_4_ == 0x3c) {
        local_68 = 0x3e;
        local_6c = local_90._4_4_;
      }
      else {
code_r0x0001409b7851:
        local_68 = local_90._4_4_;
        local_6c = local_90._4_4_;
      }
    }
    else if (local_90._4_4_ == 0x7b) {
      local_68 = 0x7d;
      local_6c = local_90._4_4_;
    }
    else {
      if (local_90._4_4_ != 0x5b) goto code_r0x0001409b7851;
      local_68 = 0x5d;
      local_6c = local_90._4_4_;
    }
    break;
  case 10:
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b4690:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\n';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),10);
      }
      goto code_r0x0001409b4690;
    }
    local_94 = 0;
    local_64 = 1;
    local_118 = local_b8;
    pcVar14 = pcVar22;
    break;
  case 0xb:
    if ((longlong)(int)local_90._4_4_ < 0) {
      cVar7 = '\0';
      if (local_90._4_4_ != 0x27) goto code_r0x0001409b5128;
code_r0x0001409b5174:
      if ((uStack_80 != 0x2e || local_90._4_4_ != 0x2e) && ((int)local_90 != 0x3e)) break;
    }
    else {
      pcVar23 = (char *)((longlong)(int)local_90._4_4_ + *(longlong *)((longlong)local_108 + 0x30));
      if (*(int *)((longlong)local_108 + 0x28) <= (int)local_90._4_4_) {
        pcVar23 = local_110;
      }
      cVar7 = *pcVar23;
      if (local_90._4_4_ == 0x27) goto code_r0x0001409b5174;
code_r0x0001409b5128:
      if (cVar7 != '\0') goto code_r0x0001409b5174;
    }
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) goto code_r0x0001409b5158;
    if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      pcVar30 = pcVar23 + 1;
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\v';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0xb);
      }
      goto code_r0x0001409b515e;
    }
    goto code_r0x0001409b5165;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if (uStack_80 != 0x3a || local_90._4_4_ != 0x3a) {
      if (-1 < (longlong)local_90) {
        pcVar22 = (char *)((ulonglong)local_90._4_4_ + local_1c8);
        if (local_1d0 <= (int)local_90._4_4_) {
          pcVar22 = acStack_1cc;
        }
        if (*pcVar22 != '\0') break;
      }
      pcVar14 = *(char **)(local_f0 + 0x1f78);
      if (local_b8 + -(longlong)pcVar14 == (char *)0x1) {
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          local_90._4_4_ = (uint)(local_90 >> 0x20);
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        pcVar14 = *(char **)(local_f0 + 0x1f78);
      }
      uVar33 = local_94;
      pcVar22 = local_f0;
      pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      if (pcVar23 == pcVar14 + -1) goto code_r0x0001409b4f15;
      if (pcVar23 < pcVar14) goto code_r0x0001409b5165;
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      pcVar30 = pcVar23 + 1;
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = (char)uVar33;
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),uVar33);
      }
code_r0x0001409b4f1b:
      *(char **)(pcVar22 + 0x1f78) = pcVar30;
      goto code_r0x0001409b5165;
    }
    local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
    uVar31 = 0x3a0000003a;
    if (local_98._1_1_ == '\x01') {
      lVar24 = local_b0 + 2;
      local_b0 = local_b0 + 1;
      local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
      uVar31 = CONCAT44(uStack_80,local_90._4_4_);
    }
    local_b8 = local_b8 + lStack_88;
    lStack_88 = local_78;
    local_90 = uVar31;
    FUN_1408c6cd0(&local_f0);
    break;
  case 0x11:
  case 0x1d:
    if (local_70 < 1) {
      if (-1 < (longlong)(int)local_90._4_4_) {
        pcVar23 = (char *)((int)local_90._4_4_ + local_138);
        if (local_140 <= (int)local_90._4_4_) {
          pcVar23 = local_13c;
        }
        if (*pcVar23 != '\0') break;
      }
      pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar14 = *(char **)(local_f0 + 0x1f78);
      if (pcVar23 != pcVar14 + -1) {
        if (pcVar23 < pcVar14) goto code_r0x0001409b5165;
        lVar24 = *(longlong *)(local_f0 + 0x1f70);
        pcVar30 = pcVar23 + 1;
        if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
          pcVar14 = *(char **)(pcVar22 + 0x1f78);
          *(longlong *)(pcVar22 + 0x1f80) =
               *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
          pcVar22[0x1f70] = '\0';
          pcVar22[0x1f71] = '\0';
          pcVar22[0x1f72] = '\0';
          pcVar22[0x1f73] = '\0';
          pcVar22[0x1f74] = '\0';
          pcVar22[0x1f75] = '\0';
          pcVar22[0x1f76] = '\0';
          pcVar22[0x1f77] = '\0';
          lVar24 = 0;
        }
        if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
          for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
            lVar24 = *(longlong *)(pcVar22 + 0x1f70);
            *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
            pcVar22[lVar24 + 0xfd0] = cVar7;
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar22 + 0x60))
                    (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),uVar33);
        }
        goto code_r0x0001409b4f1b;
      }
code_r0x0001409b4f15:
      pcVar30 = pcVar23 + 1;
      pcVar22 = local_f0;
      goto code_r0x0001409b4f1b;
    }
    if (((local_6c == 0) && (4 < local_90._4_4_ - 9)) && (local_90._4_4_ != 0x20))
    goto code_r0x0001409b4e82;
    pcVar14 = (char *)0x0;
    while( true ) {
      uVar33 = FUN_1408e1c40(&local_f0,pcVar14);
      bVar32 = (byte)(0x100003e01 >> ((byte)uVar33 & 0x3f)) & uVar33 < 0x21;
      if ((bVar32 != 0) || (uVar33 == 0x5c && local_6c != 0x5c)) break;
      if (uVar33 == local_68) {
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          local_70 = local_70 + -1;
          iVar10 = 0;
          bVar32 = 0;
          goto joined_r0x0001409b4c7f;
        }
      }
      else {
        iVar10 = iVar10 + (uint)(uVar33 == local_6c);
      }
      pcVar14 = (char *)(ulonglong)((int)pcVar14 + 1);
    }
    bVar32 = bVar32 ^ 1;
joined_r0x0001409b4c7f:
    lVar24 = local_b0;
    if ((int)pcVar14 != 0) {
      if (local_6c == 0x27) {
        if (local_b8 < local_e0) {
          pcVar22 = (char *)0x0;
          do {
            if (local_b8 < local_e0) {
              local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
              if (local_98._1_1_ == '\x01') {
                lVar24 = local_b0 + 2;
                local_b0 = local_b0 + 1;
                local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                     (*(longlong **)local_f0,lVar24);
              }
              local_b8 = local_b8 + lStack_88;
              local_90 = CONCAT44(uStack_80,local_90._4_4_);
              lStack_88 = local_78;
              FUN_1408c6cd0(&local_f0);
            }
            else {
              local_98 = 0x100;
              local_90 = 0x2000000020;
              uStack_80 = 0x20;
            }
            pcVar22 = pcVar22 + 1;
            lVar24 = local_b0;
          } while (pcVar22 != pcVar14);
        }
        else {
          local_98 = 0x100;
          local_90 = 0x2000000020;
          uStack_80 = 0x20;
        }
      }
      else {
        FUN_1409b25a0(local_108,&local_f0,pcVar14,CONCAT71((uint7)(uint3)(local_6c >> 8),1));
        lVar24 = local_b0;
      }
    }
    local_b0 = lVar24;
    if (bVar32 == 0) break;
    if (local_b8 < local_e0) {
      local_98._1_1_ = (byte)(local_98 >> 8);
      local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
      if (local_98._1_1_ == '\x01') {
        local_b0 = lVar24 + 1;
        local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24 + 2);
      }
      local_b8 = local_b8 + lStack_88;
      local_90 = CONCAT44(uStack_80,local_90._4_4_);
      lStack_88 = local_78;
      FUN_1408c6cd0(&local_f0);
      break;
    }
    goto code_r0x0001409b545f;
  case 0x12:
  case 0x2c:
    if (local_70 < 1) {
      if (-1 < (longlong)(int)local_90._4_4_) {
        pcVar23 = (char *)((int)local_90._4_4_ + local_138);
        if (local_140 <= (int)local_90._4_4_) {
          pcVar23 = local_13c;
        }
        if (*pcVar23 != '\0') break;
      }
      pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar14 = *(char **)(local_f0 + 0x1f78);
      if (pcVar23 == pcVar14 + -1) goto code_r0x0001409b4f15;
      if (pcVar23 < pcVar14) goto code_r0x0001409b5165;
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      pcVar30 = pcVar23 + 1;
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = cVar7;
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),uVar33);
      }
      goto code_r0x0001409b4f1b;
    }
    if (((local_6c == 0) && (4 < local_90._4_4_ - 9)) && (local_90._4_4_ != 0x20))
    goto code_r0x0001409b4e82;
    pcVar22 = (char *)0x0;
    iVar11 = local_70;
code_r0x0001409b4255:
    while( true ) {
      iVar27 = (int)pcVar22;
      uVar31 = FUN_1408e1c40(&local_f0,pcVar22);
      uVar33 = (uint)uVar31;
      if (uVar33 == 0) break;
      if ((uVar33 == 0x5c) && (local_6c != 0x5c)) {
        bVar1 = false;
        bVar34 = true;
        goto code_r0x0001409b6963;
      }
      if ((iVar10 == 0) && (iVar11 == 1)) {
        iVar11 = 1;
        iVar10 = 0;
        switch(uVar33) {
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x20:
          goto code_r0x0001409b695e;
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
code_r0x0001409b8ff1:
          local_68 = uVar33;
          goto code_r0x0001409b9000;
        case 0x23:
          iVar18 = FUN_1408e1c40(&local_f0,(longlong)(iVar27 + -1));
          bVar1 = true;
          iVar10 = 0;
          if (iVar18 == 9) {
            bVar34 = false;
            goto code_r0x0001409b6963;
          }
          bVar34 = false;
          if (iVar18 == 0x20) goto code_r0x0001409b6963;
          iVar10 = 1;
          local_68 = 0x23;
          local_6c = 0x23;
          goto code_r0x0001409b6961;
        case 0x28:
          local_68 = 0x29;
          break;
        case 0x3c:
          local_68 = 0x3e;
          break;
        case 0x5b:
          local_68 = 0x5d;
          break;
        default:
          if (uVar33 != 0x7b) goto code_r0x0001409b8ff1;
          local_68 = 0x7d;
code_r0x0001409b9000:
          iVar10 = 1;
          local_6c = uVar33;
          iVar11 = 1;
          goto code_r0x0001409b6961;
        }
        iVar10 = 1;
        local_6c = uVar33;
        goto code_r0x0001409b6961;
      }
      if (uVar33 != local_68) {
        if (uVar33 == local_6c) goto code_r0x0001409b4250;
        if ((0x20 < uVar33) || ((0x100003e00U >> (uVar31 & 0x3f) & 1) == 0))
        goto code_r0x0001409b42ba;
        break;
      }
      iVar18 = iVar10 + -1;
      iVar11 = iVar11 - (uint)(iVar18 == 0);
      if (local_6c != local_68) {
        iVar10 = iVar18;
      }
      if (iVar18 == 0) break;
code_r0x0001409b42ba:
      pcVar22 = (char *)(ulonglong)(iVar27 + 1);
    }
code_r0x0001409b695e:
code_r0x0001409b6961:
    bVar34 = false;
    bVar1 = false;
code_r0x0001409b6963:
    pcVar14 = pcVar22;
    if (iVar27 != 0) {
      if ((local_94 == 0x12) && (local_6c != 0x27)) {
        FUN_1409b25a0(local_108,&local_f0,pcVar22,local_70 == 2);
      }
      else if (local_b8 < local_e0) {
        pcVar14 = (char *)0x0;
        do {
          if (local_b8 < local_e0) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
          pcVar14 = pcVar14 + 1;
        } while (pcVar14 != pcVar22);
      }
      else {
        local_98 = 0x100;
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
      }
    }
    uVar33 = local_94;
    pcVar22 = local_f0;
    if (bVar34) {
      if (local_b8 < local_e0) {
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        local_70 = iVar11;
        break;
      }
      local_98 = 0x100;
      local_90 = 0x2000000020;
      uStack_80 = 0x20;
    }
    else if (bVar1) {
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar23 = *(char **)(local_f0 + 0x1f78);
      if (pcVar30 == pcVar23 + -1) {
code_r0x0001409b6ea3:
        *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
      }
      else if (pcVar23 <= pcVar30) {
        pcVar14 = (char *)(ulonglong)local_94;
        lVar24 = *(longlong *)(local_f0 + 0x1f70);
        if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
          pcVar23 = *(char **)(pcVar22 + 0x1f78);
          *(longlong *)(pcVar22 + 0x1f80) =
               *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
          pcVar22[0x1f70] = '\0';
          pcVar22[0x1f71] = '\0';
          pcVar22[0x1f72] = '\0';
          pcVar22[0x1f73] = '\0';
          pcVar22[0x1f74] = '\0';
          pcVar22[0x1f75] = '\0';
          pcVar22[0x1f76] = '\0';
          pcVar22[0x1f77] = '\0';
          lVar24 = 0;
        }
        if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
          for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
            lVar24 = *(longlong *)(pcVar22 + 0x1f70);
            *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
            pcVar22[lVar24 + 0xfd0] = (char)uVar33;
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar22 + 0x60))
                    (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),uVar33);
        }
        goto code_r0x0001409b6ea3;
      }
      local_94 = 0;
      local_70 = iVar11;
      break;
    }
    local_70 = iVar11;
    break;
  case 0x16:
    if ((int)local_2f0 == 1) {
      if ((local_2e8 & 1) == 0) {
        if (-1 < (longlong)local_90) {
          pcVar23 = (char *)(local_148 + (ulonglong)local_90._4_4_);
          if (local_150 <= (int)local_90._4_4_) {
            pcVar23 = local_14c;
          }
          if (*pcVar23 == '\x01') {
            lVar24 = (longlong)local_2e4;
            local_2e4 = local_2e4 + 1;
            local_2e0[lVar24] = (byte)(local_90 >> 0x20);
            local_2e0[local_2e4] = 0;
            pcVar22 = pcVar14;
            goto code_r0x0001409b7f7a;
          }
        }
        pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
        pcVar14 = *(char **)(local_f0 + 0x1f78);
        if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b7462:
          *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
        }
        else if (pcVar14 <= pcVar23) {
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar14 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
            for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = '\x16';
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0x16);
          }
          goto code_r0x0001409b7462;
        }
        local_94 = 0;
      }
      else if (local_90._4_4_ == local_2f0._4_4_) {
        FUN_1408c69d0(&local_f0,0);
        pcVar22 = pcVar14;
      }
      else {
        pcVar22 = pcVar14;
        if (local_98._1_1_ == '\0') {
          if ((local_2f0._4_4_ & 0xff) == uStack_80 && local_90._4_4_ == 0x5c) {
            local_98 = 0;
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,0x5c);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          if (local_90._4_4_ != 0xd) {
            for (pcVar22 = (char *)0x0; (longlong)pcVar22 < lStack_88;
                pcVar22 = (char *)(ulonglong)((int)pcVar22 + 1)) {
              pcVar14 = pcVar22 + (longlong)local_b8;
              if (((longlong)pcVar14 < (longlong)local_1338) ||
                 ((longlong)local_1330 <= (longlong)pcVar14)) {
                local_1338 = pcVar14 + -500;
                pcVar23 = local_1320 + -4000;
                if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdac)) ||
                    (pcVar23 = local_1338, (longlong)local_1338 < 0)) &&
                   (local_1338 = pcVar23, (longlong)local_1338 < 1)) {
                  local_1338 = (char *)0x0;
                }
                local_1330 = local_1320;
                if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
                  local_1330 = local_1338 + 4000;
                }
                (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
                local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
                bVar32 = 0x20;
                if (((longlong)local_1338 <= (longlong)pcVar14) &&
                   (bVar32 = 0x20, (longlong)pcVar14 < (longlong)local_1330))
                goto code_r0x0001409b7ad0;
              }
              else {
code_r0x0001409b7ad0:
                bVar32 = pcVar14[(longlong)(local_22e0 + -(longlong)local_1338)];
              }
              lVar24 = (longlong)local_2e4;
              local_2e4 = local_2e4 + 1;
              local_2e0[lVar24] = bVar32;
              local_2e0[local_2e4] = 0;
            }
          }
        }
      }
code_r0x0001409b7f7a:
      uVar33 = local_94;
      pcVar23 = local_f0;
      local_64 = 0;
      pcVar14 = pcVar22;
      if (0xfe < local_2e4) {
        pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
        pcVar14 = *(char **)(local_f0 + 0x1f78);
        if (pcVar30 == pcVar14 + -1) {
code_r0x0001409b7fcd:
          *(char **)(pcVar23 + 0x1f78) = pcVar30 + 1;
        }
        else if (pcVar14 <= pcVar30) {
          pcVar22 = (char *)(ulonglong)local_94;
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar14))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar14 = *(char **)(pcVar23 + 0x1f78);
            *(longlong *)(pcVar23 + 0x1f80) =
                 *(longlong *)(pcVar23 + 0x1f80) + *(longlong *)(pcVar23 + 0x1f70);
            pcVar23[0x1f70] = '\0';
            pcVar23[0x1f71] = '\0';
            pcVar23[0x1f72] = '\0';
            pcVar23[0x1f73] = '\0';
            pcVar23[0x1f74] = '\0';
            pcVar23[0x1f75] = '\0';
            pcVar23[0x1f76] = '\0';
            pcVar23[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar30 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
            for (; pcVar14 <= pcVar30; pcVar14 = pcVar14 + 1) {
              lVar24 = *(longlong *)(pcVar23 + 0x1f70);
              *(longlong *)(pcVar23 + 0x1f70) = lVar24 + 1;
              pcVar23[lVar24 + 0xfd0] = (char)uVar33;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar23 + 0x60))
                      (*(longlong **)pcVar23,pcVar30 + (1 - (longlong)pcVar14),uVar33);
          }
          goto code_r0x0001409b7fcd;
        }
        local_94 = 1;
        local_2f0 = local_2f0 & 0xffffffff00000000;
        pcVar14 = pcVar22;
      }
    }
    else if ((int)local_2f0 == 0) {
      pcVar14 = (char *)(ulonglong)uStack_80;
      local_2f0 = CONCAT44(uStack_80,1);
      local_2e8 = 0;
      local_2e4 = 0;
      local_2e0[0] = 0;
      uVar33 = uStack_80;
      if ((uStack_80 == 0x20) || (uStack_80 == 9)) {
        pcVar22 = local_b8 + 1;
code_r0x0001409b4902:
        if ((pcVar22 < local_128) && ((uVar33 == 0x20 || (uVar33 == 9)))) {
          pcVar23 = pcVar22 + 1;
          if (((longlong)pcVar23 < (longlong)local_1338) ||
             ((longlong)local_1330 <= (longlong)pcVar23)) goto code_r0x0001409b4938;
          goto code_r0x0001409b48f0;
        }
        pcVar22 = pcVar22 + ~(ulonglong)local_b8;
      }
      else {
        pcVar22 = (char *)0x0;
      }
      if ((uVar33 - 0x22 < 0x3f) &&
         ((0x4000000000000021U >> ((ulonglong)(uVar33 - 0x22) & 0x3f) & 1) != 0)) {
        if (-1 < (longlong)pcVar22) {
          if (local_b8 < local_e0) {
            pcVar14 = (char *)0x0;
            do {
              if (local_b8 < local_e0) {
                local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
                if (local_98._1_1_ == '\x01') {
                  lVar24 = local_b0 + 2;
                  local_b0 = local_b0 + 1;
                  local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                       (*(longlong **)local_f0,lVar24);
                }
                local_b8 = local_b8 + lStack_88;
                local_90 = CONCAT44(uStack_80,local_90._4_4_);
                lStack_88 = local_78;
                FUN_1408c6cd0(&local_f0);
              }
              else {
                local_98 = 0x100;
                local_90 = 0x2000000020;
                uStack_80 = 0x20;
              }
              bVar34 = pcVar14 != pcVar22;
              pcVar14 = pcVar14 + 1;
            } while (bVar34);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
        }
        local_2f0 = CONCAT44(uVar33,(int)local_2f0);
        local_2e8 = 1;
      }
      else if (pcVar22 == (char *)0x0) {
        if (((ulonglong)uStack_80 < 0x80) && ((*local_168)[uStack_80] != '\0'))
        goto code_r0x0001409b7bea;
        if (uVar12 == 0x5c) {
          FUN_1408ef8e0(&local_f0);
        }
      }
      else if (0 < (longlong)pcVar22) {
code_r0x0001409b7bea:
        local_94 = 10;
        FUN_1408c69d0(&local_f0,0);
        local_118 = local_b8;
        local_2f0 = local_2f0 & 0xffffffff00000000;
        local_64 = 1;
      }
    }
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    FUN_1408c6b70(&local_f0);
    pcVar14 = (char *)(longlong)local_2e4;
    if (pcVar14 == (char *)0x0) {
LAB_1409b3878:
      pcVar22 = local_f0;
      pcVar23 = local_b8 + (longlong)pcVar14;
      lVar24 = *(longlong *)(local_f0 + 0xfb0);
      if (((longlong)pcVar23 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23)) {
        pcVar30 = pcVar23 + -500;
        *(char **)(local_f0 + 0xfb0) = pcVar30;
        pcVar21 = *(char **)(local_f0 + 0xfc8);
        pcVar16 = pcVar21 + -4000;
        if (((longlong)pcVar21 < (longlong)(pcVar23 + 0xdac)) ||
           (pcVar16 = pcVar30, (longlong)pcVar30 < 0)) {
          pcVar30 = pcVar16;
          if ((longlong)pcVar30 < 1) {
            pcVar30 = (char *)0x0;
          }
          *(char **)(local_f0 + 0xfb0) = pcVar30;
        }
        if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
          pcVar21 = pcVar30 + 4000;
        }
        *(char **)(local_f0 + 0xfb8) = pcVar21;
        (**(code **)(**(longlong **)local_f0 + 0x18))
                  (*(longlong **)local_f0,local_f0 + 8,pcVar30,pcVar21 + -(longlong)pcVar30);
        pcVar22[(*(longlong *)(pcVar22 + 0xfb8) - *(longlong *)(pcVar22 + 0xfb0)) + 8] = '\0';
        lVar24 = *(longlong *)(pcVar22 + 0xfb0);
        if (((longlong)pcVar23 < lVar24) || (*(longlong *)(pcVar22 + 0xfb8) <= (longlong)pcVar23))
        goto LAB_1409b3a14;
      }
      if ((pcVar22[(longlong)(pcVar23 + (8 - lVar24))] == '\r') ||
         (pcVar22[(longlong)(pcVar23 + (8 - lVar24))] == '\n')) {
        pcVar14 = pcVar14 + (longlong)local_b8;
        do {
          pcVar22 = local_b8;
          if (pcVar14 <= local_b8) break;
          if (local_e0 <= local_b8) {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
            break;
          }
          local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
          if (local_98._1_1_ == '\x01') {
            lVar24 = local_b0 + 2;
            local_b0 = local_b0 + 1;
            local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          }
          local_b8 = local_b8 + lStack_88;
          local_90 = CONCAT44(uStack_80,local_90._4_4_);
          lStack_88 = local_78;
          FUN_1408c6cd0(&local_f0);
        } while (local_b8 != pcVar22);
        uVar33 = local_94;
        pcVar30 = local_f0;
        pcVar22 = pcVar22 + (-1 - (ulonglong)(local_d8 < pcVar22));
        pcVar23 = *(char **)(local_f0 + 0x1f78);
        if (pcVar22 == pcVar23 + -1) {
LAB_1409b6558:
          *(char **)(pcVar30 + 0x1f78) = pcVar22 + 1;
        }
        else if (pcVar23 <= pcVar22) {
          pcVar14 = (char *)(ulonglong)local_94;
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar22 + lVar24 + (1 - (longlong)pcVar23))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar23 = *(char **)(pcVar30 + 0x1f78);
            *(longlong *)(pcVar30 + 0x1f80) =
                 *(longlong *)(pcVar30 + 0x1f80) + *(longlong *)(pcVar30 + 0x1f70);
            pcVar30[0x1f70] = '\0';
            pcVar30[0x1f71] = '\0';
            pcVar30[0x1f72] = '\0';
            pcVar30[0x1f73] = '\0';
            pcVar30[0x1f74] = '\0';
            pcVar30[0x1f75] = '\0';
            pcVar30[0x1f76] = '\0';
            pcVar30[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar22 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
            for (; pcVar23 <= pcVar22; pcVar23 = pcVar23 + 1) {
              lVar24 = *(longlong *)(pcVar30 + 0x1f70);
              *(longlong *)(pcVar30 + 0x1f70) = lVar24 + 1;
              pcVar30[lVar24 + 0xfd0] = (char)uVar33;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar30 + 0x60))
                      (*(longlong **)pcVar30,pcVar22 + (1 - (longlong)pcVar23),uVar33);
          }
          goto LAB_1409b6558;
        }
        local_94 = 0;
        local_2f0 = local_2f0 & 0xffffffff00000000;
        if (local_98._1_1_ == '\0') {
          local_64 = 0;
          local_98 = 0;
          if (local_b8 < local_e0) {
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
            local_98 = 0x100;
          }
        }
        else {
          local_64 = 0;
        }
        break;
      }
    }
    else if (local_90._4_4_ == local_2e0[0]) {
      if (local_2e0[1] != 0) {
        if (uStack_80 != local_2e0[1]) goto LAB_1409b3a14;
        if (local_2e0[2] != 0) {
          lVar24 = 2;
          pbVar29 = local_2e0 + 2;
          bVar32 = local_2e0[2];
          do {
            pcVar22 = local_f0;
            pcVar23 = local_b8 + lVar24;
            lVar26 = *(longlong *)(local_f0 + 0xfb0);
            if (((longlong)pcVar23 < lVar26) ||
               (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23)) {
              pcVar30 = pcVar23 + -500;
              *(char **)(local_f0 + 0xfb0) = pcVar30;
              pcVar21 = *(char **)(local_f0 + 0xfc8);
              pcVar16 = pcVar21 + -4000;
              if (((longlong)pcVar21 < (longlong)(pcVar23 + 0xdac)) ||
                 (pcVar16 = pcVar30, (longlong)pcVar30 < 0)) {
                pcVar30 = pcVar16;
                if ((longlong)pcVar30 < 1) {
                  pcVar30 = (char *)0x0;
                }
                *(char **)(local_f0 + 0xfb0) = pcVar30;
              }
              if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
                pcVar21 = pcVar30 + 4000;
              }
              *(char **)(local_f0 + 0xfb8) = pcVar21;
              (**(code **)(**(longlong **)local_f0 + 0x18))
                        (*(longlong **)local_f0,local_f0 + 8,pcVar30,pcVar21 + -(longlong)pcVar30);
              pcVar22[(*(longlong *)(pcVar22 + 0xfb8) - *(longlong *)(pcVar22 + 0xfb0)) + 8] = '\0';
              lVar26 = *(longlong *)(pcVar22 + 0xfb0);
              if (((longlong)pcVar23 < lVar26) ||
                 (*(longlong *)(pcVar22 + 0xfb8) <= (longlong)pcVar23)) goto LAB_1409b3a14;
            }
            if (bVar32 != pcVar22[(longlong)(pcVar23 + (8 - lVar26))]) goto LAB_1409b3a14;
            lVar24 = lVar24 + 1;
            bVar32 = pbVar29[1];
            pbVar29 = pbVar29 + 1;
          } while (bVar32 != 0);
        }
      }
      goto LAB_1409b3878;
    }
LAB_1409b3a14:
    if (local_94 != 0x17) {
LAB_1409b3af0:
      if (local_98._1_1_ == '\0') {
        pcVar14 = (char *)0x0;
        do {
          pcVar22 = local_f0;
          uVar8 = (int)pcVar14 == 0;
          if ((bool)uVar8) {
            uVar33 = local_90._4_4_;
            uVar12 = local_90._4_4_;
            if ((int)local_90._4_4_ < 0xd) goto LAB_1409b3cdc;
LAB_1409b3b82:
            if (uVar33 == 0xd) goto LAB_1409b3ce9;
            bVar1 = true;
            bVar34 = (bool)uVar8;
            if (uVar33 == 0x5c) goto LAB_1409b3d06;
          }
          else {
            if (local_e8 == (longlong *)0x0) {
              pcVar23 = local_b8 + (longlong)pcVar14;
              lVar24 = *(longlong *)(local_f0 + 0xfb0);
              if (((longlong)pcVar23 < lVar24) ||
                 (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23)) {
                pcVar30 = pcVar23 + -500;
                *(char **)(local_f0 + 0xfb0) = pcVar30;
                pcVar21 = *(char **)(local_f0 + 0xfc8);
                pcVar16 = pcVar21 + -4000;
                if (((longlong)pcVar21 < (longlong)(pcVar23 + 0xdac)) ||
                   (pcVar16 = pcVar30, (longlong)pcVar30 < 0)) {
                  pcVar30 = pcVar16;
                  if ((longlong)pcVar30 < 1) {
                    pcVar30 = (char *)0x0;
                  }
                  *(char **)(local_f0 + 0xfb0) = pcVar30;
                }
                if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
                  pcVar21 = pcVar30 + 4000;
                }
                *(char **)(local_f0 + 0xfb8) = pcVar21;
                (**(code **)(**(longlong **)local_f0 + 0x18))
                          (*(longlong **)local_f0,local_f0 + 8,pcVar30,pcVar21 + -(longlong)pcVar30)
                ;
                pcVar22[(*(longlong *)(pcVar22 + 0xfb8) - *(longlong *)(pcVar22 + 0xfb0)) + 8] =
                     '\0';
                lVar24 = *(longlong *)(pcVar22 + 0xfb0);
                if (lVar24 <= (longlong)pcVar23) {
                  bVar1 = false;
                  bVar34 = false;
                  if ((longlong)pcVar23 < *(longlong *)(pcVar22 + 0xfb8)) goto LAB_1409b3c70;
                  goto LAB_1409b3d06;
                }
                bVar1 = false;
                bVar2 = true;
                goto LAB_1409b3d0a;
              }
LAB_1409b3c70:
              uVar33 = (uint)(byte)pcVar22[(longlong)(pcVar23 + (8 - lVar24))];
              uVar12 = (uint)(byte)pcVar22[(longlong)(pcVar23 + (8 - lVar24))];
              if (0xc < uVar33) goto LAB_1409b3b82;
            }
            else {
              if (pcVar14 < pcStack_c0 || pcStack_c8 != local_b8) {
                pcStack_d0 = local_b8;
                pcStack_c0 = (char *)0x0;
              }
              pcVar22 = (char *)(**(code **)(*local_e8 + 0xb0))
                                          (local_e8,pcStack_d0,
                                           (longlong)pcVar14 - (longlong)pcStack_c0);
              uVar33 = (**(code **)(*local_e8 + 0xb8))(local_e8,pcVar22,0);
              pcStack_d0 = pcVar22;
              pcStack_c8 = local_b8;
              pcStack_c0 = pcVar14;
              uVar12 = uVar33;
              if (0xc < (int)uVar33) goto LAB_1409b3b82;
            }
LAB_1409b3cdc:
            if (uVar12 == 0) {
              bVar1 = false;
              bVar34 = (bool)uVar8;
LAB_1409b3d06:
              bVar2 = true;
              bVar5 = true;
              uVar8 = bVar34;
              goto joined_r0x0001409b3d08;
            }
            if (uVar12 == 10) goto LAB_1409b3ce9;
          }
          pcVar14 = (char *)(ulonglong)((int)pcVar14 + 1);
        } while( true );
      }
      break;
    }
    while (local_98._1_1_ == '\0') {
      local_98 = 0;
      if (local_b8 < local_e0) {
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
      }
      else {
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
        local_98 = 0x100;
      }
    }
    break;
  case 0x28:
    uVar33 = 0;
    do {
      uVar12 = uVar33;
      pcVar14 = local_f0;
      pcVar22 = local_b8 + uVar12;
      lVar24 = *(longlong *)(local_f0 + 0xfb0);
      if (((longlong)pcVar22 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22)) {
        pcVar23 = pcVar22 + -500;
        *(char **)(local_f0 + 0xfb0) = pcVar23;
        pcVar30 = *(char **)(local_f0 + 0xfc8);
        pcVar21 = pcVar30 + -4000;
        if (((longlong)pcVar30 < (longlong)(pcVar22 + 0xdac)) ||
           (pcVar21 = pcVar23, (longlong)pcVar23 < 0)) {
          pcVar23 = pcVar21;
          if ((longlong)pcVar23 < 1) {
            pcVar23 = (char *)0x0;
          }
          *(char **)(local_f0 + 0xfb0) = pcVar23;
        }
        if ((longlong)(pcVar23 + 4000) < (longlong)pcVar30) {
          pcVar30 = pcVar23 + 4000;
        }
        *(char **)(local_f0 + 0xfb8) = pcVar30;
        (**(code **)(**(longlong **)local_f0 + 0x18))
                  (*(longlong **)local_f0,local_f0 + 8,pcVar23,pcVar30 + -(longlong)pcVar23);
        pcVar14[(*(longlong *)(pcVar14 + 0xfb8) - *(longlong *)(pcVar14 + 0xfb0)) + 8] = '\0';
        lVar24 = *(longlong *)(pcVar14 + 0xfb0);
        pauVar20 = local_130;
        if ((lVar24 <= (longlong)pcVar22) && ((longlong)pcVar22 < *(longlong *)(pcVar14 + 0xfb8)))
        goto code_r0x0001409b4873;
      }
      else {
code_r0x0001409b4873:
        if ((longlong)pcVar14[(longlong)(pcVar22 + (8 - lVar24))] < 0) break;
        pauVar20 = (undefined1 (*) [16])(*local_130 + pcVar14[(longlong)(pcVar22 + (8 - lVar24))]);
      }
      uVar33 = uVar12 + 1;
    } while ((*pauVar20)[0] != '\0');
    pcVar22 = local_f0;
    pcVar14 = local_b8 + uVar12;
    lVar24 = *(longlong *)(local_f0 + 0xfb0);
    if (((longlong)pcVar14 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar14)) {
      pcVar23 = pcVar14 + -500;
      *(char **)(local_f0 + 0xfb0) = pcVar23;
      pcVar30 = *(char **)(local_f0 + 0xfc8);
      pcVar21 = pcVar30 + -4000;
      if (((longlong)pcVar30 < (longlong)(pcVar14 + 0xdac)) ||
         (pcVar21 = pcVar23, (longlong)pcVar23 < 0)) {
        pcVar23 = pcVar21;
        if ((longlong)pcVar23 < 1) {
          pcVar23 = (char *)0x0;
        }
        *(char **)(local_f0 + 0xfb0) = pcVar23;
      }
      if ((longlong)(pcVar23 + 4000) < (longlong)pcVar30) {
        pcVar30 = pcVar23 + 4000;
      }
      *(char **)(local_f0 + 0xfb8) = pcVar30;
      (**(code **)(**(longlong **)local_f0 + 0x18))
                (*(longlong **)local_f0,local_f0 + 8,pcVar23,pcVar30 + -(longlong)pcVar23);
      pcVar22[(*(longlong *)(pcVar22 + 0xfb8) - *(longlong *)(pcVar22 + 0xfb0)) + 8] = '\0';
      lVar24 = *(longlong *)(pcVar22 + 0xfb0);
      if ((lVar24 <= (longlong)pcVar14) && ((longlong)pcVar14 < *(longlong *)(pcVar22 + 0xfb8)))
      goto code_r0x0001409b4abd;
    }
    else {
code_r0x0001409b4abd:
      if (pcVar22[(longlong)(pcVar14 + (8 - lVar24))] == ')') {
        pcVar14 = local_b8 + uVar12;
        do {
          pcVar22 = local_b8;
          if (pcVar14 <= local_b8) break;
          if (local_e0 <= local_b8) {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
            break;
          }
          local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
          if (local_98._1_1_ == '\x01') {
            lVar24 = local_b0 + 2;
            local_b0 = local_b0 + 1;
            local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          }
          local_b8 = local_b8 + lStack_88;
          local_90 = CONCAT44(uStack_80,local_90._4_4_);
          lStack_88 = local_78;
          FUN_1408c6cd0(&local_f0);
        } while (local_b8 != pcVar22);
        FUN_1408c69d0(&local_f0,0);
        break;
      }
    }
    pcVar22 = local_f0;
    local_94 = 10;
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 != pcVar14 + -1) {
      if (pcVar14 <= pcVar23) {
        lVar24 = *(longlong *)(local_f0 + 0x1f70);
        pcVar30 = pcVar23 + 1;
        if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + (lVar24 - (longlong)pcVar14))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
          pcVar14 = *(char **)(pcVar22 + 0x1f78);
          *(longlong *)(pcVar22 + 0x1f80) =
               *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
          pcVar22[0x1f70] = '\0';
          pcVar22[0x1f71] = '\0';
          pcVar22[0x1f72] = '\0';
          pcVar22[0x1f73] = '\0';
          pcVar22[0x1f74] = '\0';
          pcVar22[0x1f75] = '\0';
          pcVar22[0x1f76] = '\0';
          pcVar22[0x1f77] = '\0';
          lVar24 = 0;
        }
        if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
          for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
            lVar24 = *(longlong *)(pcVar22 + 0x1f70);
            *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
            pcVar22[lVar24 + 0xfd0] = '\n';
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar22 + 0x60))
                    (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),10);
        }
        goto code_r0x0001409b515e;
      }
      goto code_r0x0001409b5165;
    }
code_r0x0001409b5158:
    pcVar30 = pcVar23 + 1;
    pcVar22 = local_f0;
code_r0x0001409b515e:
    *(char **)(pcVar22 + 0x1f78) = pcVar30;
code_r0x0001409b5165:
    local_94 = 0;
    pcVar14 = pcVar22;
    break;
  case 0x2a:
    FUN_1408c6b70(&local_f0);
    if (local_90._4_4_ == 0x2e) {
      if (local_b8 < local_e0) {
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        uVar19 = 0x2e;
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          uVar19 = local_90._4_4_;
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,uVar19);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        if ((local_98._1_1_ == '\0') && ((local_90._4_4_ != 0xd || (uStack_80 != 10))))
        goto LAB_1409b6b32;
      }
      else {
        local_98 = 0x100;
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
      }
      uVar33 = local_94;
      pcVar23 = local_f0;
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar22 = *(char **)(local_f0 + 0x1f78);
      if (pcVar30 == pcVar22 + -1) {
LAB_1409b67a0:
        *(char **)(pcVar23 + 0x1f78) = pcVar30 + 1;
      }
      else if (pcVar22 <= pcVar30) {
        pcVar14 = (char *)(ulonglong)local_94;
        lVar24 = *(longlong *)(local_f0 + 0x1f70);
        if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar22))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
          pcVar22 = *(char **)(pcVar23 + 0x1f78);
          *(longlong *)(pcVar23 + 0x1f80) =
               *(longlong *)(pcVar23 + 0x1f80) + *(longlong *)(pcVar23 + 0x1f70);
          pcVar23[0x1f70] = '\0';
          pcVar23[0x1f71] = '\0';
          pcVar23[0x1f72] = '\0';
          pcVar23[0x1f73] = '\0';
          pcVar23[0x1f74] = '\0';
          pcVar23[0x1f75] = '\0';
          pcVar23[0x1f76] = '\0';
          pcVar23[0x1f77] = '\0';
          lVar24 = 0;
        }
        if (pcVar30 + (lVar24 - (longlong)pcVar22) + 1 < (char *)0xfa0) {
          for (; pcVar22 <= pcVar30; pcVar22 = pcVar22 + 1) {
            lVar24 = *(longlong *)(pcVar23 + 0x1f70);
            *(longlong *)(pcVar23 + 0x1f70) = lVar24 + 1;
            pcVar23[lVar24 + 0xfd0] = (char)uVar33;
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar23 + 0x60))
                    (*(longlong **)pcVar23,pcVar30 + (1 - (longlong)pcVar22),uVar33);
        }
        goto LAB_1409b67a0;
      }
      local_94 = 0;
    }
LAB_1409b6b32:
    while (local_98._1_1_ == '\0') {
      local_98 = 0;
      if (local_b8 < local_e0) {
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
      }
      else {
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
        local_98 = 0x100;
      }
    }
  }
  goto LAB_1409b5490;
LAB_1409b3ce9:
  bVar1 = false;
  bVar2 = false;
  bVar5 = false;
joined_r0x0001409b3d08:
  if (!(bool)uVar8) {
LAB_1409b3d0a:
    bVar5 = bVar2;
    FUN_1409b25a0(local_108,&local_f0,pcVar14,0);
  }
  if (bVar1) {
    if (local_b8 < local_e0) {
      local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
      if (local_98._1_1_ == 1) {
        lVar24 = local_b0 + 2;
        local_b0 = local_b0 + 1;
        local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
      }
      local_b8 = local_b8 + lStack_88;
      local_90 = CONCAT44(uStack_80,local_90._4_4_);
      lStack_88 = local_78;
      FUN_1408c6cd0(&local_f0);
      if ((local_90._4_4_ == 10) || (local_90._4_4_ == 0xd)) goto LAB_1409b3af0;
      if (local_b8 < local_e0) {
LAB_1409b3def:
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        goto LAB_1409b3af0;
      }
    }
    else {
      local_90 = 0x2000000020;
      uStack_80 = 0x20;
      local_98 = 0x100;
      local_90._4_4_ = 0x20;
      if (local_b8 < local_e0) goto LAB_1409b3def;
    }
  }
  else {
    if (bVar5 || (local_98 & 0x100) != 0) goto LAB_1409b3af0;
    local_98 = (ushort)local_98._1_1_ << 8;
    if (local_b8 < local_e0) {
      local_b8 = local_b8 + lStack_88;
      local_90 = CONCAT44(uStack_80,local_90._4_4_);
      lStack_88 = local_78;
      FUN_1408c6cd0(&local_f0);
      goto LAB_1409b3af0;
    }
  }
  local_90 = 0x2000000020;
  uStack_80 = 0x20;
  local_98 = 0x100;
  goto LAB_1409b3af0;
code_r0x0001409b4938:
  local_1338 = pcVar22 + -499;
  pcVar30 = local_1320 + -4000;
  if ((((longlong)local_1320 < (longlong)(pcVar22 + 0xdad)) ||
      (pcVar30 = local_1338, (longlong)local_1338 < 0)) &&
     (local_1338 = pcVar30, (longlong)local_1338 < 1)) {
    local_1338 = (char *)0x0;
  }
  local_1330 = local_1320;
  if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
    local_1330 = local_1338 + 4000;
  }
  (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
  local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
  uVar33 = 0x20;
  pcVar22 = pcVar23;
  if (((longlong)local_1338 <= (longlong)pcVar23) && ((longlong)pcVar23 < (longlong)local_1330)) {
code_r0x0001409b48f0:
    uVar33 = (uint)(byte)pcVar23[(longlong)(local_22e0 + -(longlong)local_1338)];
    pcVar22 = pcVar23;
  }
  goto code_r0x0001409b4902;
code_r0x0001409b4250:
  iVar10 = iVar10 + 1;
  pcVar22 = (char *)(ulonglong)(iVar27 + 1);
  goto code_r0x0001409b4255;
code_r0x0001409b3617:
  iVar10 = 0;
  bVar2 = true;
  bVar1 = false;
  bVar34 = false;
joined_r0x0001409b3633:
  if ((int)pcVar14 != 0) {
    bVar34 = bVar1;
    switch(local_94) {
    case 6:
    case 0x14:
    case 0x1b:
      FUN_1409b25a0(local_108,&local_f0,pcVar14,0);
      break;
    default:
code_r0x0001409b4b91:
      if (local_b8 < local_e0) {
        pcVar22 = (char *)0x0;
        do {
          if (local_b8 < local_e0) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
          pcVar22 = pcVar22 + 1;
        } while (pcVar22 != pcVar14);
      }
      else {
        local_98 = 0x100;
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
      }
      break;
    case 0x1c:
      if (local_6c == 0x27) goto code_r0x0001409b4b91;
      FUN_1409b25a0(local_108,&local_f0,pcVar14,0);
    }
  }
  if (bVar34) {
    if (local_b8 < local_e0) {
      local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
      if (local_98._1_1_ == '\x01') {
        lVar24 = local_b0 + 2;
        local_b0 = local_b0 + 1;
        local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
      }
      local_b8 = local_b8 + lStack_88;
      local_90 = CONCAT44(uStack_80,local_90._4_4_);
      lStack_88 = local_78;
      FUN_1408c6cd0(&local_f0);
    }
    else {
code_r0x0001409b545f:
      local_98 = 0x100;
      local_90 = 0x2000000020;
      uStack_80 = 0x20;
    }
  }
  else if (bVar2) {
    FUN_1408c69d0(&local_f0,0);
  }
LAB_1409b5490:
  iVar11 = local_64;
  if (local_94 == 0x29) {
    if ((local_90._4_4_ == 0x20) || (uVar33 = local_90._4_4_, local_90._4_4_ == 9)) {
      local_94 = 0;
      bVar32 = local_98._1_1_;
      while ((uVar12 = local_94, pcVar22 = local_f0, local_90._4_4_ == 0x20 || local_90._4_4_ == 9
             && ((bVar32 & 1) == 0))) {
        local_98 = local_98 & 0xff00;
        if (local_b8 < local_e0) {
          local_b8 = local_b8 + lStack_88;
          local_90 = CONCAT44(uStack_80,local_90._4_4_);
          lStack_88 = local_78;
          pcVar23 = local_b8 + local_78;
          if (local_e8 == (longlong *)0x0) {
            lVar24 = *(longlong *)(local_f0 + 0xfb0);
            if (((longlong)pcVar23 < lVar24) ||
               (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23)) {
              pcVar14 = pcVar23 + -500;
              *(char **)(local_f0 + 0xfb0) = pcVar14;
              pcVar30 = *(char **)(local_f0 + 0xfc8);
              pcVar21 = pcVar30 + -4000;
              if (((longlong)pcVar30 < (longlong)(pcVar23 + 0xdac)) ||
                 (pcVar21 = pcVar14, (longlong)pcVar14 < 0)) {
                pcVar14 = pcVar21;
                if ((longlong)pcVar14 < 1) {
                  pcVar14 = (char *)0x0;
                }
                *(char **)(local_f0 + 0xfb0) = pcVar14;
              }
              if ((longlong)(pcVar14 + 4000) < (longlong)pcVar30) {
                pcVar30 = pcVar14 + 4000;
              }
              *(char **)(local_f0 + 0xfb8) = pcVar30;
              (**(code **)(**(longlong **)local_f0 + 0x18))(*(longlong **)local_f0,local_f0 + 8);
              pcVar22[(*(longlong *)(pcVar22 + 0xfb8) - *(longlong *)(pcVar22 + 0xfb0)) + 8] = '\0';
              lVar24 = *(longlong *)(pcVar22 + 0xfb0);
              uStack_80 = 0;
              if ((lVar24 <= (longlong)pcVar23) &&
                 ((longlong)pcVar23 < *(longlong *)(pcVar22 + 0xfb8))) goto LAB_1409b563d;
            }
            else {
LAB_1409b563d:
              uStack_80 = (uint)(byte)pcVar22[(longlong)(pcVar23 + (8 - lVar24))];
            }
            local_78 = 1;
          }
          else {
            uStack_80 = (**(code **)(*local_e8 + 0xb8))(local_e8,pcVar23,&local_78);
            pcVar22 = pcVar14;
          }
          bVar32 = (longlong)(local_a0 - (ulonglong)(local_b0 < local_a8)) <= (longlong)local_b8;
          local_98 = CONCAT11(bVar32,(char)local_98);
          pcVar14 = pcVar22;
        }
        else {
          local_90 = 0x2000000020;
          uStack_80 = 0x20;
          bVar32 = 1;
          local_90._4_4_ = 0x20;
          local_98 = 0x100;
        }
      }
      pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar23 = *(char **)(local_f0 + 0x1f78);
      if (pcVar30 == pcVar23 + -1) {
LAB_1409b56c9:
        *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
        uVar33 = local_90._4_4_;
      }
      else {
        uVar33 = local_90._4_4_;
        if (pcVar23 <= pcVar30) {
          pcVar14 = (char *)(ulonglong)local_94;
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar23 = *(char **)(pcVar22 + 0x1f78);
            *(longlong *)(pcVar22 + 0x1f80) =
                 *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
            pcVar22[0x1f70] = '\0';
            pcVar22[0x1f71] = '\0';
            pcVar22[0x1f72] = '\0';
            pcVar22[0x1f73] = '\0';
            pcVar22[0x1f74] = '\0';
            pcVar22[0x1f75] = '\0';
            pcVar22[0x1f76] = '\0';
            pcVar22[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
            for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
              lVar24 = *(longlong *)(pcVar22 + 0x1f70);
              *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
              pcVar22[lVar24 + 0xfd0] = (char)uVar12;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar22 + 0x60))
                      (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),uVar12);
          }
          goto LAB_1409b56c9;
        }
      }
      local_94 = 0x29;
    }
    if (-1 < (int)uVar33) {
      pcVar22 = (char *)((ulonglong)uVar33 + local_198);
      if (local_1a0 <= (int)uVar33) {
        pcVar22 = local_19c;
      }
      if (*pcVar22 == '\x01') {
        pcVar22 = local_b8;
        if (uVar33 == 0x3d) {
          pcVar23 = pcVar14;
          uVar33 = 0x3d;
          bVar32 = local_98._1_1_;
        }
        else {
          do {
            if (pcVar22 < local_e0) {
              local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
              if (local_98._1_1_ == '\x01') {
                lVar24 = local_b0 + 2;
                local_b0 = local_b0 + 1;
                local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                     (*(longlong **)local_f0,lVar24);
                pcVar22 = local_b8;
                uVar33 = local_90._4_4_;
              }
              pcVar23 = local_f0;
              local_b8 = pcVar22 + lStack_88;
              local_90 = CONCAT44(uStack_80,uVar33);
              lStack_88 = local_78;
              pcVar22 = local_b8 + local_78;
              if (local_e8 == (longlong *)0x0) {
                lVar24 = *(longlong *)(local_f0 + 0xfb0);
                if (((longlong)pcVar22 < lVar24) ||
                   (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22)) {
                  pcVar14 = pcVar22 + -500;
                  *(char **)(local_f0 + 0xfb0) = pcVar14;
                  pcVar30 = *(char **)(local_f0 + 0xfc8);
                  pcVar21 = pcVar30 + -4000;
                  if (((longlong)pcVar30 < (longlong)(pcVar22 + 0xdac)) ||
                     (pcVar21 = pcVar14, (longlong)pcVar14 < 0)) {
                    pcVar14 = pcVar21;
                    if ((longlong)pcVar14 < 1) {
                      pcVar14 = (char *)0x0;
                    }
                    *(char **)(local_f0 + 0xfb0) = pcVar14;
                  }
                  if ((longlong)(pcVar14 + 4000) < (longlong)pcVar30) {
                    pcVar30 = pcVar14 + 4000;
                  }
                  *(char **)(local_f0 + 0xfb8) = pcVar30;
                  (**(code **)(**(longlong **)local_f0 + 0x18))(*(longlong **)local_f0,local_f0 + 8)
                  ;
                  pcVar23[(*(longlong *)(pcVar23 + 0xfb8) - *(longlong *)(pcVar23 + 0xfb0)) + 8] =
                       '\0';
                  lVar24 = *(longlong *)(pcVar23 + 0xfb0);
                  uStack_80 = 0;
                  if ((lVar24 <= (longlong)pcVar22) &&
                     ((longlong)pcVar22 < *(longlong *)(pcVar23 + 0xfb8))) goto LAB_1409b5979;
                }
                else {
LAB_1409b5979:
                  uStack_80 = (uint)(byte)pcVar23[(longlong)(pcVar22 + (8 - lVar24))];
                }
                local_78 = 1;
              }
              else {
                uStack_80 = (**(code **)(*local_e8 + 0xb8))(local_e8,pcVar22,&local_78);
                pcVar23 = pcVar14;
              }
              lVar24 = local_a0 - (ulonglong)(local_b0 < local_a8);
              local_98 = CONCAT11(lVar24 <= (longlong)local_b8,(char)local_98);
              bVar32 = lVar24 <= (longlong)local_b8;
              pcVar22 = local_b8;
              uVar33 = local_90._4_4_;
              if ((longlong)local_90 < 0) break;
            }
            else {
              local_98 = 0x100;
              local_90 = 0x2000000020;
              uStack_80 = 0x20;
              uVar33 = 0x20;
              bVar32 = true;
              pcVar23 = pcVar14;
            }
            pcVar30 = (char *)((ulonglong)uVar33 + local_148);
            if (local_150 <= (int)uVar33) {
              pcVar30 = local_14c;
            }
            pcVar14 = pcVar23;
          } while (*pcVar30 != '\0');
        }
        do {
          pcVar14 = local_f0;
          if ((uVar33 != 0x20 && uVar33 != 9) || ((bVar32 & 1) != 0)) goto LAB_1409b5b9e;
          local_98 = local_98 & 0xff00;
          if (local_b8 < local_e0) {
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,uVar33);
            lStack_88 = local_78;
            pcVar22 = local_b8 + local_78;
            if (local_e8 == (longlong *)0x0) {
              lVar24 = *(longlong *)(local_f0 + 0xfb0);
              if (((longlong)pcVar22 < lVar24) ||
                 (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22)) {
                pcVar23 = pcVar22 + -500;
                *(char **)(local_f0 + 0xfb0) = pcVar23;
                pcVar30 = *(char **)(local_f0 + 0xfc8);
                pcVar21 = pcVar30 + -4000;
                if (((longlong)pcVar30 < (longlong)(pcVar22 + 0xdac)) ||
                   (pcVar21 = pcVar23, (longlong)pcVar23 < 0)) {
                  pcVar23 = pcVar21;
                  if ((longlong)pcVar23 < 1) {
                    pcVar23 = (char *)0x0;
                  }
                  *(char **)(local_f0 + 0xfb0) = pcVar23;
                }
                if ((longlong)(pcVar23 + 4000) < (longlong)pcVar30) {
                  pcVar30 = pcVar23 + 4000;
                }
                *(char **)(local_f0 + 0xfb8) = pcVar30;
                (**(code **)(**(longlong **)local_f0 + 0x18))(*(longlong **)local_f0,local_f0 + 8);
                pcVar14[(*(longlong *)(pcVar14 + 0xfb8) - *(longlong *)(pcVar14 + 0xfb0)) + 8] =
                     '\0';
                lVar24 = *(longlong *)(pcVar14 + 0xfb0);
                uStack_80 = 0;
                if ((lVar24 <= (longlong)pcVar22) &&
                   ((longlong)pcVar22 < *(longlong *)(pcVar14 + 0xfb8))) goto LAB_1409b5b4d;
              }
              else {
LAB_1409b5b4d:
                uStack_80 = (uint)(byte)pcVar14[(longlong)(pcVar22 + (8 - lVar24))];
              }
              local_78 = 1;
            }
            else {
              uStack_80 = (**(code **)(*local_e8 + 0xb8))(local_e8,pcVar22,&local_78);
              pcVar14 = pcVar23;
            }
            bVar32 = (longlong)(local_a0 - (ulonglong)(local_b0 < local_a8)) <= (longlong)local_b8;
            local_98 = CONCAT11(bVar32,(char)local_98);
            pcVar23 = pcVar14;
            uVar33 = local_90._4_4_;
          }
          else {
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
            bVar32 = 1;
            local_98 = 0x100;
            uVar33 = 0x20;
          }
        } while( true );
      }
    }
    goto LAB_1409b5c50;
  }
LAB_1409b5c5d:
  uVar33 = local_94;
  pcVar23 = local_b8;
  pcVar22 = local_f0;
  local_64 = iVar11;
  if (((int)local_2f0 == 1 & local_98._1_1_) == 1) {
    local_2f0 = CONCAT44(local_2f0._4_4_,2);
    if ((local_2e8 & 1) == 0) {
      pcVar14 = (char *)(ulonglong)local_94;
      uVar33 = (local_2f0._4_4_ != 0x5c) + 0x17;
    }
    else {
      pcVar14 = (char *)(ulonglong)local_94;
      if (local_94 == 0x16) {
        local_94 = 1;
        pcVar14 = (char *)0x1;
      }
      uVar33 = local_2f0._4_4_ == 0x60 | 0x18;
      if (local_2f0._4_4_ == 0x27) {
        uVar33 = 0x17;
      }
    }
    pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar23 = *(char **)(local_f0 + 0x1f78);
    if (pcVar30 == pcVar23 + -1) {
LAB_1409b5da5:
      *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
    }
    else if (pcVar23 <= pcVar30) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar23 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
        for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = (char)pcVar14;
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),pcVar14);
      }
      goto LAB_1409b5da5;
    }
    local_94 = uVar33;
    goto LAB_1409b5e45;
  }
  if (((int)local_2f0 == 3 & local_98._1_1_) == 1) {
    local_2f0 = (ulonglong)local_2f0._4_4_ << 0x20;
    pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar23 = *(char **)(local_f0 + 0x1f78);
    if (pcVar30 == pcVar23 + -1) {
LAB_1409b5d37:
      *(char **)(pcVar22 + 0x1f78) = pcVar30 + 1;
    }
    else if (pcVar23 <= pcVar30) {
      pcVar14 = (char *)(ulonglong)local_94;
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar23))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar23 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar30 + (lVar24 - (longlong)pcVar23) + 1 < (char *)0xfa0) {
        for (; pcVar23 <= pcVar30; pcVar23 = pcVar23 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = (char)uVar33;
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar30 + (1 - (longlong)pcVar23),uVar33);
      }
      goto LAB_1409b5d37;
    }
    local_94 = 0x2a;
    goto LAB_1409b5e45;
  }
  if (local_94 != 0) goto LAB_1409b5e45;
  uVar31 = (ulonglong)local_90._4_4_;
  if ((local_90._4_4_ - 0x30 < 10) ||
     ((uVar15 = (ulonglong)uStack_80, uStack_80 - 0x30 < 10 &&
      ((local_90._4_4_ == 0x76 || (local_90._4_4_ == 0x2e)))))) {
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
LAB_1409b5e0c:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
      goto LAB_1409b5e0c;
    }
    local_94 = 4;
    if (local_90._4_4_ == 0x76) {
      local_64 = 0;
      local_f4 = 7;
      local_100 = 0;
      pcVar14 = pcVar22;
      goto LAB_1409b5e45;
    }
    if (local_90._4_4_ == 0x30) {
      if ((uStack_80 & 0xffffffdf) == 0x42) {
        local_f4 = 1;
      }
      else {
        local_f4 = 4;
        if (((uStack_80 & 0xffffffdf) != 0x58) && (local_f4 = 2, uStack_80 - 0x3a < 0xfffffff6))
        goto LAB_1409b610f;
      }
      local_64 = 0;
      if (local_b8 < local_e0) {
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        uVar19 = 0x30;
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          uVar19 = local_90._4_4_;
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,uVar19);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        local_100 = 0;
        pcVar14 = pcVar22;
      }
      else {
        local_90 = 0x2000000020;
        uStack_80 = 0x20;
        local_98 = 0x100;
        local_100 = 0;
        pcVar14 = pcVar22;
      }
    }
    else {
LAB_1409b610f:
      local_64 = 0;
      local_100 = 0;
      local_f4 = 5;
      pcVar14 = pcVar22;
    }
    goto LAB_1409b5e45;
  }
  if (-1 < (longlong)local_90) {
    pcVar30 = (char *)(*(longlong *)((longlong)local_108 + 0x30) + uVar31);
    if (*(int *)((longlong)local_108 + 0x28) <= (int)local_90._4_4_) {
      pcVar30 = local_110;
    }
    if (*pcVar30 != '\x01') goto code_r0x0001409b6173;
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
LAB_1409b60af:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))();
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14));
      }
      goto LAB_1409b60af;
    }
    pcVar14 = local_f0;
    local_94 = 5;
    if ((int)local_90 == 0x3a) {
      pcVar23 = local_b8 + -2;
      lVar24 = *(longlong *)(local_f0 + 0xfb0);
      pcVar22 = pcVar14;
      if (((longlong)pcVar23 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23)) {
        pcVar30 = local_b8 + -0x1f6;
        *(char **)(local_f0 + 0xfb0) = pcVar30;
        pcVar21 = *(char **)(local_f0 + 0xfc8);
        pcVar16 = pcVar21 + -4000;
        if ((longlong)(local_b8 + 0xdaa) <= (longlong)pcVar21) {
          pcVar16 = pcVar30;
        }
        if ((longlong)pcVar21 < (longlong)(local_b8 + 0xdaa) || (longlong)pcVar16 < 0) {
          if ((longlong)pcVar16 < 1) {
            pcVar16 = (char *)0x0;
          }
          *(char **)(local_f0 + 0xfb0) = pcVar16;
          pcVar30 = pcVar16;
        }
        if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
          pcVar21 = pcVar30 + 4000;
        }
        *(char **)(local_f0 + 0xfb8) = pcVar21;
        (**(code **)(**(longlong **)local_f0 + 0x18))
                  (*(longlong **)local_f0,local_f0 + 8,pcVar30,(longlong)pcVar21 - (longlong)pcVar30
                  );
        pcVar14[(*(longlong *)(pcVar14 + 0xfb8) - *(longlong *)(pcVar14 + 0xfb0)) + 8] = '\0';
        lVar24 = *(longlong *)(pcVar14 + 0xfb0);
        if (((longlong)pcVar23 < lVar24) || (*(longlong *)(pcVar14 + 0xfb8) <= (longlong)pcVar23))
        goto LAB_1409b7102;
      }
      if (pcVar14[(longlong)(pcVar23 + (8 - lVar24))] == ':') {
        local_94 = 0xb;
      }
    }
LAB_1409b7102:
    pcVar30 = local_b8;
    pcVar23 = local_f0;
    pcVar14 = local_b8 + 1;
    switch(local_90._4_4_ - 0x6d >> 1 | (uint)((local_90._4_4_ - 0x6d & 1) != 0) << 0x1f) {
    case 0:
      if (-1 < (longlong)(int)uStack_80) {
        pcVar23 = (char *)((longlong)(int)uStack_80 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uStack_80) {
          pcVar23 = local_110;
        }
        if (*pcVar23 != '\0') goto LAB_1409b81fb;
      }
      local_94 = 0x11;
      local_70 = 1;
      uVar33 = 0x11;
      break;
    default:
      if ((local_90._4_4_ == 0x74) && (uStack_80 == 0x72)) {
        pcVar22 = local_b8 + 2;
        lVar24 = *(longlong *)(local_f0 + 0xfb0);
        if (((longlong)pcVar22 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22))
        {
          pcVar21 = local_b8 + -0x1f2;
          *(char **)(local_f0 + 0xfb0) = pcVar21;
          pcVar16 = *(char **)(local_f0 + 0xfc8);
          pcVar17 = pcVar16 + -4000;
          if ((longlong)(local_b8 + 0xdae) <= (longlong)pcVar16) {
            pcVar17 = pcVar21;
          }
          if ((longlong)pcVar16 < (longlong)(local_b8 + 0xdae) || (longlong)pcVar17 < 0) {
            if ((longlong)pcVar17 < 1) {
              pcVar17 = (char *)0x0;
            }
            *(char **)(local_f0 + 0xfb0) = pcVar17;
            pcVar21 = pcVar17;
          }
          if ((longlong)(pcVar21 + 4000) < (longlong)pcVar16) {
            pcVar16 = pcVar21 + 4000;
          }
          *(char **)(local_f0 + 0xfb8) = pcVar16;
          (**(code **)(**(longlong **)local_f0 + 0x18))
                    (*(longlong **)local_f0,local_f0 + 8,pcVar21,
                     (longlong)pcVar16 - (longlong)pcVar21);
          pcVar23[(*(longlong *)(pcVar23 + 0xfb8) - *(longlong *)(pcVar23 + 0xfb0)) + 8] = '\0';
          lVar24 = *(longlong *)(pcVar23 + 0xfb0);
          uVar31 = 0;
          if ((lVar24 <= (longlong)pcVar22) && ((longlong)pcVar22 < *(longlong *)(pcVar23 + 0xfb8)))
          goto LAB_1409b81c8;
        }
        else {
LAB_1409b81c8:
          uVar31 = (ulonglong)(byte)pcVar23[(longlong)(pcVar22 + (8 - lVar24))];
        }
        pcVar23 = (char *)(uVar31 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uVar31) {
          pcVar23 = local_110;
        }
        if (*pcVar23 == '\x01') {
          goto LAB_1409b81fb;
        }
        local_94 = 0x2c;
        if (local_e0 <= local_b8) {
          local_98 = 0x100;
          local_90 = 0x2000000020;
          uStack_80 = 0x20;
          local_70 = 2;
          local_68 = 0;
          local_6c = 0;
          iVar10 = 0;
          pcVar14 = pcVar22;
          goto LAB_1409b83a7;
        }
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uStack_80,local_90._4_4_);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
        local_70 = 2;
LAB_1409ba964:
        local_68 = 0;
        local_6c = 0;
        iVar10 = 0;
        pcVar14 = pcVar30 + 2;
LAB_1409b83a7:
        pcVar22 = pcVar14;
        pcVar14 = pcVar22;
        uVar33 = local_94;
        if (local_94 == 5) {
          pcVar14 = local_1338;
          pcVar23 = local_1330;
          pvVar28 = local_108;
          if ((longlong)local_1338 <= (longlong)pcVar22) goto LAB_1409b83e8;
LAB_1409b83f1:
          local_1338 = pcVar22 + -500;
          pcVar14 = local_1320 + -4000;
          if ((((longlong)local_1320 < (longlong)(pcVar22 + 0xdac)) ||
              (pcVar14 = local_1338, (longlong)local_1338 < 0)) &&
             (local_1338 = pcVar14, (longlong)local_1338 < 1)) {
            local_1338 = (char *)0x0;
          }
          local_1330 = local_1320;
          if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
            local_1330 = local_1338 + 4000;
          }
          (**(code **)(*local_22e8 + 0x18))
                    (local_22e8,local_22e0,local_1338,(longlong)local_1330 - (longlong)local_1338);
          local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
          uVar33 = 0x20;
          pcVar14 = local_1338;
          pcVar23 = local_1330;
          pvVar28 = local_108;
          if ((longlong)local_1330 <= (longlong)pcVar22 || (longlong)pcVar22 < (longlong)local_1338)
          goto LAB_1409b84b8;
LAB_1409b84aa:
          uVar33 = (uint)(byte)pcVar22[(longlong)(local_22e0 + -(longlong)pcVar14)];
LAB_1409b84b8:
          pcVar21 = (char *)((ulonglong)uVar33 + *(longlong *)((longlong)pvVar28 + 0x30));
          if (*(int *)((longlong)pvVar28 + 0x28) <= (int)uVar33) {
            pcVar21 = local_110;
          }
          if (*pcVar21 != '\x01') {
            uVar31 = (longlong)pcVar22 - local_378._8_8_;
            if (uVar31 == 0) {
              uVar31 = 0;
            }
            else {
              if (0x1d < uVar31) {
                uVar31 = 0x1e;
              }
              uVar15 = 0;
              lVar24 = local_378._8_8_;
              do {
                if ((lVar24 < (longlong)pcVar14) || ((longlong)local_1330 <= lVar24)) {
                  pcVar14 = local_1320 + -4000;
                  if (lVar24 + 0xdac <= (longlong)local_1320) {
                    pcVar14 = (char *)(lVar24 + -500);
                  }
                  local_1338 = (char *)(lVar24 + -500);
                  if (((longlong)local_1320 < lVar24 + 0xdac || (longlong)pcVar14 < 0) &&
                     (local_1338 = pcVar14, (longlong)pcVar14 < 1)) {
                    local_1338 = (char *)0x0;
                  }
                  local_1330 = local_1320;
                  if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
                    local_1330 = local_1338 + 4000;
                  }
                  (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
                  local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
                  pcVar14 = local_1338;
                }
                *(byte *)((longlong)&local_358 + uVar15) = local_22e0[lVar24 - (longlong)pcVar14];
                uVar15 = uVar15 + 1;
                lVar24 = lVar24 + 1;
              } while (uVar15 != uVar31);
            }
            *(undefined1 *)((longlong)&local_358 + uVar31) = 0;
            cVar7 = FUN_140a8bc50(local_1d8,&local_358);
            pcVar14 = pcVar22;
            uVar33 = local_94;
            if (cVar7 != '\0') goto LAB_1409b867e;
            goto LAB_1409b86d0;
          }
          pcVar22 = pcVar22 + 1;
          if ((longlong)pcVar14 <= (longlong)pcVar22) goto LAB_1409b83e8;
          goto LAB_1409b83f1;
        }
        goto LAB_1409b867e;
      }
LAB_1409b81fb:
      pcVar23 = local_f0;
      iVar27 = local_90._4_4_;
      if (local_90._4_4_ == 0x71) {
        if ((0x7f < (ulonglong)uStack_80) || ((*local_178)[uStack_80] != '\x01'))
        goto LAB_1409b83a7;
        pcVar22 = local_b8 + 2;
        lVar24 = *(longlong *)(local_f0 + 0xfb0);
        if (((longlong)pcVar22 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22))
        {
          pcVar21 = local_b8 + -0x1f2;
          *(char **)(local_f0 + 0xfb0) = pcVar21;
          pcVar16 = *(char **)(local_f0 + 0xfc8);
          pcVar17 = pcVar16 + -4000;
          if ((longlong)(local_b8 + 0xdae) <= (longlong)pcVar16) {
            pcVar17 = pcVar21;
          }
          if ((longlong)pcVar16 < (longlong)(local_b8 + 0xdae) || (longlong)pcVar17 < 0) {
            if ((longlong)pcVar17 < 1) {
              pcVar17 = (char *)0x0;
            }
            *(char **)(local_f0 + 0xfb0) = pcVar17;
            pcVar21 = pcVar17;
          }
          if ((longlong)(pcVar21 + 4000) < (longlong)pcVar16) {
            pcVar16 = pcVar21 + 4000;
          }
          *(char **)(local_f0 + 0xfb8) = pcVar16;
          (**(code **)(**(longlong **)local_f0 + 0x18))
                    (*(longlong **)local_f0,local_f0 + 8,pcVar21,
                     (longlong)pcVar16 - (longlong)pcVar21);
          pcVar23[(*(longlong *)(pcVar23 + 0xfb8) - *(longlong *)(pcVar23 + 0xfb0)) + 8] = '\0';
          lVar24 = *(longlong *)(pcVar23 + 0xfb0);
          uVar31 = 0;
          if ((lVar24 <= (longlong)pcVar22) && ((longlong)pcVar22 < *(longlong *)(pcVar23 + 0xfb8)))
          goto LAB_1409b82fa;
        }
        else {
LAB_1409b82fa:
          uVar31 = (ulonglong)(byte)pcVar23[(longlong)(pcVar22 + (8 - lVar24))];
        }
        pcVar22 = (char *)(uVar31 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uVar31) {
          pcVar22 = local_110;
        }
        if (*pcVar22 != '\x01') {
          if (uStack_80 == 0x71) {
            local_94 = 0x1b;
          }
          else if (uStack_80 == 0x72) {
            local_94 = 0x1d;
          }
          else if (uStack_80 == 0x78) {
            local_94 = 0x1c;
          }
          else {
            local_94 = 0x1e;
          }
          if (local_b8 < local_e0) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
          local_70 = 1;
          goto LAB_1409ba964;
        }
        pcVar22 = pcVar23;
        iVar27 = local_90._4_4_;
      }
      if (iVar27 != 0x78) goto LAB_1409b83a7;
      lVar24 = (longlong)(int)uStack_80;
      if (lVar24 != 0x3d && -1 < lVar24) {
        pcVar23 = (char *)(lVar24 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uStack_80) {
          pcVar23 = local_110;
        }
        if ((*pcVar23 == '\x01') &&
           ((0x7f < (local_90 & 0xffffffff) ||
            ((uStack_80 - 0x30 < 10 & (*local_160)[local_90 & 0xffffffff]) != 1))))
        goto LAB_1409b83a7;
      }
      local_94 = 10;
      uVar33 = 10;
      goto LAB_1409b867e;
    case 2:
      if (-1 < (longlong)(int)uStack_80) {
        pcVar23 = (char *)((longlong)(int)uStack_80 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uStack_80) {
          pcVar23 = local_110;
        }
        if (*pcVar23 != '\0') goto LAB_1409b81fb;
      }
      local_94 = 0x1a;
      local_70 = 1;
      uVar33 = 0x1a;
      break;
    case 3:
      if (-1 < (longlong)(int)uStack_80) {
        pcVar23 = (char *)((longlong)(int)uStack_80 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uStack_80) {
          pcVar23 = local_110;
        }
        if (*pcVar23 != '\0') goto LAB_1409b81fb;
      }
      local_94 = 0x12;
      local_70 = 2;
      uVar33 = 0x12;
      break;
    case 6:
      if (-1 < (longlong)(int)uStack_80) {
        pcVar23 = (char *)((longlong)(int)uStack_80 + *(longlong *)((longlong)local_108 + 0x30));
        if (*(int *)((longlong)local_108 + 0x28) <= (int)uStack_80) {
          pcVar23 = local_110;
        }
        if (*pcVar23 != '\0') goto LAB_1409b81fb;
      }
      local_94 = 0x2c;
      local_70 = 2;
      uVar33 = 0x2c;
    }
    iVar10 = 0;
    local_6c = 0;
    local_68 = 0;
LAB_1409b867e:
    if ((pcVar30 != (char *)0x0 && uVar33 != 0xb) &&
       (iVar11 = FUN_1409bbb50(&local_22e8,pcVar30,pcVar14,iVar11,local_118,local_128), iVar11 != 0)
       ) goto LAB_1409b86d0;
    goto LAB_1409b86da;
  }
code_r0x0001409b6173:
  switch(local_90._4_4_) {
  case 0x22:
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 != pcVar14 + -1) {
      if (pcVar23 < pcVar14) {
        local_94 = 6;
        local_64 = 0;
        iVar10 = 1;
        local_68 = 0x22;
        local_6c = 0x22;
        local_70 = 1;
        pcVar14 = pcVar22;
        goto LAB_1409b5e45;
      }
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
    }
    *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    local_94 = 6;
    local_6c = local_90._4_4_;
    break;
  case 0x23:
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b7981:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
      goto code_r0x0001409b7981;
    }
    local_94 = 2;
    pcVar14 = pcVar22;
    goto LAB_1409b5e45;
  case 0x24:
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b7932:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
      uVar15 = (ulonglong)uStack_80;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
      goto code_r0x0001409b7932;
    }
    local_94 = 0xc;
    uVar33 = (uint)uVar15;
    if ((uVar33 < 0x21) && ((0x100003e00U >> (uVar15 & 0x3f) & 1) != 0)) {
      local_64 = 0;
      FUN_1408c69d0(&local_f0,0);
      pcVar14 = pcVar22;
      goto LAB_1409b5e45;
    }
    if (uVar33 == 0x7b) {
      FUN_1408c69d0(&local_f0,10);
      goto LAB_1409b86da;
    }
    if (local_b8 < local_e0) {
      local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
      if (local_98._1_1_ == '\x01') {
        lVar24 = local_b0 + 2;
        local_b0 = local_b0 + 1;
        local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
        uVar33 = uStack_80;
      }
      local_b8 = local_b8 + lStack_88;
      local_90 = CONCAT44(uVar33,local_90._4_4_);
      lStack_88 = local_78;
      FUN_1408c6cd0(&local_f0);
      uVar33 = 0x60;
      if ((uStack_80 == 0x60 && local_90._4_4_ == 0x60) ||
         (uVar33 = 0x3a, uStack_80 == 0x3a && local_90._4_4_ == 0x3a)) {
        if (local_e0 <= local_b8) goto LAB_1409ba765;
        local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
        uVar12 = uVar33;
        if (local_98._1_1_ == '\x01') {
          lVar24 = local_b0 + 2;
          local_b0 = local_b0 + 1;
          local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
          uVar33 = uStack_80;
          uVar12 = local_90._4_4_;
        }
        local_b8 = local_b8 + lStack_88;
        local_90 = CONCAT44(uVar33,uVar12);
        lStack_88 = local_78;
        FUN_1408c6cd0(&local_f0);
      }
      goto LAB_1409b86da;
    }
LAB_1409ba765:
    local_98 = 0x100;
    local_90 = 0x2000000020;
    uStack_80 = 0x20;
    local_64 = 0;
    pcVar14 = pcVar22;
    goto LAB_1409b5e45;
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
LAB_1409b774b:
    if (0x7f < local_90._4_4_) {
LAB_1409ba27f:
      if ((local_90._4_4_ == 0x1a) || (local_90._4_4_ == 4)) {
        FUN_1408c6890(&local_f0,0x15);
      }
      else {
        FUN_1408c6b70(&local_f0);
      }
      goto LAB_1409b5e45;
    }
    if ((*local_180)[uVar31] != '\x01') {
      if (local_90._4_4_ == 0x2d) {
        if (-1 < (int)uStack_80) {
          pcVar22 = (char *)(*(longlong *)((longlong)local_108 + 0x20) + uVar15);
          if (*(int *)((longlong)local_108 + 0x18) <= (int)uStack_80) {
            pcVar22 = local_188;
          }
          if (*pcVar22 == '\x01') {
            if ((0x7f < uStack_80) || ((*local_158)[uVar15] == '\0')) {
LAB_1409b9b87:
              lVar24 = 2;
              do {
                pcVar14 = local_f0;
                pcVar22 = local_b8 + lVar24;
                lVar26 = *(longlong *)(local_f0 + 0xfb0);
                if (((longlong)pcVar22 < lVar26) ||
                   (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar22)) {
                  pcVar30 = pcVar22 + -500;
                  *(char **)(local_f0 + 0xfb0) = pcVar30;
                  pcVar21 = *(char **)(local_f0 + 0xfc8);
                  pcVar16 = pcVar21 + -4000;
                  if (((longlong)pcVar21 < (longlong)(pcVar22 + 0xdac)) ||
                     (pcVar16 = pcVar30, (longlong)pcVar30 < 0)) {
                    pcVar30 = pcVar16;
                    if ((longlong)pcVar30 < 1) {
                      pcVar30 = (char *)0x0;
                    }
                    *(char **)(local_f0 + 0xfb0) = pcVar30;
                  }
                  if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
                    pcVar21 = pcVar30 + 4000;
                  }
                  *(char **)(local_f0 + 0xfb8) = pcVar21;
                  (**(code **)(**(longlong **)local_f0 + 0x18))
                            (*(longlong **)local_f0,local_f0 + 8,pcVar30,
                             (longlong)pcVar21 - (longlong)pcVar30);
                  pcVar14[(*(longlong *)(pcVar14 + 0xfb8) - *(longlong *)(pcVar14 + 0xfb0)) + 8] =
                       '\0';
                  lVar26 = *(longlong *)(pcVar14 + 0xfb0);
                  uVar33 = 0;
                  if ((lVar26 <= (longlong)pcVar22) &&
                     (uVar33 = 0, (longlong)pcVar22 < *(longlong *)(pcVar14 + 0xfb8)))
                  goto LAB_1409b9c48;
                }
                else {
LAB_1409b9c48:
                  uVar33 = (uint)(byte)pcVar14[(longlong)(pcVar22 + (8 - lVar26))];
                }
                pcVar14 = local_110;
                if ((int)uVar33 < *(int *)((longlong)local_108 + 0x28)) {
                  pcVar14 = (char *)((ulonglong)uVar33 + *(longlong *)((longlong)local_108 + 0x30));
                }
                if (*pcVar14 != '\x01') goto LAB_1409ba7ea;
                lVar24 = lVar24 + 1;
              } while( true );
            }
            uVar33 = FUN_1408ef810(&local_f0,2);
            if (-1 < (int)uVar33) {
              pcVar14 = (char *)((ulonglong)uVar33 + *(longlong *)((longlong)local_108 + 0x30));
              if (*(int *)((longlong)local_108 + 0x28) <= (int)uVar33) {
                pcVar14 = local_110;
              }
              if (*pcVar14 != '\0') goto LAB_1409b9b87;
            }
            lVar24 = 2;
            FUN_1408c6890(&local_f0,5);
LAB_1409ba7fb:
            uVar33 = FUN_1409bbb50(&local_22e8,pcVar23,pcVar23 + lVar24,iVar11,local_118,local_128);
            local_64 = 0;
            pcVar14 = pcVar23;
            if (1 < uVar33) {
              local_94 = 0xb;
            }
            goto LAB_1409b5e45;
          }
        }
      }
      else if (local_90._4_4_ == 0x3d) {
        if (-1 < (int)uStack_80) {
          pcVar23 = (char *)(local_138 + uVar15);
          if (local_140 <= (int)uStack_80) {
            pcVar23 = local_13c;
          }
          if ((*pcVar23 == '\x01') && ((char)local_98 != '\0')) {
            pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
            pcVar14 = *(char **)(local_f0 + 0x1f78);
            if (pcVar23 == pcVar14 + -1) {
LAB_1409b8eff:
              *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
            }
            else if (pcVar14 <= pcVar23) {
              lVar24 = *(longlong *)(local_f0 + 0x1f70);
              if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
                (**(code **)(**(longlong **)local_f0 + 0x68))
                          (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
                pcVar14 = *(char **)(pcVar22 + 0x1f78);
                *(longlong *)(pcVar22 + 0x1f80) =
                     *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
                pcVar22[0x1f70] = '\0';
                pcVar22[0x1f71] = '\0';
                pcVar22[0x1f72] = '\0';
                pcVar22[0x1f73] = '\0';
                pcVar22[0x1f74] = '\0';
                pcVar22[0x1f75] = '\0';
                pcVar22[0x1f76] = '\0';
                pcVar22[0x1f77] = '\0';
                lVar24 = 0;
              }
              if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
                for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
                  lVar24 = *(longlong *)(pcVar22 + 0x1f70);
                  *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
                  pcVar22[lVar24 + 0xfd0] = '\0';
                }
              }
              else {
                (**(code **)(**(longlong **)pcVar22 + 0x60))
                          (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
              }
              goto LAB_1409b8eff;
            }
            local_94 = 3;
            local_64 = 0;
            pcVar14 = pcVar22;
            goto LAB_1409b5e45;
          }
        }
      }
      else if ((local_90._4_4_ == 0x28) && (local_b8 != (char *)0x0)) {
        FUN_1408c6b70(&local_f0);
        pcVar23 = local_b8;
        if (0 < (longlong)local_378._0_8_) {
          (**(code **)(*local_22e8 + 0x68))(local_22e8,local_378._0_8_,local_1318);
          local_368 = local_368 + local_378._0_8_;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_378._8_8_;
          local_378 = auVar4 << 0x40;
        }
        pcVar23 = pcVar23 + -1;
        local_11c = 0;
        pcVar22 = pcVar14;
        if (pcVar23 != (char *)0x0) {
LAB_1409b9cf6:
          uVar31 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar23);
          if ((uVar31 & 0xfd) == 0) {
            pcVar23 = pcVar23 + -1;
            goto joined_r0x0001409b9d0d;
          }
          cVar7 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar23);
          iVar11 = 1;
          while( true ) {
            pcVar22 = pcVar23 + -1;
            cVar6 = (**(code **)(*local_22e8 + 0x20))();
            if (cVar7 != cVar6) break;
            iVar11 = iVar11 + 1;
            pcVar23 = pcVar22;
            if (pcVar22 == (char *)0x0) goto LAB_1409bb101;
          }
          pcVar14 = pcVar22;
          if (pcVar23 < (char *)0x2) goto LAB_1409bb101;
          while (pcVar22 = pcVar14, uVar31 = (**(code **)(*local_22e8 + 0x20))(),
                (uVar31 & 0xfd) == 0) {
            pcVar14 = pcVar22 + -1;
            if (pcVar22 + -1 == (char *)0x0) goto LAB_1409bb101;
          }
          local_f5 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22);
          iVar27 = 1;
          pcVar14 = pcVar22;
          do {
            pcVar22 = pcVar14 + -1;
            cVar6 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22);
            if (local_f5 != cVar6) {
              if (iVar27 != 1 || local_f5 != '\n') goto LAB_1409ba008;
              if ((longlong)pcVar14 < (longlong)local_1338 ||
                  (longlong)local_1330 <= (longlong)pcVar14) {
                local_1338 = pcVar14 + -500;
                pcVar30 = local_1320 + -4000;
                if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdac)) ||
                    (pcVar30 = local_1338, (longlong)local_1338 < 0)) &&
                   (local_1338 = pcVar30, (longlong)local_1338 < 1)) {
                  local_1338 = (char *)0x0;
                }
                local_1330 = local_1320;
                if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
                  local_1330 = local_1338 + 4000;
                }
                (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
                local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
                if (((longlong)pcVar14 < (longlong)local_1338) ||
                   ((longlong)local_1330 <= (longlong)pcVar14)) goto LAB_1409bb101;
              }
              if ((pcVar14[(longlong)(local_22e0 + -(longlong)local_1338)] != ':') ||
                 ((cVar7 != '\v' && (cVar7 != '\x05')))) goto LAB_1409bb101;
              if (iVar11 != 9) goto LAB_1409ba1e5;
              cVar7 = 'p';
              pcVar22 = (char *)0x0;
              pcVar16 = "prototype";
              pcVar30 = local_1338;
              pcVar21 = local_1330;
              goto LAB_1409b9f07;
            }
            iVar27 = iVar27 + 1;
            pcVar14 = pcVar22;
          } while (pcVar22 != (char *)0x0);
          pcVar14 = (char *)0x0;
LAB_1409ba008:
          if ((local_f5 == '\n') && (iVar27 == 2)) {
            if ((longlong)pcVar14 < (longlong)local_1338 ||
                (longlong)local_1330 <= (longlong)pcVar14) {
              local_1338 = pcVar14 + -500;
              pcVar22 = local_1320 + -4000;
              if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdac)) ||
                  (pcVar22 = local_1338, (longlong)local_1338 < 0)) &&
                 (local_1338 = pcVar22, (longlong)local_1338 < 1)) {
                local_1338 = (char *)0x0;
              }
              local_1330 = local_1320;
              if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
                local_1330 = local_1338 + 4000;
              }
              (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
              local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
              pcVar22 = pcVar14;
              if (((longlong)pcVar14 < (longlong)local_1338) ||
                 ((longlong)local_1330 <= (longlong)pcVar14)) goto LAB_1409bb101;
            }
            if (pcVar14[(longlong)(local_22e0 + -(longlong)local_1338)] == ':') {
              pcVar22 = pcVar14 + 1;
              if ((longlong)pcVar22 < (longlong)local_1338 ||
                  (longlong)local_1330 <= (longlong)pcVar22) {
                local_1338 = pcVar14 + -499;
                pcVar23 = local_1320 + -4000;
                if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdad)) ||
                    (pcVar23 = local_1338, (longlong)local_1338 < 0)) &&
                   (local_1338 = pcVar23, (longlong)local_1338 < 1)) {
                  local_1338 = (char *)0x0;
                }
                local_1330 = local_1320;
                if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
                  local_1330 = local_1338 + 4000;
                }
                (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
                local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
                if (((longlong)pcVar22 < (longlong)local_1338) ||
                   ((longlong)local_1330 <= (longlong)pcVar22)) goto LAB_1409bb101;
              }
              if (cVar7 == '\v') {
                pcVar22 = pcVar22 + -(longlong)local_1338;
                iVar11 = 3;
                if (local_22e0[(longlong)pcVar22] == 0x3a) goto LAB_1409ba1fb;
              }
            }
            goto LAB_1409bb101;
          }
          if (iVar27 != 3 || local_f5 != '\x05') goto LAB_1409bb101;
          if ((longlong)pcVar14 < (longlong)local_1338 || (longlong)local_1330 <= (longlong)pcVar14)
          {
            local_1338 = pcVar14 + -500;
            pcVar22 = local_1320 + -4000;
            if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdac)) ||
                (pcVar22 = local_1338, (longlong)local_1338 < 0)) &&
               (local_1338 = pcVar22, (longlong)local_1338 < 1)) {
              local_1338 = (char *)0x0;
            }
            local_1330 = local_1320;
            if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
              local_1330 = local_1338 + 4000;
            }
            (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
            local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
            pcVar22 = pcVar14;
            if ((longlong)local_1330 <= (longlong)pcVar14 ||
                (longlong)pcVar14 < (longlong)local_1338) goto LAB_1409bb101;
          }
          if (pcVar14[(longlong)(local_22e0 + -(longlong)local_1338)] != 's') goto LAB_1409bb101;
          pcVar22 = pcVar14 + 1;
          if ((longlong)pcVar22 < (longlong)local_1338 || (longlong)local_1330 <= (longlong)pcVar22)
          {
            local_1338 = pcVar14 + -499;
            pcVar23 = local_1320 + -4000;
            if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdad)) ||
                (pcVar23 = local_1338, (longlong)local_1338 < 0)) &&
               (local_1338 = pcVar23, (longlong)local_1338 < 1)) {
              local_1338 = (char *)0x0;
            }
            local_1330 = local_1320;
            if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
              local_1330 = local_1338 + 4000;
            }
            (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
            local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
            if ((longlong)local_1330 <= (longlong)pcVar22 ||
                (longlong)pcVar22 < (longlong)local_1338) goto LAB_1409bb101;
          }
          pcVar22 = pcVar22 + -(longlong)local_1338;
          if (local_22e0[(longlong)pcVar22] != 0x75) goto LAB_1409bb101;
          pcVar22 = pcVar14 + 2;
          if (((longlong)pcVar22 < (longlong)local_1338) ||
             ((longlong)local_1330 <= (longlong)pcVar22)) {
            local_1338 = pcVar14 + -0x1f2;
            pcVar23 = local_1320 + -4000;
            if ((((longlong)local_1320 < (longlong)(pcVar14 + 0xdae)) ||
                (pcVar23 = local_1338, (longlong)local_1338 < 0)) &&
               (local_1338 = pcVar23, (longlong)local_1338 < 1)) {
              local_1338 = (char *)0x0;
            }
            local_1330 = local_1320;
            if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
              local_1330 = local_1338 + 4000;
            }
            (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
            local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
            if (((longlong)pcVar22 < (longlong)local_1338) ||
               ((longlong)local_1330 <= (longlong)pcVar22)) goto LAB_1409bb101;
          }
          if ((cVar7 == '\v') &&
             (pcVar22 = pcVar22 + -(longlong)local_1338, local_22e0[(longlong)pcVar22] == 0x62)) {
            FUN_1408c6890(&local_f0,0x28);
            goto LAB_1409b86da;
          }
        }
LAB_1409bb101:
        FUN_1408c6890(&local_f0,10);
        pcVar14 = pcVar22;
        goto LAB_1409b5e45;
      }
      if ((*local_170)[uVar31] == '\x01') {
        FUN_1408c6890(&local_f0,10);
        if (((local_90._4_4_ == 0x2e) && (uStack_80 == 0x2e)) &&
           (FUN_1408ef8e0(&local_f0), uStack_80 == 0x2e)) {
          FUN_1408ef8e0(&local_f0);
        }
        goto LAB_1409b5e45;
      }
      goto LAB_1409ba27f;
    }
    bVar34 = uStack_80 == 0x3c;
    bVar1 = local_90._4_4_ == 0x3c;
    pcVar22 = (char *)0x0;
    if (local_b8 != (char *)0x0) {
      pcVar22 = local_b8 + -1;
    }
    FUN_1408c6b70(&local_f0);
    if (0 < (longlong)local_378._0_8_) {
      (**(code **)(*local_22e8 + 0x68))(local_22e8,local_378._0_8_,local_1318);
      local_368 = local_368 + local_378._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_378._8_8_;
      local_378 = auVar3 << 0x40;
    }
    cVar7 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22);
    uVar33 = 1;
    uVar13 = extraout_XMM0_Qa;
    if (pcVar23 < (char *)0x2) {
code_r0x0001409b77ea:
      uVar33 = 1;
    }
    else {
      do {
        uVar31 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22);
        if ((uVar31 & 0xfd) != 0) {
          uVar8 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22);
          if (((longlong)pcVar22 < (longlong)local_1338) ||
             (uVar13 = extraout_XMM0_Qa_01, (longlong)local_1330 <= (longlong)pcVar22)) {
            local_1338 = pcVar22 + -500;
            pcVar14 = local_1320 + -4000;
            if ((((longlong)local_1320 < (longlong)(pcVar22 + 0xdac)) ||
                (pcVar14 = local_1338, (longlong)local_1338 < 0)) &&
               (local_1338 = pcVar14, (longlong)local_1338 < 1)) {
              local_1338 = (char *)0x0;
            }
            local_1330 = local_1320;
            if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
              local_1330 = local_1338 + 4000;
            }
            uVar13 = (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
            local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
            bVar32 = 0x20;
            if (((longlong)local_1338 <= (longlong)pcVar22) &&
               ((longlong)pcVar22 < (longlong)local_1330)) goto LAB_1409ba44a;
          }
          else {
LAB_1409ba44a:
            bVar32 = pcVar22[(longlong)(local_22e0 + -(longlong)local_1338)];
          }
          uVar33 = 0;
          switch(uVar8) {
          case 3:
          case 0x17:
          case 0x18:
          case 0x19:
            goto code_r0x0001409b77ea;
          default:
            break;
          case 5:
            switch(local_90._4_4_) {
            case 0x25:
            case 0x2a:
code_r0x0001409ba49d:
              if ((((uStack_80 - 9 < 0x18 & (byte)(0x80001f >> ((byte)(uStack_80 - 9) & 0x1f))) != 0
                   ) || (uStack_80 - 0x30 < 10)) ||
                 (uVar33 = 1, uStack_80 == 0x2a && local_90._4_4_ == 0x2a))
              goto code_r0x0001409bab88;
              break;
            default:
              goto code_r0x0001409b77ea;
            case 0x2f:
              pcVar14 = pcVar22 + 1;
              goto code_r0x0001409bad97;
            case 0x3c:
code_r0x0001409baceb:
              uVar33 = (uint)((uStack_80 != 0x3d && uStack_80 != 0x20) &&
                             uStack_80 - 0xe < 0xfffffffb);
            }
            break;
          case 10:
            uVar33 = 0;
            if (bVar32 < 0x2d) {
              if (bVar32 == 0x29) break;
              if (bVar32 != 0x2b) goto code_r0x0001409b77ea;
            }
            else if (bVar32 != 0x2d) {
              if (bVar32 != 0x5d) {
                if (bVar32 != 0x7d) goto code_r0x0001409b77ea;
                uVar12 = FUN_1409bc5c0(&local_22e8,pcVar22);
                uVar33 = 1;
                uVar13 = extraout_XMM0_Qa_02;
                if (uVar12 < 0x10) {
                  uVar33 = 0xbff >> ((byte)uVar12 & 0x1f);
                }
              }
              break;
            }
            bVar9 = FUN_14095e470(&local_22e8,pcVar22 + -1,0x20);
            uVar33 = 1;
            uVar13 = extraout_XMM0_Qa_04;
            if (bVar32 == bVar9) {
              pcVar22 = pcVar22 + -2;
              bVar9 = FUN_14095e470(&local_22e8,pcVar22,0x20);
              uVar33 = (uint)(bVar32 == bVar9);
              uVar13 = extraout_XMM0_Qa_05;
            }
            break;
          case 0xb:
            iVar11 = FUN_1409bc760(&local_22e8,pcVar22);
            uVar13 = extraout_XMM0_Qa_03;
            if (iVar11 - 1U < 2) goto code_r0x0001409bab88;
            if (iVar11 != 3) goto code_r0x0001409b77ea;
            switch(local_90._4_4_) {
            case 0x25:
            case 0x2a:
              goto code_r0x0001409ba49d;
            default:
              goto code_r0x0001409b77ea;
            case 0x2f:
              goto code_r0x0001409badd5;
            case 0x3c:
              goto code_r0x0001409baceb;
            }
          case 0xc:
            uVar33 = (uint)(cVar7 == '\0' && (bVar34 && bVar1));
          }
          break;
        }
        pcVar22 = pcVar22 + -1;
        uVar13 = extraout_XMM0_Qa_00;
      } while (pcVar22 != (char *)0x0);
    }
LAB_1409b965d:
    pcVar14 = pcVar22;
    if (bVar34 && bVar1) {
      cVar7 = FUN_1408de0e0(&local_f0,&DAT_14136c025);
      uVar12 = local_94;
      pcVar23 = local_f0;
      if (cVar7 == '\0') {
        if ((uVar33 & 1) != 0) {
          FUN_1408c6890(&local_f0,0x16);
          local_2f0 = local_2f0 & 0xffffffff00000000;
          local_64 = 0;
          goto LAB_1409b5e45;
        }
        FUN_1408c6890(&local_f0,10);
        FUN_1408ef8e0(&local_f0);
      }
      else {
        pcVar30 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
        pcVar14 = *(char **)(local_f0 + 0x1f78);
        if (pcVar30 == pcVar14 + -1) {
LAB_1409b96ba:
          *(char **)(pcVar23 + 0x1f78) = pcVar30 + 1;
        }
        else if (pcVar14 <= pcVar30) {
          pcVar22 = (char *)(ulonglong)local_94;
          lVar24 = *(longlong *)(local_f0 + 0x1f70);
          if ((0 < lVar24) && ((char *)0xf9f < pcVar30 + lVar24 + (1 - (longlong)pcVar14))) {
            (**(code **)(**(longlong **)local_f0 + 0x68))
                      (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
            pcVar14 = *(char **)(pcVar23 + 0x1f78);
            *(longlong *)(pcVar23 + 0x1f80) =
                 *(longlong *)(pcVar23 + 0x1f80) + *(longlong *)(pcVar23 + 0x1f70);
            pcVar23[0x1f70] = '\0';
            pcVar23[0x1f71] = '\0';
            pcVar23[0x1f72] = '\0';
            pcVar23[0x1f73] = '\0';
            pcVar23[0x1f74] = '\0';
            pcVar23[0x1f75] = '\0';
            pcVar23[0x1f76] = '\0';
            pcVar23[0x1f77] = '\0';
            lVar24 = 0;
          }
          if (pcVar30 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
            for (; pcVar14 <= pcVar30; pcVar14 = pcVar14 + 1) {
              lVar24 = *(longlong *)(pcVar23 + 0x1f70);
              *(longlong *)(pcVar23 + 0x1f70) = lVar24 + 1;
              pcVar23[lVar24 + 0xfd0] = (char)uVar12;
            }
          }
          else {
            (**(code **)(**(longlong **)pcVar23 + 0x60))
                      (*(longlong **)pcVar23,pcVar30 + (1 - (longlong)pcVar14),uVar12);
          }
          goto LAB_1409b96ba;
        }
        local_94 = 10;
        if (local_e0 <= local_b8) goto LAB_1409ba765;
        pcVar22 = (char *)0x0;
        do {
          if (local_b8 < local_e0) {
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          }
          else {
            local_98 = 0x100;
            local_90 = 0x2000000020;
            uStack_80 = 0x20;
          }
          pcVar22 = pcVar22 + 1;
        } while (pcVar22 != (char *)0x3);
      }
    }
    else if (local_90._4_4_ == 0x25) {
      if ((uVar33 & 1) == 0) {
        FUN_1408c6890(&local_f0,10);
      }
      else {
        FUN_1408c6890(&local_f0,0xe);
        if ((longlong)(int)uStack_80 < 0) {
LAB_1409bae26:
          local_94 = 10;
          local_64 = 0;
          pcVar14 = pcVar22;
          goto LAB_1409b5e45;
        }
        pcVar14 = (char *)((int)uStack_80 + local_1a8);
        if (local_1b0 <= (int)uStack_80) {
          pcVar14 = local_1ac;
        }
        if (*pcVar14 == '\x01') {
          FUN_1408ef8e0(&local_f0);
        }
        else if ((uStack_80 == 0x3a) && (iVar11 = FUN_1408ef810(&local_f0,2), iVar11 == 0x3a)) {
          FUN_1409bb6b0(&local_f0,2);
        }
        else {
          if (uStack_80 != 0x7b) goto LAB_1409bae26;
          FUN_1408c69d0(&local_f0,10);
        }
      }
    }
    else if (local_90._4_4_ == 0x3c) {
      if ((uVar33 & 1) == 0) {
        FUN_1408c6890(&local_f0,10);
      }
      else {
        uVar33 = FUN_1409b2530(uVar13,&local_f0);
        pcVar22 = (char *)(ulonglong)uVar33;
        if ((int)uVar33 < 1) {
          FUN_1408c6890(&local_f0,10);
        }
        else {
          FUN_1408c6890(&local_f0,0xb);
          FUN_1408efa00(&local_f0,pcVar22);
        }
      }
    }
    else {
      if (local_90._4_4_ != 0x2a) {
        if ((uVar33 & 1) == 0) {
          FUN_1408c6890(&local_f0,10);
          local_64 = 0;
          if (uStack_80 == 0x2f) {
            FUN_1408ef8e0(&local_f0);
          }
          goto LAB_1409b5e45;
        }
        FUN_1408c6890(&local_f0,0x11);
        local_6c = local_90._4_4_;
        break;
      }
      if ((uVar33 & 1) == 0) {
        FUN_1408c6890(&local_f0,10);
        local_64 = 0;
        if (uStack_80 == 0x2a) {
          FUN_1408ef8e0(&local_f0);
        }
        goto LAB_1409b5e45;
      }
      FUN_1408c6890(&local_f0,0xf);
      if ((uStack_80 == 0x3a) && (iVar11 = FUN_1408ef810(&local_f0,2), iVar11 == 0x3a)) {
        FUN_1409bb6b0(&local_f0,2);
      }
      else if (uStack_80 == 0x7b) {
        FUN_1408c69d0(&local_f0,10);
      }
      else {
        FUN_1408ef8e0(&local_f0);
      }
    }
    goto LAB_1409b86da;
  case 0x27:
    if (((int)uStack_80 < 0) || ((int)local_90 != 0x26)) {
code_r0x0001409b89cf:
      pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
      pcVar14 = *(char **)(local_f0 + 0x1f78);
      if (pcVar23 != pcVar14 + -1) {
        if (pcVar23 < pcVar14) {
          local_94 = 7;
          local_64 = 0;
          iVar10 = 1;
          local_68 = 0x27;
          local_6c = 0x27;
          local_70 = 1;
          pcVar14 = pcVar22;
          goto LAB_1409b5e45;
        }
        lVar24 = *(longlong *)(local_f0 + 0x1f70);
        if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
          (**(code **)(**(longlong **)local_f0 + 0x68))
                    (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
          pcVar14 = *(char **)(pcVar22 + 0x1f78);
          *(longlong *)(pcVar22 + 0x1f80) =
               *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
          pcVar22[0x1f70] = '\0';
          pcVar22[0x1f71] = '\0';
          pcVar22[0x1f72] = '\0';
          pcVar22[0x1f73] = '\0';
          pcVar22[0x1f74] = '\0';
          pcVar22[0x1f75] = '\0';
          pcVar22[0x1f76] = '\0';
          pcVar22[0x1f77] = '\0';
          lVar24 = 0;
        }
        if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
          for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
            lVar24 = *(longlong *)(pcVar22 + 0x1f70);
            *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
            pcVar22[lVar24 + 0xfd0] = '\0';
          }
        }
        else {
          (**(code **)(**(longlong **)pcVar22 + 0x60))
                    (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
        }
      }
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
      local_94 = 7;
      local_6c = local_90._4_4_;
      break;
    }
    pcVar14 = (char *)(*(longlong *)((longlong)local_108 + 0x20) + uVar15);
    if (*(int *)((longlong)local_108 + 0x18) <= (int)uStack_80) {
      pcVar14 = local_188;
    }
    if (*pcVar14 != '\x01') goto code_r0x0001409b89cf;
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b79fb:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
      goto code_r0x0001409b79fb;
    }
LAB_1409b86d0:
    local_94 = 0xb;
LAB_1409b86da:
    local_64 = 0;
    pcVar14 = pcVar22;
    goto LAB_1409b5e45;
  case 0x40:
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 == pcVar14 + -1) {
code_r0x0001409b78e3:
      *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
      uVar15 = (ulonglong)uStack_80;
    }
    else if (pcVar14 <= pcVar23) {
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
      goto code_r0x0001409b78e3;
    }
    pcVar14 = local_f0;
    local_94 = 0xd;
    iVar11 = (int)uVar15;
    if (iVar11 < 0) {
code_r0x0001409b8932:
      if ((uStack_80 & 0xffffffdf) == 0x5b) {
        FUN_1408c69d0(&local_f0,10);
        goto LAB_1409b86da;
      }
      goto LAB_1409bae26;
    }
    pcVar23 = (char *)(uVar15 + local_1b8);
    if (local_1c0 <= iVar11) {
      pcVar23 = acStack_1bc;
    }
    if (*pcVar23 == '\0') {
      if (iVar11 == 0x3a) {
        pcVar23 = local_b8 + 2;
        lVar24 = *(longlong *)(local_f0 + 0xfb0);
        pcVar22 = pcVar14;
        if (((longlong)pcVar23 < lVar24) || (*(longlong *)(local_f0 + 0xfb8) <= (longlong)pcVar23))
        {
          pcVar30 = local_b8 + -0x1f2;
          *(char **)(local_f0 + 0xfb0) = pcVar30;
          pcVar21 = *(char **)(local_f0 + 0xfc8);
          pcVar16 = pcVar21 + -4000;
          if ((longlong)(local_b8 + 0xdae) <= (longlong)pcVar21) {
            pcVar16 = pcVar30;
          }
          if ((longlong)pcVar21 < (longlong)(local_b8 + 0xdae) || (longlong)pcVar16 < 0) {
            if ((longlong)pcVar16 < 1) {
              pcVar16 = (char *)0x0;
            }
            *(char **)(local_f0 + 0xfb0) = pcVar16;
            pcVar30 = pcVar16;
          }
          if ((longlong)(pcVar30 + 4000) < (longlong)pcVar21) {
            pcVar21 = pcVar30 + 4000;
          }
          *(char **)(local_f0 + 0xfb8) = pcVar21;
          (**(code **)(**(longlong **)local_f0 + 0x18))(*(longlong **)local_f0,local_f0 + 8);
          pcVar14[(*(longlong *)(pcVar14 + 0xfb8) - *(longlong *)(pcVar14 + 0xfb0)) + 8] = '\0';
          lVar24 = *(longlong *)(pcVar14 + 0xfb0);
          if (((longlong)pcVar23 < lVar24) || (*(longlong *)(pcVar14 + 0xfb8) <= (longlong)pcVar23))
          goto code_r0x0001409b8932;
        }
        if (pcVar14[(longlong)(pcVar23 + (8 - lVar24))] == ':') {
          pcVar22 = local_b8 + 2;
          do {
            pcVar14 = local_b8;
            if (pcVar22 <= local_b8) break;
            local_64 = 0;
            if (local_e0 <= local_b8) {
              local_98 = 0x100;
              local_90 = 0x2000000020;
              uStack_80 = 0x20;
              pcVar14 = pcVar22;
              goto LAB_1409b5e45;
            }
            local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
            if (local_98._1_1_ == '\x01') {
              lVar24 = local_b0 + 2;
              local_b0 = local_b0 + 1;
              local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))
                                   (*(longlong **)local_f0,lVar24);
            }
            local_b8 = local_b8 + lStack_88;
            local_90 = CONCAT44(uStack_80,local_90._4_4_);
            lStack_88 = local_78;
            FUN_1408c6cd0(&local_f0);
          } while (local_b8 != pcVar14);
          goto LAB_1409b86da;
        }
      }
      goto code_r0x0001409b8932;
    }
    goto LAB_1409b86da;
  default:
    if (local_90._4_4_ != 0x60) goto LAB_1409b774b;
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar14 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 != pcVar14 + -1) {
      if (pcVar23 < pcVar14) {
        local_94 = 0x14;
        local_64 = 0;
        iVar10 = 1;
        local_68 = 0x60;
        local_6c = 0x60;
        local_70 = 1;
        pcVar14 = pcVar22;
        goto LAB_1409b5e45;
      }
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar14))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar14 = *(char **)(pcVar22 + 0x1f78);
        *(longlong *)(pcVar22 + 0x1f80) =
             *(longlong *)(pcVar22 + 0x1f80) + *(longlong *)(pcVar22 + 0x1f70);
        pcVar22[0x1f70] = '\0';
        pcVar22[0x1f71] = '\0';
        pcVar22[0x1f72] = '\0';
        pcVar22[0x1f73] = '\0';
        pcVar22[0x1f74] = '\0';
        pcVar22[0x1f75] = '\0';
        pcVar22[0x1f76] = '\0';
        pcVar22[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar14) + 1 < (char *)0xfa0) {
        for (; pcVar14 <= pcVar23; pcVar14 = pcVar14 + 1) {
          lVar24 = *(longlong *)(pcVar22 + 0x1f70);
          *(longlong *)(pcVar22 + 0x1f70) = lVar24 + 1;
          pcVar22[lVar24 + 0xfd0] = '\0';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar22 + 0x60))
                  (*(longlong **)pcVar22,pcVar23 + (1 - (longlong)pcVar14),0);
      }
    }
    *(char **)(pcVar22 + 0x1f78) = pcVar23 + 1;
    local_94 = 0x14;
    local_6c = local_90._4_4_;
  }
  pcVar14 = pcVar22;
  if ((int)local_6c < 0x5b) {
    iVar10 = 1;
    if (local_6c == 0x28) {
      local_64 = 0;
      local_68 = 0x29;
      local_70 = 1;
      goto LAB_1409b5e45;
    }
    local_64 = 0;
    if (local_6c == 0x3c) {
      local_68 = 0x3e;
      local_70 = 1;
      goto LAB_1409b5e45;
    }
  }
  else {
    iVar10 = 1;
    if (local_6c == 0x7b) {
      local_64 = 0;
      local_68 = 0x7d;
      local_70 = 1;
      goto LAB_1409b5e45;
    }
    local_64 = 0;
    if (local_6c == 0x5b) {
      local_68 = 0x5d;
      local_70 = 1;
      goto LAB_1409b5e45;
    }
  }
  local_64 = 0;
  iVar10 = 1;
  local_68 = local_6c;
  local_70 = 1;
LAB_1409b5e45:
  if (local_b8 < local_e0) {
    local_98 = CONCAT11(local_98._1_1_,local_98._1_1_);
    if (local_98._1_1_ == '\x01') {
      lVar24 = local_b0 + 2;
      local_b0 = local_b0 + 1;
      local_a0 = (**(code **)(**(longlong **)local_f0 + 0x30))(*(longlong **)local_f0,lVar24);
    }
    local_b8 = local_b8 + lStack_88;
    local_90 = CONCAT44(uStack_80,local_90._4_4_);
    lStack_88 = local_78;
    FUN_1408c6cd0(&local_f0);
  }
  else {
    local_98 = 0x100;
    local_90 = 0x2000000020;
    uStack_80 = 0x20;
  }
  goto LAB_1409b3564;
LAB_1409b5b9e:
  if (uVar33 == 0x3d) {
    FUN_1408c69d0(&local_f0,0);
    local_2f0 = CONCAT44(local_2f0._4_4_,3);
    pcVar14 = pcVar23;
  }
  else {
    local_94 = 0xb;
    pcVar23 = local_b8 + (-1 - (ulonglong)(local_d8 < local_b8));
    pcVar22 = *(char **)(local_f0 + 0x1f78);
    if (pcVar23 != pcVar22 + -1) {
      if (pcVar23 < pcVar22) goto LAB_1409b5c50;
      lVar24 = *(longlong *)(local_f0 + 0x1f70);
      if ((0 < lVar24) && ((char *)0xf9f < pcVar23 + lVar24 + (1 - (longlong)pcVar22))) {
        (**(code **)(**(longlong **)local_f0 + 0x68))
                  (*(longlong **)local_f0,lVar24,local_f0 + 0xfd0);
        pcVar22 = *(char **)(pcVar14 + 0x1f78);
        *(longlong *)(pcVar14 + 0x1f80) =
             *(longlong *)(pcVar14 + 0x1f80) + *(longlong *)(pcVar14 + 0x1f70);
        pcVar14[0x1f70] = '\0';
        pcVar14[0x1f71] = '\0';
        pcVar14[0x1f72] = '\0';
        pcVar14[0x1f73] = '\0';
        pcVar14[0x1f74] = '\0';
        pcVar14[0x1f75] = '\0';
        pcVar14[0x1f76] = '\0';
        pcVar14[0x1f77] = '\0';
        lVar24 = 0;
      }
      if (pcVar23 + (lVar24 - (longlong)pcVar22) + 1 < (char *)0xfa0) {
        for (; pcVar22 <= pcVar23; pcVar22 = pcVar22 + 1) {
          lVar24 = *(longlong *)(pcVar14 + 0x1f70);
          *(longlong *)(pcVar14 + 0x1f70) = lVar24 + 1;
          pcVar14[lVar24 + 0xfd0] = '\v';
        }
      }
      else {
        (**(code **)(**(longlong **)pcVar14 + 0x60))
                  (*(longlong **)pcVar14,pcVar23 + (1 - (longlong)pcVar22),0xb);
      }
    }
    *(char **)(pcVar14 + 0x1f78) = pcVar23 + 1;
LAB_1409b5c50:
    local_94 = 0;
  }
  iVar11 = 0;
  goto LAB_1409b5c5d;
LAB_1409b83e8:
  if ((longlong)pcVar23 <= (longlong)pcVar22) goto LAB_1409b83f1;
  goto LAB_1409b84aa;
  while (cVar7 = (**(code **)(*local_22e8 + 0x20))(local_22e8,pcVar22), cVar7 == '\x05') {
code_r0x0001409bad97:
    pcVar23 = pcVar22;
    pcVar22 = pcVar23 + -1;
    if (pcVar23 == (char *)0x0) break;
  }
  cVar7 = FUN_1409bb9b0(pcVar23,pcVar14,local_2700);
  uVar33 = 1;
  uVar13 = extraout_XMM0_Qa_06;
  if (cVar7 == '\0') {
code_r0x0001409badd5:
    if ((uStack_80 - 9 < 0x18 & (byte)(0x80001f >> ((byte)(uStack_80 - 9) & 0x1f))) == 0) {
      uVar33 = (uint)(uStack_80 - 0x3a < 0xfffffff5);
    }
    else {
code_r0x0001409bab88:
      uVar33 = 0;
    }
  }
  goto LAB_1409b965d;
LAB_1409ba7ea:
  FUN_1408c6890(&local_f0,10);
  goto LAB_1409ba7fb;
  while( true ) {
    pcVar22 = pcVar22 + 1;
    cVar7 = pcVar16[1];
    pcVar16 = pcVar16 + 1;
    if (pcVar22 == (char *)0x9) break;
LAB_1409b9f07:
    pcVar17 = pcVar22 + (longlong)pcVar23;
    if (((longlong)pcVar17 < (longlong)pcVar30) || ((longlong)pcVar21 <= (longlong)pcVar17)) {
      local_1338 = pcVar17 + -500;
      pcVar30 = local_1320 + -4000;
      if ((((longlong)local_1320 < (longlong)(pcVar17 + 0xdac)) ||
          (pcVar30 = local_1338, (longlong)local_1338 < 0)) &&
         (local_1338 = pcVar30, (longlong)local_1338 < 1)) {
        local_1338 = (char *)0x0;
      }
      local_1330 = local_1320;
      if ((longlong)(local_1338 + 4000) < (longlong)local_1320) {
        local_1330 = local_1338 + 4000;
      }
      (**(code **)(*local_22e8 + 0x18))(local_22e8,local_22e0);
      local_1330[(longlong)(local_22e0 + -(longlong)local_1338)] = '\0';
      cVar6 = ' ';
      pcVar30 = local_1338;
      pcVar21 = local_1330;
      if ((longlong)pcVar17 < (longlong)local_1330 && (longlong)local_1338 <= (longlong)pcVar17)
      goto LAB_1409b9fc8;
    }
    else {
LAB_1409b9fc8:
      cVar6 = pcVar17[(longlong)(local_22e0 + -(longlong)pcVar30)];
    }
    if (cVar7 != cVar6) goto LAB_1409ba1e5;
  }
  iVar11 = 1;
  if (local_11c != 0) goto LAB_1409bb101;
  goto LAB_1409ba1fb;
LAB_1409ba1e5:
  iVar11 = 2;
  if (1 < local_11c - 1U) goto LAB_1409bb101;
LAB_1409ba1fb:
  pcVar23 = (char *)0x0;
  local_11c = iVar11;
  if (pcVar14 != (char *)0x0) {
    pcVar23 = pcVar14 + -1;
  }
joined_r0x0001409b9d0d:
  if (pcVar23 == (char *)0x0) goto LAB_1409bb101;
  goto LAB_1409b9cf6;
}

