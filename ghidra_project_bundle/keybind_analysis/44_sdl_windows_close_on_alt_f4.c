// sdl_windows_close_on_alt_f4 @ 14016a870

/* WARNING: Type propagation algorithm not settling */

longlong sdl_windows_close_on_alt_f4(HWND param_1,UINT param_2,HDROP param_3,wchar_t *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  char cVar15;
  byte bVar16;
  short sVar17;
  undefined4 uVar18;
  UINT UVar19;
  UINT UVar20;
  DWORD DVar21;
  DWORD DVar22;
  BOOL BVar23;
  BOOL BVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong *puVar28;
  LPARAM LVar29;
  ulonglong uVar30;
  wchar_t *pwVar31;
  HMENU pHVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  HMONITOR hMonitor;
  HBRUSH hbr;
  HDC hDC;
  undefined1 *puVar35;
  WNDPROC lpPrevWndFunc;
  short sVar36;
  UINT UVar37;
  undefined8 uVar38;
  char *pcVar39;
  longlong lVar40;
  int iVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  int iVar47;
  uint uVar48;
  undefined1 auVar49 [16];
  undefined1 auStackY_198 [32];
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  uint local_134;
  wchar_t *local_130;
  tagMONITORINFO local_128;
  undefined1 local_f8 [12];
  uint uStack_ec;
  uint uStack_e8;
  LONG LStack_e4;
  undefined1 local_e0 [16];
  BYTE local_d0 [56];
  uint local_98;
  uint local_94;
  ulonglong local_80;
  
  local_80 = DAT_1414ef3c0 ^ (ulonglong)auStackY_198;
  local_130 = param_4;
  lVar27 = FUN_140144860();
  if (lVar27 != 0) {
    for (lVar27 = *(longlong *)(lVar27 + 0x340); lVar27 != 0; lVar27 = *(longlong *)(lVar27 + 400))
    {
      puVar28 = *(ulonglong **)(lVar27 + 0x180);
      if ((puVar28 != (ulonglong *)0x0) && ((HWND)puVar28[1] == param_1)) goto LAB_14016a91c;
    }
  }
  puVar28 = GetPropW(param_1,L"SDL_WindowData");
  DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
  DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
  lpPrevWndFunc = DefWindowProcW_exref;
  if (puVar28 == (ulonglong *)0x0) goto LAB_14016c0e8;
LAB_14016a91c:
  uVar14 = local_f8._6_2_;
  uVar13 = local_f8._4_2_;
  uVar12 = local_f8._2_2_;
  uVar11 = local_f8._0_2_;
  local_f8._0_2_ = SUB82(param_1,0);
  uVar7 = local_f8._0_2_;
  local_f8._2_2_ = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar8 = local_f8._2_2_;
  local_f8._4_2_ = (undefined2)((ulonglong)param_1 >> 0x20);
  uVar9 = local_f8._4_2_;
  local_f8._6_2_ = (undefined2)((ulonglong)param_1 >> 0x30);
  uVar10 = local_f8._6_2_;
  if ((DAT_1415260f8 != (code *)0x0) && (*(int *)((longlong)puVar28 + 100) != 0)) {
    uStack_ec = 0;
    local_d0[0] = '\0';
    local_d0[1] = '\0';
    local_d0[2] = '\0';
    local_d0[3] = '\0';
    local_d0[4] = '\0';
    local_d0[5] = '\0';
    local_d0[6] = '\0';
    local_d0[7] = '\0';
    uStack_e8 = (uint)param_3;
    LStack_e4 = (LONG)((ulonglong)param_3 >> 0x20);
    local_e0._8_8_ = 0;
    local_e0._0_8_ = param_4;
    local_f8._8_4_ = param_2;
    cVar15 = (*DAT_1415260f8)(DAT_141526100,local_f8);
    if (cVar15 != '\0') {
      param_3 = (HDROP)CONCAT44(LStack_e4,uStack_e8);
      local_130 = (wchar_t *)local_e0._0_8_;
      uVar11 = local_f8._0_2_;
      uVar12 = local_f8._2_2_;
      uVar13 = local_f8._4_2_;
      uVar14 = local_f8._6_2_;
      param_2 = local_f8._8_4_;
      goto LAB_14016a9a2;
    }
LAB_14016a9c5:
    lVar27 = 0;
    local_f8._0_4_ = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    local_f8._4_4_ = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    goto switchD_14016b64f_caseD_0;
  }
LAB_14016a9a2:
  local_f8._6_2_ = uVar14;
  local_f8._4_2_ = uVar13;
  local_f8._2_2_ = uVar12;
  local_f8._0_2_ = uVar11;
  cVar15 = FUN_140465a80(param_1,param_2,param_3,&local_130);
  pwVar31 = local_130;
  if (cVar15 != '\0') goto LAB_14016a9c5;
  lVar27 = -1;
  sVar36 = (short)param_3;
  uVar48 = (uint)param_3;
  DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
  DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
  UVar19 = param_2;
  switch(param_2) {
  case 0x200:
    uVar33 = *puVar28;
    if (((*(ulonglong *)(uVar33 + 0x48) & 0x200) != 0) &&
       (((*(ulonglong *)(uVar33 + 0x48) & 0x8100) != 0 ||
        ((0 < *(int *)(uVar33 + 0x154) && (0 < *(int *)(uVar33 + 0x158))))))) {
      *(undefined1 *)((longlong)puVar28 + 0x5f) = 0;
      FUN_14045f380(uVar33);
    }
    if ((char)puVar28[0x14] == '\0') {
      local_f8._0_2_ = 0x18;
      local_f8._2_2_ = 0;
      local_f8._4_2_ = 2;
      local_f8._6_2_ = 0;
      local_f8._8_4_ = (undefined4)puVar28[1];
      uStack_ec = (uint)(puVar28[1] >> 0x20);
      BVar23 = TrackMouseEvent((LPTRACKMOUSEEVENT)local_f8);
      if (BVar23 != 0) {
        *(undefined1 *)(puVar28 + 0x14) = 1;
      }
    }
    lVar27 = -1;
    UVar19 = 0x200;
    param_2 = 0x200;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (*(char *)(puVar28[0x18] + 0x100) == '\0') {
      uVar30 = GetMessageExtraInfo();
      iVar45 = FUN_14016cc70(uVar30 & 0xffffffff);
      if ((iVar45 == 1) && (local_130 != (wchar_t *)puVar28[10])) {
        uVar34 = FUN_14016cbf0();
        FUN_140135310(uVar34,uVar33,0,0);
      }
      goto switchD_14016aa87_caseD_9;
    }
    break;
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20b:
  case 0x20c:
  case 0x20d:
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (*(char *)(puVar28[0x18] + 0x100) == '\0') {
      LVar29 = GetMessageExtraInfo();
      if (((((uint)LVar29 & 0xffffff00) != 0xff515700) &&
          (bVar16 = FUN_140162fa0(), ((char)LVar29 < '\0' & bVar16) == 0)) &&
         (local_130 != (wchar_t *)puVar28[10])) {
        uVar34 = FUN_14016cbf0();
        FUN_14016ccb0(uVar34,param_3,puVar28);
      }
      goto switchD_14016aa87_caseD_9;
    }
    break;
  case 0x20a:
  case 0x20e:
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (*(char *)(puVar28[0x18] + 0x100) == '\0') {
      uVar33 = *puVar28;
      uVar34 = FUN_14016cbf0();
      if (param_2 == 0x20a) {
        FUN_140136220(uVar34,uVar33,0,0);
        UVar19 = 0x20a;
      }
      else {
        FUN_140136220(uVar34,uVar33,0,(float)((int)uVar48 >> 0x10) / 120.0);
      }
      goto switchD_14016aa87_caseD_9;
    }
    break;
  case 0x20f:
  case 0x210:
  case 0x213:
  case 0x216:
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
  case 0x21c:
  case 0x21d:
  case 0x21e:
  case 0x21f:
  case 0x220:
  case 0x221:
  case 0x222:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x226:
  case 0x227:
  case 0x228:
  case 0x229:
  case 0x22a:
  case 0x22b:
  case 0x22c:
  case 0x22d:
  case 0x22e:
  case 0x22f:
  case 0x230:
  case 0x234:
  case 0x235:
  case 0x236:
  case 0x237:
  case 0x238:
  case 0x239:
  case 0x23a:
  case 0x23b:
  case 0x23c:
  case 0x23d:
  case 0x23e:
  case 0x23f:
  case 0x241:
  case 0x242:
  case 0x243:
  case 0x244:
  case 0x248:
  case 0x24b:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x251:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 0x256:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25e:
  case 0x25f:
  case 0x260:
  case 0x261:
  case 0x262:
  case 0x263:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26c:
  case 0x26d:
  case 0x26e:
  case 0x26f:
  case 0x270:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27a:
  case 0x27b:
  case 0x27c:
  case 0x27d:
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
  case 0x287:
  case 0x288:
  case 0x289:
  case 0x28a:
  case 0x28b:
  case 0x28c:
  case 0x28d:
  case 0x28e:
  case 0x28f:
  case 0x290:
  case 0x291:
  case 0x292:
  case 0x293:
  case 0x294:
  case 0x295:
  case 0x296:
  case 0x297:
  case 0x298:
  case 0x299:
  case 0x29a:
  case 0x29b:
  case 0x29c:
  case 0x29d:
  case 0x29e:
  case 0x29f:
  case 0x2a0:
  case 0x2a1:
  case 0x2a2:
  case 0x2a4:
  case 0x2a5:
  case 0x2a6:
  case 0x2a7:
  case 0x2a8:
  case 0x2a9:
  case 0x2aa:
  case 0x2ab:
  case 0x2ac:
  case 0x2ad:
  case 0x2ae:
  case 0x2af:
  case 0x2b0:
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2bd:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2c6:
  case 0x2c7:
  case 0x2c8:
  case 0x2c9:
  case 0x2ca:
  case 0x2cb:
  case 0x2cd:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
  case 0x2d2:
  case 0x2d3:
  case 0x2d4:
  case 0x2d5:
  case 0x2d6:
  case 0x2d7:
  case 0x2d8:
  case 0x2d9:
  case 0x2da:
  case 0x2db:
  case 0x2dc:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e1:
  case 0x2e2:
  case 0x2e3:
    break;
  case 0x211:
  case 0x231:
    if (DAT_1415260f8 != (code *)0x0) {
      uStack_ec = 0;
      local_d0[0] = '\0';
      local_d0[1] = '\0';
      local_d0[2] = '\0';
      local_d0[3] = '\0';
      local_d0[4] = '\0';
      local_d0[5] = '\0';
      local_d0[6] = '\0';
      local_d0[7] = '\0';
      LStack_e4 = (LONG)((ulonglong)param_3 >> 0x20);
      local_e0._8_8_ = 0;
      local_e0._0_8_ = local_130;
      local_f8._0_2_ = uVar7;
      local_f8._2_2_ = uVar8;
      local_f8._4_2_ = uVar9;
      local_f8._6_2_ = uVar10;
      local_f8._8_4_ = param_2;
      uStack_e8 = uVar48;
      cVar15 = (*DAT_1415260f8)(DAT_141526100,local_f8);
      if (cVar15 == '\0') goto LAB_14016a9c5;
      param_3 = (HDROP)CONCAT44(LStack_e4,uStack_e8);
      local_130 = (wchar_t *)local_e0._0_8_;
      param_2 = local_f8._8_4_;
    }
    lVar27 = -1;
    iVar45 = *(int *)((longlong)puVar28 + 100);
    *(int *)((longlong)puVar28 + 100) = iVar45 + 1;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (iVar45 == 0) {
      uVar33 = *puVar28;
      iVar45 = *(int *)(uVar33 + 0x18);
      *(int *)(puVar28 + 0xd) = iVar45;
      *(int *)(puVar28 + 0xe) = iVar45 + *(int *)(uVar33 + 0x20);
      iVar45 = *(int *)(uVar33 + 0x1c);
      *(int *)((longlong)puVar28 + 0x6c) = iVar45;
      *(int *)((longlong)puVar28 + 0x74) = iVar45 + *(int *)(uVar33 + 0x24);
      SetTimer(param_1,0x140456330,10,(TIMERPROC)0x0);
      UVar19 = param_2;
      goto switchD_14016aa87_caseD_9;
    }
    break;
  case 0x212:
  case 0x232:
    piVar1 = (int *)((longlong)puVar28 + 100);
    *piVar1 = *piVar1 + -1;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (*piVar1 == 0) {
      KillTimer(param_1,0x140456330);
      goto switchD_14016aa87_caseD_9;
    }
    break;
  case 0x214:
    uVar34 = *(undefined8 *)local_130;
    local_f8._0_2_ = (undefined2)uVar34;
    local_f8._2_2_ = (undefined2)((ulonglong)uVar34 >> 0x10);
    local_f8._4_2_ = (undefined2)((ulonglong)uVar34 >> 0x20);
    local_f8._6_2_ = (undefined2)((ulonglong)uVar34 >> 0x30);
    local_f8._8_4_ = (undefined4)*(undefined8 *)(local_130 + 4);
    uStack_ec = (uint)((ulonglong)*(undefined8 *)(local_130 + 4) >> 0x20);
    fVar2 = *(float *)(*puVar28 + 0x38);
    fVar3 = *(float *)(*puVar28 + 0x3c);
    if ((fVar2 <= 0.0) &&
       (DVar21 = (DWORD)uVar34, DVar22 = (DWORD)((ulonglong)uVar34 >> 0x20), fVar3 <= 0.0))
    goto LAB_14016c6f8;
    SetRectEmpty((LPRECT)&local_128);
    DVar21 = GetWindowLongW(param_1,-0x14);
    pHVar32 = GetMenu(param_1);
    DVar22 = GetWindowLongW(param_1,-0x10);
    BVar23 = AdjustWindowRectEx((LPRECT)&local_128,DVar22,(uint)(pHVar32 != (HMENU)0x0),DVar21);
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (BVar23 == 0) goto LAB_14016c6f8;
    DVar22 = CONCAT22(local_f8._2_2_,local_f8._0_2_) - local_128.cbSize;
    DVar21 = CONCAT22(local_f8._6_2_,local_f8._4_2_) - local_128.rcMonitor.left;
    UVar19 = local_f8._8_4_ - local_128.rcMonitor.top;
    uVar48 = uStack_ec - local_128.rcMonitor.right;
    iVar47 = UVar19 - DVar22;
    uVar33 = (ulonglong)uVar48;
    iVar45 = uVar48 - DVar21;
    local_f8._8_4_ = UVar19;
    uStack_ec = uVar48;
    local_f8._0_4_ = DVar22;
    local_f8._4_4_ = DVar21;
    if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
      fVar44 = (float)iVar47 / (float)iVar45;
      if ((undefined1 *)((longlong)&param_3[-1].unused + 3U) < (undefined1 *)0x2) {
        fVar4 = *(float *)(*puVar28 + 0x3c);
        fVar46 = 0.0;
        if (((0.0 < fVar4) && (fVar4 < fVar44)) ||
           ((fVar4 = *(float *)(*puVar28 + 0x38), 0.0 < fVar4 && (fVar44 < fVar4))))
        goto LAB_14016c592;
      }
      else if ((param_3 == (HDROP)0x3) || (param_3 == (HDROP)0x6)) {
        fVar46 = *(float *)(*puVar28 + 0x38);
        if (((0.0 < fVar46) && (fVar44 < fVar46)) ||
           ((fVar46 = *(float *)(*puVar28 + 0x3c), 0.0 < fVar46 && (fVar46 < fVar44)))) {
LAB_14016b4e4:
          fVar44 = (float)roundf((float)iVar47 / fVar46);
          iVar45 = (int)fVar44;
        }
      }
      else {
        fVar46 = *(float *)(*puVar28 + 0x3c);
        if ((0.0 < fVar46) && (fVar46 < fVar44)) goto LAB_14016c58b;
        fVar46 = *(float *)(*puVar28 + 0x38);
        if ((0.0 < fVar46) && (fVar44 < fVar46)) goto LAB_14016b4e4;
      }
    }
    else {
      uVar33 = *puVar28;
      fVar46 = *(float *)(uVar33 + 0x3c);
      if ((undefined1 *)((longlong)&param_3[-1].unused + 3U) < (undefined1 *)0x2)
      goto LAB_14016b4e4;
LAB_14016c58b:
      fVar46 = fVar46 * (float)iVar45;
LAB_14016c592:
      fVar44 = (float)roundf(uVar33,fVar46);
      iVar47 = (int)fVar44;
    }
    switch(param_3) {
    case (HDROP)0x1:
      local_f8._0_4_ = UVar19 - iVar47;
      bVar42 = NAN(fVar3) || NAN(fVar2);
      goto LAB_14016c63a;
    case (HDROP)0x2:
      local_f8._8_4_ = DVar22 + iVar47;
      bVar42 = NAN(fVar3) || NAN(fVar2);
LAB_14016c63a:
      if ((fVar3 == fVar2) && (!bVar42)) {
        DVar21 = ((*(int *)((longlong)puVar28 + 0x74) - iVar45) + *(int *)((longlong)puVar28 + 0x6c)
                 ) / 2;
        local_f8._4_4_ = DVar21;
      }
      break;
    case (HDROP)0x3:
      if ((fVar3 == fVar2) && (!NAN(fVar3) && !NAN(fVar2))) {
        DVar22 = (((int)puVar28[0xe] - iVar47) + (int)puVar28[0xd]) / 2;
        local_f8._0_4_ = DVar22;
      }
    case (HDROP)0x5:
      local_f8._8_4_ = DVar22 + iVar47;
LAB_14016c60d:
      local_f8._4_4_ = uVar48 - iVar45;
      goto switchD_14016c5b8_default;
    case (HDROP)0x4:
      local_f8._0_4_ = UVar19 - iVar47;
      goto LAB_14016c60d;
    case (HDROP)0x6:
      if ((fVar3 == fVar2) && (!NAN(fVar3) && !NAN(fVar2))) {
        DVar22 = (((int)puVar28[0xe] - iVar47) + (int)puVar28[0xd]) / 2;
        local_f8._0_4_ = DVar22;
      }
    case (HDROP)0x8:
      local_f8._8_4_ = DVar22 + iVar47;
      break;
    case (HDROP)0x7:
      local_f8._0_4_ = UVar19 - iVar47;
      break;
    default:
      goto switchD_14016c5b8_default;
    }
    uStack_ec = DVar21 + iVar45;
switchD_14016c5b8_default:
    DVar21 = GetWindowLongW(param_1,-0x14);
    pHVar32 = GetMenu(param_1);
    DVar22 = GetWindowLongW(param_1,-0x10);
    BVar23 = AdjustWindowRectEx((LPRECT)local_f8,DVar22,(uint)(pHVar32 != (HMENU)0x0),DVar21);
    DVar21 = local_f8._0_4_;
    DVar22 = local_f8._4_4_;
    if (BVar23 != 0) {
      *(ulonglong *)pwVar31 = CONCAT26(local_f8._6_2_,CONCAT24(local_f8._4_2_,local_f8._0_4_));
      *(ulonglong *)(pwVar31 + 4) = CONCAT44(uStack_ec,local_f8._8_4_);
    }
LAB_14016c6f8:
    lVar27 = -1;
    param_2 = 0x214;
    break;
  case 0x215:
    *(undefined1 *)((longlong)puVar28 + 0x5d) = 0;
    uVar34 = FUN_14016cbf0();
    FUN_14016d000(uVar34,puVar28);
    lVar27 = -1;
    param_2 = 0x215;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    break;
  case 0x233:
    UVar37 = 0;
    UVar19 = DragQueryFileW(param_3,0xffffffff,(LPWSTR)0x0,0);
    if (UVar19 != 0) {
      do {
        UVar20 = DragQueryFileW(param_3,UVar37,(LPWSTR)0x0,0);
        pwVar31 = (wchar_t *)FUN_140160c40((ulonglong)(UVar20 + 1) * 2);
        if (pwVar31 != (wchar_t *)0x0) {
          UVar20 = DragQueryFileW(param_3,UVar37,pwVar31,UVar20 + 1);
          if (UVar20 != 0) {
            wcslen(pwVar31);
            uVar34 = FUN_14017b9c0("UTF-8","UTF-16LE",pwVar31);
            FUN_14046b270(*puVar28,0);
            FUN_140160cf0(uVar34);
          }
          FUN_140160cf0(pwVar31);
        }
        UVar37 = UVar37 + 1;
      } while (UVar19 != UVar37);
    }
    FUN_14046b710(*puVar28);
    DragFinish(param_3);
    lVar27 = 0;
    goto switchD_14016b64f_caseD_0;
  case 0x240:
    param_2 = 0x240;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if ((*(longlong *)(puVar28[0x18] + 0x20) != 0) &&
       (DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_),
       DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_), *(longlong *)(puVar28[0x18] + 0x18) != 0))
    {
      iVar45 = (int)((ulonglong)param_3 & 0xffff);
      lVar27 = FUN_140160c40(iVar45 * 0x30);
      if (lVar27 != 0) {
        iVar47 = (**(code **)(puVar28[0x18] + 0x20))
                           (local_130,(ulonglong)param_3 & 0xffff,lVar27,0x30);
        if (iVar47 != 0) {
          BVar23 = GetClientRect(param_1,(LPRECT)local_f8);
          if ((BVar23 == 0) || (iVar47 = FUN_1403d7fc0(local_f8), iVar47 != 0)) {
            FUN_140160cf0(lVar27);
            UVar19 = 0x240;
            goto switchD_14016aa87_caseD_9;
          }
          ClientToScreen(param_1,(LPPOINT)local_f8);
          ClientToScreen(param_1,(LPPOINT)(local_f8 + 8));
          uVar34 = CONCAT26(local_f8._6_2_,
                            CONCAT24(local_f8._4_2_,CONCAT22(local_f8._2_2_,local_f8._0_2_)));
          auVar6._8_4_ = local_f8._8_4_;
          auVar6._0_8_ = uVar34;
          auVar6._12_4_ = uStack_ec;
          iVar47 = (int)((ulonglong)uVar34 >> 0x20);
          auVar49._4_4_ = iVar47;
          auVar49._0_4_ = iVar47;
          auVar49._8_4_ = uStack_ec;
          auVar49._12_4_ = uStack_ec;
          local_f8._0_4_ = CONCAT22(local_f8._2_2_,local_f8._0_2_) * 100;
          local_f8._8_4_ = (undefined4)((auVar6._8_8_ & 0xffffffff) * 100);
          local_f8._4_4_ = iVar47 * 100;
          uStack_ec = (uint)((auVar49._8_8_ & 0xffffffff) * 100);
          if (iVar45 != 0) {
            lVar40 = 0;
            do {
              iVar47 = local_f8._8_4_ - local_f8._0_4_;
              iVar41 = uStack_ec - local_f8._4_4_;
              uVar34 = *(undefined8 *)(lVar27 + 8 + lVar40);
              iVar45 = *(int *)(lVar27 + 0x10 + lVar40);
              pcVar39 = "pen";
              if ((*(byte *)(lVar27 + 0x14 + lVar40) & 0x40) == 0) {
                pcVar39 = "touch";
              }
              iVar26 = FUN_140163320(uVar34,0,pcVar39);
              if (-1 < iVar26) {
                if (iVar47 < 2) {
                  if (1 < iVar41) goto LAB_14016c467;
LAB_14016c41e:
                  uVar25 = *(uint *)(lVar27 + 0x14 + lVar40);
                }
                else {
                  if (iVar41 < 2) goto LAB_14016c41e;
LAB_14016c467:
                  uVar25 = *(uint *)(lVar27 + 0x14 + lVar40);
                }
                if ((uVar25 & 2) != 0) {
                  uVar33 = *puVar28;
                  uVar38 = FUN_14016cbf0();
                  unknown_touch_device_id_d_cannot_reset(uVar38,uVar34,iVar45 + 1,uVar33);
                  uVar25 = *(uint *)(lVar27 + 0x14 + lVar40);
                }
                if ((uVar25 & 1) != 0) {
                  uVar33 = *puVar28;
                  uVar38 = FUN_14016cbf0();
                  unknown_touch_device_id_d_cannot_reset(uVar38,uVar34,iVar45 + 1,uVar33);
                  uVar25 = *(uint *)(lVar27 + 0x14 + lVar40);
                }
                if ((uVar25 & 4) != 0) {
                  uVar33 = *puVar28;
                  uVar38 = FUN_14016cbf0();
                  unknown_touch_device_id_d_cannot_reset(uVar38,uVar34,iVar45 + 1,uVar33);
                }
              }
              lVar40 = lVar40 + 0x30;
            } while ((ulonglong)((uVar48 & 0xffff) << 4) * 3 != lVar40);
          }
        }
      }
      FUN_140160cf0(lVar27);
      (**(code **)(puVar28[0x18] + 0x18))(local_130);
      lVar27 = 0;
      goto switchD_14016b64f_caseD_0;
    }
    break;
  case 0x245:
    local_f8._0_2_ = 1;
    local_f8._2_2_ = 0;
    lVar27 = -1;
    if (*(code **)(puVar28[0x18] + 0xb0) != (code *)0x0) {
      iVar45 = (**(code **)(puVar28[0x18] + 0xb0))((ulonglong)param_3 & 0xffff,local_f8);
      lVar27 = -1;
      if (iVar45 != 0) {
        if (CONCAT22(local_f8._2_2_,local_f8._0_2_) != 4) goto switchD_14016aa01_caseD_246;
        puVar28[10] = (ulonglong)local_130;
        lVar27 = 0;
      }
    }
    param_2 = 0x245;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    break;
  case 0x246:
  case 0x247:
