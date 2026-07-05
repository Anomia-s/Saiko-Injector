/**
 * Function: s_is_not_an_enum_constant_for_type_s
 * Address:  140759cc0
 * Signature: undefined s_is_not_an_enum_constant_for_type_s(void)
 * Body size: 1374 bytes
 */


undefined8 s_is_not_an_enum_constant_for_type_s(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint *puVar12;
  undefined1 auStack_78 [32];
  char *local_58;
  char *local_50;
  double local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (param_2 == (char *)0x0) {
    if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
      uVar10 = no_object_to_assign();
      return uVar10;
    }
    goto LAB_14075a211;
  }
  lVar6 = (longlong)*(short *)(param_1 + 0x101);
  puVar12 = (uint *)((longlong)*(short *)((longlong)param_1 + lVar6 * 0x40 + 0x1a) * 0x38 +
                    param_1[lVar6 * 8 + 2]);
  pdVar7 = (double *)missing_ensure_element_for_opaque_type_s(*param_1,param_1 + lVar6 * 8 + 1);
  if (pdVar7 == (double *)0x0) {
    pcVar11 = "no object to assign";
    uVar10 = 0x584;
    goto LAB_14075a1db;
  }
  uVar1 = *puVar12;
  if ((uVar1 - 0xf < 0xd) && (9 < (int)*param_2 - 0x30U && *param_2 != '-')) {
    pcVar11 = "expected number, got \'%s\'";
    uVar10 = 0x597;
    local_58 = param_2;
    goto LAB_14075a1db;
  }
  uVar10 = 0;
  uVar9 = 0;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xc:
joined_r0x00014075a1ab:
    if (uVar1 < 0x1f) {
      local_50 = (&PTR_DAT_141246270)[uVar1];
    }
    else {
      local_50 = "<< invalid kind >>";
    }
    pcVar11 = "unsupported conversion from string \'%s\' to \'%s\'";
    uVar10 = 0x648;
    local_58 = param_2;
    goto LAB_14075a1db;
  case 3:
    pcVar11 = "excess element \'%s\' in scope";
    uVar10 = 0x626;
    local_58 = param_2;
