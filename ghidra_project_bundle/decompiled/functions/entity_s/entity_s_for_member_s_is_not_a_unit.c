/**
 * Function: entity_s_for_member_s_is_not_a_unit
 * Address:  1405e7db0
 * Signature: undefined entity_s_for_member_s_is_not_a_unit(void)
 * Body size: 2176 bytes
 */


undefined8
entity_s_for_member_s_is_not_a_unit
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char *_Str1;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  Decoration<__int64> *pDVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  char *pcVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined1 auStack_f8 [32];
  char *local_d8;
  char *local_d0;
  char *local_c8;
  byte local_b1;
  int local_b0;
  uint local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_94;
  Decoration<__int64> *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  _Str1 = (char *)*param_4;
  lVar20 = param_4[1];
  uVar1 = *(undefined4 *)(param_4 + 2);
  iVar5 = *(int *)((longlong)param_4 + 0x14);
  lVar14 = param_4[3];
  bVar18 = *(byte *)(param_4 + 4);
  uStack_58 = (undefined7)((ulonglong)param_4[6] >> 8);
  local_68 = (undefined7)*(undefined8 *)((longlong)param_4 + 0x21);
  uStack_61 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x21) >> 0x38);
  uStack_60 = (undefined7)*(undefined8 *)((longlong)param_4 + 0x29);
  uStack_59 = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x29) >> 0x38);
  local_78 = param_4[7];
  uStack_70 = param_4[8];
  local_88 = *(undefined4 *)(param_4 + 9);
  uStack_84 = *(undefined4 *)((longlong)param_4 + 0x4c);
  uStack_80 = *(undefined4 *)(param_4 + 10);
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0x54);
  if (_Str1 == (char *)0x0) {
    local_d8 = (char *)0x0;
    local_d8 = (char *)FUN_1403ae340(param_1,0,param_2,".");
    pcVar17 = "member for struct \'%s\' does not have a name";
    uVar16 = 0x4e;
LAB_1405e7f6e:
    pcVar8 = local_d8;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                  ,uVar16,pcVar17);
  }
  else {
    if (lVar20 == 0) {
      local_d8 = (char *)0x0;
      local_d8 = (char *)FUN_1403ae340(param_1,0,param_2,".");
      pcVar17 = "member \'%s.%s\' does not have a type";
      uVar16 = 0x55;
      local_d0 = _Str1;
      goto LAB_1405e7f6e;
    }
    local_a0 = param_3;
    httplib::ClientImpl::vfunction4();
    lVar7 = FUN_1403b38b0(param_1,lVar20);
    if (lVar7 != 0) {
      local_94 = uVar1;
      if (lVar14 == 0) {
        cVar3 = FUN_1400b9b40(param_1,lVar20,0x16f);
        if (cVar3 == '\0') {
          lVar14 = 0;
        }
        else {
          local_b1 = bVar18;
          lVar14 = FUN_1400bc590(param_1,lVar20,0x127,0x16f);
          if (lVar14 == 0) {
            lVar14 = lVar20;
          }
          bVar18 = local_b1;
          if (local_a0 != 0) {
            lVar7 = FUN_1400bb330(param_1,local_a0,0x167);
            *(longlong *)(lVar7 + 0x10) = lVar20;
            bVar18 = local_b1;
          }
        }
LAB_1405e80b8:
        local_b1 = bVar18;
        pDVar10 = (Decoration<__int64> *)FUN_1400ba6e0(param_1,param_2,0x169,0x10);
        puVar11 = (undefined8 *)FUN_140106180(pDVar10);
        local_90 = pDVar10;
        local_ac = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar10);
        local_a8 = param_2;
        if ((int)local_ac < 1) {
          uVar13 = 0;
          uVar6 = local_ac;
          bVar18 = local_b1;
          if (local_ac != 0) goto LAB_1405e8290;
        }
        else {
          uVar19 = (ulonglong)local_ac;
          uVar13 = 0;
          lVar7 = local_a0;
          puVar21 = puVar11;
          local_b0 = iVar5;
          if (local_a0 == 0) {
            do {
              iVar5 = strcmp(_Str1,(char *)*puVar21);
              if (iVar5 == 0) goto LAB_1405e8145;
              uVar13 = uVar13 + 1;
              puVar21 = puVar21 + 0xd;
            } while (uVar19 != uVar13);
          }
          else {
            do {
              if (puVar21[0xc] == 0) {
                iVar5 = strcmp(_Str1,(char *)*puVar21);
                lVar7 = local_a0;
                if (iVar5 == 0) goto LAB_1405e8145;
              }
              else if (puVar21[0xc] == lVar7) goto LAB_1405e817f;
              uVar13 = uVar13 + 1;
              puVar21 = puVar21 + 0xd;
            } while (uVar19 != uVar13);
          }
          uVar13 = (ulonglong)local_ac;
          iVar5 = local_b0;
          bVar18 = local_b1;
        }
        goto LAB_1405e8200;
      }
      cVar3 = FUN_1400b9b40(param_1,lVar14,0x16f);
      if (cVar3 == '\0') {
        local_d8 = (char *)FUN_1403af230(param_1,lVar14);
        pcVar17 = "entity \'%s\' for member \'%s\' is not a unit";
        uVar16 = 0x6a;
        local_d0 = _Str1;
      }
      else {
        bVar4 = FUN_1400b9b40(param_1,lVar20,0x16f);
        if ((lVar20 != lVar14 & bVar4) != 1) goto LAB_1405e80b8;
        pcVar8 = (char *)FUN_1403af230(param_1,lVar14);
        local_d8 = (char *)FUN_1403af230(param_1,lVar20);
        pcVar17 = "unit mismatch for type \'%s\' and unit \'%s\' for member \'%s\'";
        uVar16 = 0x70;
        local_d0 = pcVar8;
        local_c8 = _Str1;
      }
      goto LAB_1405e844d;
    }
    local_d8 = (char *)0x0;
    pcVar17 = (char *)FUN_1403ae340(param_1,0,param_2,".");
    local_d8 = (char *)0x0;
    pcVar8 = (char *)FUN_1403ae340(param_1,0,lVar20,".");
    local_d8 = pcVar17;
    local_d0 = _Str1;
    local_c8 = pcVar8;
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                  ,0x60,"member \'%s.%s.type\' is \'%s\' which is not a type");
    (*DAT_1415033b0)(pcVar17);
  }
  (*DAT_1415033b0)(pcVar8);
  goto LAB_1405e7f7c;
