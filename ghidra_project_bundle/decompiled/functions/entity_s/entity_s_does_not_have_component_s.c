/**
 * Function: entity_s_does_not_have_component_s
 * Address:  140764fb0
 * Signature: undefined entity_s_does_not_have_component_s(void)
 * Body size: 2469 bytes
 */


undefined8
entity_s_does_not_have_component_s(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int *piVar16;
  ulonglong uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 *local_4a0;
  undefined4 *local_498;
  undefined8 local_490;
  undefined4 *local_488;
  ulonglong local_480;
  longlong local_478;
  ulonglong local_470;
  longlong local_468;
  ulonglong local_460;
  ulonglong *local_458;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4d8;
  uVar19 = 0;
  uVar11 = 0;
  switch(*param_2) {
  case 0:
    *param_3 = *(undefined8 *)(param_2 + 2);
    param_3[1] = *(undefined8 *)(param_2 + 8);
    goto LAB_1407655fa;
  case 1:
    local_4a0 = param_3;
    memset(&local_460,0,0x418);
    FUN_1405f5340(param_1[3]);
    local_498 = param_2;
    uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 0xe));
    lVar10 = FUN_140106180((Decoration<__int64> *)(param_2 + 0xe));
    if (0 < (int)uVar6) {
      local_488 = local_498 + 0x12;
      uVar17 = 0;
      iVar7 = 0;
      do {
        lVar12 = *(longlong *)(lVar10 + uVar17 * 8);
        if (lVar12 == 0) {
          puVar9 = (undefined8 *)FUN_1403b30a0(local_488,8,iVar7);
          local_490 = *puVar9;
          lVar12 = FUN_1405f52c0(param_1[3],local_498);
          *(undefined1 *)(lVar12 + 0x18) = 1;
          iVar8 = entity_s_does_not_have_component_s(param_1,local_490,lVar12);
          if (iVar8 != 0) {
            FUN_1405f53a0(param_1[3]);
            uVar11 = 0xffffffff;
            goto switchD_140764ff8_default;
          }
          iVar7 = iVar7 + 1;
          lVar12 = **(longlong **)(lVar12 + 8);
        }
        FUN_1403b8780(&local_460,lVar12);
        uVar17 = uVar17 + 1;
      } while (uVar6 != uVar17);
    }
    uVar11 = FUN_1403b89b0(&local_460);
    *(undefined8 *)local_4a0[1] = uVar11;
    *(undefined1 *)(local_4a0 + 3) = 1;
