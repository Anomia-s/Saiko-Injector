/**
 * Function: member_s_of_struct_s_does_not_have_a_type
 * Address:  1405e7670
 * Signature: undefined member_s_of_struct_s_does_not_have_a_type(void)
 * Body size: 849 bytes
 */


longlong member_s_of_struct_s_does_not_have_a_type(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_258 [32];
  char *local_238;
  undefined8 local_230;
  undefined8 local_220;
  longlong *local_218;
  char local_209;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [248];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_258;
  uVar5 = FUN_140396810(param_1,local_140);
  lVar6 = *param_2;
  if (lVar6 == 0) {
    lVar6 = FUN_1400b8760(uVar5);
  }
  local_220 = FUN_1403aeb80(uVar5,lVar6);
  lVar9 = 0;
  plVar8 = param_2;
  local_218 = param_2;
  while( true ) {
    if (*(longlong *)((longlong)param_2 + lVar9 + 8) == 0) {
      bVar10 = lVar9 == 0;
      goto LAB_1405e7901;
    }
    if (*(longlong *)((longlong)param_2 + lVar9 + 0x10) == 0) break;
    puVar1 = (undefined4 *)((longlong)param_2 + lVar9 + 8);
    local_1a8 = *(undefined8 *)(puVar1 + 0x18);
    local_1b8 = *(undefined8 *)(puVar1 + 0x14);
    uStack_1b0 = *(undefined8 *)(puVar1 + 0x16);
    local_1c8 = *(undefined8 *)(puVar1 + 0x10);
    uStack_1c0 = *(undefined8 *)(puVar1 + 0x12);
    local_208 = *puVar1;
    uStack_204 = puVar1[1];
    uStack_200 = puVar1[2];
    uStack_1fc = puVar1[3];
    local_1f8 = puVar1[4];
    uStack_1f4 = puVar1[5];
    uStack_1f0 = puVar1[6];
    uStack_1ec = puVar1[7];
    local_1e8 = puVar1[8];
    uStack_1e4 = puVar1[9];
    uStack_1e0 = puVar1[10];
    uStack_1dc = puVar1[0xb];
    local_1d8 = puVar1[0xc];
    uStack_1d4 = puVar1[0xd];
    uStack_1d0 = puVar1[0xe];
    uStack_1cc = puVar1[0xf];
    local_209 = '\0';
    lVar2 = plVar8[0x1a1];
    iVar4 = member_ss_has_an_invalid_error_range_ff(uVar5,lVar6,&local_208,&local_209);
    cVar3 = local_209;
    if (iVar4 != 0) goto LAB_1405e797b;
    if ((char)lVar2 == '\0') {
      iVar4 = entity_s_for_member_s_is_not_a_unit(uVar5,lVar6,0,&local_208);
      if (iVar4 != 0) goto LAB_1405e797b;
    }
    else {
      local_238 = (char *)0x0;
      uVar7 = FUN_1403af200(uVar5,lVar6,CONCAT44(uStack_204,local_208),".");
      local_160 = CONCAT44(uStack_1fc,uStack_200);
      local_158 = local_1f8;
      local_154 = 0;
      local_150 = CONCAT44(uStack_1ec,uStack_1f0);
      local_148 = uStack_1f4;
      local_144 = 0;
      local_238 = (char *)&local_160;
      FUN_1400bb430(uVar5,uVar7,0x167,0x20);
      plVar8 = local_218;
      if (cVar3 == '\x01') {
        local_198 = CONCAT44(uStack_1dc,uStack_1e0);
        uStack_190 = CONCAT44(uStack_1d4,local_1d8);
        local_188 = uStack_1c0;
        uStack_180 = local_1b8;
        local_178 = uStack_1d0;
        uStack_174 = uStack_1cc;
        uStack_170 = (undefined4)local_1c8;
        uStack_16c = local_1c8._4_4_;
        local_238 = (char *)&local_198;
        FUN_1400bb430(uVar5,uVar7,0x168,0x30);
        plVar8 = local_218;
      }
    }
    lVar9 = lVar9 + 0x68;
    if (lVar9 == 0xd00) {
      bVar10 = false;
LAB_1405e7901:
      FUN_1403aeb80(uVar5,local_220);
      FUN_1403969b0(uVar5,local_140);
      if (bVar10) {
        uVar7 = FUN_1400ba6e0(uVar5,lVar6,0x169,0x10);
        local_238 = "vec<ecs_member_t>";
        FUN_1403b2710(0,uVar7,0x68,0);
        FUN_1400ba7b0(uVar5,lVar6,0x169);
      }
      else {
        cVar3 = FUN_1400b9b40(uVar5,lVar6);
        if (cVar3 == '\0') {
LAB_1405e797b:
          FUN_1403969b0(uVar5,local_140);
          if (lVar6 != 0) {
            FUN_1400ba990(uVar5,lVar6);
          }
          lVar6 = 0;
        }
      }
      if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_258)) {
                    /* WARNING: Subroutine does not return */
        FUN_140b65db0(local_48 ^ (ulonglong)auStack_258);
      }
      return lVar6;
    }
  }
  local_230 = FUN_1403af230(uVar5,lVar6);
  local_238 = *(char **)((longlong)param_2 + lVar9 + 8);
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                ,0x21a,"member \'%s\' of struct \'%s\' does not have a type");
  goto LAB_1405e797b;
}