LAB_1405e8145:
  puVar21[0xc] = local_a0;
LAB_1405e817f:
  bVar18 = local_b1;
  puVar21[1] = lVar20;
  *(undefined4 *)(puVar21 + 2) = local_94;
  puVar21[3] = lVar14;
  *(int *)((longlong)puVar21 + 0x14) = local_b0;
  FUN_14039cdc0(puVar21,_Str1);
  puVar21[5] = CONCAT71(uStack_60,uStack_61);
  puVar21[6] = CONCAT71(uStack_58,uStack_59);
  puVar21[7] = local_78;
  puVar21[8] = uStack_70;
  puVar21[9] = CONCAT44(uStack_84,local_88);
  puVar21[10] = CONCAT44(uStack_7c,uStack_80);
  iVar5 = local_b0;
  uVar6 = local_ac;
  if ((uint)uVar13 == local_ac) {
LAB_1405e8200:
    pDVar10 = local_90;
    local_b1 = bVar18;
    httplib::ClientImpl::vfunction4();
    puVar11 = (undefined8 *)FUN_1403b2f60(0,pDVar10,0x68);
    *puVar11 = 0;
    puVar11[0xc] = local_a0;
    puVar11[1] = lVar20;
    *(undefined4 *)(puVar11 + 2) = local_94;
    puVar11[3] = lVar14;
    *(int *)((longlong)puVar11 + 0x14) = iVar5;
    FUN_14039cdc0(puVar11,_Str1);
    bVar18 = local_b1;
    puVar11[5] = CONCAT71(uStack_60,uStack_61);
    puVar11[6] = CONCAT71(uStack_58,uStack_59);
    puVar11[7] = local_78;
    puVar11[8] = uStack_70;
    *(undefined4 *)(puVar11 + 9) = local_88;
    *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_84;
    *(undefined4 *)(puVar11 + 10) = uStack_80;
    *(undefined4 *)((longlong)puVar11 + 0x54) = uStack_7c;
    puVar11 = (undefined8 *)FUN_140106180(pDVar10);
    uVar6 = local_ac + 1;
  }
