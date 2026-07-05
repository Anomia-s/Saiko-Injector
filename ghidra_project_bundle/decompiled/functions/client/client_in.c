/**
 * Function: client_in
 * Address:  140cc7420
 * Signature: undefined client_in(void)
 * Body size: 1054 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void client_in(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4,longlong param_5,
              longlong param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_2a8 [32];
  char *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  undefined4 local_258;
  int local_248;
  longlong local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  byte *local_228;
  longlong local_220;
  ulonglong local_218;
  undefined1 local_210 [40];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  char local_a8 [32];
  char local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140cc7442;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2a8;
  local_238 = param_2;
  local_228 = param_3;
  if (((param_5 == 0) && (param_6 == 0)) ||
     (lVar4 = FUN_140b71980(param_1,"SHA256",param_2), lVar4 == 0)) goto LAB_140cc772b;
  local_22c = 1;
  pcVar8 = local_88;
  pcVar1 = local_a8;
  if (param_4 != 0) {
    pcVar8 = local_a8;
    pcVar1 = local_88;
  }
  local_218 = (ulonglong)*local_228;
  local_248 = 0;
  lVar7 = 0;
  local_240 = 0;
  local_230 = 0;
  local_220 = FUN_140b97a80(lVar4);
  lVar6 = 0;
  if (((local_220 != 0) &&
      (lVar7 = FUN_140c47d50(param_1,&DAT_1413a698c,local_238), lVar6 = local_240, lVar7 != 0)) &&
     (local_240 = FUN_140c480e0(lVar7), lVar6 = local_240, local_240 != 0)) {
    puVar5 = (undefined8 *)FUN_140b935b0(local_210,"key-check",&local_230);
    local_1e8 = *puVar5;
    uStack_1e0 = puVar5[1];
    local_1d8 = *(undefined4 *)(puVar5 + 2);
    uStack_1d4 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_1d0 = *(undefined4 *)(puVar5 + 3);
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_1c8 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b935b0(local_210,&DAT_1413a62f8,&local_22c);
    local_1c0 = *puVar5;
    uStack_1b8 = puVar5[1];
    local_1b0 = *(undefined4 *)(puVar5 + 2);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_1a8 = *(undefined4 *)(puVar5 + 3);
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_1a0 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b93780(local_210,"digest",local_220,0);
    local_198 = *puVar5;
    uStack_190 = puVar5[1];
    local_188 = *(undefined4 *)(puVar5 + 2);
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_180 = *(undefined4 *)(puVar5 + 3);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_178 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b93860(local_210,&DAT_1413a5aa0,&DAT_141285778,0x14);
    local_170 = *puVar5;
    uStack_168 = puVar5[1];
    local_160 = *(undefined4 *)(puVar5 + 2);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_158 = *(undefined4 *)(puVar5 + 3);
    uStack_154 = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_150 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b93860(local_210,&DAT_1413a593c,local_228 + 1,local_218);
    local_148 = *puVar5;
    uStack_140 = puVar5[1];
    local_138 = *(undefined4 *)(puVar5 + 2);
    uStack_134 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_130 = *(undefined4 *)(puVar5 + 3);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_128 = puVar5[4];
    puVar5 = (undefined8 *)FUN_140b93900(local_210);
    local_120 = *puVar5;
    uStack_118 = puVar5[1];
    local_110 = *(undefined4 *)(puVar5 + 2);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0x14);
    uStack_108 = *(undefined4 *)(puVar5 + 3);
    uStack_104 = *(undefined4 *)((longlong)puVar5 + 0x1c);
    local_100 = puVar5[4];
    local_248 = FUN_140c48410(local_240,local_68,0x20,&local_1e8);
    lVar6 = local_240;
  }
  FUN_140c481d0(lVar6);
  FUN_140c47cf0(lVar7);
  uVar2 = local_238;
  if (local_248 != 0) {
    if (((param_6 != 0) && (pcVar1 == local_a8)) || ((param_5 != 0 && (pcVar8 == local_a8)))) {
      local_268 = local_a8;
      local_258 = 1;
      local_260 = 0x20;
      local_270 = 0;
      local_278 = 0;
      local_280 = 9;
      local_288 = "client in";
      iVar3 = FUN_140bbb470(param_1,local_238,lVar4,local_68);
      if (iVar3 == 0) goto LAB_140cc7721;
    }
    if ((param_6 == 0) || (pcVar1 != local_88)) {
      if (param_5 != 0) {
        if (pcVar8 == local_88) goto LAB_140cc7780;
        goto LAB_140cc77e0;
      }
LAB_140cc7821:
      if (param_6 == 0) goto LAB_140cc772b;
LAB_140cc7826:
      local_280 = 0x20;
      local_288 = pcVar1;
      iVar3 = FUN_140cc8e00(param_6,0,1,lVar4);
      if (iVar3 != 0) goto LAB_140cc772b;
    }
    else {
LAB_140cc7780:
      local_258 = 1;
      local_268 = local_88;
      local_260 = 0x20;
      local_270 = 0;
      local_278 = 0;
      local_280 = 9;
      local_288 = "server in";
      iVar3 = FUN_140bbb470(param_1,uVar2,lVar4,local_68);
      if (iVar3 != 0) {
        if (param_5 == 0) goto LAB_140cc7821;
LAB_140cc77e0:
        local_280 = 0x20;
        local_288 = pcVar8;
        iVar3 = FUN_140cd2bb0(param_5,0,1,lVar4);
        if (iVar3 != 0) {
          if (param_6 == 0) goto LAB_140cc772b;
          iVar3 = FUN_140b719d0(lVar4);
          if (iVar3 != 0) goto LAB_140cc7826;
          lVar4 = 0;
        }
      }
    }
  }
LAB_140cc7721:
  FUN_140b719e0(lVar4);
LAB_140cc772b:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_2a8);
}

