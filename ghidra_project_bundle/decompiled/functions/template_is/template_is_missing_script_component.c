/**
 * Function: template_is_missing_script_component
 * Address:  1405ed8d0
 * Signature: undefined template_is_missing_script_component(void)
 * Body size: 1165 bytes
 */


void template_is_missing_script_component
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,uint param_5
               )

{
  Decoration<__int64> *this;
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 auStack_5e8 [32];
  char *local_5c8;
  longlong local_5c0;
  undefined8 local_5b8;
  ulonglong local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  int *local_598;
  undefined8 local_590;
  ulonglong local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined1 local_4e0 [1104];
  longlong local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_5e8;
  local_5b8 = param_2;
  lVar7 = FUN_1403a2b30();
  if (lVar7 == 0) {
    pcVar15 = "template entity is empty (should never happen)";
    uVar14 = 0x8c;
  }
  else {
    lVar8 = FUN_1400bb7c0(param_1,lVar7,DAT_1416dfb78);
    if (lVar8 != 0) {
      lVar1 = *(longlong *)(lVar8 + 0x20);
      local_598 = *(int **)(lVar1 + 0x38);
      plVar9 = (longlong *)FUN_1400bb7c0(param_1,lVar7,0x169);
      local_4f0 = 0;
      local_590 = param_1;
      local_4e8 = vececs_type_info_t(param_1);
      FUN_1405f4210(*(undefined8 *)(lVar8 + 0x18),local_4e0,&local_4f0);
      local_508 = *(undefined8 *)(local_90 + 0x3098);
      uStack_500 = *(undefined8 *)(local_90 + 0x30a0);
      local_518 = *(undefined8 *)(local_4e8 + 0x30a8);
      uStack_510 = *(undefined8 *)(local_4e8 + 0x30b0);
      local_528 = *(undefined8 *)(local_4e8 + 0x30b8);
      uStack_520 = *(undefined8 *)(local_4e8 + 0x30c0);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar2 = *(undefined4 *)(lVar1 + 0x18);
      uVar3 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(local_90 + 0x3098) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(local_90 + 0x309c) = uVar6;
      *(undefined4 *)(local_90 + 0x30a0) = uVar2;
      *(undefined4 *)(local_90 + 0x30a4) = uVar3;
      local_80 = local_5b8;
      local_5c8 = "vec<ecs_value_t>";
      FUN_1403b2710(0,local_4e8 + 0x30a8,0x10,0);
      local_5c8 = "vec<ecs_type_info_t*>";
      FUN_1403b2710(0,local_4e8 + 0x30b8,8,0);
      local_5a0 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x18);
      local_538 = 0;
      uStack_530 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_558 = 0;
      local_568 = 0;
      uStack_560 = 0;
      local_578 = 0x10;
      uStack_570 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 8);
      local_68 = &local_578;
      local_5c0 = lVar1;
      uStack_550 = local_5a0;
      if (0 < (int)param_5) {
        this = (Decoration<__int64> *)(lVar1 + 0x40);
        local_5b0 = (ulonglong)param_5;
        uVar12 = 0;
        local_5a8 = param_3;
        do {
          lVar7 = local_5a8;
          local_538 = *(undefined8 *)(local_5a8 + uVar12 * 8);
          local_70 = local_538;
          iVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              puVar10 = (undefined8 *)FUN_1403b30a0(this,8,iVar4);
              unknown_annotation_s(local_4e0,&local_578,*puVar10);
              iVar4 = iVar4 + 1;
              iVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
            } while (iVar4 < iVar5);
          }
          plVar11 = (longlong *)FUN_140761b30(0,local_90 + 0x3080);
          lVar8 = *(longlong *)(local_5c0 + 0x20);
          *plVar11 = lVar8;
          uVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                            ((Decoration<__int64> *)(lVar8 + 0x40));
          *(undefined4 *)(plVar11 + 1) = uVar6;
          local_588 = uVar12;
          if (plVar9 == (longlong *)0x0) {
            FUN_140761e70(plVar11,1);
            local_580 = *(undefined8 *)(lVar7 + uVar12 * 8);
            lVar7 = FUN_140761da0(plVar11,0);
            *(undefined8 *)(lVar7 + 8) = 0x161;
            *(undefined8 **)(lVar7 + 0x10) = &local_580;
          }
          else {
            FUN_140761e70(plVar11,(int)plVar9[1] + 1);
            local_580 = *(undefined8 *)(lVar7 + uVar12 * 8);
            lVar7 = FUN_140761da0(plVar11,0);
            *(undefined8 *)(lVar7 + 8) = 0x161;
            *(undefined8 **)(lVar7 + 0x10) = &local_580;
            if (0 < (int)plVar9[1]) {
              piVar13 = (int *)(*plVar9 + 0x14);
              lVar7 = 0;
              do {
                lVar8 = FUN_140761da0(plVar11,0);
                *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(piVar13 + -3);
                *(longlong *)(lVar8 + 0x10) = *piVar13 + param_4;
                lVar7 = lVar7 + 1;
                piVar13 = piVar13 + 0x1a;
              } while (lVar7 < (int)plVar9[1]);
            }
          }
          FUN_1403ca850(local_590,local_5b8,local_580);
          local_50 = plVar11;
          FUN_1405f1cf0(local_4e0,local_5a0);
          FUN_140761ce0(plVar11);
          param_4 = param_4 + *local_598;
          uVar12 = local_588 + 1;
        } while (uVar12 != local_5b0);
      }
      FUN_1403b2770(local_4e8,local_4e8 + 0x30a8,0x10);
      FUN_1403b2770(local_4e8,local_4e8 + 0x30b8,8);
      *(undefined8 *)(local_90 + 0x30a8) = local_518;
      *(undefined8 *)(local_90 + 0x30b0) = uStack_510;
      *(undefined8 *)(local_90 + 0x30b8) = local_528;
      *(undefined8 *)(local_90 + 0x30c0) = uStack_520;
      *(undefined4 *)(local_90 + 0x3098) = (undefined4)local_508;
      *(undefined4 *)(local_90 + 0x309c) = local_508._4_4_;
      *(undefined4 *)(local_90 + 0x30a0) = (undefined4)uStack_500;
      *(undefined4 *)(local_90 + 0x30a4) = uStack_500._4_4_;
      FUN_1405f4320(local_4e0,&local_4f0);
      goto LAB_1405edd2a;
    }
    pcVar15 = "template is missing script component";
    uVar14 = 0x92;
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/template.c"
                ,uVar14,pcVar15);
LAB_1405edd2a:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_5e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_5e8);
  }
  return;
}