LAB_1405e8290:
  if ((iVar5 != 0) || ((bVar18 & 1) != 0)) {
    uVar13 = uVar13 & 0xffffffff;
    piVar12 = (int *)FUN_1400ba4f0(param_1,puVar11[uVar13 * 0xd + 1],1);
    if (piVar12 == (int *)0x0) {
      local_d8 = (char *)0x0;
      local_d8 = (char *)FUN_1403ae340(param_1,0,puVar11[uVar13 * 0xd + 1],".");
      pcVar17 = "member \'%s\' is not a type";
      uVar16 = 0xeb;
    }
    else {
      uVar15 = piVar12[1];
      if (*piVar12 != 0 && uVar15 != 0) {
        iVar5 = (*(int *)(puVar11 + uVar13 * 0xd + 2) +
                (uint)(*(int *)(puVar11 + uVar13 * 0xd + 2) == 0)) * *piVar12;
        *(int *)(puVar11 + uVar13 * 0xd + 0xb) = iVar5;
        iVar5 = iVar5 + *(int *)((longlong)puVar11 + uVar13 * 0x68 + 0x14);
        lVar20 = FUN_1400ba4f0(param_1,local_a8,1);
        if (lVar20 != 0) {
          uVar15 = *(uint *)(lVar20 + 4);
        }
        goto LAB_1405e83f0;
      }
      local_d8 = (char *)0x0;
      local_d8 = (char *)FUN_1403ae340(param_1,0,puVar11[uVar13 * 0xd + 1],".");
      pcVar17 = "member \'%s\' has 0 size/alignment";
      uVar16 = 0xf5;
    }
    goto LAB_1405e7f6e;
  }
  if ((int)uVar6 < 1) {
LAB_1405e8422:
    local_d8 = (char *)FUN_1403af230(param_1,local_a8);
    pcVar17 = "struct \'%s\' has 0 size";
    uVar16 = 0x107;
  }
  else {
    lVar20 = 0;
    iVar5 = 0;
    uVar15 = 0;
    do {
      piVar12 = (int *)FUN_1400ba4f0(param_1,*(undefined8 *)((longlong)puVar11 + lVar20 + 8),1);
      if (piVar12 == (int *)0x0) {
        local_d8 = (char *)0x0;
        local_d8 = (char *)FUN_1403ae340(param_1,0,*(undefined8 *)((longlong)puVar11 + lVar20 + 8),
                                         ".");
        pcVar17 = "member \'%s\' is not a type";
        uVar16 = 0xba;
        goto LAB_1405e7f6e;
      }
      if ((*piVar12 == 0) || (uVar2 = piVar12[1], uVar2 == 0)) {
        local_d8 = (char *)0x0;
        local_d8 = (char *)FUN_1403ae340(param_1,0,*(undefined8 *)((longlong)puVar11 + lVar20 + 8),
                                         ".");
        pcVar17 = "member \'%s\' has 0 size/alignment";
        uVar16 = 0xc4;
        goto LAB_1405e7f6e;
      }
      iVar22 = *(int *)((longlong)puVar11 + lVar20 + 0x10);
      uVar13 = (longlong)iVar5 - 1;
      if ((uVar13 | (longlong)(int)uVar2) >> 0x20 == 0) {
        iVar5 = (int)((uVar13 & 0xffffffff) / (ulonglong)uVar2);
      }
      else {
        iVar5 = (int)(uVar13 / (ulonglong)(longlong)(int)uVar2);
      }
      iVar22 = (iVar22 + (uint)(iVar22 == 0)) * *piVar12;
      iVar5 = (iVar5 + 1) * uVar2;
      *(int *)((longlong)puVar11 + lVar20 + 0x58) = iVar22;
      *(int *)((longlong)puVar11 + lVar20 + 0x14) = iVar5;
      lVar14 = *(longlong *)((longlong)puVar11 + lVar20 + 0x60);
      if (lVar14 != 0) {
        lVar14 = FUN_1400ba6e0(param_1,lVar14,0x167,0x20);
        *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)((longlong)puVar11 + lVar20 + 0x14);
      }
      iVar5 = iVar5 + iVar22;
      if ((int)uVar15 < (int)uVar2) {
        uVar15 = uVar2;
      }
      lVar20 = lVar20 + 0x68;
    } while ((ulonglong)uVar6 * 0x68 - lVar20 != 0);
LAB_1405e83f0:
    uVar16 = local_a8;
    if (iVar5 == 0) goto LAB_1405e8422;
    if (uVar15 != 0) {
      uVar13 = (longlong)iVar5 - 1;
      if ((uVar13 | (longlong)(int)uVar15) >> 0x20 == 0) {
        iVar5 = (int)((uVar13 & 0xffffffff) / (ulonglong)uVar15);
      }
      else {
        iVar5 = (int)(uVar13 / (ulonglong)(longlong)(int)uVar15);
      }
      FUN_1400ba7b0(param_1,local_a8,0x169);
      local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar15);
      iVar5 = type_s_reregistered_as_s_was_s(param_1,uVar16,3,(iVar5 + 1) * uVar15);
      uVar9 = 0xffffffff;
      if (iVar5 == 0) {
        cVar3 = FUN_1400b9b40(param_1,uVar16,0x167);
        uVar9 = 0;
        if (cVar3 != '\0') {
          puVar11 = (undefined8 *)FUN_1400ba6e0(param_1,uVar16,0x167,0x20);
          *puVar11 = uVar16;
          *(undefined4 *)(puVar11 + 1) = 0;
          FUN_1400ba7b0(param_1,uVar16,0x167);
          uVar9 = 0;
        }
      }
      goto LAB_1405e7f81;
    }
    local_d8 = (char *)FUN_1403af230(param_1,local_a8);
    pcVar17 = "struct \'%s\' has 0 alignment";
    uVar16 = 0x10c;
  }
LAB_1405e844d:
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/type_support/struct_ts.c"
                ,uVar16,pcVar17);
LAB_1405e7f7c:
  uVar9 = 0xffffffff;
LAB_1405e7f81:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_f8);
  }
  return uVar9;
}

