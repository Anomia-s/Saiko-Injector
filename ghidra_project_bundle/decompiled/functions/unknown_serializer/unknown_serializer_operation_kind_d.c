/**
 * Function: unknown_serializer_operation_kind_d
 * Address:  14083efb0
 * Signature: undefined unknown_serializer_operation_kind_d(void)
 * Body size: 1673 bytes
 */


undefined8
unknown_serializer_operation_kind_d
          (undefined8 param_1,longlong param_2,int param_3,longlong param_4,ulonglong param_5,
          undefined1 param_6)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  code *pcVar16;
  undefined1 uVar17;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_99;
  undefined8 local_98;
  int local_8c;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined4 local_6f;
  undefined3 uStack_6b;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  local_80 = param_2;
  if (0 < param_3) {
    iVar9 = 0;
    local_98 = param_1;
    local_8c = param_3;
    local_88 = param_4;
    do {
      lVar6 = (longlong)iVar9 * 0x38;
      puVar1 = (uint *)(local_80 + lVar6);
      iVar3 = *(int *)(local_80 + 8 + lVar6);
      if (*(longlong *)(local_80 + 0x10 + lVar6) != 0) {
        FUN_1403b8d70(param_5);
        FUN_1403b79b0(param_5,&DAT_1413a176c,*(undefined8 *)(puVar1 + 4));
      }
      uVar12 = local_98;
      uVar11 = *puVar1;
      if (0x1e < uVar11) goto switchD_14083f098_caseD_3;
      puVar14 = (ulonglong *)(iVar3 + param_4);
      switch(uVar11) {
      case 0:
        FUN_1403b8a80(param_5,"{",&DAT_1413a1e41);
        local_b0 = CONCAT71(local_b0._1_7_,param_6);
        local_b8 = param_5;
        iVar3 = unknown_serializer_operation_kind_d
                          (local_98,puVar1 + 0xe,(short)puVar1[7] + -2,puVar14);
        if (iVar3 != 0) goto LAB_14083f4fc;
        pcVar13 = "}";
LAB_14083f46e:
        FUN_1403b8c10(param_5,pcVar13);
        break;
      case 1:
        iVar3 = FUN_140757840(puVar1,puVar14);
        FUN_1403b8a80(param_5,&DAT_141360dfd,&DAT_1413a1e41);
        if (0 < iVar3) {
          iVar10 = 0;
          do {
            FUN_1403b8d70(param_5);
            local_b0 = CONCAT71(local_b0._1_7_,param_6);
            local_b8 = param_5;
            iVar5 = unknown_serializer_operation_kind_d
                              (local_98,puVar1 + 0xe,(short)puVar1[7] + -2,
                               (ulonglong *)
                               ((longlong)iVar10 * (longlong)(int)puVar1[6] + (longlong)puVar14));
            if (iVar5 != 0) goto LAB_14083f4fc;
            iVar10 = iVar10 + 1;
          } while (iVar3 != iVar10);
        }
        goto LAB_14083f41c;
      case 2:
        iVar3 = *(int *)((longlong)(int)puVar1[2] + 8 + param_4);
        lVar6 = *(longlong *)((int)puVar1[2] + param_4);
        FUN_1403b8a80(param_5,&DAT_141360dfd,&DAT_1413a1e41);
        if (0 < iVar3) {
          iVar10 = 0;
          do {
            FUN_1403b8d70(param_5);
            local_b0 = CONCAT71(local_b0._1_7_,param_6);
            local_b8 = param_5;
            iVar5 = unknown_serializer_operation_kind_d
                              (local_98,puVar1 + 0xe,(short)puVar1[7] + -2,
                               (longlong)iVar10 * (longlong)(int)puVar1[6] + lVar6);
            if (iVar5 != 0) goto LAB_14083f4fc;
            iVar10 = iVar10 + 1;
          } while (iVar3 != iVar10);
        }
LAB_14083f41c:
        pcVar13 = "]";
LAB_14083f426:
        FUN_1403b8c10(param_5,pcVar13);
        param_4 = local_88;
        param_3 = local_8c;
        break;
      case 3:
      case 8:
      case 0xc:
        break;
      case 4:
      case 5:
      case 6:
      case 9:
        uVar17 = uVar11 - 5 < 2;
        if (uVar11 - 4 < 3) {
          pcVar16 = (code *)0x0;
          if (uVar11 == 4) {
            pcVar16 = FUN_14083f690;
          }
          pcVar13 = "[";
          if (uVar11 == 4) {
            pcVar13 = "{";
          }
          local_99 = uVar17;
          FUN_1403b8a80(param_5,pcVar13,&DAT_1413a1e41);
          uVar17 = local_99;
        }
        else {
          pcVar16 = (code *)0x0;
        }
        local_78 = param_5;
        uStack_6b = 0;
        local_6f = 0;
        local_68 = FUN_14083f650;
        local_58 = local_98;
        local_50 = &local_78;
        local_70 = uVar17;
        local_60 = pcVar16;
        iVar3 = (**(code **)(puVar1 + 0xc))(&local_68,puVar14);
        if (iVar3 != 0) goto LAB_14083f4fc;
        param_4 = local_88;
        param_3 = local_8c;
        if (2 < uVar11 - 4) break;
        pcVar13 = "]";
        if (uVar11 == 4) {
          pcVar13 = "}";
        }
        goto LAB_14083f426;
      case 7:
        uVar7 = *(undefined8 *)(puVar1 + 8);
        lVar6 = FUN_1400ba4f0(local_98,uVar7,0x16d);
        if (lVar6 == 0) {
          local_b8 = 0;
          uVar12 = FUN_1403ae340(uVar12,0,uVar7,".");
          local_b8 = FUN_1403d2d90(uVar12);
          pcVar13 = "missing type serializer for \'%s\'";
          uVar12 = 199;
LAB_14083f4f7:
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/serialize.c"
                        ,uVar12,pcVar13);
          goto LAB_14083f4fc;
        }
        uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(lVar6 + 8));
        uVar7 = FUN_140106180((Decoration<__int64> *)(lVar6 + 8));
        local_b0 = CONCAT71(local_b0._1_7_,param_6);
        local_b8 = param_5;
        iVar3 = unknown_serializer_operation_kind_d(uVar12,uVar7,uVar4,puVar14);
        param_3 = local_8c;
        if (iVar3 != 0) goto LAB_14083f4fc;
        break;
      case 10:
        uVar11 = puVar1[1] & 0xfffffffb;
        if (uVar11 == 0x12) {
          uVar15 = (ulonglong)(uint)*puVar14;
        }
        else if (uVar11 == 0x11) {
          uVar15 = (ulonglong)(ushort)*puVar14;
        }
        else if (uVar11 == 0x10) {
          uVar15 = (ulonglong)(byte)*puVar14;
        }
        else {
          if (((puVar1[1] & 0xfffffffe) != 0x1a) && (uVar11 != 0x13)) {
            redabortreset_bluesreset
                      (7,
                       "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/serialize.c"
                       ,0x39,"invalid underlying type");
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar15 = *puVar14;
        }
        lVar6 = FUN_1403b6510(*(undefined8 *)(puVar1 + 0xc),uVar15);
        if (lVar6 == 0) {
          local_b8 = 0;
          uVar8 = FUN_1403ae340(uVar12,0,*(undefined8 *)(puVar1 + 8),".");
          pcVar13 = "value %llu is not valid for enum type \'%s\'";
          uVar12 = 0x43;
          local_b8 = uVar15;
          local_b0 = uVar8;
          goto LAB_14083f600;
        }
        uVar12 = FUN_1403af230(uVar12,*(undefined8 *)(lVar6 + 0x18));
        FUN_1403b8780(param_5,uVar12);
        break;
      case 0xb:
        uVar11 = (uint)*puVar14;
        FUN_1403b8a80(param_5,&DAT_1413a2ad6,"|");
        FUN_1403b6ad0(&local_68,*(undefined8 *)(puVar1 + 0xc));
        cVar2 = FUN_1403b6b00(&local_68);
        uVar12 = local_98;
        if (cVar2 == '\0') {
          if (uVar11 == 0) {
LAB_14083f455:
            FUN_1403b9090(param_5,"0");
            goto LAB_14083f464;
          }
        }
        else {
          iVar3 = 0;
          do {
            uVar8 = *local_50;
            if ((uVar8 & ~(ulonglong)uVar11) == 0) {
              uVar7 = FUN_1403af230(uVar12,*(undefined8 *)(local_50[1] + 0x18));
              FUN_1403b9090(param_5,uVar7);
              iVar3 = iVar3 + 1;
              uVar11 = uVar11 - (int)uVar8;
            }
            cVar2 = FUN_1403b6b00(&local_68);
          } while (cVar2 != '\0');
          if (uVar11 == 0) {
            param_4 = local_88;
            if (iVar3 == 0) goto LAB_14083f455;
LAB_14083f464:
            pcVar13 = "";
            goto LAB_14083f46e;
          }
        }
        local_b8 = 0;
        uVar8 = FUN_1403ae340(local_98,0,*(undefined8 *)(puVar1 + 8),".");
        local_b0 = CONCAT44(local_b0._4_4_,uVar11);
        pcVar13 = "value for bitmask %s contains bits (%u) that cannot be mapped to constant";
        uVar12 = 0x6e;
        local_b8 = uVar8;
LAB_14083f600:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/serialize.c"
                      ,uVar12,pcVar13);
        (*DAT_1415033b0)(uVar8);
LAB_14083f4fc:
        uVar12 = 0xffffffff;
        goto LAB_14083f501;
      default:
        local_b8 = CONCAT71(local_b8._1_7_,param_6);
        iVar3 = invalid_primitive_kind(local_98,uVar11 - 0xc,puVar14,param_5);
        if (iVar3 != 0) {
          local_b8 = CONCAT44(local_b8._4_4_,*puVar1);
          pcVar13 = "unknown serializer operation kind (%d)";
          uVar12 = 0x171;
          goto LAB_14083f4f7;
        }
      }
switchD_14083f098_caseD_3:
      iVar9 = iVar9 + (short)puVar1[7];
    } while (iVar9 < param_3);
  }
  uVar12 = 0;
LAB_14083f501:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
  }
  return uVar12;
}