LAB_14075a1db:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,uVar10,pcVar11);
    goto LAB_14075a1e0;
  case 9:
    lVar6 = FUN_1400ba4f0(*param_1,*(undefined8 *)(puVar12 + 8),0x16c);
    if (*(code **)(lVar6 + 0x48) == (code *)0x0) {
      if (((*(code **)(lVar6 + 0x28) == (code *)0x0) || (*param_2 == '\0')) || (param_2[1] != '\0'))
      {
        if (*(longlong *)(lVar6 + 0x50) == 0) {
          uVar1 = *puVar12;
          goto joined_r0x00014075a1ab;
        }
        local_48 = 0.0;
        iVar5 = unresolved_entity_identifier_s(param_1,param_2,&local_48);
        if (iVar5 != 0) goto LAB_14075a1e0;
        (**(code **)(lVar6 + 0x50))(pdVar7,*param_1,local_48);
        uVar10 = uVar9;
      }
      else {
        (**(code **)(lVar6 + 0x28))(pdVar7);
        uVar10 = uVar9;
      }
    }
    else {
      (**(code **)(lVar6 + 0x48))(pdVar7,param_2);
      uVar10 = uVar9;
    }
    break;
  case 10:
    lVar6 = FUN_1403ae3f0(*param_1,*(undefined8 *)(puVar12 + 8),param_2);
    if (lVar6 == 0) {
      local_58 = (char *)0x0;
      local_50 = (char *)FUN_1403ae340(*param_1,0,*(undefined8 *)(puVar12 + 8),".");
      pcVar11 = "unresolved enum constant \'%s\' for type \'%s\'";
      uVar10 = 0x5ec;
    }
    else {
      dVar8 = (double)FUN_1400bbfd0(*param_1,lVar6,0x172,0);
      if (dVar8 == 0.0) {
        local_58 = (char *)0x0;
        local_50 = (char *)FUN_1403ae340(*param_1,0,*(undefined8 *)(puVar12 + 8),".");
        pcVar11 = "\'%s\' is not an enum constant for type \'%s\'";
        uVar10 = 0x5f5;
      }
      else {
        lVar6 = FUN_1400ba4f0(*param_1,lVar6,(ulonglong)dVar8 & 0xffffffff | 0x8000017200000000);
        if (lVar6 != 0) {
          local_48 = dVar8;
          local_40 = lVar6;
          value_pointer_is_null(param_1,&local_48);
          uVar10 = 0;
          break;
        }
        local_58 = (char *)0x0;
        local_50 = (char *)FUN_1403ae340(*param_1,0,*(undefined8 *)(puVar12 + 8),".");
        pcVar11 = "constant \'%s\' enum \'%s\' is of an invalid underlying type";
        uVar10 = 0x5ff;
      }
    }
    pcVar2 = local_50;
    local_58 = param_2;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,uVar10,pcVar11);
    (*DAT_1415033b0)(pcVar2);
    goto LAB_14075a1e0;
  case 0xb:
    iVar5 = FUN_14075a3f0(param_1,puVar12,pdVar7,param_2);
    uVar10 = uVar9;
    if (iVar5 != 0) goto LAB_14075a1e0;
    break;
  case 0xd:
    iVar5 = strcmp(param_2,"true");
    if (iVar5 == 0) {
LAB_140759ed3:
      *(undefined1 *)pdVar7 = 1;
      uVar10 = uVar9;
    }
    else {
      iVar5 = strcmp(param_2,"false");
      if (iVar5 != 0) {
        if (9 < (int)*param_2 - 0x30U) {
          pcVar11 = "invalid value for boolean \'%s\'";
          uVar10 = 0x5bc;
          local_58 = param_2;
          goto LAB_14075a1db;
        }
        if ((*param_2 != '0') || (param_2[1] != '\0')) goto LAB_140759ed3;
      }
      *(undefined1 *)pdVar7 = 0;
      uVar10 = uVar9;
    }
    break;
  case 0xe:
    *(char *)pdVar7 = *param_2;
    uVar10 = uVar9;
    break;
  case 0xf:
  case 0x10:
  case 0x14:
    lVar3 = atol(param_2);
    *(char *)pdVar7 = (char)lVar3;
    uVar10 = uVar9;
    break;
  case 0x11:
  case 0x15:
    lVar3 = atol(param_2);
    *(short *)pdVar7 = (short)lVar3;
    uVar10 = uVar9;
    break;
  case 0x12:
  case 0x16:
    fVar4 = (float)atol(param_2);
    *(float *)pdVar7 = fVar4;
    uVar10 = uVar9;
    break;
  case 0x13:
  case 0x17:
  case 0x1a:
  case 0x1b:
    dVar8 = (double)atoll(param_2);
    *pdVar7 = dVar8;
    uVar10 = uVar9;
    break;
  case 0x18:
    dVar8 = atof(param_2);
    *(float *)pdVar7 = (float)dVar8;
    uVar10 = uVar9;
    break;
  case 0x19:
    dVar8 = atof(param_2);
    *pdVar7 = dVar8;
    uVar10 = uVar9;
    break;
  case 0x1c:
    if ((char *)*pdVar7 != param_2) {
      (*DAT_1415033b0)();
      dVar8 = (double)(*DAT_1415033b8)(param_2);
      *pdVar7 = dVar8;
    }
    break;
  case 0x1d:
    local_48 = 0.0;
    iVar5 = unresolved_entity_identifier_s(param_1,param_2,&local_48);
    if (iVar5 != 0) goto LAB_14075a1e0;
LAB_14075a030:
    *pdVar7 = local_48;
    uVar10 = 0;
    break;
  case 0x1e:
    local_48 = 0.0;
    lVar6 = invalid_operator_for_add_expression(*param_1,0,param_2,&local_48);
    if (lVar6 != 0) goto LAB_14075a030;
LAB_14075a1e0:
    uVar10 = 0xffffffff;
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
    return uVar10;
  }
LAB_14075a211:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_78);
}

