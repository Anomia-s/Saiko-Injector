/**
 * Function: unresolved_path_s_in_using_statement
 * Address:  1405f1ff0
 * Signature: undefined unresolved_path_s_in_using_statement(void)
 * Body size: 566 bytes
 */


undefined8 unresolved_path_s_in_using_statement(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char *_Str;
  char cVar2;
  size_t sVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [20];
  int local_19c;
  longlong local_198;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  uVar1 = *(undefined8 *)(param_1 + 0x450);
  _Str = *(char **)(param_2 + 0x10);
  sVar3 = strlen(_Str);
  if (((((int)sVar3 < 3) || (uVar4 = (ulonglong)((int)sVar3 - 2), _Str[uVar4] != '.')) ||
      (_Str[uVar4 + 1] != '*')) || (_Str[uVar4 + 2] != '\0')) {
    local_210 = 0;
    local_218 = 0;
    uVar9 = 0;
    lVar5 = FUN_1403ae520(*(undefined8 *)(param_1 + 0x448),0,_Str,0);
    if (lVar5 == 0) {
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      local_1f8 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1b8 = 0;
      uStack_1f0 = *(undefined8 *)(param_2 + 0x10);
      puStack_1e0 = &DAT_1413a2ad6;
      lVar5 = s_is_invalid_for_ecs_entity_desc_t_add_expr
                        (*(undefined8 *)(param_1 + 0x448),&local_208);
      if (lVar5 == 0) {
        uVar9 = 0xffffffff;
        goto LAB_1405f20ed;
      }
    }
    plVar6 = (longlong *)FUN_1403b2f60(uVar1,*(longlong *)(param_1 + 0x450) + 0x3098,8);
    *plVar6 = lVar5;
  }
  else {
    lVar5 = FUN_1403912b0(uVar1,_Str);
    *(undefined1 *)(lVar5 + uVar4) = 0;
    lVar7 = FUN_1403ae4f0(*(undefined8 *)(param_1 + 0x448),lVar5);
    if (lVar7 == 0) {
      FUN_1405f0f70(param_1,param_2,"unresolved path \'%s\' in using statement",lVar5);
      FUN_140391350(uVar1,lVar5);
      uVar9 = 0xffffffff;
    }
    else {
      FUN_1401f97c0(local_1b0,*(undefined8 *)(param_1 + 0x448),lVar7);
      cVar2 = FUN_1401f96f0(local_1b0);
      if (cVar2 != '\0') {
        do {
          lVar7 = (longlong)local_19c;
          if (0 < lVar7) {
            lVar10 = 0;
            do {
              uVar9 = *(undefined8 *)(local_198 + lVar10 * 8);
              puVar8 = (undefined8 *)FUN_1403b2f60(uVar1,*(longlong *)(param_1 + 0x450) + 0x3098,8);
              *puVar8 = uVar9;
              lVar10 = lVar10 + 1;
            } while (lVar7 != lVar10);
          }
          cVar2 = FUN_1401f96f0(local_1b0);
        } while (cVar2 != '\0');
      }
      FUN_140391350(uVar1,lVar5);
      uVar9 = 0;
    }
  }
LAB_1405f20ed:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_238)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_238);
  }
  return uVar9;
}

