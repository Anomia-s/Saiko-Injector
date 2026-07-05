/**
 * Function: entity_s_not_found
 * Address:  1403cee90
 * Signature: undefined entity_s_not_found(void)
 * Body size: 856 bytes
 */


void entity_s_not_found(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  FILE *_File;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong *plVar6;
  size_t _Size;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_cc;
  longlong local_c8 [2];
  char *local_b8;
  FILE *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  local_e0 = 0;
  local_e8 = 0;
  lVar3 = FUN_1403ae520(param_1,0,param_4,&DAT_14137ac84);
  if (lVar3 == 0) {
    error(param_3,"entity \'%s\' not found",param_4);
    *param_3 = 0x194;
    local_98 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_58 = 0;
    uStack_90 = param_4;
    lVar3 = s_is_invalid_for_ecs_entity_desc_t_add_expr(param_1,&local_a8);
  }
  pcVar4 = (char *)FUN_1405f7fe0(param_2,"check_file");
  if (pcVar4 == (char *)0x0) {
    bVar8 = false;
  }
  else {
    iVar2 = strcmp(pcVar4,"true");
    bVar8 = iVar2 == 0;
  }
  pcVar4 = (char *)FUN_1405f7fe0(param_2,"save_file");
  if (pcVar4 == (char *)0x0) {
    bVar9 = false;
  }
  else {
    iVar2 = strcmp(pcVar4,"true");
    bVar9 = iVar2 == 0;
  }
  pcVar4 = (char *)FUN_1405f7fe0(param_2,"code");
  if (pcVar4 == (char *)0x0) {
    pcVar4 = *(char **)(param_2 + 0x18);
  }
  pcVar5 = (char *)FUN_1405f7fe0(param_2,"try");
  if (pcVar5 == (char *)0x0) {
    local_cc = 0;
  }
  else {
    iVar2 = strcmp(pcVar5,"true");
    local_cc = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
  }
  pcVar5 = "";
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  puVar1 = param_3 + 2;
  FUN_1403b7a10(puVar1,"{",1);
  plVar6 = (longlong *)FUN_1400ba4f0(param_1,lVar3,DAT_1416dfb78);
  if (plVar6 != (longlong *)0x0) {
    if ((bool)((char *)*plVar6 != (char *)0x0 & bVar9)) {
      fopen_s(&local_b0,(char *)*plVar6,"w");
      _File = local_b0;
      _Size = strlen(pcVar5);
      fwrite(pcVar5,_Size,1,_File);
      fclose(local_b0);
    }
    if (bVar8) {
      FUN_1403b7a10(puVar1,"\"changed\": ",0xb);
      if (*plVar6 == 0) {
        pcVar4 = "false";
      }
      else {
        pcVar4 = (char *)s_read_zero_bytes_instead_of_d();
        if (pcVar4 == (char *)0x0) {
          bVar8 = *pcVar5 == '\0';
        }
        else {
          iVar2 = strcmp(pcVar5,pcVar4);
          bVar8 = iVar2 == 0;
          (*DAT_1415033b0)(pcVar4);
        }
        pcVar4 = "true";
        if (bVar8) {
          pcVar4 = "false";
        }
      }
      FUN_1403b8780(puVar1,pcVar4);
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  }
  local_c8[1] = 0;
  local_c8[0] = lVar3;
  local_b8 = pcVar5;
  FUN_1403cadd0(param_1,local_c8);
  lVar3 = FUN_1400ba4f0(param_1,lVar3,DAT_1416dfb78);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) != 0)) {
    if (bVar8) {
      FUN_1403b7a10(puVar1,&DAT_1413a1e41,2);
    }
    uVar7 = FUN_1403d2b10(0x22,*(undefined8 *)(lVar3 + 0x10));
    FUN_1403b79b0(puVar1,"\"error\": \"%s\"",uVar7);
    (*DAT_1415033b0)(uVar7);
    if ((char)local_cc == '\0') {
      *param_3 = 400;
    }
  }
  FUN_1403b7a10(puVar1,"}",1);
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_108);
}

