/**
 * Function: nintendo_sega_genesis_controller
 * Address:  140644ba0
 * Signature: undefined nintendo_sega_genesis_controller(void)
 * Body size: 1070 bytes
 */


undefined8 nintendo_sega_genesis_controller(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_88 [32];
  longlong *local_68;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  plVar9 = (longlong *)FUN_140160c70(1,0x168);
  if (plVar9 == (longlong *)0x0) {
    uVar10 = 0;
    goto LAB_140644fa5;
  }
  *plVar9 = param_1;
  *(longlong **)(param_1 + 0x70) = plVar9;
  if ((*(short *)(param_1 + 0x20) != 0x57e) || (uVar8 = 0x14, *(short *)(param_1 + 0x22) != 0x200e))
  {
    uVar8 = 5;
  }
  *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar8;
  *(undefined1 *)(plVar9 + 3) = 1;
  cVar6 = FUN_14012d500(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  *(char *)(plVar9 + 2) = cVar6;
  if (cVar6 == '\0') {
    plVar9[7] = 0x4040010040400100;
    local_38[0] = 0;
    if (*(char *)(*plVar9 + 0x54) == '\x01') {
      local_68 = local_38;
      cVar6 = FUN_140649540(plVar9,2,0,0);
      if (cVar6 != '\0') {
        uVar11 = (uint)*(byte *)(local_38[0] + 0x10);
        lVar2 = *plVar9;
        if (*(byte *)(local_38[0] + 0x10) == 0) {
          uVar11 = 0;
          if (*(short *)(lVar2 + 0x22) == 0x200e) {
            uVar11 = (*(int *)(lVar2 + 0x40) != 1) + 1;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(*(short *)(lVar2 + 0x22) == 0x2019) * 9 + 3;
        }
        *(uint *)(plVar9 + 4) = uVar11;
        *(undefined4 *)((longlong)plVar9 + 0x26) = *(undefined4 *)(local_38[0] + 0x12);
        uVar7 = *(ushort *)(local_38[0] + 0x16);
LAB_140644d22:
        *(ushort *)((longlong)plVar9 + 0x2a) = uVar7;
      }
    }
    else {
      cVar6 = FUN_140649800(plVar9,1,1);
      if (cVar6 != '\0') {
        uVar11 = (uint)*(byte *)((longlong)plVar9 + 0x43);
        lVar2 = *plVar9;
        if (*(byte *)((longlong)plVar9 + 0x43) == 0) {
          uVar11 = 0;
          if (*(short *)(lVar2 + 0x22) == 0x200e) {
            uVar11 = (*(int *)(lVar2 + 0x40) != 1) + 1;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(*(short *)(lVar2 + 0x22) == 0x2019) * 9 + 3;
        }
        *(uint *)(plVar9 + 4) = uVar11;
        uVar8 = *(undefined4 *)((longlong)plVar9 + 0x46);
        auVar14 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar8 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar8 >> 0x10),uVar8)) >>
                                                  0x20),uVar8) >> 0x18),(char)((uint)uVar8 >> 8)),
                                   (ushort)(byte)uVar8) & 0xffffff00ffffff);
        auVar14 = pshuflw(auVar14,auVar14,0x1b);
        sVar1 = auVar14._0_2_;
        sVar3 = auVar14._2_2_;
        sVar4 = auVar14._4_2_;
        sVar5 = auVar14._6_2_;
        *(uint *)((longlong)plVar9 + 0x26) =
             CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar14[6] - (0xff < sVar5),
                      CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar14[4] - (0xff < sVar4),
                               CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar14[2] - (0xff < sVar3),
                                        (0 < sVar1) * (sVar1 < 0x100) * auVar14[0] - (0xff < sVar1))
                              ));
        uVar7 = *(ushort *)((longlong)plVar9 + 0x44) << 8 |
                *(ushort *)((longlong)plVar9 + 0x44) >> 8;
        goto LAB_140644d22;
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (*(char *)(lVar2 + 0x10) == '\x01') {
    cVar6 = FUN_14012d100(*(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
    if (cVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      cVar6 = *(char *)(param_1 + 0x54);
      goto joined_r0x000140644d54;
    }
    goto LAB_140644f41;
  }
  uVar8 = 1;
  switch(*(undefined4 *)(lVar2 + 0x20)) {
  case 0:
    if (*(short *)(param_1 + 0x20) != 0x57e) goto LAB_140644f41;
    sVar1 = *(short *)(param_1 + 0x22);
    if (sVar1 == 0x2006) {
      uVar13 = 8;
      pcVar12 = "Nintendo Switch Joy-Con (L)";
      uVar8 = 1;
    }
    else if (sVar1 == 0x2009) {
      uVar13 = 7;
      pcVar12 = "Nintendo Switch Pro Controller";
      uVar8 = 3;
    }
    else {
      if (sVar1 != 0x2007) goto LAB_140644f41;
      uVar13 = 9;
      pcVar12 = "Nintendo Switch Joy-Con (R)";
      uVar8 = 2;
    }
    *(undefined4 *)(lVar2 + 0x20) = uVar8;
    FUN_14043fe30(param_1,pcVar12);
    *(undefined4 *)(param_1 + 0x5c) = uVar13;
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    cVar6 = *(char *)(param_1 + 0x54);
    goto joined_r0x000140644d54;
  case 1:
    FUN_14043fe30(param_1,"Nintendo Switch Joy-Con (L)");
    FUN_14043fea0(param_1,0x57e,0x2006);
    uVar8 = 8;
    break;
  case 2:
    FUN_14043fe30(param_1,"Nintendo Switch Joy-Con (R)");
    FUN_14043fea0(param_1,0x57e,0x2007);
    uVar8 = 9;
    break;
  case 3:
  case 6:
    FUN_14043fe30(param_1,"Nintendo Switch Pro Controller");
    FUN_14043fea0(param_1,0x57e,0x2009);
    uVar8 = 7;
    break;
  case 7:
    pcVar12 = "Nintendo HVC Controller (1)";
    goto LAB_140644eda;
  case 8:
    pcVar12 = "Nintendo HVC Controller (2)";
    goto LAB_140644eda;
  case 9:
    pcVar12 = "Nintendo NES Controller (L)";
    goto LAB_140644eda;
  case 10:
    pcVar12 = "Nintendo NES Controller (R)";
LAB_140644eda:
    FUN_14043fe30(param_1,pcVar12);
    break;
  case 0xb:
    FUN_14043fe30(param_1,"Nintendo SNES Controller");
    FUN_14043fea0(param_1,0x57e,0x2017);
    break;
  case 0xc:
    FUN_14043fe30(param_1,"Nintendo N64 Controller");
    FUN_14043fea0(param_1,0x57e,0x2019);
    break;
  case 0xd:
    FUN_14043fe30(param_1,"Nintendo SEGA Genesis Controller");
    FUN_14043fea0(param_1,0x57e,0x201e);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(lVar2 + 0x20);
  local_48 = (uint)*(byte *)(lVar2 + 0x2b);
  local_50 = (uint)*(byte *)(lVar2 + 0x2a);
  local_58 = (uint)*(byte *)(lVar2 + 0x29);
  local_60 = (uint)*(byte *)(lVar2 + 0x28);
  local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)*(byte *)(lVar2 + 0x27));
  FUN_1400fd420(local_38,0x12,&DAT_141327634,*(undefined1 *)(lVar2 + 0x26));
  FUN_14043ff20(param_1,local_38);
LAB_140644f41:
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  cVar6 = *(char *)(param_1 + 0x54);
joined_r0x000140644d54:
  if (cVar6 == '\x01') {
    cVar6 = FUN_14043ffd0(uVar10);
    uVar10 = 1;
    if (cVar6 != '\0') goto LAB_140644fa5;
  }
  else {
    FUN_140440040();
  }
  uVar10 = FUN_140440300(param_1,0);
LAB_140644fa5:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
  }
  return uVar10;
}

