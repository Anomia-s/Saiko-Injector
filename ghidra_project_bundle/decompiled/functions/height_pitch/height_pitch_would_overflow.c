/**
 * Function: height_pitch_would_overflow
 * Address:  140110f10
 * Signature: undefined height_pitch_would_overflow(void)
 * Body size: 463 bytes
 */


longlong height_pitch_would_overflow
                   (uint param_1,uint param_2,ulonglong param_3,longlong param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  ulonglong *local_78;
  undefined4 local_70;
  longlong local_68;
  uint local_60;
  undefined1 local_58;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if ((int)param_1 < 0) {
    pcVar8 = "width";
LAB_1401110aa:
    FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar8);
  }
  else {
    uVar9 = CONCAT44(0,param_2);
    if ((int)param_2 < 0) {
      pcVar8 = "height";
      goto LAB_1401110aa;
    }
    if (param_4 == 0 && param_5 == 0) {
LAB_140111048:
      lVar7 = FUN_140160c40(0x118);
      if (lVar7 != 0) {
        local_60 = param_5;
        local_58 = 0;
        local_70 = 0;
        local_78 = (ulonglong *)((ulonglong)local_78 & 0xffffffff00000000);
        local_68 = param_4;
        cVar5 = parameter_s_is_invalid(lVar7,param_1,uVar9,param_3 & 0xffffffff);
        lVar6 = 0;
        if (cVar5 != '\0') {
          lVar6 = lVar7;
        }
        goto LAB_1401110b1;
      }
    }
    else {
      local_40 = 0;
      local_48 = 0;
      if ((uint)param_3 == 0) {
        uVar10 = 0;
LAB_14011103d:
        if (((int)param_5 < 0) || (param_5 < uVar10)) {
          pcVar8 = "pitch";
          goto LAB_1401110aa;
        }
        goto LAB_140111048;
      }
      if (((uint)param_3 & 0xf0000000) == 0x10000000) {
        if ((param_3 & 0xf800) == 0) {
          uVar10 = (ulonglong)((uint)(param_3 >> 8) & 7) * (ulonglong)param_1 + 7 >> 3;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar9;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar10;
          lVar7 = SUB168(auVar2 * auVar4,8);
        }
        else {
          uVar10 = (param_3 & 0xff) * (ulonglong)param_1;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar9;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar10;
          lVar7 = SUB168(auVar1 * auVar3,8);
        }
        if (lVar7 != 0) {
          param_3 = param_3 & 0xffffffff;
          cVar5 = FUN_1400fbed0("height * pitch would overflow");
          if (cVar5 == '\0') goto LAB_1401110af;
        }
        goto LAB_14011103d;
      }
      local_78 = &local_40;
      cVar5 = width_height_would_overflow(param_3 & 0xffffffff,param_1,uVar9,&local_48);
      if (cVar5 != '\0') {
        param_3 = param_3 & 0xffffffff;
        uVar10 = local_40;
        goto LAB_14011103d;
      }
    }
  }
LAB_1401110af:
  lVar6 = 0;
LAB_1401110b1:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_98)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_98);
}

