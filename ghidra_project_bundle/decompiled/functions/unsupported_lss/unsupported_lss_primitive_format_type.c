/**
 * Function: unsupported_lss_primitive_format_type
 * Address:  14070c6e0
 * Signature: undefined unsupported_lss_primitive_format_type(void)
 * Body size: 1510 bytes
 */


void unsupported_lss_primitive_format_type
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint *param_5,
               uint *param_6,undefined8 param_7,longlong param_8,undefined8 param_9)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  switch(*(undefined1 *)((longlong)param_1 + 0x9d)) {
  case 0:
    local_70 = uint8_index_type_is_not_supported_by_the_curr(param_7,(char)param_1[2],1);
    if (*param_1 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(*param_1 + 0x88) + param_1[3];
    }
    local_6c = FUN_1406f1fe0();
    local_80 = 0;
    if (param_1[1] == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1[1] + 0x88) + param_1[4];
    }
    uVar9 = *(uint *)(param_1 + 6);
    iVar16 = *(int *)((longlong)param_1 + 0x2c) + -1;
    if (*(int *)((longlong)param_1 + 0x2c) == 0) {
      iVar16 = 0;
    }
    if ((char)param_1[0xd] == '\x01') {
      if (param_8 == 0) {
        local_80 = 0x10;
        goto LAB_14070c9b8;
      }
      local_88 = 0;
      local_80 = 0;
      local_78 = (undefined8 *)0x0;
      cVar7 = list_too_long(param_8,0x30,&local_88,&local_80,&local_78,param_9,0x10);
      if (cVar7 == '\0') {
        local_60 = 0;
        local_68 = (char *)FUN_140b65d30(0x40);
        local_58 = 0x3d;
        local_50 = 0x3f;
        builtin_strncpy(local_68,"Couldn\'t suballocate an upload buffer for geometry transform.",
                        0x3e);
        FUN_140533460(param_7,&local_68);
        goto LAB_14070ca95;
      }
      uVar2 = *(undefined8 *)((longlong)param_1 + 0x6c);
      uVar3 = *(undefined8 *)((longlong)param_1 + 0x74);
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x7c);
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x84);
      uVar6 = *(undefined8 *)((longlong)param_1 + 0x94);
      local_78[4] = *(undefined8 *)((longlong)param_1 + 0x8c);
      local_78[5] = uVar6;
      local_78[2] = uVar4;
      local_78[3] = uVar5;
      *local_78 = uVar2;
      local_78[1] = uVar3;
      if (local_88 == 0) {
        local_80 = 0;
      }
      else {
        local_80 = *(longlong *)(local_88 + 0x88) + local_80;
      }
      lVar13 = param_1[7];
      if (lVar13 != 0) goto LAB_14070c9c9;
