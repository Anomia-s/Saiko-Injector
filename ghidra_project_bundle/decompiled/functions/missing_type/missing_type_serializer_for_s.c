/**
 * Function: missing_type_serializer_for_s
 * Address:  1405facf0
 * Signature: undefined missing_type_serializer_for_s(void)
 * Body size: 1843 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
missing_type_serializer_for_s
          (undefined8 param_1,longlong param_2,int param_3,longlong param_4,double param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  char *pcVar16;
  longlong lVar17;
  uint *puVar18;
  double dVar19;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined8 local_a0;
  uint local_94;
  longlong local_90;
  undefined8 local_88;
  int local_7c;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  double *local_60;
  double local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined3 uStack_4b;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  local_7c = param_3;
  if (0 < param_3) {
    iVar11 = 0;
    local_90 = param_4;
    local_88 = param_1;
    do {
      lVar17 = (longlong)iVar11 * 0x38;
      iVar6 = *(int *)(param_2 + 8 + lVar17);
      lVar7 = *(longlong *)(param_2 + 0x10 + lVar17);
      if (lVar7 != 0) {
        FUN_1405fc490(param_5);
      }
      puVar18 = (uint *)(lVar17 + param_2);
      pdVar13 = (double *)(iVar6 + param_4);
      uVar9 = *puVar18;
      uVar14 = (ulonglong)uVar9;
      if (uVar9 == 0x13) {
        if ((ulonglong)*pdVar13 >> 0x1f != 0) goto LAB_1405fadca;
LAB_1405fad50:
        uVar3 = FUN_1405fcaa0(uVar14);
        local_a8 = (double)CONCAT71(local_a8._1_7_,1);
        invalid_primitive_kind(param_1,uVar3,pdVar13,param_5);
        goto LAB_1405fad6d;
      }
      if (uVar9 != 0x17) {
        uVar10 = 0;
        if (uVar9 < 0x1f) goto LAB_1405fadfc;
switchD_1405fae0d_caseD_405fb116:
        cVar1 = (char)uVar10;
        goto joined_r0x0001405fae32;
      }
      if ((longlong)*pdVar13 < 0x80000000) goto LAB_1405fad50;
LAB_1405fadca:
      uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),0x22);
      FUN_1403b7ad0(param_5,uVar8);
      uVar14 = (ulonglong)*puVar18;
      uVar10 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if (0x1e < *puVar18) goto switchD_1405fae0d_caseD_405fb116;
LAB_1405fadfc:
      iVar6 = (int)uVar14;
      uVar9 = (uint)uVar10;
      cVar1 = (char)uVar10;
      switch((longlong)&switchD_1405fae0d::switchdataD_1411f7398 +
             (longlong)(int)(&switchD_1405fae0d::switchdataD_1411f7398)[uVar14]) {
      case 0x1405fae0f:
        uVar3 = FUN_1405fcaa0(uVar14);
        local_a8 = (double)CONCAT71(local_a8._1_7_,1);
        invalid_primitive_kind(param_1,uVar3,pdVar13,param_5);
        break;
      case 0x1405fae3d:
        uVar5 = iVar6 - 5;
        if (iVar6 == 4) {
          local_94 = uVar9;
          FUN_1405fc360(param_5);
          local_70 = FUN_1405fb670;
        }
        else {
          local_94 = uVar9;
          if (uVar5 < 2) {
            FUN_1405fc330(param_5);
          }
          local_70 = (code *)0x0;
        }
        param_1 = local_88;
        local_58 = param_5;
        uStack_4b = 0;
        local_4f = 0;
        local_78 = FUN_1405fb620;
        local_68 = local_88;
        local_60 = &local_58;
        local_50 = uVar5 < 2;
        iVar4 = (**(code **)(puVar18 + 0xc))(&local_78,pdVar13);
        param_4 = local_90;
        if (iVar4 != 0) goto LAB_1405fb387;
        if (iVar6 == 4) {
          FUN_1405fc380(param_5);
          param_4 = local_90;
          cVar1 = (char)local_94;
        }
        else {
          if (uVar5 < 2) {
            FUN_1405fc350(param_5);
          }
          cVar1 = (char)local_94;
        }
        break;
      case 0x1405faf0d:
        dVar19 = (double)*(float *)pdVar13;
        goto LAB_1405fb1f0;
      case 0x1405faf1e:
        fVar12 = *(float *)pdVar13;
        if (fVar12 != 0.0) {
          FUN_1403b8a80(param_5,&DAT_14139efde,"|");
          FUN_1403b6ad0(&local_78,*(undefined8 *)(puVar18 + 0xc));
          cVar2 = FUN_1403b6b00(&local_78);
          if (cVar2 != '\0') {
            do {
              dVar19 = *local_60;
              if (((ulonglong)dVar19 & ~(ulonglong)(uint)fVar12) == 0) {
                uVar8 = FUN_1403af230(param_1,*(undefined8 *)((longlong)local_60[1] + 0x18));
                FUN_1403b9090(param_5,uVar8);
                fVar12 = (float)((int)fVar12 - SUB84(dVar19,0));
              }
              cVar2 = FUN_1403b6b00(&local_78);
            } while (cVar2 != '\0');
            if (fVar12 == 0.0) {
              FUN_1403b8c10(param_5,&DAT_14139efde);
              param_4 = local_90;
              break;
            }
          }
          local_a8 = 0.0;
          uVar8 = FUN_1403ae340(param_1,0,*(undefined8 *)(puVar18 + 8),".");
          local_a8 = (double)CONCAT44(local_a8._4_4_,fVar12);
          pcVar16 = "bitmask value \'%u\' of type \'%s\' contains invalid/unknown bits";
          uVar15 = 99;
          goto LAB_1405fb3fc;
        }
        FUN_1403b7ad0(param_5,CONCAT71((int7)(uVar10 >> 8),0x30));
        break;
      case 0x1405fafb3:
        uVar5 = puVar18[1] & 0xfffffffb;
        if (uVar5 == 0x12) {
          dVar19 = (double)(ulonglong)(uint)*(float *)pdVar13;
        }
        else if (uVar5 == 0x11) {
          dVar19 = (double)(ulonglong)*(ushort *)pdVar13;
        }
        else if (uVar5 == 0x10) {
          dVar19 = (double)(ulonglong)*(byte *)pdVar13;
        }
        else {
          if (((puVar18[1] & 0xfffffffe) != 0x1a) && (uVar5 != 0x13)) {
            local_94 = uVar9;
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/json/serialize_value.c"
                       ,0x29,"invalid underlying type");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
          dVar19 = *pdVar13;
        }
        local_94 = uVar9;
        lVar7 = FUN_1403b6510(*(undefined8 *)(puVar18 + 0xc),dVar19);
        if (lVar7 == 0) {
          local_a8 = 0.0;
          uVar8 = FUN_1403ae340(param_1,0,*(undefined8 *)(puVar18 + 8),".");
          pcVar16 = "enumeration value \'%d\' of type \'%s\' is not a valid constant";
          uVar15 = 0x34;
          local_a8 = dVar19;
LAB_1405fb3fc:
          local_a0 = uVar8;
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/json/serialize_value.c"
                        ,uVar15,pcVar16);
          (*DAT_1415033b0)(uVar8);
          uVar8 = 0xffffffff;
          goto LAB_1405fb38c;
        }
        FUN_1403b7ad0(param_5,0x22);
        uVar8 = FUN_1403af230(param_1,*(undefined8 *)(lVar7 + 0x18));
        FUN_1403b8780(param_5,uVar8);
        FUN_1403b7ad0(param_5,0x22);
        cVar1 = (char)local_94;
        break;
      case 0x1405fafe6:
        local_94 = uVar9;
        uVar5 = FUN_140757840(puVar18,pdVar13);
        uVar9 = puVar18[6];
        FUN_1405fc330(param_5);
        if (0 < (int)uVar5) {
          uVar14 = (ulonglong)uVar5;
          do {
            FUN_1403b8d70(param_5);
            local_a8 = param_5;
            iVar6 = missing_type_serializer_for_s
                              (local_88,puVar18 + 0xe,(short)puVar18[7] + -2,pdVar13);
            if (iVar6 != 0) goto LAB_1405fb387;
            pdVar13 = (double *)((longlong)pdVar13 + (longlong)(int)uVar9);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        goto LAB_1405fb187;
      case 0x1405fb05c:
        FUN_1405fc360(param_5);
        local_a8 = param_5;
        iVar6 = missing_type_serializer_for_s(param_1,puVar18 + 0xe,(short)puVar18[7] + -2,pdVar13);
        if (iVar6 != 0) goto LAB_1405fb387;
        FUN_1405fc380(param_5);
        iVar11 = iVar11 + (short)puVar18[7] + -1;
        break;
      case 0x1405fb0ae:
        uVar5 = puVar18[2];
        uVar8 = *(undefined8 *)(puVar18 + 8);
        local_94 = uVar9;
        lVar7 = FUN_1400ba4f0(param_1,uVar8,0x16d);
        if (lVar7 == 0) {
          local_a8 = 0.0;
          uVar8 = FUN_1403ae340(param_1,0,uVar8,".");
          local_a8 = (double)FUN_1403d2d90(uVar8);
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/json/serialize_value.c"
                        ,0xe5,"missing type serializer for \'%s\'");
        }
        else {
          uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                            ((Decoration<__int64> *)(lVar7 + 8));
          uVar8 = FUN_140106180((Decoration<__int64> *)(lVar7 + 8));
          local_a8 = param_5;
          iVar6 = missing_type_serializer_for_s(param_1,uVar8,uVar3,(int)uVar5 + param_4);
          uVar10 = (ulonglong)local_94;
          if (iVar6 == 0) goto switchD_1405fae0d_caseD_405fb116;
        }
LAB_1405fb387:
        uVar8 = 0xffffffff;
        goto LAB_1405fb38c;
      case 0x1405fb116:
        goto switchD_1405fae0d_caseD_405fb116;
      case 0x1405fb123:
        lVar7 = (longlong)(int)*(float *)(pdVar13 + 1);
        uVar5 = puVar18[6];
        dVar19 = *pdVar13;
        local_94 = uVar9;
        FUN_1405fc330(param_5);
        if (0 < lVar7) {
          do {
            FUN_1403b8d70(param_5);
            local_a8 = param_5;
            iVar6 = missing_type_serializer_for_s
                              (local_88,puVar18 + 0xe,(short)puVar18[7] + -2,dVar19);
            if (iVar6 != 0) goto LAB_1405fb387;
            dVar19 = (double)((longlong)dVar19 + (longlong)(int)uVar5);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
LAB_1405fb187:
        FUN_1405fc350(param_5);
        iVar11 = iVar11 + (short)puVar18[7] + -1;
        param_1 = local_88;
        param_4 = local_90;
        cVar1 = (char)local_94;
        break;
      case 0x1405fb1b3:
        if (*pdVar13 == 0.0) goto LAB_1405fb20b;
        FUN_1405fc6c0(param_5,param_1);
        break;
      case 0x1405fb1cf:
        if (*pdVar13 == 0.0) {
LAB_1405fb20b:
          FUN_1403b7a10(param_5,&DAT_14139e2d2,4);
        }
        else {
          FUN_1405fc530(param_5,param_1);
        }
        break;
      case 0x1405fb1eb:
        dVar19 = *pdVar13;
LAB_1405fb1f0:
        FUN_1403b7ce0(param_5,dVar19,0x22);
      }
joined_r0x0001405fae32:
      if (cVar1 != '\0') {
        FUN_1403b7ad0(param_5,0x22);
      }
LAB_1405fad6d:
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_7c);
  }
  uVar8 = 0;
LAB_1405fb38c:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
  }
  return uVar8;
}