switchD_14016aa01_caseD_246:
    iVar45 = FUN_140455190((ulonglong)param_3 & 0xffff);
    lVar27 = -1;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if ((iVar45 != 0) &&
       (DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_),
       DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_),
       *(code **)(puVar28[0x18] + 0xb8) != (code *)0x0)) {
      iVar47 = (**(code **)(puVar28[0x18] + 0xb8))((ulonglong)param_3 & 0xffff,local_f8);
      lVar27 = -1;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      if (iVar47 != 0) {
        uVar34 = FUN_14016cbf0();
        uVar33 = *puVar28;
        if (param_2 == 0x247) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,(local_98 & 2) >> 1);
        }
        local_128.cbSize = (DWORD)(short)local_130;
        local_128.rcMonitor.left = (int)local_130 >> 0x10;
        ScreenToClient((HWND)puVar28[1],(LPPOINT)&local_128);
        invalid_pen_instance_id(uVar34,iVar45,uVar33,(float)(int)local_128.cbSize);
        invalid_pen_instance_id(uVar34,iVar45,uVar33,1);
        invalid_pen_instance_id(uVar34,iVar45,uVar33,2);
        if ((local_94 & 1) != 0) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,0);
        }
        if ((local_94 & 2) != 0) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,4);
        }
        if ((local_94 & 4) != 0) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,1);
        }
        if ((local_94 & 8) != 0) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,2);
        }
        if (param_2 == 0x246) {
          invalid_pen_instance_id(uVar34,iVar45,uVar33,(local_98 & 2) >> 1);
        }
        goto LAB_14016c0d3;
      }
    }
    break;
  case 0x249:
    param_2 = 0x249;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if (*(code **)(puVar28[0x18] + 0xb0) != (code *)0x0) {
      local_128.cbSize = 1;
      iVar45 = (**(code **)(puVar28[0x18] + 0xb0))((ulonglong)param_3 & 0xffff,&local_128);
      lVar27 = -1;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      if ((iVar45 != 0) &&
         (DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_),
         DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_), local_128.cbSize == 3)) {
        iVar45 = FUN_140455190((ulonglong)param_3 & 0xffff);
        lVar27 = -1;
        DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
        if (iVar45 == 0) {
          local_f8._0_2_ = 0x9f;
          local_f8._2_2_ = 0;
          local_f8._4_2_ = 0;
          local_f8._6_2_ = 0x42b4;
          local_f8._8_4_ = 0;
          uStack_ec = 1;
          uStack_e8 = 3;
          FUN_1404552a0(0,0,local_f8,(ulonglong)param_3 & 0xffff);
          lVar27 = 0;
          DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
          DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
        }
      }
    }
    break;
  case 0x24a:
  case 0x24c:
    iVar45 = FUN_140455190((ulonglong)param_3 & 0xffff);
    if (iVar45 == 0) goto switchD_14016aa87_caseD_9;
    if ((param_2 != 0x24c & (byte)((ulonglong)param_3 >> 0x12) & 1) != 0) goto LAB_14016c0d3;
    uVar34 = FUN_14016cbf0();
    invalid_pen_instance_id(uVar34,iVar45);
    lVar27 = 0;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    break;
  case 0x2a3:
    if ((*(byte *)(*puVar28 + 0x49) & 0x40) == 0) {
      uVar33 = FUN_140135230();
      if (((uVar33 == *puVar28) && (lVar27 = FUN_140134590(), *(char *)(lVar27 + 0x91) == '\0')) &&
         (BVar23 = IsIconic(param_1), BVar23 == 0)) {
        GetCursorPos((LPPOINT)local_f8);
        ScreenToClient(param_1,(LPPOINT)local_f8);
        lVar27 = FUN_140134590();
        if (*(char *)(lVar27 + 0xc0) == '\0') {
          uVar33 = *puVar28;
          uVar34 = FUN_14016cbf0();
LAB_14016c83e:
          uVar38 = 0;
        }
        else {
          *(undefined1 *)(lVar27 + 0xc0) = 0;
          cVar15 = *(char *)(lVar27 + 0xbc);
          uVar33 = *puVar28;
          uVar34 = FUN_14016cbf0();
          if (cVar15 != '\x01') goto LAB_14016c83e;
          uVar38 = 0xffffffff;
        }
        FUN_140135310(uVar34,uVar33,uVar38,0);
      }
      lVar27 = FUN_140134590();
      if (*(char *)(lVar27 + 0x91) == '\0') {
        FUN_140135240(0);
      }
    }
    *(undefined1 *)(puVar28 + 0x14) = 0;
    param_2 = 0x2a3;
    lVar27 = 0;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    break;
  case 0x2cc:
    lVar27 = 0x198319;
    goto switchD_14016b64f_caseD_0;
  case 0x2e0:
    lVar27 = 0;
    iVar45 = 0;
    if (*(char *)((longlong)puVar28 + 0x5b) == '\0') {
      local_f8._0_2_ = 0;
      local_f8._2_2_ = 0;
      local_f8._4_2_ = 0;
      local_f8._6_2_ = 0;
      uVar33 = *puVar28;
      local_f8._8_4_ = *(UINT *)(uVar33 + 0x20);
      uStack_ec = *(uint *)(uVar33 + 0x24);
      iVar47 = 0;
      if ((*(byte *)(uVar33 + 0x48) & 0x10) == 0) {
        FUN_14045cd60(param_1,local_f8,uVar48 >> 0x10);
        iVar47 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        iVar45 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      }
      *(undefined1 *)((longlong)puVar28 + 0x5b) = 1;
      SetWindowPos(param_1,(HWND)0x0,*(int *)pwVar31,*(int *)(pwVar31 + 2),local_f8._8_4_ - iVar47,
                   uStack_ec - iVar45,0x14);
      lVar27 = 0;
      *(undefined1 *)((longlong)puVar28 + 0x5b) = 0;
    }
    goto switchD_14016b64f_caseD_0;
  case 0x2e4:
    pcVar5 = *(code **)(puVar28[0x18] + 0x68);
    param_2 = 0x2e4;
    DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
    DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    if ((pcVar5 != (code *)0x0) &&
       (DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_),
       DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_), *(longlong *)(puVar28[0x18] + 0x60) != 0))
    {
      uVar18 = (*pcVar5)(param_1);
      pwVar31 = local_130;
      uVar34 = 0;
      local_f8._0_2_ = 0;
      local_f8._2_2_ = 0;
      local_f8._4_2_ = 0;
      local_f8._6_2_ = 0;
      local_f8._8_4_ = 0;
      uStack_ec = 0;
      uVar33 = *(ulonglong *)(*puVar28 + 0x48);
      iVar45 = 0;
      iVar47 = 0;
      if ((uVar33 & 0xc0010) == 0) {
        FUN_14045cd60(param_1,local_f8,uVar18);
        iVar45 = CONCAT22(local_f8._2_2_,local_f8._0_2_) - local_f8._8_4_;
        iVar47 = (int)(CONCAT26(local_f8._6_2_,
                                CONCAT24(local_f8._4_2_,CONCAT22(local_f8._2_2_,local_f8._0_2_))) >>
                      0x20) - uStack_ec;
        uVar33 = *(ulonglong *)(*puVar28 + 0x48);
      }
      uVar38 = *(undefined8 *)pwVar31;
      local_f8._8_4_ = (int)uVar38 + iVar45;
      uStack_ec = (int)((ulonglong)uVar38 >> 0x20) + iVar47;
      local_f8._0_2_ = 0;
      local_f8._2_2_ = 0;
      local_f8._4_2_ = 0;
      local_f8._6_2_ = 0;
      if ((uVar33 & 0xc0010) == 0) {
        FUN_14045cd60(param_1,local_f8,(ulonglong)param_3 & 0xffffffff);
        uVar34 = CONCAT26(local_f8._6_2_,
                          CONCAT24(local_f8._4_2_,CONCAT22(local_f8._2_2_,local_f8._0_2_)));
      }
      *(ulonglong *)pwVar31 =
           CONCAT44(uStack_ec - (int)((ulonglong)uVar34 >> 0x20),local_f8._8_4_ - (int)uVar34);
      lVar27 = 1;
      goto switchD_14016b64f_caseD_0;
    }
    break;
  default:
    switch(param_2) {
    case 6:
      FUN_14016c8b0(*puVar28,sVar36 != 0);
      UVar19 = 6;
      goto switchD_14016aa87_caseD_9;
    case 7:
      FUN_14016c8b0(*puVar28,1);
      UVar19 = 7;
      goto switchD_14016aa87_caseD_9;
    case 8:
switchD_14016aa87_caseD_8:
      FUN_14016c8b0(*puVar28,0);
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x85:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
    case 0x103:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
      goto switchD_14016aa87_caseD_9;
    case 0xf:
      BVar23 = GetUpdateRect(param_1,(LPRECT)&local_128,0);
      if (BVar23 != 0) {
        uVar48 = GetWindowLongW(param_1,-0x14);
        if ((uVar48 & 0x2000000) != 0) {
          BeginPaint(param_1,(LPPAINTSTRUCT)local_f8);
          EndPaint(param_1,(LPPAINTSTRUCT)local_f8);
        }
        ValidateRect(param_1,(RECT *)0x0);
        sdl_quit_on_last_window_close(*puVar28,0x204,0,0);
      }
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      param_2 = 0xf;
      lVar27 = 0;
      break;
    case 0x10:
      sdl_quit_on_last_window_close(*puVar28,0x210,0,0);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      lVar27 = 0;
      param_2 = 0x10;
      break;
    case 0x14:
      iVar45 = (int)puVar28[0x17];
      lVar27 = 1;
      if (iVar45 != 0) {
        if ((iVar45 == 1) || (iVar45 != 2)) {
          uVar33 = puVar28[0x18];
          if (*(char *)(uVar33 + 0xd0) != '\0') goto switchD_14016b64f_caseD_0;
        }
        else {
          uVar33 = puVar28[0x18];
        }
        *(undefined1 *)(uVar33 + 0xd0) = 1;
        GetClientRect(param_1,(LPRECT)local_f8);
        hbr = CreateSolidBrush(0);
        hDC = GetDC(param_1);
        FillRect(hDC,(LPRECT)local_f8,hbr);
        DeleteObject(hbr);
        lVar27 = 1;
      }
      goto switchD_14016b64f_caseD_0;
    case 0x18:
      if (param_3 == (HDROP)0x0) {
        param_3 = (HDROP)0x0;
        uVar34 = 0x203;
      }
      else {
        uVar34 = 0x202;
      }
      sdl_quit_on_last_window_close(*puVar28,uVar34,0,0);
      UVar19 = 0x18;
      goto switchD_14016aa87_caseD_9;
    case 0x1a:
      if (local_130 == (wchar_t *)0x0 || param_3 != (HDROP)0x0) {
        UVar19 = 0x1a;
        if ((param_3 == (HDROP)0x71) || (param_3 == (HDROP)0x4)) {
          FUN_1404681f0();
        }
      }
      else {
        iVar45 = wcscmp(local_130,L"ImmersiveColorSet");
        UVar19 = 0x1a;
        if (iVar45 == 0) {
          uVar18 = FUN_14015e320();
          FUN_1401448a0(uVar18);
          FUN_14045dbb0(param_1);
          param_3 = (HDROP)0x0;
        }
        else {
          param_3 = (HDROP)0x0;
        }
      }
      goto switchD_14016aa87_caseD_9;
    case 0x20:
      if ((short)local_130 == 1) {
        SetCursor(DAT_1416f21a0);
        lVar27 = 1;
        param_2 = 0x20;
        DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      }
      else {
        param_2 = 0x20;
        UVar19 = 0x20;
        if (DAT_1414f8cf9 != '\0') goto switchD_14016aa87_caseD_9;
        lVar27 = -1;
        DVar21 = local_f8._0_4_;
        DVar22 = local_f8._4_4_;
        if (DAT_1416f21a0 == (HCURSOR)0x0) {
          SetCursor((HCURSOR)0x0);
          DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
          DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
          lVar27 = 1;
        }
      }
      break;
    case 0x21:
      uVar33 = *puVar28;
      if ((*(byte *)(uVar33 + 0x4a) & 0xc) == 0) {
        lVar27 = -1;
        do {
          uVar33 = *(ulonglong *)(uVar33 + 0x198);
          if (uVar33 == 0) {
            param_2 = 0x21;
            DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
            DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
            goto switchD_14016aa01_caseD_20f;
          }
        } while ((~*(uint *)(uVar33 + 0x48) & 0x8200) != 0);
      }
      lVar27 = 3;
      goto switchD_14016b64f_caseD_0;
    case 0x24:
      if (*(char *)((longlong)puVar28 + 0x5b) != '\0') {
        UVar19 = 0x24;
        goto switchD_14016aa87_caseD_9;
      }
      GetWindowRect(param_1,(LPRECT)local_f8);
      uVar34 = CONCAT26(local_f8._6_2_,
                        CONCAT24(local_f8._4_2_,CONCAT22(local_f8._2_2_,local_f8._0_2_)));
      video_subsystem_has_not_been_initialized(*puVar28,&local_128,&local_134);
      video_subsystem_has_not_been_initialized(*puVar28,&local_138,&local_13c);
      video_subsystem_has_not_been_initialized(*puVar28,&local_140,&local_144);
      local_138 = local_138 - local_128.cbSize;
      local_13c = local_13c - local_134;
      bVar42 = local_140 != 0;
      bVar43 = local_144 != 0;
      if (bVar43 && bVar42) {
        local_140 = local_140 - local_128.cbSize;
        local_144 = local_144 - local_134;
      }
      uVar30 = video_subsystem_has_not_been_initialized(*puVar28);
      uVar33 = *puVar28;
      if (((uVar30 & 0x10) == 0) && ((*(byte *)(uVar33 + 0x4a) & 0xc) == 0)) {
        local_f8._0_2_ = 0;
        local_f8._2_2_ = 0;
        local_f8._4_2_ = 0;
        local_f8._6_2_ = 0;
        uStack_ec = local_134;
        local_f8._8_4_ = local_128.cbSize;
        FUN_14045cd60(param_1,local_f8,0);
        local_128.cbSize = local_f8._8_4_ - CONCAT22(local_f8._2_2_,local_f8._0_2_);
        local_134 = uStack_ec - CONCAT22(local_f8._6_2_,local_f8._4_2_);
        uVar33 = *puVar28;
      }
      pwVar31 = local_130;
      uVar33 = video_subsystem_has_not_been_initialized(uVar33);
      if ((uVar33 & 0x20) == 0) {
        *(DWORD *)(pwVar31 + 4) = local_128.cbSize;
        *(uint *)(pwVar31 + 6) = local_134;
        *(undefined8 *)(pwVar31 + 8) = uVar34;
        *(DWORD *)(pwVar31 + 0xc) = local_128.cbSize;
        *(uint *)(pwVar31 + 0xe) = local_134;
        *(DWORD *)(pwVar31 + 0x10) = local_128.cbSize;
        uVar48 = local_134;
LAB_14016c29d:
        *(uint *)(pwVar31 + 0x12) = uVar48;
      }
      else {
        uVar33 = video_subsystem_has_not_been_initialized(*puVar28);
        if ((uVar33 & 0x10) != 0) {
          UVar37 = GetSystemMetrics(0);
          uVar48 = GetSystemMetrics(1);
          UVar19 = UVar37;
          if ((int)UVar37 < (int)local_128.cbSize) {
            UVar19 = local_128.cbSize;
          }
          *(UINT *)(pwVar31 + 4) = UVar19;
          uVar25 = uVar48;
          if ((int)uVar48 < (int)local_134) {
            uVar25 = local_134;
          }
          *(uint *)(pwVar31 + 6) = uVar25;
          *(ulonglong *)(pwVar31 + 8) =
               ~CONCAT44(-(uint)(1 < (int)(uVar48 - local_134)),
                         -(uint)(1 < (int)(UVar37 - local_128.cbSize))) &
               CONCAT44((int)(uVar48 - local_134) / 2,(int)(UVar37 - local_128.cbSize) / 2);
        }
        *(DWORD *)(pwVar31 + 0xc) = local_138 + local_128.cbSize;
        *(uint *)(pwVar31 + 0xe) = local_13c + local_134;
        if (bVar43 && bVar42) {
          *(DWORD *)(pwVar31 + 0x10) = local_128.cbSize + local_140;
          uVar48 = local_134 + local_144;
          goto LAB_14016c29d;
        }
      }
      param_2 = 0x24;
      lVar27 = 0;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      break;
    case 0x46:
      lVar27 = -((ulonglong)*(byte *)((longlong)puVar28 + 0x5b) ^ 1);
      param_2 = 0x46;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      break;
    case 0x47:
      iVar45 = *(int *)((longlong)puVar28 + 0xa4);
      BVar23 = IsIconic(param_1);
      BVar24 = IsZoomed(param_1);
      if ((pwVar31[0x10] & L'@') != L'\0') {
        sdl_quit_on_last_window_close(*puVar28,0x202,0,0);
      }
      uVar33 = *puVar28;
      if (BVar23 == 0) {
        if (BVar24 == 0) {
          if ((*(ulonglong *)(uVar33 + 0x48) & 0xc0) != 0) {
            sdl_quit_on_last_window_close(uVar33,0x20b,0,0);
            uVar33 = *puVar28;
            if ((*(byte *)(uVar33 + 0x48) & 1) == 0) {
              *(undefined1 *)((longlong)puVar28 + 0x62) = 0;
              uVar48 = *(uint *)(uVar33 + 0x48);
              uVar34 = FUN_140144860();
              FUN_14045eaa0(uVar34,uVar33,(uVar48 & 0x20) >> 5);
            }
          }
        }
        else {
          if ((*(ulonglong *)(uVar33 + 0x48) & 0x40) != 0) {
            sdl_quit_on_last_window_close(uVar33,0x20b,0,0);
            uVar33 = *puVar28;
          }
          sdl_quit_on_last_window_close(uVar33,0x20a,0,0);
          *(undefined1 *)((longlong)puVar28 + 0x62) = 1;
        }
      }
      else {
        sdl_quit_on_last_window_close(uVar33,0x209,0,0);
      }
      if ((pwVar31[0x10] & L'\x80') != L'\0') {
        sdl_quit_on_last_window_close(*puVar28,0x203,0,0);
      }
      if ((BVar23 == 0) && (*(char *)((longlong)puVar28 + 0x5a) == '\0')) {
        if (*(char *)((longlong)puVar28 + 99) == '\0') {
          BVar23 = GetClientRect(param_1,(LPRECT)local_f8);
          if ((BVar23 != 0) && (iVar47 = FUN_1403d7fc0(local_f8), iVar47 == 0)) {
            ClientToScreen(param_1,(LPPOINT)local_f8);
            ClientToScreen(param_1,(LPPOINT)(local_f8 + 8));
            local_128.cbSize = CONCAT22(local_f8._2_2_,local_f8._0_2_);
            local_134 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
            FUN_140146a00(*puVar28,local_128.cbSize,local_134,&local_128);
            sdl_quit_on_last_window_close(*puVar28,0x205,local_128.cbSize,local_134);
          }
          BVar23 = GetClientRect(param_1,(LPRECT)local_f8);
          if ((BVar23 != 0) && (iVar47 = FUN_1403d7fc0(local_f8), iVar47 == 0)) {
            sdl_quit_on_last_window_close(*puVar28,0x206,local_f8._8_4_,uStack_ec);
          }
        }
        FUN_14045f380(*puVar28);
        iVar47 = video_subsystem_has_not_been_initialized(*puVar28);
        *(int *)((longlong)puVar28 + 0xa4) = iVar47;
        if (iVar47 != iVar45) {
          FUN_14045f1d0(*puVar28,1);
        }
        for (lVar27 = *(longlong *)(*puVar28 + 0x1a0); lVar27 != 0;
            lVar27 = *(longlong *)(lVar27 + 0x1b0)) {
          if ((char)(((uint)*(ulonglong *)(lVar27 + 0x48) & 8) >> 3) == '\0' &&
              (*(ulonglong *)(lVar27 + 0x48) & 0xc0000) != 0) {
            FUN_14045ce60(lVar27);
          }
        }
        InvalidateRect(param_1,(RECT *)0x0,0);
      }
      lVar27 = -1;
      param_2 = 0x47;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      break;
    case 0x51:
      FUN_140464e60(&DAT_140ded601);
      lVar27 = 1;
      param_2 = 0x51;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      break;
    case 0x7e:
      uVar34 = FUN_140144860();
      FUN_140461700(uVar34);
      UVar19 = 0x7e;
      goto switchD_14016aa87_caseD_9;
    case 0x83:
      uVar48 = video_subsystem_has_not_been_initialized(*puVar28);
      pwVar31 = local_130;
      param_2 = 0x83;
      UVar19 = 0x83;
      if (param_3 != (HDROP)0x1) goto switchD_14016aa87_caseD_9;
      lVar27 = -1;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      if ((uVar48 & 0x11) == 0x10) {
        BVar23 = GetWindowPlacement(param_1,(WINDOWPLACEMENT *)local_f8);
        if ((BVar23 == 0) || (local_f8._8_4_ != 3)) {
          if (((uVar48 & 0x20) == 0) && (*(char *)((longlong)puVar28 + 0x62) == '\0')) {
            uVar33 = *puVar28;
            lVar27 = (ulonglong)*(byte *)(uVar33 + 0x10c) * 0x10;
            iVar45 = *(int *)(uVar33 + 0x84 + lVar27);
            *(int *)(pwVar31 + 4) = *(int *)pwVar31 + *(int *)(uVar33 + 0x80 + lVar27);
            *(int *)(pwVar31 + 6) = *(int *)(pwVar31 + 2) + iVar45;
          }
        }
        else {
          hMonitor = MonitorFromWindow(param_1,0);
          if ((hMonitor != (HMONITOR)0x0) ||
             (hMonitor = MonitorFromPoint(*(POINT *)(*puVar28 + 0x68),2), hMonitor != (HMONITOR)0x0)
             ) {
            local_128.rcWork.left = 0;
            local_128.rcWork.top = 0;
            local_128.rcWork.right = 0;
            local_128.rcWork.bottom = 0;
            local_128.rcMonitor.left = 0;
            local_128.rcMonitor.top = 0;
            local_128.rcMonitor.right = 0;
            local_128.rcMonitor.bottom = 0;
            local_128.dwFlags = 0;
            local_128.cbSize = 0x28;
            BVar23 = GetMonitorInfoW(hMonitor,&local_128);
            if (BVar23 != 0) {
              *(undefined8 *)pwVar31 = local_128.rcWork._0_8_;
              *(undefined8 *)(pwVar31 + 4) = local_128.rcWork._8_8_;
              lVar27 = 0;
              goto switchD_14016b64f_caseD_0;
            }
          }
        }
        goto LAB_14016a9c5;
      }
      break;
    case 0x84:
      uVar33 = *puVar28;
      lVar27 = -1;
      if ((*(byte *)(uVar33 + 0x4a) & 4) != 0) goto switchD_14016b64f_caseD_0;
      param_2 = 0x84;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      if (*(longlong *)(uVar33 + 0x160) == 0) break;
      local_f8._2_2_ = (short)local_130 >> 0xf;
      local_f8._4_2_ = (undefined2)((ulonglong)local_130 >> 0x10);
      local_f8._6_2_ = (short)local_f8._4_2_ >> 0xf;
      local_f8._0_2_ = (short)local_130;
      BVar23 = ScreenToClient(param_1,(LPPOINT)local_f8);
      UVar19 = 0x84;
      if (BVar23 != 0) {
        local_128.cbSize = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        local_128.rcMonitor.left =
             (LONG)(CONCAT26(local_f8._6_2_,CONCAT24(local_f8._4_2_,local_128.cbSize)) >> 0x20);
        uVar18 = (**(code **)(uVar33 + 0x160))(uVar33,&local_128,*(undefined8 *)(uVar33 + 0x168));
        lVar27 = 1;
        switch(uVar18) {
        case 0:
          break;
        case 1:
          uVar48 = FUN_140137060(0,0);
          if ((uVar48 & 1) == 0 && uVar48 != 0) {
            FUN_140135240(uVar33);
            lVar27 = 1;
          }
          else {
            sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
            lVar27 = 2;
          }
          break;
        case 2:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0xd;
          break;
        case 3:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0xc;
          break;
        case 4:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0xe;
          break;
        case 5:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0xb;
          break;
        case 6:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0x11;
          break;
        case 7:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0xf;
          break;
        case 8:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 0x10;
          break;
        case 9:
          sdl_quit_on_last_window_close(*puVar28,0x211,0,0);
          lVar27 = 10;
          break;
        default:
          goto switchD_14016aa87_caseD_9;
        }
        goto switchD_14016b64f_caseD_0;
      }
      goto switchD_14016aa87_caseD_9;
    case 0x86:
      *(undefined1 *)((longlong)puVar28 + 0x5f) = 1;
      FUN_14016c8b0(*puVar28,param_3 != (HDROP)0x0);
      UVar19 = 0x86;
      goto switchD_14016aa87_caseD_9;
    case 0xa1:
      *(undefined1 *)((longlong)puVar28 + 0x5d) = 1;
      UVar19 = 0xa1;
      goto switchD_14016aa87_caseD_9;
    case 0x100:
    case 0x104:
      cVar15 = FUN_14016ced0(param_3,local_130);
      if (cVar15 == '\0') {
        iVar45 = FUN_14016cf70(local_130,param_3,local_f8,&local_128);
        if (((iVar45 == 0x3d) && (uVar33 = FUN_1401605b0(), (uVar33 & 0x300) != 0)) &&
           (cVar15 = FUN_1401106d0("SDL_WINDOWS_CLOSE_ON_ALT_F4",1), cVar15 != '\0')) {
          sdl_quit_on_last_window_close(*puVar28,0x210,0,0);
        }
        sVar36 = local_f8._0_2_;
        if ((((char)local_128.cbSize != '\0') || (*(char *)(puVar28[0x18] + 0x101) != '\x01')) ||
           (*(char *)(*puVar28 + 0x134) == '\x01')) {
          uVar34 = FUN_14016cbf0();
LAB_14016bd11:
          FUN_14015f990(uVar34,0,sVar36,iVar45);
        }
      }
      goto LAB_14016c0d3;
    case 0x101:
    case 0x105:
      cVar15 = FUN_14016ced0(param_3,local_130);
      if (cVar15 == '\0') {
        iVar45 = FUN_14016cf70(local_130,param_3,local_f8,&local_128);
        lVar27 = FUN_140160a90(0);
        sVar36 = local_f8._0_2_;
        if ((((char)local_128.cbSize != '\0') || (*(char *)(puVar28[0x18] + 0x101) != '\x01')) ||
           (*(char *)(*puVar28 + 0x134) == '\x01')) {
          if ((iVar45 == 0x46) && (*(char *)(lVar27 + 0x46) == '\0')) {
            uVar34 = FUN_14016cbf0();
            FUN_14015f990(uVar34,0,sVar36,0x46);
          }
          uVar34 = FUN_14016cbf0();
          goto LAB_14016bd11;
        }
      }
      goto LAB_14016c0d3;
    case 0x102:
      cVar15 = video_subsystem_has_not_been_initialized();
      if (cVar15 == '\0') {
LAB_14016c0c7:
        *(undefined2 *)(puVar28 + 0xb) = 0;
      }
      else {
        if (((ulonglong)param_3 & 0xfffffffffffffc00) != 0xd800) {
          sVar17 = (short)(int)puVar28[0xb];
          local_f8._0_2_ = sVar17;
          if (sVar17 == 0) {
            local_f8._0_2_ = sVar36;
          }
          local_f8._2_2_ = 0;
          if (sVar17 != 0) {
            local_f8._2_2_ = sVar36;
          }
          local_f8._4_2_ = 0;
          iVar45 = FUN_1403d80c0(0xfde9,0x80,local_f8,0xffffffff);
          if (0 < iVar45) {
            FUN_140160650(&local_128);
          }
          goto LAB_14016c0c7;
        }
        *(short *)(puVar28 + 0xb) = sVar36;
      }
      UVar19 = 0x102;
LAB_14016c0d3:
      param_2 = UVar19;
      lVar27 = 0;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      break;
    case 0x109:
      param_2 = 0x109;
      if (param_3 == (HDROP)0xffff) {
        lVar27 = 1;
        param_3 = (HDROP)0xffff;
        DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      }
      else {
        cVar15 = video_subsystem_has_not_been_initialized(*puVar28);
        UVar19 = 0x109;
        if (cVar15 == '\0') goto LAB_14016c0d3;
        puVar35 = (undefined1 *)FUN_1400fc080((ulonglong)param_3 & 0xffffffff,local_f8);
        *puVar35 = 0;
        FUN_140160650(local_f8);
        lVar27 = 0;
        DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      }
      break;
    case 0x112:
      if (((uVar48 & 0xfff0) != 0xf100) || (DAT_141525c64 != '\0')) {
        param_2 = 0x112;
        if (((uVar48 & 0xfff0) != 0xf170) && (UVar19 = 0x112, (uVar48 & 0xfff0) != 0xf140))
        goto switchD_14016aa87_caseD_9;
        lVar40 = FUN_140144860();
        DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
        DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
        lVar27 = -1;
        if (*(char *)(lVar40 + 0x30a) == '\0') break;
      }
      goto LAB_14016a9c5;
    case 0x113:
      param_2 = 0x113;
      lVar27 = -1;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
      if (param_3 == (HDROP)FUN_140456330) {
        FUN_14014c090(*puVar28);
        lVar27 = 0;
        goto switchD_14016b64f_caseD_0;
      }
      break;
    default:
      if (param_2 == 0x121) goto switchD_14016aa87_caseD_8;
switchD_14016aa87_caseD_9:
      param_2 = UVar19;
      lVar27 = -1;
      DVar21 = CONCAT22(local_f8._2_2_,local_f8._0_2_);
      DVar22 = CONCAT22(local_f8._6_2_,local_f8._4_2_);
    }
  }
switchD_14016aa01_caseD_20f:
  lpPrevWndFunc = (WNDPROC)puVar28[7];
  param_4 = local_130;
  if ((lpPrevWndFunc != (WNDPROC)0x0) ||
     (lpPrevWndFunc = DefWindowProcW_exref, local_f8._0_4_ = DVar21, local_f8._4_4_ = DVar22,
     lVar27 < 0)) {
LAB_14016c0e8:
    local_f8._0_4_ = DVar21;
    local_f8._4_4_ = DVar22;
    lVar27 = CallWindowProcW(lpPrevWndFunc,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  }
switchD_14016b64f_caseD_0:
  if (DAT_1414ef3c0 != (local_80 ^ (ulonglong)auStackY_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_80 ^ (ulonglong)auStackY_198);
  }
  return lVar27;
}


