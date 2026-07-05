/**
 * Function: invalid_identifier_s
 * Address:  1403aec70
 * Signature: undefined invalid_identifier_s(void)
 * Body size: 1053 bytes
 */


ulonglong invalid_identifier_s
                    (longlong param_1,ulonglong param_2,longlong param_3,char *param_4,char *param_5
                    ,char *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined1 local_160;
  char *local_158;
  undefined4 local_148;
  undefined4 local_144;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
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
  undefined4 local_cc;
  undefined1 *local_c8;
  char local_b9;
  char *local_b8;
  longlong local_b0;
  undefined1 local_a8 [72];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_188;
  local_b8 = param_4;
  cVar1 = FUN_140396390(param_1,0x65637373);
  lVar3 = param_1;
  if (cVar1 != '\0') {
    lVar3 = FUN_1403963b0(param_1);
  }
  pcVar10 = ".";
  if (param_5 != (char *)0x0) {
    pcVar10 = param_5;
  }
  if (param_4 == (char *)0x0) {
    uVar5 = param_2;
    if (param_2 == 0) {
      uVar5 = FUN_1400b86a0(param_1);
    }
    if (param_3 != 0) {
      thunk_FUN_1400b7e20(param_1,uVar5,uVar5 & 0xffffffff | 0x8000012600000000);
    }
  }
  else {
    if (param_6 == (char *)0x0) {
      local_144 = 0;
    }
    else {
      sVar4 = strlen(param_6);
      iVar2 = strncmp(param_4,param_6,(longlong)(int)sVar4);
      local_144 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
    }
    local_b9 = '\0';
    local_160 = param_2 == 0;
    local_158 = &local_b9;
    local_168 = param_6;
    uVar5 = FUN_1403ae8b0(param_1,param_3,&local_b8,pcVar10);
    pcVar7 = local_b8;
    if (local_b9 == '\x01') {
      local_168 = local_b8;
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/entity_name.c"
                    ,0x382,"invalid identifier: \'%s\'");
      uVar5 = 0;
    }
    else {
      local_c8 = local_a8;
      local_cc = 0x40;
      uVar6 = FUN_140396b90(param_1);
      if ((char)uVar6 == '\0') {
        local_148 = 0;
        cVar1 = *pcVar10;
      }
      else {
        local_148 = (undefined4)
                    CONCAT71((int7)((ulonglong)uVar6 >> 8),(*(byte *)(lVar3 + 3000) & 0x80) == 0);
        cVar1 = *pcVar10;
      }
      if (cVar1 == '\0') {
        local_168 = pcVar7;
        FUN_1403af090(param_1,local_148,uVar5,param_2);
      }
      else {
        lVar3 = FUN_1403ae9d0(pcVar7,pcVar10,&local_c8,&local_cc);
        if (lVar3 != 0) {
          local_130 = 0x800001260000010e;
          pcVar7 = (char *)0x0;
          uVar11 = uVar5;
          local_140 = param_2;
          do {
            puVar12 = local_c8;
            uVar5 = FUN_1403ae3f0(param_1,uVar11,local_c8);
            if (uVar5 == 0) {
              if (pcVar7 != (char *)0x0) {
                (*DAT_1415033b0)(pcVar7);
                puVar12 = local_c8;
              }
              pcVar7 = (char *)(*DAT_1415033b8)(puVar12);
              lVar8 = FUN_1403ae9d0(lVar3,pcVar10,0,0);
              if ((local_140 == 0) || (uVar5 = local_140, lVar8 != 0)) {
                if (lVar8 == 0) {
                  local_b0 = param_1;
                  lVar9 = FUN_1400bd860(&local_b0);
                  local_138 = *(undefined8 *)(lVar9 + 0x120);
                  *(undefined8 *)(lVar9 + 0x120) = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_d8 = 0;
                  uVar5 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1,&local_128);
                  local_b0 = param_1;
                  lVar9 = FUN_1400bd860(&local_b0);
                  *(undefined8 *)(lVar9 + 0x120) = local_138;
                  goto LAB_1403aefaa;
                }
                uVar5 = FUN_1400b86a0(param_1);
              }
              else {
LAB_1403aefaa:
                if (((lVar8 == 0 && uVar11 == 0) & (byte)local_144) == 1) {
                  thunk_FUN_1400b7f20(param_1,uVar5,local_130);
                }
              }
              local_168 = pcVar7;
              FUN_1403af090(param_1,local_148,uVar11,uVar5);
            }
            lVar3 = FUN_1403ae9d0(lVar3,pcVar10,&local_c8,&local_cc);
            uVar11 = uVar5;
          } while (lVar3 != 0);
          if (pcVar7 != (char *)0x0) {
            (*DAT_1415033b0)(pcVar7);
          }
        }
        if (local_c8 != local_a8) {
          (*DAT_1415033b0)();
        }
      }
    }
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_188)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_188);
}

