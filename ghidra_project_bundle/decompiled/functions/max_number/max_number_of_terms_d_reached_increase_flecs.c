/**
 * Function: max_number_of_terms_d_reached_increase_flecs
 * Address:  1403af4c0
 * Signature: undefined max_number_of_terms_d_reached_increase_flecs(void)
 * Body size: 1068 bytes
 */


undefined8
max_number_of_terms_d_reached_increase_flecs
          (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,longlong param_5,
          int *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined2 local_1a0;
  undefined4 local_19e;
  undefined2 local_19a;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  ulonglong uStack_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_1f8;
  if ((*param_3 == '0') && (param_3[1] == '\0')) {
    *param_6 = 0;
  }
  else {
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0x100;
    local_19e = 0;
    local_19a = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_170 = &local_168;
    uStack_178 = 0;
    iVar10 = 0;
    uVar8 = 0xffffffff;
    local_1d0 = param_2;
    local_1c8 = param_3;
    local_1c0 = param_3;
    local_1b8 = param_4;
    local_198 = param_1;
    do {
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_c8 = 0;
      uStack_d0 = 0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_120 = 0;
      local_128 = 0;
      uStack_130 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      puVar11 = &local_158;
      if (iVar10 == 0x20) {
        local_1d8 = 0x20;
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/query_dsl/parser.c"
                      ,0x237,
                      "max number of terms (%d) reached, increase FLECS_TERM_COUNT_MAX to support more"
                     );
        uVar8 = 0xffffffff;
        goto LAB_1403af88f;
      }
      lVar6 = (longlong)iVar10;
      lVar9 = param_5 + lVar6 * 0x48;
      puVar1 = (undefined8 *)(param_5 + 0x30 + lVar6 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_5 + 0x20 + lVar6 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_5 + 0x10 + lVar6 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_5 + lVar6 * 0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_5 + 0x40 + lVar6 * 0x48) = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      local_180 = lVar9;
      param_3 = (char *)unexpected_ss(&local_1d0,param_3);
      if (param_3 == (char *)0x0) goto LAB_1403af88f;
      cVar5 = FUN_1403936d0(lVar9);
      if (cVar5 == '\0') break;
      iVar10 = iVar10 + 1;
      cVar5 = FUN_140392fa0(&local_168);
      if (cVar5 != '\0') {
        puVar7 = (undefined4 *)(param_5 + (longlong)iVar10 * 0x48);
        lVar9 = 0;
        do {
          if ((longlong)iVar10 + -0x20 == lVar9) {
            local_1d8 = 0x20;
            FUN_140399630(0xfffffffd,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/query_dsl/parser.c"
                          ,0x25b,
                          "max number of terms (%d) reached, increase FLECS_TERM_COUNT_MAX to support more"
                         );
            goto LAB_1403af88f;
          }
          *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar7 + -2);
          puVar7[0xc] = puVar7[-6];
          puVar7[0xd] = puVar7[-5];
          puVar7[0xe] = puVar7[-4];
          puVar7[0xf] = puVar7[-3];
          puVar7[8] = puVar7[-10];
          puVar7[9] = puVar7[-9];
          puVar7[10] = puVar7[-8];
          puVar7[0xb] = puVar7[-7];
          puVar7[4] = puVar7[-0xe];
          puVar7[5] = puVar7[-0xd];
          puVar7[6] = puVar7[-0xc];
          puVar7[7] = puVar7[-0xb];
          *puVar7 = puVar7[-0x12];
          puVar7[1] = puVar7[-0x11];
          puVar7[2] = puVar7[-0x10];
          puVar7[3] = puVar7[-0xf];
          if ((int)uStack_178 == 1) {
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + -0x10);
            *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar7 + -0xe);
            uVar2 = *(undefined4 *)((longlong)puVar11 + -0xc);
            uVar3 = *(undefined4 *)(puVar11 + -1);
            uVar4 = *(undefined4 *)((longlong)puVar11 + -4);
            puVar7[10] = *(undefined4 *)(puVar11 + -2);
            puVar7[0xb] = uVar2;
            puVar7[0xc] = uVar3;
            puVar7[0xd] = uVar4;
            *(undefined2 *)((longlong)puVar7 + -6) = 1;
          }
          else if ((int)uStack_178 == 0) {
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + -8);
            *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar7 + -6);
            uVar2 = *(undefined4 *)((longlong)puVar11 + -0xc);
            uVar3 = *(undefined4 *)(puVar11 + -1);
            uVar4 = *(undefined4 *)((longlong)puVar11 + -4);
            puVar7[10] = *(undefined4 *)(puVar11 + -2);
            puVar7[0xb] = uVar2;
            puVar7[0xc] = uVar3;
            puVar7[0xd] = uVar4;
          }
          cVar5 = FUN_140392fa0(puVar11);
          lVar9 = lVar9 + -1;
          puVar7 = puVar7 + 0x12;
          puVar11 = puVar11 + 2;
        } while (cVar5 != '\0');
        iVar10 = iVar10 - (int)lVar9;
      }
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
    } while (*param_3 != '\0');
    *param_6 = *param_6 + iVar10;
  }
  uVar8 = 0;
LAB_1403af88f:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_1f8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_1f8);
}

