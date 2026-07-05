/**
 * Function: cannot_cast_identifier_s_to_s
 * Address:  140767b70
 * Signature: undefined cannot_cast_identifier_s_to_s(void)
 * Body size: 1067 bytes
 */


int cannot_cast_identifier_s_to_s
              (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 auStack_898 [32];
  undefined8 local_878;
  undefined8 local_870;
  undefined4 local_864;
  undefined1 local_860 [2080];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_898;
  if (*(char *)(param_3 + 0x80a) == '\x01') {
    lVar5 = FUN_140758660(param_3);
    if (lVar5 == 0) goto LAB_140767c40;
LAB_140767bc4:
    piVar6 = (int *)FUN_1400ba4f0(*param_1,lVar5,0x16e);
    if ((piVar6 == (int *)0x0) || (1 < *piVar6 - 1U)) goto LAB_140767c40;
    *(longlong *)(param_2 + 8) = lVar5;
    lVar10 = FUN_1407611d0(param_1,param_2,lVar5);
    cannot_open_scope_for_s_missing_reflection_da
              (local_860,*param_1,*(undefined8 *)(param_2 + 8),lVar10 + 0x28);
    iVar3 = s_is_not_an_enum_constant_for_type_s(local_860,*(undefined8 *)(param_2 + 0x20));
    if (iVar3 == 0) {
      *(longlong *)(lVar10 + 0x20) = lVar10 + 0x28;
      *(longlong *)(param_2 + 0x28) = lVar10;
      goto LAB_140767f60;
    }
LAB_140767c2b:
    ecs_expr_initializer_t(param_1,lVar10);
    iVar3 = -1;
    goto LAB_140767f62;
  }
  lVar5 = *(longlong *)(param_2 + 8);
  if (lVar5 != 0) goto LAB_140767bc4;
LAB_140767c40:
  lVar7 = (**(code **)(param_4 + 0x20))
                    (*param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_4 + 0x28));
  if (lVar7 == 0) {
    pcVar1 = *(char **)(param_2 + 0x20);
    if (((*pcVar1 == '#') && (pcVar1[1] == '0')) && (pcVar1[2] == '\0')) goto LAB_140767d1b;
    local_864 = 0xffffffff;
    lVar5 = FUN_1405f1090(*(undefined8 *)(param_4 + 0x10),pcVar1,&local_864);
    pcVar1 = *(char **)(param_2 + 0x20);
    if (lVar5 != 0) {
      uVar9 = FUN_140761240(param_1,param_2,pcVar1);
      *(undefined8 *)(param_2 + 0x28) = uVar9;
      uVar11 = *(undefined8 *)(lVar5 + 8);
      goto LAB_140767ce4;
    }
    for (pcVar12 = strchr(pcVar1,0x2e); pcVar12 != (char *)0x0; pcVar12 = strchr(pcVar12 + 1,0x2e))
    {
      if ((pcVar12 == pcVar1) || (pcVar12[-1] != '\\')) {
        *pcVar12 = '\0';
        lVar5 = FUN_1405f1090(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_2 + 0x20),0);
        if (lVar5 == 0) {
          *pcVar12 = '.';
          cVar2 = *(char *)(param_4 + 0x32);
          goto joined_r0x000140767f27;
        }
        uVar11 = FUN_140761240(param_1,param_2,*(undefined8 *)(param_2 + 0x20));
        uVar11 = FUN_1407612a0(param_1,uVar11,pcVar12 + 1);
        *(undefined8 *)(param_2 + 0x28) = uVar11;
        memset(local_860,0,0x820);
        iVar3 = unknown_type_for_initializer(param_1,uVar11,local_860,param_4);
        if (iVar3 != 0) {
          ecs_expr_initializer_t(param_1);
          *(undefined8 *)(param_2 + 0x28) = 0;
          iVar3 = -1;
          goto LAB_140767f62;
        }
        uVar11 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8);
        goto LAB_140767f5c;
      }
    }
    cVar2 = *(char *)(param_4 + 0x32);
joined_r0x000140767f27:
    if (cVar2 == '\0') {
      local_878 = *(undefined8 *)(param_2 + 0x20);
      FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                    "unresolved identifier \'%s\'");
      iVar3 = -1;
      goto LAB_140767f62;
    }
    uVar11 = 0x161;
LAB_140767f5c:
    *(undefined8 *)(param_2 + 8) = uVar11;
  }
  else {
    puVar8 = (undefined8 *)FUN_1400ba4f0(*param_1,lVar7,DAT_1416dfb90);
    if (puVar8 != (undefined8 *)0x0) {
      uVar9 = FUN_140761240(param_1,param_2,*(undefined8 *)(param_2 + 0x20));
      *(undefined8 *)(param_2 + 0x28) = uVar9;
      uVar11 = *puVar8;
LAB_140767ce4:
      *(undefined8 *)(param_2 + 8) = uVar11;
      memset(local_860,0,0x820);
      iVar3 = unknown_type_for_initializer(param_1,uVar9,local_860,param_4);
      iVar3 = -(uint)(iVar3 != 0);
      goto LAB_140767f62;
    }
LAB_140767d1b:
    if (lVar5 == 0) {
      lVar5 = 0x161;
      lVar10 = FUN_1407611d0(param_1,param_2,0x161);
LAB_140767e16:
      *(longlong *)(lVar10 + 0x28) = lVar7;
      *(longlong *)(lVar10 + 0x20) = lVar10 + 0x28;
    }
    else {
      cVar2 = FUN_140769920(*param_1,lVar5,&local_864);
      if (cVar2 == '\0') {
        local_878 = 0;
        uVar11 = FUN_1403ae340(*param_1,0,lVar5,".");
        local_878 = *(undefined8 *)(param_2 + 0x20);
        local_870 = uVar11;
        FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                      "cannot cast identifier \'%s\' to %s");
        (*DAT_1415033b0)(uVar11);
        iVar3 = -1;
        goto LAB_140767f62;
      }
      cVar2 = (char)local_864;
      lVar10 = FUN_1407611d0(param_1,param_2,lVar5);
      if (cVar2 == '\0') goto LAB_140767e16;
      uVar4 = FUN_1403a55a0(*param_1,lVar5);
      uVar11 = FUN_140391250(*param_1 + 0xcc0,uVar4);
      uVar11 = FUN_140391500(uVar11);
      *(undefined8 *)(lVar10 + 0x20) = uVar11;
      cannot_open_scope_for_s_missing_reflection_da(local_860,*param_1,lVar5,uVar11);
      iVar3 = FUN_14075a220(local_860,lVar7);
      if (iVar3 != 0) goto LAB_140767c2b;
    }
    *(longlong *)(param_2 + 0x28) = lVar10;
    *(longlong *)(param_2 + 8) = lVar5;
  }
LAB_140767f60:
  iVar3 = 0;
LAB_140767f62:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_898)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_898);
}

