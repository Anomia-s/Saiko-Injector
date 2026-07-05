/**
 * Function: sdlwindowcreateexternal_graphics_context
 * Address:  140148230
 * Signature: undefined sdlwindowcreateexternal_graphics_context(void)
 * Body size: 1773 bytes
 */


undefined4 * sdlwindowcreateexternal_graphics_context(ulonglong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar17;
  bool bVar18;
  undefined1 auStack_98 [36];
  int local_74;
  undefined8 local_70;
  undefined4 local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_60 = FUN_14014ffe0(param_1,"SDL.window.create.title",0);
  uVar4 = FUN_140150150(param_1 & 0xffffffff,"SDL.window.create.x",0x1fff0000);
  uVar5 = FUN_140150150(param_1 & 0xffffffff,"SDL.window.create.y");
  iVar6 = FUN_140150150(param_1 & 0xffffffff,"SDL.window.create.width");
  iVar7 = FUN_140150150(param_1 & 0xffffffff,"SDL.window.create.height");
  local_70 = FUN_14014ff10(param_1 & 0xffffffff,"SDL.window.create.parent");
  uVar9 = FUN_140150150(param_1 & 0xffffffff,"SDL.window.create.flags");
  lVar15 = 0x10;
  do {
    if (*(char *)((longlong)&PTR_s_SDL_window_create_always_on_top_140deaeb0 + lVar15) == '\x01') {
      cVar2 = FUN_1401503a0(param_1 & 0xffffffff,
                            *(undefined8 *)((longlong)&PTR_PTR_140deaea0 + lVar15));
      if (cVar2 == '\0') {
LAB_140148300:
        uVar9 = uVar9 | *(ulonglong *)((longlong)&DAT_140deaea8 + lVar15);
      }
    }
    else {
      cVar2 = FUN_1401503a0(param_1 & 0xffffffff,
                            *(undefined8 *)((longlong)&PTR_PTR_140deaea0 + lVar15));
      if (cVar2 != '\0') goto LAB_140148300;
    }
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x1c0);
  uVar3 = FUN_1401503a0(param_1 & 0xffffffff,"SDL.window.create.external_graphics_context");
  if (DAT_1415259c8 == (undefined8 *)0x0) {
    cVar2 = thunk_FUN_14015af80(0x20);
    puVar10 = (undefined4 *)0x0;
    if ((cVar2 == '\0') || (DAT_1415259c8 == (undefined8 *)0x0)) goto LAB_14014861f;
  }
  if (((uVar9 & 0x1000) == 0) || (cVar2 = FUN_1403d8fa0(local_70,1), cVar2 != '\0')) {
    if ((uVar9 & 0xc0000) != 0) {
      if ((*(byte *)((longlong)DAT_1415259c8 + 0x38c) & 2) == 0) {
        pcVar12 = "That operation is not supported";
      }
      else {
        cVar2 = FUN_1403d8fa0(local_70,1);
        if (cVar2 != '\0') {
          uVar9 = uVar9 & 0xffffffffffffff2e;
          goto LAB_1401483e9;
        }
        pcVar12 = "Tooltip and popup menu windows must specify a parent window";
      }
      goto LAB_1401484ce;
    }
LAB_1401483e9:
    uVar13 = (uint)uVar9 & 0xe1000;
    if ((uVar13 & uVar13 - 1) == 0) {
      if ((code *)DAT_1415259c8[4] != (code *)0x0) {
        (*(code *)DAT_1415259c8[4])();
      }
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      local_74 = 1;
      if (1 < iVar7) {
        local_74 = iVar7;
      }
      uVar13 = uVar4 & 0xffff0000;
      if ((uVar13 == 0x1fff0000) || (uVar13 == 0x2fff0000)) {
LAB_14014844a:
        uVar14 = uVar4 & 0xffff;
        if ((uVar4 & 0xffff) == 0) {
LAB_140148455:
          if ((((uVar5 & 0xffff0000) == 0x2fff0000) || ((uVar5 & 0xffff0000) == 0x1fff0000)) &&
             (uVar14 = uVar5 & 0xffff, uVar14 != 0)) goto LAB_14014847e;
        }
        else {
LAB_14014847e:
          uVar16 = (ulonglong)uVar14;
          if (DAT_1415259c8 == (undefined8 *)0x0) {
            pcVar12 = "Video subsystem has not been initialized";
          }
          else {
            pcVar12 = "Invalid display";
            if (0 < (longlong)*(int *)(DAT_1415259c8 + 100)) {
              lVar15 = 0;
              do {
                if (uVar14 == **(uint **)(DAT_1415259c8[0x65] + lVar15 * 8)) goto LAB_14014854c;
                lVar15 = lVar15 + 1;
              } while (*(int *)(DAT_1415259c8 + 100) != lVar15);
            }
          }
          FUN_1400fbed0(pcVar12);
        }
        if ((DAT_1415259c8 == (undefined8 *)0x0) || (*(int *)(DAT_1415259c8 + 100) == 0)) {
          FUN_1400fbed0("Video subsystem has not been initialized");
          uVar16 = 0;
        }
        else {
          uVar16 = (ulonglong)**(uint **)DAT_1415259c8[0x65];
        }
LAB_14014854c:
        local_58 = 0;
        uStack_50 = 0;
        video_subsystem_has_not_been_initialized(uVar16,&local_58);
        if (((int)uStack_50 < iVar6) || (uStack_50._4_4_ < local_74)) {
          video_subsystem_has_not_been_initialized(uVar16,&local_58);
        }
        if ((uVar13 == 0x2fff0000) || (uVar13 == 0x1fff0000)) {
          uVar8 = (undefined4)CONCAT71((int7)(uVar16 >> 8),uVar13 == 0x1fff0000);
          uVar4 = ((int)uStack_50 - iVar6) / 2 + (int)local_58;
        }
        else {
          uVar8 = 0;
        }
        if (((uVar5 & 0xffff0000) != 0x2fff0000) && ((uVar5 & 0xffff0000) != 0x1fff0000))
        goto LAB_140148600;
        bVar18 = (uVar5 & 0xffff0000) == 0x1fff0000;
        uVar5 = (uStack_50._4_4_ - local_74) / 2 + local_58._4_4_;
      }
      else {
        if (((uVar5 & 0xffff0000) == 0x2fff0000) || ((uVar5 & 0xffff0000) == 0x1fff0000)) {
          if ((uVar13 == 0x1fff0000) || (uVar13 == 0x2fff0000)) goto LAB_14014844a;
          goto LAB_140148455;
        }
        uVar8 = 0;
LAB_140148600:
        bVar18 = false;
      }
      uVar13 = (uint)uVar9 & 0x30000002;
      if ((uVar13 & uVar13 - 1) != 0) {
        pcVar12 = "Conflicting window graphics flags specified: 0x%.8x";
        goto LAB_140148618;
      }
      if ((uVar9 & 2) == 0) {
LAB_14014867b:
        local_64 = uVar8;
        if ((uVar9 & 0x10000000) != 0) {
          if (DAT_1415259c8[0x3f] == 0) {
            uVar17 = *DAT_1415259c8;
            pcVar12 = "Vulkan";
            goto LAB_1401487eb;
          }
          puVar10 = (undefined4 *)0x0;
          cVar2 = video_subsystem_has_not_been_initialized(0);
          if (cVar2 == '\0') goto LAB_14014861f;
        }
        if (((uVar9 & 0x20000000) == 0) || (DAT_1415259c8[0x42] != 0)) {
          puVar10 = (undefined4 *)FUN_140160c70(1,0x1b8);
          if (puVar10 != (undefined4 *)0x0) {
            FUN_1403d8ef0(puVar10,1,1);
            uVar8 = FUN_1403d8eb0();
            *puVar10 = uVar8;
            puVar10[6] = uVar4;
            puVar10[0x1a] = uVar4;
            puVar10[0x1e] = uVar4;
            puVar10[7] = uVar5;
            puVar10[0x1b] = uVar5;
            puVar10[0x1f] = uVar5;
            puVar10[8] = iVar6;
            puVar10[0x1c] = iVar6;
            puVar10[0x20] = iVar6;
            puVar10[9] = local_74;
            puVar10[0x1d] = local_74;
            puVar10[0x21] = local_74;
            *(char *)((longlong)puVar10 + 0x99) = (char)local_64;
            *(bool *)((longlong)puVar10 + 0x9a) = bVar18;
            puVar11 = (undefined4 *)video_subsystem_has_not_been_initialized(puVar10);
            if (puVar11 != (undefined4 *)0x0) {
              video_subsystem_has_not_been_initialized(puVar10,puVar11 + 0x17,0);
            }
            if (((uVar9 & 1) != 0) || ((*(byte *)((longlong)DAT_1415259c8 + 0x38c) & 8) != 0)) {
              if (puVar11 == (undefined4 *)0x0) {
                uVar8 = video_subsystem_has_not_been_initialized();
              }
              else {
                uVar8 = *puVar11;
              }
              video_subsystem_has_not_been_initialized(uVar8,&local_58);
              puVar10[6] = (int)local_58;
              puVar10[7] = local_58._4_4_;
              puVar10[8] = (int)uStack_50;
              puVar10[9] = uStack_50._4_4_;
              *(byte *)(puVar10 + 0x14) = *(byte *)(puVar10 + 0x14) | 1;
              uVar9 = uVar9 | 1;
            }
            puVar1 = DAT_1415259c8;
            *(ulonglong *)(puVar10 + 0x12) = (ulonglong)((uint)uVar9 & 0xf00f2072) | 8;
            puVar10[0x16] = 0x3f800000;
            puVar10[0x3e] = 0x3f800000;
            *(undefined8 *)(puVar10 + 100) = puVar1[0x68];
            *(undefined1 *)((longlong)puVar10 + 0x10d) = 0;
            uVar8 = video_subsystem_has_not_been_initialized(puVar10);
            puVar10[0x19] = uVar8;
            *(undefined1 *)(puVar10 + 0x17) = uVar3;
            puVar1 = DAT_1415259c8;
            if (DAT_1415259c8[0x68] != 0) {
              *(undefined4 **)(DAT_1415259c8[0x68] + 0x188) = puVar10;
            }
            puVar1[0x68] = puVar10;
            FUN_140148aa0(puVar10,local_70);
            if (((code *)puVar1[9] == (code *)0x0) ||
               (cVar2 = (*(code *)puVar1[9])(puVar1,puVar10,param_1 & 0xffffffff), cVar2 != '\0')) {
              if (local_60 != 0) {
                video_subsystem_has_not_been_initialized(puVar10);
              }
              FUN_140149000(puVar10,uVar9);
              FUN_140149070(puVar10);
              FUN_1400fc040();
              goto LAB_14014861f;
            }
            video_subsystem_has_not_been_initialized(puVar10);
          }
        }
        else {
          uVar17 = *DAT_1415259c8;
          pcVar12 = "Metal";
LAB_1401487eb:
          FUN_1400fbed0("%s support is either not configured in SDL or not available in current SDL video driver (%s) or platform"
                        ,pcVar12,uVar17);
        }
      }
      else {
        if (DAT_1415259c8[0x34] == 0) {
          uVar17 = *DAT_1415259c8;
          pcVar12 = "OpenGL";
          goto LAB_1401487eb;
        }
        iVar7 = *(int *)(DAT_1415259c8 + 0x81);
        if (iVar7 != 0) {
LAB_140148673:
          *(int *)(DAT_1415259c8 + 0x81) = iVar7 + 1;
          goto LAB_14014867b;
        }
        if ((code *)DAT_1415259c8[0x31] == (code *)0x0) {
          cVar2 = FUN_1400fbed0("No dynamic %s support in current SDL video driver (%s)","OpenGL",
                                *DAT_1415259c8);
          if (cVar2 != '\0') goto LAB_14014867b;
        }
        else {
          cVar2 = (*(code *)DAT_1415259c8[0x31])(DAT_1415259c8,0);
          if (cVar2 != '\0') {
            iVar7 = *(int *)(DAT_1415259c8 + 0x81);
            goto LAB_140148673;
          }
          if ((code *)DAT_1415259c8[0x33] != (code *)0x0) {
            (*(code *)DAT_1415259c8[0x33])();
          }
        }
      }
    }
    else {
      pcVar12 = "Conflicting window type flags specified: 0x%.8x";
LAB_140148618:
      FUN_1400fbed0(pcVar12);
    }
  }
  else {
    pcVar12 = "Modal windows must specify a parent window";
LAB_1401484ce:
    FUN_1400fbed0(pcVar12);
  }
  puVar10 = (undefined4 *)0x0;
LAB_14014861f:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_98)) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
}