LAB_14076561e:
    FUN_1405f53a0(param_1[3]);
    uVar11 = 0;
    goto switchD_140764ff8_default;
  case 2:
    *(undefined1 *)(param_3 + 3) = 1;
    puVar13 = (undefined4 *)FUN_1403a5610(param_1[1],*(undefined8 *)(param_2 + 2));
    local_4b8 = CONCAT44(local_4b8._4_4_,*puVar13);
    iVar7 = initializer_of_type_s_writes_past_end_of_targ(param_1,param_2,param_3[1],0);
    break;
  case 3:
    iVar7 = FUN_140765960(param_1,param_2);
    break;
  case 4:
    FUN_1405f5340(param_1[3]);
    uVar11 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),uVar11);
    if ((iVar7 == 0) &&
       (iVar7 = invalid_operator_for_binary_expression(*param_1,uVar11,param_3,param_2[10]),
       iVar7 == 0)) {
LAB_14076587e:
      FUN_1405f53a0(param_1[3]);
      uVar11 = 0;
      goto switchD_140764ff8_default;
    }
    goto LAB_1407654ca;
  case 5:
    FUN_1405f5340(param_1[3]);
    plVar14 = (longlong *)FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),plVar14);
    if (iVar7 == 0) {
      plVar15 = (longlong *)FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 10));
      iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 10),plVar15);
      if (iVar7 == 0) {
        iVar7 = param_2[0x10];
        if (iVar7 == 0) {
          local_4b8 = CONCAT44(local_4b8._4_4_,param_2[0xc]);
          iVar7 = invalid_operator_for_binary_expression(*param_1,plVar14,plVar15,param_3);
          if (iVar7 != 0) goto LAB_1407654ca;
        }
        else {
          local_480 = *(ulonglong *)(param_2 + 0xe);
          local_458 = (ulonglong *)plVar14[1];
          local_468 = plVar15[1];
          local_478 = param_3[1];
          local_498 = param_2;
          local_470 = local_480;
          local_460 = local_480;
          iVar8 = FUN_140766670();
          lVar12 = (longlong)iVar8;
          lVar10 = 0;
          if (*plVar14 == *plVar15) {
            lVar10 = lVar12;
          }
          if (0 < iVar7) {
            do {
              local_4b8 = CONCAT44(local_4b8._4_4_,local_498[0xc]);
              iVar8 = invalid_operator_for_binary_expression
                                (*param_1,&local_460,&local_470,&local_480);
              if (iVar8 != 0) goto LAB_1407654ca;
              local_458 = (ulonglong *)((longlong)local_458 + lVar12);
              local_468 = local_468 + lVar10;
              local_478 = local_478 + lVar12;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        goto LAB_14076587e;
      }
    }
    goto LAB_1407654ca;
  case 6:
    if (*(longlong *)(param_2 + 10) == 0) {
      lVar10 = (**(code **)(param_1[2] + 0x20))
                         (param_1[1],*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1[2] + 0x28)
                         );
      if (lVar10 == 0) {
        local_4b8 = *(undefined8 *)(param_2 + 8);
        lVar10 = *(longlong *)(*param_1 + 0x10);
        FUN_140399a50(*(undefined8 *)(*param_1 + 8),lVar10,*(longlong *)(param_2 + 6) - lVar10,
                      "unresolved identifier \'%s\'");
        uVar11 = 0xffffffff;
      }
      else {
        *(longlong *)param_3[1] = lVar10;
        uVar11 = uVar19;
      }
      goto switchD_140764ff8_default;
    }
    iVar7 = entity_s_does_not_have_component_s(param_1);
    break;
  case 7:
    puVar13 = param_2 + 0xe;
    if (*(char *)(param_1[2] + 0x31) == '\0') {
      puVar13 = (undefined4 *)0x0;
    }
    lVar10 = FUN_1405f1090(*(undefined8 *)(param_1[2] + 0x10),*(undefined8 *)(param_2 + 8),puVar13);
    if (lVar10 == 0) {
      local_4b8 = *(undefined8 *)(param_2 + 8);
      lVar10 = *(longlong *)(*param_1 + 0x10);
      FUN_140399a50(*(undefined8 *)(*param_1 + 8),lVar10,*(longlong *)(param_2 + 6) - lVar10,
                    "unresolved variable \'%s\'");
      uVar11 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(lVar10 + 0xc);
      uVar4 = *(undefined4 *)(lVar10 + 0x10);
      uVar5 = *(undefined4 *)(lVar10 + 0x14);
      *(undefined4 *)param_3 = *(undefined4 *)(lVar10 + 8);
      *(undefined4 *)((longlong)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
      *(undefined1 *)(param_3 + 3) = 0;
      uVar11 = 0;
    }
    goto switchD_140764ff8_default;
  case 8:
    uVar3 = param_2[0xb];
    uVar4 = param_2[0xc];
    uVar5 = param_2[0xd];
    *(undefined4 *)param_3 = param_2[10];
    *(undefined4 *)((longlong)param_3 + 4) = uVar3;
    *(undefined4 *)(param_3 + 1) = uVar4;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
LAB_1407655fa:
    *(undefined1 *)(param_3 + 3) = 0;
    uVar11 = uVar19;
    goto switchD_140764ff8_default;
  case 9:
    iVar7 = FUN_140765a00(param_1,param_2);
    break;
  case 10:
    iVar7 = FUN_140765bd0(param_1,param_2);
    break;
  case 0xb:
    FUN_1405f5340(param_1[3]);
    lVar10 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),lVar10);
    if (iVar7 == 0) {
      param_3[1] = *(longlong *)(param_2 + 0xc) + *(longlong *)(lVar10 + 8);
      *param_3 = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_3 + 3) = 0;
      goto LAB_14076587e;
    }
    goto LAB_1407654ca;
  case 0xc:
    lVar10 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),lVar10);
    if (iVar7 == 0) {
      lVar12 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 10));
      iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 10),lVar12);
      if (iVar7 == 0) {
        param_3[1] = (longlong)(int)param_2[0xc] * **(longlong **)(lVar12 + 8) +
                     *(longlong *)(lVar10 + 8);
        *param_3 = *(undefined8 *)(param_2 + 2);
        *(undefined1 *)(param_3 + 3) = 0;
        uVar11 = uVar19;
        goto switchD_140764ff8_default;
      }
    }
    goto LAB_1407655e7;
  case 0xd:
    lVar10 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),lVar10);
    if (iVar7 == 0) {
      piVar16 = *(int **)(param_2 + 10);
      if (*piVar16 == 6) {
        piVar16 = *(int **)(piVar16 + 10);
      }
      uVar19 = **(undefined8 **)(lVar10 + 8);
      uVar2 = *(undefined8 *)(piVar16 + 10);
      lVar10 = FUN_1400ba4f0(param_1[1],uVar19,uVar2);
      param_3[1] = lVar10;
      *(undefined1 *)(param_3 + 3) = 0;
      if (lVar10 != 0) goto switchD_140764ff8_default;
      local_4b8 = 0;
      uVar11 = FUN_1403ae340(param_1[1],0,uVar19,".");
      local_4b8 = 0;
      uVar19 = FUN_1403ae340(param_1[1],0,uVar2,".");
      lVar10 = *(longlong *)(*param_1 + 0x10);
      local_4b8 = uVar11;
      local_4b0 = uVar19;
      FUN_140399a50(*(undefined8 *)(*param_1 + 8),lVar10,*(longlong *)(param_2 + 6) - lVar10,
                    "entity \'%s\' does not have component \'%s\'");
      (*DAT_1415033b0)(uVar11);
      (*DAT_1415033b0)(uVar19);
    }
    goto LAB_1407655e7;
  case 0xe:
    FUN_1405f5340(param_1[3]);
    uVar11 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),uVar11);
    if (iVar7 == 0) {
      iVar7 = FUN_14075a760(param_1[1],param_3,uVar11);
      if (iVar7 == 0) {
        *(undefined1 *)(param_3 + 3) = 1;
        goto LAB_14076587e;
      }
      lVar10 = *(longlong *)(*param_1 + 0x10);
      FUN_140399a50(*(undefined8 *)(*param_1 + 8),lVar10,*(longlong *)(param_2 + 6) - lVar10,
                    "failed to cast value");
    }
    goto LAB_1407654ca;
  case 0xf:
    FUN_1405f5340(param_1[3]);
    plVar14 = (longlong *)FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),plVar14);
    if (iVar7 == 0) {
      lVar10 = *plVar14;
      pdVar1 = (double *)plVar14[1];
      if (lVar10 == 0x159) {
        dVar18 = (double)(longlong)*(char *)pdVar1;
      }
      else if (lVar10 == 0x15a) {
        dVar18 = (double)(longlong)*(short *)pdVar1;
      }
      else if (lVar10 == 0x15b) {
        dVar18 = (double)(longlong)(int)*(float *)pdVar1;
      }
      else {
        if (lVar10 != 0x15c) {
          if (lVar10 == 0x154) {
            dVar18 = (double)(ulonglong)*(byte *)pdVar1;
          }
          else if (lVar10 == 0x155) {
            dVar18 = (double)(ulonglong)*(ushort *)pdVar1;
          }
          else if (lVar10 == 0x156) {
            dVar18 = (double)(ulonglong)(uint)*(float *)pdVar1;
          }
          else {
            if (lVar10 != 0x157) {
              if (lVar10 == 0x15e) {
                dVar18 = (double)*(float *)pdVar1;
              }
              else {
                if (lVar10 != 0x15f) goto LAB_14076587e;
                dVar18 = *pdVar1;
              }
              FUN_1407664d0(*param_3,param_3[1],dVar18);
              goto LAB_14076587e;
            }
            dVar18 = *pdVar1;
          }
          FUN_1407663e0(*param_3,param_3[1],dVar18);
          goto LAB_14076587e;
        }
        dVar18 = *pdVar1;
      }
      FUN_140766330(*param_3,param_3[1],dVar18);
      goto LAB_14076587e;
    }
    goto LAB_1407654ca;
  case 0x10:
    local_4a0 = param_3;
    FUN_1405f5340(param_1[3]);
    puVar9 = (undefined8 *)FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
    iVar7 = entity_s_does_not_have_component_s(param_1,*(undefined8 *)(param_2 + 8),puVar9);
    if (iVar7 == 0) {
      uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(param_2 + 10))
      ;
      lVar10 = FUN_140106180((Decoration<__int64> *)(param_2 + 10));
      if ((int)uVar6 < 1) {
        if (uVar6 != 0) goto LAB_14076561e;
      }
      else {
        local_490 = CONCAT44(local_490._4_4_,uVar6);
        puVar20 = (undefined8 *)(lVar10 + 8);
        uVar17 = 0;
        do {
          FUN_1405f5340(param_1[3]);
          uVar11 = FUN_1405f52c0(param_1[3],*(undefined8 *)(param_2 + 8));
          iVar7 = entity_s_does_not_have_component_s(param_1,puVar20[-1],uVar11);
          if (iVar7 != 0) goto LAB_1407654ca;
          local_470 = local_470 & 0xffffffffffffff00;
          local_460 = 0x151;
          local_458 = &local_470;
          local_4b8 = CONCAT44(local_4b8._4_4_,100);
          iVar7 = invalid_operator_for_binary_expression(*param_1,puVar9,uVar11,&local_460);
          if (iVar7 != 0) goto LAB_1407654ca;
          FUN_1405f53a0(param_1[3]);
          if ((char)local_470 == '\x01') {
            iVar7 = entity_s_does_not_have_component_s(param_1,*puVar20,local_4a0);
            if (iVar7 != 0) goto LAB_1407654ca;
            if ((int)uVar17 != (int)local_490) goto LAB_14076561e;
            break;
          }
          uVar17 = uVar17 + 1;
          puVar20 = puVar20 + 2;
        } while (uVar6 != uVar17);
      }
      if (*(longlong *)(param_2 + 0x10) == 0) {
        uVar11 = FUN_14083ef10(param_1[1],*puVar9,puVar9[1]);
        lVar10 = *(longlong *)(*param_1 + 0x10);
        local_4b8 = uVar11;
        FUN_140399a50(*(undefined8 *)(*param_1 + 8),lVar10,*(longlong *)(param_2 + 6) - lVar10,
                      "match value \'%s\' not handled by case");
        (*DAT_1415033b0)(uVar11);
      }
      else {
        iVar7 = entity_s_does_not_have_component_s(param_1,*(longlong *)(param_2 + 0x10),local_4a0);
        if (iVar7 == 0) goto LAB_14076561e;
      }
    }
LAB_1407654ca:
    FUN_1405f53a0(param_1[3]);
    uVar11 = 0xffffffff;
    goto switchD_140764ff8_default;
  case 0x11:
    iVar7 = FUN_140765df0(param_1,param_2);
    break;
  default:
    goto switchD_140764ff8_default;
  }
  uVar11 = 0;
  if (iVar7 != 0) {
LAB_1407655e7:
    uVar11 = 0xffffffff;
  }
switchD_140764ff8_default:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_4d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_4d8);
  }
  return uVar11;
}

