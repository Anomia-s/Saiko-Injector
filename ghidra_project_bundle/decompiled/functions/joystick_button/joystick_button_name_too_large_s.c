/**
 * Function: joystick_button_name_too_large_s
 * Address:  14010d640
 * Signature: undefined joystick_button_name_too_large_s(void)
 * Body size: 1367 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014010d8ac) */

void joystick_button_name_too_large_s(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong lVar17;
  byte *pbVar18;
  undefined1 auStack_98 [32];
  byte local_78 [16];
  uint local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  httplib::ClientImpl::vfunction4();
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = (longlong)param_2;
  if (((longlong)*(int *)(*param_1 + 0x40) != 0) && ((void *)param_1[7] != (void *)0x0)) {
    memset((void *)param_1[7],0,(longlong)*(int *)(*param_1 + 0x40) << 3);
  }
  httplib::ClientImpl::vfunction4();
  *(undefined4 *)(param_1 + 3) = 0;
  pcVar11 = strstr(*(char **)(param_1[4] + 0x18),"type:");
  if (pcVar11 == (char *)0x0) {
LAB_14010d6fa:
    iVar9 = (int)param_1[3];
  }
  else {
    lVar12 = FUN_1400fc570("type:");
    pcVar11 = pcVar11 + lVar12;
    pcVar13 = strchr(pcVar11,0x2c);
    if (pcVar13 != (char *)0x0) {
      *pcVar13 = '\0';
      uVar8 = FUN_14010a0f0(pcVar11);
      *(undefined4 *)(param_1 + 3) = uVar8;
      *pcVar13 = ',';
      goto LAB_14010d6fa;
    }
    iVar9 = FUN_14010a0f0(pcVar11);
    *(int *)(param_1 + 3) = iVar9;
  }
  if (iVar9 == 0) {
    uVar8 = *(undefined4 *)*param_1;
    FUN_1401264f0();
    lVar12 = FUN_140127400(uVar8);
    if (lVar12 == 0) {
      uVar14 = FUN_140127600(uVar8);
      FUN_14012d850(&local_58,uVar8);
      uVar8 = FUN_14012d170(&local_58,uVar14);
    }
    else {
      uVar8 = *(undefined4 *)(lVar12 + 0x14);
    }
    FUN_140126530();
    *(undefined4 *)(param_1 + 3) = uVar8;
  }
  httplib::ClientImpl::vfunction4();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  pcVar11 = strstr(*(char **)(param_1[4] + 0x18),"face:");
  if (pcVar11 == (char *)0x0) {
LAB_14010d852:
    if (*(int *)((longlong)param_1 + 0x1c) == 0) {
LAB_14010d859:
      pcVar11 = strstr(*(char **)(param_1[4] + 0x18),"SDL_GAMECONTROLLER_USE_BUTTON_LABELS");
      uVar8 = 2;
      if (pcVar11 == (char *)0x0) {
        if (*(int *)((longlong)param_1 + 0x1c) != 0) goto LAB_14010d8ba;
        uVar10 = (int)param_1[3] - 4;
        uVar8 = 1;
        if (uVar10 < 7) {
          uVar8 = (&DAT_140de9820)[uVar10];
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
    }
  }
  else {
    lVar12 = FUN_1400fc570("type:");
    pcVar11 = pcVar11 + lVar12;
    pcVar13 = strchr(pcVar11,0x2c);
    if (pcVar13 != (char *)0x0) {
      *pcVar13 = '\0';
      iVar9 = FUN_1400fd200(pcVar11);
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      else {
        iVar9 = FUN_1400fd200(pcVar11);
        if (iVar9 == 0) {
          iVar9 = 2;
        }
        else {
          iVar9 = FUN_1400fd200(pcVar11);
          iVar9 = (uint)(iVar9 == 0) * 3;
        }
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar9;
      *pcVar13 = ',';
      goto LAB_14010d852;
    }
    iVar9 = FUN_1400fd200(pcVar11);
    if (iVar9 != 0) {
      iVar9 = FUN_1400fd200(pcVar11);
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
        goto LAB_14010d8ba;
      }
      iVar9 = FUN_1400fd200(pcVar11);
      iVar9 = (uint)(iVar9 == 0) * 3;
      *(int *)((longlong)param_1 + 0x1c) = iVar9;
      if (iVar9 != 0) goto LAB_14010d8ba;
      goto LAB_14010d859;
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
LAB_14010d8ba:
  pbVar18 = (byte *)param_2[3];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  local_68 = 0;
  if (pbVar18 != (byte *)0x0) {
    bVar16 = true;
    uVar15 = 0;
    do {
      uVar10 = (uint)uVar15;
      bVar2 = *pbVar18;
      if (bVar2 < 0x2c) {
        if (bVar2 != 0x20) {
          if (bVar2 == 0) {
            if (local_78[0] != 0 || (char)local_58 != '\0') {
              FUN_14010fce0(param_1);
            }
            break;
          }
LAB_14010d970:
          if (bVar16) {
            if (0x13 < uVar10) goto LAB_14010d9ce;
            *(byte *)((longlong)&local_58 + uVar15) = bVar2;
            uVar10 = uVar10 + 1;
            bVar16 = true;
          }
          else {
            if (0x13 < uVar10) {
              local_68 = local_68 & 0xffffff;
              pcVar11 = "Joystick button name too large: %s";
              goto LAB_14010d9df;
            }
            local_78[uVar15] = bVar2;
            uVar10 = uVar10 + 1;
            bVar16 = false;
          }
        }
        uVar5 = (ulonglong)uVar10;
        bVar6 = bVar16;
      }
      else {
        uVar5 = 0;
        bVar6 = false;
        if (bVar2 != 0x3a) {
          if (bVar2 != 0x2c) goto LAB_14010d970;
          FUN_14010fce0(param_1,&local_58,local_78);
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_78[0] = 0;
          local_78[1] = 0;
          local_78[2] = 0;
          local_78[3] = 0;
          local_78[4] = 0;
          local_78[5] = 0;
          local_78[6] = 0;
          local_78[7] = 0;
          local_78[8] = 0;
          local_78[9] = 0;
          local_78[10] = 0;
          local_78[0xb] = 0;
          local_78[0xc] = 0;
          local_78[0xd] = 0;
          local_78[0xe] = 0;
          local_78[0xf] = 0;
          local_68 = 0;
          uVar5 = 0;
          bVar6 = true;
        }
      }
      bVar16 = bVar6;
      uVar15 = uVar5;
      pbVar18 = pbVar18 + 1;
    } while( true );
  }
  goto LAB_14010d9e4;
LAB_14010d9ce:
  local_48 = local_48 & 0xffffff;
  pcVar11 = "Button name too large: %s";
LAB_14010d9df:
  FUN_1400fbed0(pcVar11);
LAB_14010d9e4:
  local_58 = *param_2;
  uStack_50 = param_2[1];
  cVar7 = FUN_14012d240(&local_58);
  uVar15 = (ulonglong)*(uint *)(param_1 + 5);
  if (cVar7 != '\0') {
    if ((int)*(uint *)(param_1 + 5) < 1) goto LAB_14010dace;
    lVar12 = param_1[6];
    lVar17 = 0;
    do {
      if (((*(int *)(lVar12 + 0x10 + lVar17) == 1) && (*(int *)(lVar12 + 0x14 + lVar17) == 0xb)) &&
         ((*(int *)(lVar12 + lVar17) != 1 || (*(int *)(lVar12 + 4 + lVar17) != 0xb))))
      goto LAB_14010da4c;
      lVar17 = lVar17 + 0x20;
    } while (uVar15 << 5 != lVar17);
    lVar12 = 0;
    lVar17 = 0;
    do {
      lVar4 = param_1[6];
      if ((*(int *)(lVar4 + lVar12) == 1) && (*(int *)(lVar4 + 0x10 + lVar12) == 1)) {
        iVar9 = *(int *)(lVar4 + 0x14 + lVar12);
        switch(iVar9) {
        case 0xb:
          *(undefined8 *)(lVar4 + lVar12) = 3;
          *(undefined4 *)(lVar4 + 8 + lVar12) = 1;
          break;
        case 0xc:
          *(undefined8 *)(lVar4 + lVar12) = 3;
          *(undefined4 *)(lVar4 + 8 + lVar12) = 4;
          break;
        case 0xd:
          *(undefined8 *)(lVar4 + lVar12) = 3;
          *(undefined4 *)(lVar4 + 8 + lVar12) = 8;
          break;
        case 0xe:
          *(undefined8 *)(lVar4 + lVar12) = 3;
          *(undefined4 *)(lVar4 + 8 + lVar12) = 2;
          break;
        default:
          if (0xe < iVar9) {
            piVar1 = (int *)(lVar4 + 4 + lVar12);
            *piVar1 = *piVar1 + -4;
          }
        }
      }
      lVar17 = lVar17 + 1;
      uVar15 = (ulonglong)(int)param_1[5];
      lVar12 = lVar12 + 0x20;
    } while (lVar17 < (longlong)uVar15);
  }
LAB_14010da4c:
  if (0 < (int)uVar15) {
    lVar12 = 0x14;
    lVar17 = 0;
    do {
      lVar4 = param_1[6];
      if (((*(int *)(lVar4 + -0x14 + lVar12) == 2) && (*(int *)(lVar4 + -4 + lVar12) == 2)) &&
         ((*(uint *)(lVar4 + lVar12) & 0xfffffffe) == 4)) {
        iVar9 = *(int *)(lVar4 + -0x10 + lVar12);
        if (iVar9 < *(int *)(*param_1 + 0x40)) {
          uVar3 = *(undefined2 *)(lVar4 + -0xc + lVar12);
          *(undefined2 *)(*(longlong *)(*param_1 + 0x48) + 4 + (longlong)iVar9 * 10) = uVar3;
          *(undefined2 *)
           (*(longlong *)(*param_1 + 0x48) + 2 + (longlong)*(int *)(lVar4 + -0x10 + lVar12) * 10) =
               uVar3;
          uVar15 = (ulonglong)*(uint *)(param_1 + 5);
        }
      }
      lVar17 = lVar17 + 1;
      lVar12 = lVar12 + 0x20;
    } while (lVar17 < (int)uVar15);
  }
LAB_14010dace:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_98);
  }
  return;
}

