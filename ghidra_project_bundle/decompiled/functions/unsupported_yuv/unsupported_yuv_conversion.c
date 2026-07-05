/**
 * Function: unsupported_yuv_conversion
 * Address:  140404370
 * Signature: undefined unsupported_yuv_conversion(void)
 * Body size: 5137 bytes
 */


undefined4
unsupported_yuv_conversion
          (int param_1,ulonglong param_2,ulonglong param_3,uint param_4,undefined4 param_5,
          ulonglong *param_6,undefined4 param_7,int param_8,uint param_9,undefined4 param_10,
          ulonglong *param_11,int param_12)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong *local_a8;
  int local_a0;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_b0 = &local_68;
  local_b8 = &local_64;
  local_c0 = &local_60;
  local_c8 = &local_58;
  local_d0 = &local_50;
  local_d8 = CONCAT44(local_d8._4_4_,param_7);
  cVar1 = getyuvplanes2_unsupported_yuv_format_s(param_1,param_2,param_3,param_6);
  if (cVar1 == '\0') goto LAB_140405663;
  iVar7 = (int)param_3;
  if (((param_9 ^ param_4) & 0x7c00) == 0) {
    uVar5 = param_2 & 0xffffffff;
    uVar2 = param_4 & 0x1f;
    if (uVar2 - 5 < 2) {
      uVar2 = (uint)((param_4 & 0xf000000) != 0x2000000);
    }
    else if (uVar2 == 1) {
      uVar2 = (param_4 & 0xf000000) == 0x2000000 ^ 3;
    }
    else if ((uVar2 != 9) || (uVar2 = 4, (param_4 & 0xf000000) != 0x2000000)) {
      cVar1 = FUN_1400fbed0("Unsupported YUV colorspace");
      uVar2 = 1;
      if (cVar1 == '\0') goto LAB_140405663;
    }
    local_8c = uVar2;
    local_88 = local_68;
    local_84 = local_64;
    local_78 = local_60;
    local_80 = local_58;
    local_70 = local_50;
    cVar1 = FUN_14015ce40();
    if (cVar1 == '\0') goto LAB_140404d60;
    if (iVar7 < 0x32595559) {
      if ((iVar7 == 0x3132564e) || (iVar7 == 0x3231564e)) {
        if (0x16561803 < param_8) {
          if (param_8 < 0x16762004) {
            if (param_8 == 0x16561804) goto LAB_140404a35;
            if (param_8 == 0x16661804) goto LAB_140404923;
          }
          else {
            if (param_8 == 0x16762004) {
LAB_140404a35:
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_140606d90(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            if (param_8 == 0x16862004) {
LAB_140404923:
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_140605c10(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            if (param_8 == 0x17101803) {
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_140604630(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
          }
          goto LAB_140404d60;
        }
        if (param_8 < 0x16261804) {
          if (param_8 == 0x15151002) {
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_140603d00(param_1,uVar5,local_70,local_80);
            goto LAB_14040576a;
          }
          if (param_8 != 0x16161804) goto LAB_140404d60;
LAB_1404048bf:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1406064d0(param_1,uVar5,local_70,local_80);
        }
        else {
          if (param_8 != 0x16261804) {
            if (param_8 == 0x16362004) goto LAB_1404048bf;
            if (param_8 != 0x16462004) goto LAB_140404d60;
          }
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140605330(param_1,uVar5,local_70,local_80);
        }
        goto LAB_14040576a;
      }
      if (iVar7 != 0x32315659) goto LAB_140404db5;
LAB_14040469f:
      if (param_8 < 0x16561804) {
        if (param_8 < 0x16261804) {
          if (param_8 == 0x15151002) {
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_1405fdd60(param_1,uVar5,local_70,local_80);
          }
          else {
            if (param_8 != 0x16161804) goto LAB_140404b5d;
LAB_140404987:
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_1406003a0(param_1,uVar5,local_70,local_80);
          }
        }
        else {
          if (param_8 != 0x16261804) {
            if (param_8 == 0x16362004) goto LAB_140404987;
            if (param_8 != 0x16462004) goto LAB_140404b5d;
          }
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1405ff280(param_1,uVar5,local_70,local_80);
        }
        goto LAB_14040576a;
      }
      if (param_8 < 0x16762004) {
        if (param_8 == 0x16561804) goto LAB_140404a7f;
        if (param_8 == 0x16661804) goto LAB_1404049eb;
      }
      else {
        if (param_8 == 0x16762004) {
LAB_140404a7f:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140600c30(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
        if (param_8 == 0x16862004) {
LAB_1404049eb:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1405ffb10(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
        if (param_8 == 0x17101803) {
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1405fe670(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
      }
LAB_140404b5d:
      if (iVar7 < 0x55595659) {
        if (iVar7 == 0x32315659) goto LAB_140404e2e;
        if (iVar7 == 0x32595559) goto LAB_140404b9b;
      }
      else {
        if (iVar7 == 0x56555949) goto LAB_140404e2e;
        if (iVar7 == 0x55595659) goto LAB_140404b9b;
      }
      goto LAB_1404053d7;
    }
    if (iVar7 < 0x56555949) {
      if ((iVar7 == 0x32595559) || (iVar7 == 0x55595659)) goto LAB_140404b9b;
LAB_140404db5:
      if (param_8 != 0x16572004 || iVar7 != 0x30313050) goto LAB_140404470;
      local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
      local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
      local_c0 = param_11;
      local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
      local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
      local_d8 = local_78;
      FUN_14060f390(param_1,uVar5,local_70,local_80);
    }
    else {
      if (iVar7 != 0x59565955) {
        if (iVar7 == 0x56555949) goto LAB_14040469f;
        goto LAB_140404db5;
      }
LAB_140404b9b:
      if (param_8 < 0x16561804) {
        if (param_8 < 0x16261804) {
          if (param_8 == 0x15151002) {
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_1406014f0(param_1,uVar5,local_70,local_80);
            goto LAB_14040576a;
          }
          if (param_8 != 0x16161804) goto LAB_140404d60;
LAB_140404cb6:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140603070(param_1,uVar5,local_70,local_80);
        }
        else {
          if (param_8 != 0x16261804) {
            if (param_8 == 0x16362004) goto LAB_140404cb6;
            if (param_8 != 0x16462004) goto LAB_140404d60;
          }
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1406023b0(param_1,uVar5,local_70,local_80);
        }
        goto LAB_14040576a;
      }
      if (param_8 < 0x16762004) {
        if (param_8 == 0x16561804) goto LAB_140405038;
        if (param_8 == 0x16661804) goto LAB_140404d16;
      }
      else {
        if (param_8 == 0x16762004) {
LAB_140405038:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1406036c0(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
        if (param_8 == 0x16862004) {
LAB_140404d16:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140602a10(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
        if (param_8 == 0x17101803) {
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140601b90(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
      }
LAB_140404d60:
      if (0x32595558 < iVar7) {
        if (iVar7 < 0x56555949) {
          if ((iVar7 != 0x32595559) && (iVar7 != 0x55595659)) goto LAB_140404db5;
        }
        else if (iVar7 != 0x59565955) {
          if (iVar7 == 0x56555949) goto LAB_140404e2e;
          goto LAB_140404db5;
        }
LAB_140405350:
        if (param_8 < 0x16561804) {
          if (param_8 < 0x16261804) {
            if (param_8 == 0x15151002) {
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_14060a9a0(param_1,uVar5,local_70,local_80);
            }
            else {
              if (param_8 != 0x16161804) goto LAB_140405552;
LAB_1404054a8:
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_14060b8f0(param_1,uVar5,local_70,local_80);
            }
          }
          else {
            if (param_8 != 0x16261804) {
              if (param_8 == 0x16362004) goto LAB_1404054a8;
              if (param_8 != 0x16462004) goto LAB_140405552;
            }
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060b170(param_1,uVar5,local_70,local_80);
          }
          goto LAB_14040576a;
        }
        if (0x16762003 < param_8) {
          if (param_8 == 0x16762004) {
LAB_140405694:
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060bd00(param_1,uVar5,local_70,local_80);
          }
          else if (param_8 == 0x16862004) {
LAB_140405508:
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060b530(param_1,uVar5,local_70,local_80);
          }
          else {
            if (param_8 != 0x17101803) goto LAB_140405552;
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060ad90(param_1,uVar5,local_70,local_80);
          }
          goto LAB_14040576a;
        }
        if (param_8 == 0x16561804) goto LAB_140405694;
        if (param_8 == 0x16661804) goto LAB_140405508;
        goto LAB_140405552;
      }
      if ((iVar7 == 0x3132564e) || (iVar7 == 0x3231564e)) {
        if (param_8 < 0x16561804) {
          if (param_8 < 0x16261804) {
            if (param_8 == 0x15151002) {
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_14060c100(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            if (param_8 != 0x16161804) goto LAB_140405552;
LAB_140405164:
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060e270(param_1,uVar5,local_70,local_80);
          }
          else {
            if (param_8 != 0x16261804) {
              if (param_8 == 0x16362004) goto LAB_140405164;
              if (param_8 != 0x16462004) goto LAB_140405552;
            }
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_14060d110(param_1,uVar5,local_70,local_80);
          }
          goto LAB_14040576a;
        }
        if (param_8 < 0x16762004) {
          if (param_8 != 0x16561804) {
            if (param_8 == 0x16661804) goto LAB_1404051c8;
            goto LAB_140405552;
          }
        }
        else if (param_8 != 0x16762004) {
          if (param_8 != 0x16862004) {
            if (param_8 == 0x17101803) {
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_14060c9e0(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            goto LAB_140405552;
          }
LAB_1404051c8:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_14060d9c0(param_1,uVar5,local_70,local_80);
          goto LAB_14040576a;
        }
        local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
        local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
        local_c0 = param_11;
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
        local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
        local_d8 = local_78;
        FUN_14060eb00(param_1,uVar5,local_70,local_80);
      }
      else {
        if (iVar7 != 0x32315659) goto LAB_140404db5;
LAB_140404e2e:
        if (0x16561803 < param_8) {
          if (param_8 < 0x16762004) {
            if (param_8 == 0x16561804) goto LAB_140405212;
            if (param_8 == 0x16661804) goto LAB_140405100;
          }
          else {
            if (param_8 == 0x16762004) {
LAB_140405212:
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_14060a0d0(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            if (param_8 == 0x16862004) {
LAB_140405100:
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_140608f40(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
            if (param_8 == 0x17101803) {
              local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
              local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
              local_c0 = param_11;
              local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
              local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
              local_d8 = local_78;
              FUN_140607f50(param_1,uVar5,local_70,local_80);
              goto LAB_14040576a;
            }
          }
LAB_14040533a:
          if ((iVar7 != 0x55595659) && (iVar7 != 0x32595559)) goto LAB_1404053d7;
          goto LAB_140405350;
        }
        if (param_8 < 0x16261804) {
          if (param_8 == 0x15151002) {
            local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
            local_c0 = param_11;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
            local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
            local_d8 = local_78;
            FUN_140607660(param_1,uVar5,local_70,local_80);
            goto LAB_14040576a;
          }
          if (param_8 != 0x16161804) goto LAB_14040533a;
LAB_14040509c:
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_1406097f0(param_1,uVar5,local_70,local_80);
        }
        else {
          if (param_8 != 0x16261804) {
            if (param_8 == 0x16362004) goto LAB_14040509c;
            if (param_8 != 0x16462004) goto LAB_14040533a;
          }
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,local_8c);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_12);
          local_c0 = param_11;
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,local_88);
          local_d0 = (ulonglong *)CONCAT44(local_d0._4_4_,local_84);
          local_d8 = local_78;
          FUN_140608690(param_1,uVar5,local_70,local_80);
        }
      }
    }
LAB_14040576a:
    uVar3 = 1;
  }
  else {
LAB_140404470:
    if (param_8 == 0x16572004 || iVar7 != 0x30313050) {
LAB_1404053d7:
      if (param_8 == 0x16362004) {
        uVar3 = FUN_1400fbed0("Unsupported YUV conversion");
        if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_f8)) {
          return uVar3;
        }
        goto LAB_140405771;
      }
LAB_140405552:
      iVar7 = param_1 * 4;
      puVar4 = (ulonglong *)FUN_140160c40((longlong)(int)param_2 * (longlong)iVar7);
      if (puVar4 != (ulonglong *)0x0) {
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,param_7);
        local_d0 = param_6;
        local_d8 = CONCAT44(local_d8._4_4_,param_5);
        local_b0 = (undefined4 *)((ulonglong)local_b0 & 0xffffffff00000000);
        local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,0x120005a0);
        local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,0x16362004);
        local_a8 = puVar4;
        local_a0 = iVar7;
        cVar1 = unsupported_yuv_conversion
                          (param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
        if (cVar1 != '\0') {
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar7);
          local_d8 = local_d8 & 0xffffffff00000000;
          uVar6 = 0x16362004;
          param_4 = 0x120005a0;
LAB_14040562d:
          local_a0 = param_12;
          local_a8 = param_11;
          local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,param_10);
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_9);
          local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,param_8);
          local_d0 = puVar4;
          uVar3 = parameter_s_is_invalid(param_1,param_2 & 0xffffffff,uVar6,param_4);
          FUN_140160cf0(puVar4);
          if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_f8)) {
            return uVar3;
          }
          goto LAB_140405771;
        }
LAB_14040565b:
        FUN_140160cf0(puVar4);
      }
    }
    else {
      iVar7 = param_1 * 4;
      puVar4 = (ulonglong *)FUN_140160c40((longlong)(int)param_2 * (longlong)iVar7);
      if (puVar4 != (ulonglong *)0x0) {
        local_b0 = (undefined4 *)CONCAT44(local_b0._4_4_,param_5);
        local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,param_4);
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,param_7);
        local_d0 = param_6;
        local_d8 = CONCAT44(local_d8._4_4_,param_5);
        local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,0x16572004);
        local_a8 = puVar4;
        local_a0 = iVar7;
        cVar1 = unsupported_yuv_conversion(param_1,param_2 & 0xffffffff,0x30313050,param_4);
        if (cVar1 != '\0') {
          local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,iVar7);
          local_d8 = CONCAT44(local_d8._4_4_,param_5);
          uVar6 = 0x16572004;
          goto LAB_14040562d;
        }
        goto LAB_14040565b;
      }
    }
LAB_140405663:
    uVar3 = 0;
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_f8)) {
    return uVar3;
  }
LAB_140405771:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_f8);
}