LAB_14070cc2c:
      param_3 = 0;
    }
    else {
LAB_14070c9b8:
      lVar13 = param_1[7];
      if (lVar13 == 0) goto LAB_14070cc2c;
LAB_14070c9c9:
      *(uint *)(param_3 + 0x10) = (uint)((char)param_1[10] != '\t');
      if (param_1[8] == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = *(longlong *)(param_1[8] + 0x88) + param_1[9];
      }
      *(longlong *)(param_3 + 0x18) = lVar14;
      *(ulonglong *)(param_3 + 0x20) = (ulonglong)((char)param_1[10] != '\t') * 2 + 2;
      *(undefined4 *)(param_3 + 0x28) = 0;
      *(longlong *)(param_3 + 0x30) = param_1[0xb];
      *(int *)(param_3 + 0x2c) = (int)param_1[0xc];
      *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(lVar13 + 0x30);
    }
    *param_5 = *(uint *)((longlong)param_1 + (ulonglong)((char)param_1[2] == '\0') * 4 + 0x28) / 3;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0x3b9d13f5;
    *(longlong *)(param_2 + 0x20) = param_3;
    *(undefined4 *)(param_2 + 0x28) = local_6c;
    *(longlong *)(param_2 + 0x30) = lVar15;
    *(ulonglong *)(param_2 + 0x38) = (ulonglong)uVar9;
    *(int *)(param_2 + 0x40) = iVar16;
    *(undefined4 *)(param_2 + 0x44) = local_70;
    *(longlong *)(param_2 + 0x48) = lVar12;
    *(longlong *)(param_2 + 0x50) = local_80;
    break;
  case 1:
    if (*param_1 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(*param_1 + 0x88) + param_1[2];
    }
    uVar9 = *(uint *)((longlong)param_1 + 0x1c);
    *param_5 = *(uint *)(param_1 + 3);
    *(undefined4 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 0x18) = 0x3b9d13f3;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(longlong *)(param_2 + 0x28) = lVar12;
    *(ulonglong *)(param_2 + 0x30) = (ulonglong)uVar9;
    break;
  case 2:
    httplib::ClientImpl::vfunction4();
    break;
  case 3:
    if (*param_1 == 0) {
      if ((char)param_1[9] != '\0') {
        local_60 = 0;
        pcVar10 = (char *)FUN_140b65d30(0x90);
        local_58 = 0x84;
        local_50 = 0x8f;
        local_68 = pcVar10;
        memcpy(pcVar10,
               "Unsupported LSS primitive format type. If indexingMode is VK_RAY_TRACING_LSS_INDEXING_MODE_SUCCESSIVE_NV, indexData must NOT be NULL"
               ,0x84);
        pcVar10[0x84] = '\0';
        FUN_140533460(param_7,&local_68);
LAB_14070ca95:
        if (local_50 < 0x10) {
          return;
        }
        uVar11 = local_50 + 1;
        pcVar10 = local_68;
        if (uVar11 < 0x1000) {
LAB_14070cad3:
          thunk_FUN_140b68ba8(pcVar10,uVar11);
          return;
        }
        pcVar10 = *(char **)(local_68 + -8);
        if (local_68 + (-8 - (longlong)pcVar10) < (char *)0x20) {
          uVar11 = local_50 + 0x28;
          goto LAB_14070cad3;
        }
        goto LAB_14070ccad;
      }
      *(undefined4 *)(param_4 + 0x40) = 0x3b9d4e88;
      *(undefined8 *)(param_4 + 0x50) = 0;
      uVar9 = 0;
    }
    else {
      lVar12 = 0;
      uVar8 = uint8_index_type_is_not_supported_by_the_curr(param_7,(char)param_1[2],0);
      *(undefined4 *)(param_4 + 0x40) = uVar8;
      if (*param_1 != 0) {
        lVar12 = *(longlong *)(*param_1 + 0x88) + param_1[3];
      }
      *(longlong *)(param_4 + 0x48) = lVar12;
      *(ulonglong *)(param_4 + 0x50) = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
      bVar1 = *(byte *)(param_1 + 9);
      uVar9 = (uint)bVar1;
      if (bVar1 != 0) {
        if (bVar1 != 1) {
          local_60 = 0;
          local_68 = (char *)FUN_140b65d30(0x30);
          local_58 = 0x25;
          local_50 = 0x2f;
          builtin_strncpy(local_68,"Unsupported LSS primitive format type",0x26);
          FUN_140533460(param_7,&local_68);
          goto LAB_14070ca95;
        }
        uVar9 = 1;
      }
    }
    *(uint *)(param_4 + 0x58) = uVar9;
    uVar8 = FUN_1406f1fe0(*(undefined1 *)((longlong)param_1 + 0x11));
    *(undefined4 *)(param_4 + 0x10) = uVar8;
    if (param_1[1] == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(param_1[1] + 0x88) + param_1[4];
    }
    *(longlong *)(param_4 + 0x18) = lVar12;
    *(ulonglong *)(param_4 + 0x20) = (ulonglong)*(uint *)(param_1 + 8);
    uVar8 = FUN_1406f1fe0(*(undefined1 *)((longlong)param_1 + 0x12));
    *(undefined4 *)(param_4 + 0x28) = uVar8;
    if (param_1[1] == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(param_1[1] + 0x88) + param_1[5];
    }
    *(longlong *)(param_4 + 0x30) = lVar12;
    *(ulonglong *)(param_4 + 0x38) = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
    bVar1 = *(byte *)((longlong)param_1 + 0x49);
    uVar9 = (uint)bVar1;
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        uVar9 = 1;
      }
      else {
        local_60 = 0;
        local_68 = (char *)FUN_140b65d30(0x30);
        local_58 = 0x21;
        local_50 = 0x2f;
        builtin_strncpy(local_68,"Unsupported LSS end cap mode type",0x22);
        FUN_140533460(param_7,&local_68);
        if (0xf < local_50) {
          uVar11 = local_50 + 1;
          pcVar10 = local_68;
          if (0xfff < uVar11) {
            pcVar10 = *(char **)(local_68 + -8);
            if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar10)) {
LAB_14070ccad:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar11 = local_50 + 0x28;
          }
          thunk_FUN_140b68ba8(pcVar10,uVar11);
        }
        uVar9 = 0;
      }
    }
    *(uint *)(param_4 + 0x5c) = uVar9;
    *param_5 = *(uint *)((longlong)param_1 + 0x34);
    *(undefined4 *)(param_2 + 0x10) = 0x3ba155cd;
    *(longlong *)(param_2 + 8) = param_4;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = *param_5;
  }
  *(uint *)(param_2 + 0x58) = *(byte *)((longlong)param_1 + 0x9c) & 3;
  return;
}

