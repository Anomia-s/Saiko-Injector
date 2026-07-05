/**
 * Function: failed_to_read_extension_type_u
 * Address:  14064b2b0
 * Signature: undefined failed_to_read_extension_type_u(void)
 * Body size: 1174 bytes
 */


undefined8 failed_to_read_extension_type_u(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined2 uVar12;
  longlong lVar13;
  undefined2 uVar14;
  longlong lVar15;
  undefined2 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_68 [43];
  undefined1 local_3d;
  byte local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  puVar1[1] = param_2;
  write_memory_failed_u(puVar1,0xa400f0,0x55);
  write_memory_failed_u(puVar1,0xa400fb,0);
  iVar5 = *(int *)((longlong)puVar1 + 0x1c);
  if (iVar5 == 0x81) {
    lVar15 = 0x70;
    lVar17 = 0x6e;
    lVar18 = 0x6c;
    lVar19 = 0x6a;
    uVar4 = 10;
    lVar13 = 0x68;
    lVar21 = 0x66;
    uVar12 = 0xd7;
    lVar22 = 100;
    uVar10 = 0x28;
    lVar20 = 0x62;
LAB_14064b3f6:
    *(undefined2 *)((longlong)puVar1 + lVar20) = uVar10;
    *(undefined2 *)((longlong)puVar1 + lVar22) = uVar12;
    *(undefined2 *)((longlong)puVar1 + lVar21) = 0;
    *(undefined2 *)((longlong)puVar1 + lVar13) = uVar4;
    *(undefined2 *)((longlong)puVar1 + lVar19) = uVar10;
    *(undefined2 *)((longlong)puVar1 + lVar18) = uVar12;
    *(undefined2 *)((longlong)puVar1 + lVar17) = 0;
    *(undefined2 *)((longlong)puVar1 + lVar15) = uVar4;
    iVar5 = *(int *)((longlong)puVar1 + 0x1c);
  }
  else {
    if (iVar5 == 0x82) {
      uVar23 = 0x90004;
      uVar24 = 0x360009;
      uVar4 = 2;
      uVar12 = 0x1a;
      uVar10 = 5;
      uVar14 = 4;
      uVar16 = 0x36;
LAB_14064b36a:
      *(undefined4 *)((longlong)puVar1 + 0x62) = uVar24;
      *(undefined2 *)((longlong)puVar1 + 0x66) = 0;
      *(undefined4 *)(puVar1 + 0xd) = uVar23;
      *(undefined2 *)((longlong)puVar1 + 0x6c) = uVar16;
      *(undefined2 *)((longlong)puVar1 + 0x6e) = 0;
      *(undefined2 *)(puVar1 + 0xe) = uVar14;
      lVar15 = 0x80;
      lVar17 = 0x7e;
      lVar18 = 0x7c;
      lVar19 = 0x7a;
      lVar13 = 0x78;
      lVar21 = 0x76;
      lVar22 = 0x74;
      lVar20 = 0x72;
      goto LAB_14064b3f6;
    }
    if (iVar5 == 0x83) {
      uVar23 = 0x3e80064;
      uVar24 = 0xbb803e8;
      uVar10 = 1000;
      uVar14 = 100;
      uVar16 = 3000;
      uVar12 = 3000;
      uVar4 = 100;
      goto LAB_14064b36a;
    }
  }
  uVar8 = 0x32;
  if (iVar5 - 0x81U < 2) {
LAB_14064b43c:
    local_3b = 0x35;
    if (*(char *)((longlong)puVar1 + 0x2b) == '\0') {
      local_3b = uVar8;
    }
  }
  else {
    local_3b = 0x3d;
    if (iVar5 != 0x83) {
      uVar8 = 0x30;
      goto LAB_14064b43c;
    }
  }
  local_3c = *(byte *)(puVar1 + 5) | 4;
  local_3d = 0x12;
  cVar2 = hidapi_rumble();
  if (cVar2 != '\0') {
    FUN_14064f890(*puVar1,&local_3d,3);
  }
  *(undefined2 *)((longlong)puVar1 + 0x29) = 0;
  if (*(int *)((longlong)puVar1 + 0x1c) == 0x83) goto LAB_14064b5d4;
  cVar2 = read_timed_out(puVar1,0xa400fe,1);
  if (cVar2 == '\0') goto LAB_14064b4f6;
  if (*(char *)((longlong)puVar1 + 0x2c) == '!') {
    if ((*(char *)(puVar1 + 6) != '\0') || (*(char *)((longlong)puVar1 + 0x31) != -2)) {
      pcVar11 = "Unexpected extension response address";
      goto LAB_14064b4f1;
    }
    bVar9 = *(byte *)((longlong)puVar1 + 0x2f);
    if (bVar9 != 0x10) {
      bVar3 = bVar9 & 0xf;
      if ((bVar9 & 0xf) == 0) {
        bVar3 = (bVar9 >> 4) + 1;
        pcVar11 = "Unexpected read length when reading extension type: %d";
      }
      else {
        if (bVar3 == 7) goto LAB_14064b4f6;
        pcVar11 = "Failed to read extension type: %u";
      }
      FUN_1400fbed0(pcVar11,bVar3);
      goto LAB_14064b4f6;
    }
    if ((ushort)((*(byte *)((longlong)puVar1 + 0x32) & 0xfff0) << 8 |
                (ushort)*(byte *)((longlong)puVar1 + 0x33)) != 5) goto LAB_14064b4f6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 1;
    *(byte *)((longlong)puVar1 + 0x2a) = *(byte *)((longlong)puVar1 + 0x32);
  }
  else {
    pcVar11 = "Unexpected extension response type";
LAB_14064b4f1:
    FUN_1400fbed0(pcVar11);
LAB_14064b4f6:
    cVar2 = read_timed_out(puVar1,0xa600fe,1);
    if (cVar2 != '\0') {
      if (*(char *)((longlong)puVar1 + 0x2c) == '!') {
        if ((*(char *)(puVar1 + 6) == '\0') && (*(char *)((longlong)puVar1 + 0x31) == -2)) {
          bVar9 = *(byte *)((longlong)puVar1 + 0x2f);
          if (bVar9 == 0x10) {
            if ((ushort)((*(byte *)((longlong)puVar1 + 0x32) & 0xfff0) << 8 |
                        (ushort)*(byte *)((longlong)puVar1 + 0x33)) == 5) {
              *(undefined1 *)((longlong)puVar1 + 0x29) = 1;
            }
          }
          else if ((bVar9 & 0xf) == 0) {
            FUN_1400fbed0("Unexpected read length when reading extension type: %d",(bVar9 >> 4) + 1)
            ;
          }
          else if ((bVar9 & 0xf) != 7) {
            FUN_1400fbed0("Failed to read extension type: %u");
          }
          goto LAB_14064b55a;
        }
        pcVar11 = "Unexpected extension response address";
      }
      else {
        pcVar11 = "Unexpected extension response type";
      }
      FUN_1400fbed0(pcVar11);
    }
  }
LAB_14064b55a:
  uVar6 = *(uint *)((longlong)puVar1 + 0x1c);
  if (uVar6 != 0x83) {
    if (*(char *)((longlong)puVar1 + 0x2a) == '\0') {
      lVar13 = sdl_timer_resolution();
      puVar1[0xb] = lVar13 + 8000;
      uVar6 = *(uint *)((longlong)puVar1 + 0x1c);
    }
    if ((uVar6 & 0xfffffffe) == 0x80) {
      FUN_14012b6e0(param_2,1,0x42c80000);
      if (*(int *)((longlong)puVar1 + 0x1c) == 0x81) {
        FUN_14012b6e0(param_2,3,0x42c80000);
      }
      if (*(char *)((longlong)puVar1 + 0x29) == '\x01') {
        FUN_14012b6e0(param_2,2,0x42c80000);
      }
    }
  }
LAB_14064b5d4:
  uVar23 = parameter_s_is_invalid(param_2);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar23;
  cVar2 = FUN_1401106d0("SDL_JOYSTICK_HIDAPI_WII_PLAYER_LED",1);
  *(char *)(puVar1 + 4) = cVar2;
  local_39 = *(byte *)(puVar1 + 5);
  if (cVar2 != '\0') {
    uVar6 = *(uint *)((longlong)puVar1 + 0x24);
    bVar9 = local_39;
    if (3 < (int)uVar6) {
      bVar9 = local_39 | 0x10;
    }
    if (uVar6 == 0) {
      bVar9 = local_39 | 0x10;
    }
    if ((uVar6 == 4) || (uVar6 == 1)) {
      bVar9 = bVar9 | 0x20;
    }
    if ((uVar6 == 5) || (uVar6 == 2)) {
      bVar9 = bVar9 | 0x40;
    }
    if ((uVar6 == 6) || (uVar6 == 3)) {
      bVar9 = bVar9 | 0x80;
    }
    local_39 = bVar9 | 0xf0;
    if (uVar6 < 7) {
      local_39 = bVar9;
    }
  }
  local_3a = 0x11;
  cVar2 = hidapi_rumble();
  if (cVar2 != '\0') {
    FUN_14064f890(*puVar1,&local_3a,2);
  }
  parameter_s_is_invalid("SDL_JOYSTICK_HIDAPI_WII_PLAYER_LED",FUN_14064cc30,puVar1);
  uVar23 = 0x1a;
  if (*(int *)((longlong)puVar1 + 0x1c) == 0x83) {
    uVar23 = 0xf;
  }
  *(undefined4 *)(param_2 + 0x70) = uVar23;
  *(undefined4 *)(param_2 + 0x40) = 6;
  uVar7 = sdl_timer_resolution();
  puVar1[9] = uVar7;
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_68)) {
    return CONCAT71((int7)((local_38 ^ (ulonglong)auStack_68) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_68);
}

