/**
 * Function: atm_multiscatter_lut
 * Address:  1404c1e80
 * Signature: undefined atm_multiscatter_lut(void)
 * Body size: 4109 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 atm_multiscatter_lut(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong ******pppppplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  byte *pbVar12;
  char cVar13;
  char *pcVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  byte *pbVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong *******ppppppplVar21;
  longlong *plVar22;
  ulonglong uVar23;
  bool bVar24;
  longlong local_238 [3];
  undefined1 local_220;
  byte *local_218;
  longlong *aplStack_210 [2];
  longlong *plStack_200;
  longlong *******ppppppplStack_1f8;
  undefined8 local_1f0;
  undefined5 local_1e8;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined5 uStack_1e0;
  undefined3 uStack_1db;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  byte local_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined4 uStack_74;
  uint uStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2 == 0 || param_1 == (longlong *)0x0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return 0;
  }
  local_a8 = 0;
  memset(&local_218,0,0x16b);
  FUN_1404c3490(param_1,&local_218);
  FUN_14000c090(&local_218);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  plStack_200 = (longlong *)0x0;
  ppppppplStack_1f8 = (longlong *******)0x0;
  aplStack_210[0] = (longlong *)0x0;
  aplStack_210[1] = (longlong *)0x0;
  local_1f0 = (longlong *)0xf;
  local_1e8 = 0;
  uStack_1e3 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0;
  local_1d8 = (longlong *)CONCAT26(local_1d8._6_2_,1);
  uStack_1d0 = (ulonglong)uStack_1d0._4_4_ << 0x20;
  local_218 = (byte *)0x70;
  uStack_1e2 = 1;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_69 = 0;
  pcVar14 = (char *)FUN_140b65d30(0x20);
  local_78 = (byte)pcVar14;
  uStack_77 = (undefined1)((ulonglong)pcVar14 >> 8);
  uStack_76 = (undefined2)((ulonglong)pcVar14 >> 0x10);
  uStack_74 = (undefined4)((ulonglong)pcVar14 >> 0x20);
  local_68 = 0x14;
  uStack_60 = 0x1f;
  uStack_5c = 0;
  builtin_strncpy(pcVar14,"Atmosphere Constants",0x15);
  if (local_1f0 < (longlong *)0x14) {
    FUN_1400069b0(aplStack_210 + 1,0x14);
  }
  else {
    ppppppplStack_1f8 = (longlong *******)&DAT_00000014;
    uVar2 = *(undefined4 *)pcVar14;
    uVar4 = *(undefined4 *)(pcVar14 + 4);
    uVar5 = *(undefined4 *)(pcVar14 + 8);
    uVar6 = *(undefined4 *)(pcVar14 + 0xc);
    *(undefined4 *)(aplStack_210[1] + 2) = *(undefined4 *)(pcVar14 + 0x10);
    *(undefined4 *)aplStack_210[1] = uVar2;
    *(undefined4 *)((longlong)aplStack_210[1] + 4) = uVar4;
    *(undefined4 *)(aplStack_210[1] + 1) = uVar5;
    *(undefined4 *)((longlong)aplStack_210[1] + 0xc) = uVar6;
    *(undefined1 *)((longlong)aplStack_210[1] + 0x14) = 0;
  }
  local_1d8 = (longlong *)CONCAT35(local_1d8._5_3_,0x100000002);
  thunk_FUN_140b68ba8(pcVar14,0x20);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x88))
            (*(longlong **)(*param_1 + 0x18),&local_78,&local_218);
  lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  plVar22 = (longlong *)param_1[1];
  param_1[1] = lVar15;
  if (plVar22 != (longlong *)0x0) {
    (**(code **)(*plVar22 + 0x10))();
    plVar22 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    if (plVar22 != (longlong *)0x0) {
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      (**(code **)(*plVar22 + 0x10))();
    }
    lVar15 = param_1[1];
  }
  if ((lVar15 == 0) &&
     ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
      (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48d78),
      DAT_14151e360 != 0)))) {
    lVar8 = DAT_14151e360;
    local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffffffffff00);
    local_78 = (byte)&local_a0;
    bVar9 = local_78;
    uStack_77 = (undefined1)((ulonglong)&local_a0 >> 8);
    uVar10 = uStack_77;
    uStack_76 = (undefined2)((ulonglong)&local_a0 >> 0x10);
    uVar11 = uStack_76;
    uStack_74 = (undefined4)((ulonglong)&local_a0 >> 0x20);
    uVar2 = uStack_74;
    cVar13 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_78);
    if (cVar13 == '\0') {
      do {
        local_78 = 100;
        uStack_77 = 0;
        uStack_76 = 0;
        uStack_74 = 0;
        FUN_140008100(&local_78);
        local_78 = bVar9;
        uStack_77 = uVar10;
        uStack_76 = uVar11;
        uStack_74 = uVar2;
        cVar13 = FUN_140b53dc0(lVar8,&PTR_DAT_140dc1aa0,&local_78);
      } while (cVar13 == '\0');
    }
    if (((ulonglong)local_a0 & 1) == 0) {
      do {
        local_78 = 100;
        uStack_77 = 0;
        uStack_76 = 0;
        uStack_74 = 0;
        FUN_140008100(&local_78);
      } while (((ulonglong)local_a0 & 1) == 0);
    }
  }
  if ((longlong *)0xf < local_1f0) {
    plVar22 = (longlong *)((longlong)local_1f0 + 1);
    plVar19 = aplStack_210[1];
    if ((longlong *)0xfff < plVar22) {
      plVar19 = (longlong *)aplStack_210[1][-1];
      if (0x1f < (ulonglong)((longlong)aplStack_210[1] + (-8 - (longlong)plVar19)))
      goto LAB_1404c2e74;
      plVar22 = local_1f0 + 5;
    }
    thunk_FUN_140b68ba8(plVar19,plVar22);
  }
  if (lVar15 == 0) {
    return 0;
  }
  local_218 = (byte *)0x3f8000003f800000;
  aplStack_210[0] = (longlong *)0x3f8000003f800000;
  aplStack_210[1] = (longlong *)0x3f800000;
  uVar23 = (ulonglong)plStack_200 >> 0x18;
  plStack_200 = (longlong *)CONCAT53((uint5)uVar23 & 0xff00000000,0x10000);
  plStack_200 = (longlong *)CONCAT62(plStack_200._2_6_,0x101);
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0xd0))
            (*(longlong **)(*param_1 + 0x18),&local_78,&local_218);
  lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  plVar22 = (longlong *)param_1[6];
  param_1[6] = lVar15;
  if (plVar22 != (longlong *)0x0) {
    (**(code **)(*plVar22 + 0x10))();
    plVar22 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    if (plVar22 != (longlong *)0x0) {
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      (**(code **)(*plVar22 + 0x10))();
    }
    lVar15 = param_1[6];
  }
  if (lVar15 == 0) {
    if ((*(byte *)(DAT_14151e360 + 0x39) < 8) &&
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48da0),
       DAT_14151e360 == 0)) {
      return 0;
    }
    lVar15 = DAT_14151e360;
    local_78 = 0;
    local_218 = &local_78;
    cVar13 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_218);
    if (cVar13 == '\0') {
      do {
        local_218 = (byte *)0x64;
        FUN_140008100(&local_218);
        local_218 = &local_78;
        cVar13 = FUN_140b53dc0(lVar15,&PTR_DAT_140dc1aa0,&local_218);
      } while (cVar13 == '\0');
    }
    if ((local_78 & 1) != 0) {
      return 0;
    }
    do {
      local_218 = (byte *)0x64;
      FUN_140008100(&local_218);
    } while ((local_78 & 1) == 0);
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  plVar22 = *(longlong **)(*param_1 + 0x18);
  if (plVar22 == (longlong *)0x0) {
    return 0;
  }
  ppppppplStack_1f8 = (longlong *******)0x0;
  local_1f0 = (longlong *)0x0;
  local_1e8 = 0;
  uStack_1e3 = 0;
  uStack_1e2 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0xf;
  uStack_1db = 0;
  uStack_1d0 = uStack_1d0 & 0xffff000000000000;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1d8 = (longlong *)CONCAT35(local_1d8._5_3_,0x10001);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  aplStack_210[1] = (longlong *)0x100000001;
  local_218 = (byte *)0x100000001;
  aplStack_210[0] = (longlong *)0x100000001;
  plStack_200 = (longlong *)CONCAT26((short)((ulonglong)plStack_200 >> 0x30),0x33100000000);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_69 = 0;
  pcVar14 = (char *)FUN_140b65d30(0x20);
  local_78 = (byte)pcVar14;
  uStack_77 = (undefined1)((ulonglong)pcVar14 >> 8);
  uStack_76 = (undefined2)((ulonglong)pcVar14 >> 0x10);
  uStack_74 = (undefined4)((ulonglong)pcVar14 >> 0x20);
  local_68 = 0x15;
  uStack_60 = 0x1f;
  uStack_5c = 0;
  builtin_strncpy(pcVar14,"Atm Transmittance LUT",0x16);
  if (CONCAT35(uStack_1db,uStack_1e0) < 0x15) {
    FUN_1400069b0(&ppppppplStack_1f8,0x15);
  }
  else {
    local_1e8 = 0x15;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    uStack_1e1 = 0;
    uVar4 = *(undefined4 *)pcVar14;
    uVar5 = *(undefined4 *)(pcVar14 + 4);
    uVar6 = *(undefined4 *)(pcVar14 + 8);
    uVar7 = *(undefined4 *)(pcVar14 + 0xc);
    uVar2 = *(undefined4 *)(pcVar14 + 0x10);
    *(char *)((longlong)ppppppplStack_1f8 + 0x14) = pcVar14[0x14];
    *(undefined4 *)(ppppppplStack_1f8 + 2) = uVar2;
    *(undefined4 *)ppppppplStack_1f8 = uVar4;
    *(undefined4 *)((longlong)ppppppplStack_1f8 + 4) = uVar5;
    *(undefined4 *)(ppppppplStack_1f8 + 1) = uVar6;
    *(undefined4 *)((longlong)ppppppplStack_1f8 + 0xc) = uVar7;
    *(undefined1 *)((longlong)ppppppplStack_1f8 + 0x15) = 0;
  }
  local_1b4 = 0x40;
  local_1b0 = 1;
  thunk_FUN_140b68ba8(pcVar14,0x20);
  local_218 = (byte *)0x4000000100;
  (**(code **)(*plVar22 + 0x30))(plVar22,&local_78,&local_218);
  lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  plVar19 = (longlong *)param_1[2];
  param_1[2] = lVar15;
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x10))();
    plVar19 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    if (plVar19 != (longlong *)0x0) {
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      (**(code **)(*plVar19 + 0x10))();
    }
    lVar15 = param_1[2];
  }
  if (lVar15 == 0) {
    if ((7 < *(byte *)(DAT_14151e360 + 0x39)) ||
       (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48dc8),
       DAT_14151e360 != 0)) {
      lVar15 = DAT_14151e360;
      local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffffffffff00);
      local_78 = (byte)&local_a0;
      bVar9 = local_78;
      uStack_77 = (undefined1)((ulonglong)&local_a0 >> 8);
      uVar10 = uStack_77;
      uStack_76 = (undefined2)((ulonglong)&local_a0 >> 0x10);
      uVar11 = uStack_76;
      uStack_74 = (undefined4)((ulonglong)&local_a0 >> 0x20);
      uVar2 = uStack_74;
      cVar13 = FUN_140b53dc0(DAT_14151e360,&PTR_DAT_140dc1aa0,&local_78);
      if (cVar13 == '\0') {
        do {
          local_78 = 100;
          uStack_77 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          FUN_140008100(&local_78);
          local_78 = bVar9;
          uStack_77 = uVar10;
          uStack_76 = uVar11;
          uStack_74 = uVar2;
          cVar13 = FUN_140b53dc0(lVar15,&PTR_DAT_140dc1aa0,&local_78);
        } while (cVar13 == '\0');
      }
      if (((ulonglong)local_a0 & 1) == 0) {
        do {
          local_78 = 100;
          uStack_77 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          FUN_140008100(&local_78);
        } while (((ulonglong)local_a0 & 1) == 0);
      }
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    pcVar14 = (char *)FUN_140b65d30(0x20);
    local_78 = (byte)pcVar14;
    uStack_77 = (undefined1)((ulonglong)pcVar14 >> 8);
    uStack_76 = (undefined2)((ulonglong)pcVar14 >> 0x10);
    uStack_74 = (undefined4)((ulonglong)pcVar14 >> 0x20);
    local_68 = 0x14;
    uStack_60 = 0x1f;
    uStack_5c = 0;
    builtin_strncpy(pcVar14,"Atm MultiScatter LUT",0x15);
    if (CONCAT35(uStack_1db,uStack_1e0) < 0x14) {
      FUN_1400069b0(&ppppppplStack_1f8,0x14);
    }
    else {
      local_1e8 = 0x14;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      uStack_1e1 = 0;
      uVar2 = *(undefined4 *)pcVar14;
      uVar4 = *(undefined4 *)(pcVar14 + 4);
      uVar5 = *(undefined4 *)(pcVar14 + 8);
      uVar6 = *(undefined4 *)(pcVar14 + 0xc);
      *(undefined4 *)(ppppppplStack_1f8 + 2) = *(undefined4 *)(pcVar14 + 0x10);
      *(undefined4 *)ppppppplStack_1f8 = uVar2;
      *(undefined4 *)((longlong)ppppppplStack_1f8 + 4) = uVar4;
      *(undefined4 *)(ppppppplStack_1f8 + 1) = uVar5;
      *(undefined4 *)((longlong)ppppppplStack_1f8 + 0xc) = uVar6;
      *(undefined1 *)((longlong)ppppppplStack_1f8 + 0x14) = 0;
    }
    thunk_FUN_140b68ba8(pcVar14,0x20);
    local_218 = (byte *)0x2000000020;
    (**(code **)(*plVar22 + 0x30))(plVar22,&local_78,&local_218);
    lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
    local_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    plVar19 = (longlong *)param_1[3];
    param_1[3] = lVar15;
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))();
      plVar19 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
      if (plVar19 != (longlong *)0x0) {
        local_78 = 0;
        uStack_77 = 0;
        uStack_76 = 0;
        uStack_74 = 0;
        (**(code **)(*plVar19 + 0x10))();
      }
      lVar15 = param_1[3];
    }
    if (lVar15 != 0) {
      local_68 = 0xf;
      uStack_60 = 0xf;
      uStack_5c = 0;
      local_78 = 0x41;
      uStack_77 = 0x74;
      uStack_76 = 0x206d;
      uStack_74 = 0x56796b53;
      uStack_70 = 0x20776569;
      uStack_6c = 0x554c;
      uStack_6a = 0x54;
      uStack_69 = 0;
      uVar23 = CONCAT35(uStack_1db,uStack_1e0);
      if (uVar23 < 0xf) {
        FUN_1400069b0(&ppppppplStack_1f8,0xf);
      }
      else {
        puVar1 = (undefined1 *)((longlong)ppppppplStack_1f8 + 0xf);
        ppppppplVar21 = (longlong *******)&ppppppplStack_1f8;
        if (uVar23 != 0xf) {
          ppppppplVar21 = ppppppplStack_1f8;
        }
        local_1e8 = 0xf;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        *(undefined1 *)((longlong)ppppppplVar21 + 0xe) = 0x54;
        *(undefined2 *)((longlong)ppppppplVar21 + 0xc) = 0x554c;
        *(undefined4 *)(ppppppplVar21 + 1) = 0x20776569;
        *ppppppplVar21 = (longlong ******)0x56796b53206d7441;
        puVar16 = (undefined1 *)((longlong)&local_1f0 + 7);
        if (uVar23 != 0xf) {
          puVar16 = puVar1;
        }
        *puVar16 = 0;
      }
      uVar23 = CONCAT44(uStack_5c,uStack_60);
      if (0xf < uVar23) {
        lVar8 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
        uVar17 = uVar23 + 1;
        lVar15 = lVar8;
        if (0xfff < uVar17) {
          lVar15 = *(longlong *)(lVar8 + -8);
          if (0x1f < (ulonglong)((lVar8 + -8) - lVar15)) goto LAB_1404c2e74;
          uVar17 = uVar23 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar15,uVar17);
      }
      local_218 = (byte *)0x64000000c8;
      (**(code **)(*plVar22 + 0x30))(plVar22,&local_78,&local_218);
      lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      plVar19 = (longlong *)param_1[4];
      param_1[4] = lVar15;
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x10))();
        plVar19 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
        if (plVar19 != (longlong *)0x0) {
          local_78 = 0;
          uStack_77 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          (**(code **)(*plVar19 + 0x10))();
        }
        lVar15 = param_1[4];
      }
      uVar23 = CONCAT35(uStack_1db,uStack_1e0);
      if (0xf < uVar23) {
        uVar17 = uVar23 + 1;
        ppppppplVar21 = ppppppplStack_1f8;
        if (0xfff < uVar17) {
          ppppppplVar21 = (longlong *******)ppppppplStack_1f8[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)ppppppplStack_1f8 + (-8 - (longlong)ppppppplVar21)))
          goto LAB_1404c2e74;
          uVar17 = uVar23 + 0x28;
        }
        thunk_FUN_140b68ba8(ppppppplVar21,uVar17);
      }
      if (lVar15 == 0) {
        return 0;
      }
      ppppppplStack_1f8 = (longlong *******)0x0;
      local_1f0 = (longlong *)0x0;
      local_1e8 = 0;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      uStack_1e1 = 0;
      uStack_1e0 = 0xf;
      uStack_1db = 0;
      uStack_1d0 = uStack_1d0 & 0xffff000000000000;
      local_1b4 = 0;
      local_1b0 = 0;
      local_1d8 = (longlong *)CONCAT35(local_1d8._5_3_,0x10001);
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      aplStack_210[1] = (longlong *)0x100000001;
      local_218 = (byte *)0x2000000020;
      aplStack_210[0] = (longlong *)0x100000020;
      plStack_200 = (longlong *)CONCAT26((short)((ulonglong)plStack_200 >> 0x30),0x93100000000);
      local_68 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_6a = 0;
      uStack_69 = 0;
      pcVar14 = (char *)FUN_140b65d30(0x20);
      local_78 = (byte)pcVar14;
      uStack_77 = (undefined1)((ulonglong)pcVar14 >> 8);
      uStack_76 = (undefined2)((ulonglong)pcVar14 >> 0x10);
      uStack_74 = (undefined4)((ulonglong)pcVar14 >> 0x20);
      local_68 = 0x1a;
      uStack_60 = 0x1f;
      uStack_5c = 0;
      builtin_strncpy(pcVar14,"Atm Aerial Perspective LUT",0x1b);
      if (CONCAT35(uStack_1db,uStack_1e0) < 0x1a) {
        FUN_1400069b0(&ppppppplStack_1f8,0x1a);
      }
      else {
        local_1e8 = 0x1a;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        uVar2 = *(undefined4 *)pcVar14;
        uVar4 = *(undefined4 *)(pcVar14 + 4);
        uVar5 = *(undefined4 *)(pcVar14 + 8);
        uVar6 = *(undefined4 *)(pcVar14 + 0xc);
        pppppplVar3 = *(longlong *******)(pcVar14 + 0x10);
        *(undefined2 *)(ppppppplStack_1f8 + 3) = *(undefined2 *)(pcVar14 + 0x18);
        ppppppplStack_1f8[2] = pppppplVar3;
        *(undefined4 *)ppppppplStack_1f8 = uVar2;
        *(undefined4 *)((longlong)ppppppplStack_1f8 + 4) = uVar4;
        *(undefined4 *)(ppppppplStack_1f8 + 1) = uVar5;
        *(undefined4 *)((longlong)ppppppplStack_1f8 + 0xc) = uVar6;
        *(undefined1 *)((longlong)ppppppplStack_1f8 + 0x1a) = 0;
      }
      local_1b4 = 0x40;
      local_1b0 = 1;
      thunk_FUN_140b68ba8(pcVar14,0x20);
      (**(code **)(*plVar22 + 0x30))(plVar22,&local_78,&local_218);
      lVar15 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
      local_78 = 0;
      uStack_77 = 0;
      uStack_76 = 0;
      uStack_74 = 0;
      plVar22 = (longlong *)param_1[5];
      param_1[5] = lVar15;
      if (plVar22 != (longlong *)0x0) {
        (**(code **)(*plVar22 + 0x10))();
        plVar22 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(uStack_77,local_78)));
        if (plVar22 != (longlong *)0x0) {
          local_78 = 0;
          uStack_77 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          (**(code **)(*plVar22 + 0x10))();
        }
        lVar15 = param_1[5];
      }
      if ((lVar15 == 0) &&
         ((7 < *(byte *)(DAT_14151e360 + 0x39) ||
          (FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e48df0),
          DAT_14151e360 != 0)))) {
        FUN_140196ac0(DAT_14151e360,100);
      }
      uVar23 = CONCAT35(uStack_1db,uStack_1e0);
      if (0xf < uVar23) {
        uVar17 = uVar23 + 1;
        ppppppplVar21 = ppppppplStack_1f8;
        if (0xfff < uVar17) {
          ppppppplVar21 = (longlong *******)ppppppplStack_1f8[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)ppppppplStack_1f8 + (-8 - (longlong)ppppppplVar21)))
          goto LAB_1404c2e74;
          uVar17 = uVar23 + 0x28;
        }
        thunk_FUN_140b68ba8(ppppppplVar21,uVar17);
      }
      if (lVar15 == 0) {
        return 0;
      }
      directory_iterator_directory_iterator(&local_218,*param_1,"atmosphere_transmittance.csh.hlsl")
      ;
      pbVar18 = local_218;
      local_218 = (byte *)0x0;
      plVar22 = (longlong *)param_1[7];
      param_1[7] = (longlong)pbVar18;
      if (plVar22 != (longlong *)0x0) {
        (**(code **)(*plVar22 + 0x10))();
        pbVar18 = local_218;
        if (local_218 != (byte *)0x0) {
          local_218 = (byte *)0x0;
          (**(code **)(*(longlong *)pbVar18 + 0x10))();
        }
        pbVar18 = (byte *)param_1[7];
      }
      if (pbVar18 == (byte *)0x0) {
        return 0;
      }
      uStack_74 = 0;
      uStack_70 = uStack_70 & 0xffffff00;
      local_68 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      local_4c = 0x10000000080;
      local_44 = 0x180;
      local_78 = 0x20;
      uStack_77 = 0;
      local_218 = &DAT_1000200000000;
      FUN_140029790(&local_68,0,&local_218);
      (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x168))
                (*(longlong **)(*param_1 + 0x18),&local_218);
      pbVar18 = local_218;
      local_218 = (byte *)0x0;
      plVar22 = (longlong *)param_1[8];
      param_1[8] = (longlong)pbVar18;
      if (plVar22 != (longlong *)0x0) {
        (**(code **)(*plVar22 + 0x10))();
        pbVar18 = local_218;
        if (local_218 != (byte *)0x0) {
          local_218 = (byte *)0x0;
          (**(code **)(*(longlong *)pbVar18 + 0x10))();
        }
        pbVar18 = (byte *)param_1[8];
      }
      if (pbVar18 == (byte *)0x0) {
        bVar24 = false;
      }
      else {
        local_1d8 = (longlong *)0x0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e1 = 0;
        uStack_1e0 = 0;
        uStack_1db = 0;
        ppppppplStack_1f8 = (longlong *******)0x0;
        local_1f0 = (longlong *)0x0;
        aplStack_210[1] = (longlong *)0x0;
        plStack_200 = (longlong *)0x0;
        local_218 = (byte *)0x0;
        aplStack_210[0] = (longlong *)0x0;
        pbVar18 = (byte *)param_1[7];
        pbVar12 = local_218;
        if ((pbVar18 != (byte *)0x0) &&
           ((**(code **)(*(longlong *)pbVar18 + 8))(pbVar18), pbVar12 = pbVar18,
           local_218 != (byte *)0x0)) {
          lVar15 = *(longlong *)local_218;
          local_218 = pbVar18;
          (**(code **)(lVar15 + 0x10))();
          pbVar12 = local_218;
        }
        local_218 = pbVar12;
        plVar22 = (longlong *)param_1[8];
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 8))(plVar22);
        }
        plVar19 = aplStack_210[uStack_1d0];
        aplStack_210[uStack_1d0] = plVar22;
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x10))();
        }
        uStack_1d0 = uStack_1d0 + 1;
        (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x148))
                  (*(longlong **)(*param_1 + 0x18),&local_a0);
        plVar19 = local_a0;
        local_a0 = (longlong *)0x0;
        plVar22 = (longlong *)param_1[9];
        param_1[9] = (longlong)plVar19;
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x10))();
          plVar22 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            local_a0 = (longlong *)0x0;
            (**(code **)(*plVar22 + 0x10))();
          }
          plVar19 = (longlong *)param_1[9];
        }
        if (plVar19 == (longlong *)0x0) {
          bVar24 = false;
        }
        else {
          local_238[0] = 0;
          local_238[1] = 0;
          local_238[2] = 0;
          local_220 = 1;
          local_a0 = (longlong *)param_1[2];
          local_98 = 0;
          local_7c = 0xffffffff;
          local_90 = 2;
          local_8c = 0;
          uStack_88 = 0;
          uStack_84 = 1;
          uStack_80 = 0;
          FUN_140197fb0(local_238,0,&local_a0);
          (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x178))
                    (*(longlong **)(*param_1 + 0x18),&local_a0);
          plVar19 = local_a0;
          local_a0 = (longlong *)0x0;
          plVar22 = (longlong *)param_1[10];
          param_1[10] = (longlong)plVar19;
          if ((plVar22 != (longlong *)0x0) &&
             ((**(code **)(*plVar22 + 0x10))(), plVar22 = local_a0, local_a0 != (longlong *)0x0)) {
            local_a0 = (longlong *)0x0;
            (**(code **)(*plVar22 + 0x10))();
          }
          bVar24 = param_1[10] != 0;
          if (local_238[0] != 0) {
            uVar23 = local_238[2] - local_238[0];
            lVar15 = local_238[0];
            if (0xfff < uVar23) {
              lVar15 = *(longlong *)(local_238[0] + -8);
              if (0x1f < (ulonglong)((local_238[0] + -8) - lVar15)) goto LAB_1404c2e74;
              uVar23 = uVar23 + 0x27;
            }
            thunk_FUN_140b68ba8(lVar15,uVar23);
          }
        }
        plVar22 = local_1d8;
        if (local_1d8 != (longlong *)0x0) {
          local_1d8 = (longlong *)0x0;
          (**(code **)(*plVar22 + 0x10))();
        }
        plVar22 = (longlong *)CONCAT35(uStack_1db,uStack_1e0);
        if (plVar22 != (longlong *)0x0) {
          uStack_1e0 = 0;
          uStack_1db = 0;
          (**(code **)(*plVar22 + 0x10))();
        }
        plVar22 = (longlong *)
                  CONCAT17(uStack_1e1,CONCAT16(uStack_1e2,CONCAT15(uStack_1e3,local_1e8)));
        if (plVar22 != (longlong *)0x0) {
          local_1e8 = 0;
          uStack_1e3 = 0;
          uStack_1e2 = 0;
          uStack_1e1 = 0;
          (**(code **)(*plVar22 + 0x10))();
        }
        plVar22 = local_1f0;
        if (local_1f0 != (longlong *)0x0) {
          local_1f0 = (longlong *)0x0;
          (**(code **)(*plVar22 + 0x10))();
        }
        ppppppplVar21 = ppppppplStack_1f8;
        if (ppppppplStack_1f8 != (longlong *******)0x0) {
          ppppppplStack_1f8 = (longlong *******)0x0;
          (*(code *)(*ppppppplVar21)[2])();
        }
        plVar22 = plStack_200;
        if (plStack_200 != (longlong *)0x0) {
          plStack_200 = (longlong *)0x0;
          (**(code **)(*plVar22 + 0x10))();
        }
        plVar22 = aplStack_210[1];
        if (aplStack_210[1] != (longlong *)0x0) {
          aplStack_210[1] = (longlong *)0x0;
          (**(code **)(*plVar22 + 0x10))();
        }
        plVar22 = aplStack_210[0];
        if (aplStack_210[0] != (longlong *)0x0) {
          aplStack_210[0] = (longlong *)0x0;
          (**(code **)(*plVar22 + 0x10))();
        }
        pbVar18 = local_218;
        if (local_218 != (byte *)0x0) {
          local_218 = (byte *)0x0;
          (**(code **)(*(longlong *)pbVar18 + 0x10))();
        }
      }
      if (local_68 != 0) {
        uVar23 = CONCAT44(uStack_54,local_58) - local_68;
        lVar15 = local_68;
        if (0xfff < uVar23) {
          lVar15 = *(longlong *)(local_68 + -8);
          if (0x1f < (ulonglong)((local_68 + -8) - lVar15)) goto LAB_1404c2e74;
          uVar23 = uVar23 + 0x27;
        }
        thunk_FUN_140b68ba8(lVar15,uVar23);
      }
      if (!bVar24) {
        return 0;
      }
      cVar13 = FUN_1404c3e20(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      cVar13 = FUN_1404c4750(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      cVar13 = FUN_1404c53c0(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      cVar13 = FUN_1404c6040(param_1);
      if (cVar13 == '\0') {
        return 0;
      }
      uVar20 = FUN_1404c6ec0(param_1);
      return uVar20;
    }
  }
  uVar23 = CONCAT35(uStack_1db,uStack_1e0);
  if (0xf < uVar23) {
    uVar17 = uVar23 + 1;
    ppppppplVar21 = ppppppplStack_1f8;
    if (0xfff < uVar17) {
      ppppppplVar21 = (longlong *******)ppppppplStack_1f8[-1];
      if ((undefined1 *)0x1f <
          (undefined1 *)((longlong)ppppppplStack_1f8 + (-8 - (longlong)ppppppplVar21))) {
LAB_1404c2e74:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar17 = uVar23 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppppplVar21,uVar17);
  }
  return 0;
}

