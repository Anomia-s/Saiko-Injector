/**
 * Function: couldnt_create_audio_thread
 * Address:  140131f40
 * Signature: undefined couldnt_create_audio_thread(void)
 * Body size: 1248 bytes
 */


ulonglong couldnt_create_audio_thread(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  lVar9 = (longlong)param_1 + 0x8c;
  iVar3 = FUN_140106170(lVar9);
  while (iVar3 != 0) {
    FUN_1401383a0(param_1[1],*param_1);
    iVar3 = FUN_140106170(lVar9);
  }
  uVar13 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  if ((*(char *)(param_1 + 0x18) != '\0') || (iVar3 = FUN_140106170(param_1 + 0x12), iVar3 != 0))
  goto LAB_140132283;
  param_1[3] = DAT_1415256d0;
  param_1[4] = DAT_1415256d8;
  param_1[5] = DAT_1415256e0;
  param_1[6] = DAT_1415256e8;
  param_1[7] = DAT_1415256f0;
  param_1[8] = DAT_1415256f8;
  puVar6 = (uint *)(param_1 + 0xf);
  if (param_2 != (uint *)0x0) {
    puVar6 = param_2;
  }
  uVar5 = *puVar6;
  uVar14 = puVar6[1];
  bVar1 = *(byte *)((longlong)param_1 + 0x94);
  uVar12 = puVar6[2];
  if (puVar6[2] == 0) {
    pcVar7 = (char *)FUN_140110550("SDL_AUDIO_FREQUENCY");
    if (pcVar7 == (char *)0x0) {
      uVar12 = 0xac44;
    }
    else {
      uVar4 = atoi(pcVar7);
      uVar12 = 0xac44;
      if (0 < (int)uVar4) {
        uVar12 = uVar4;
      }
    }
  }
  if (uVar14 == 0) {
    uVar14 = 2 - bVar1;
    pcVar7 = (char *)FUN_140110550("SDL_AUDIO_CHANNELS");
    if ((pcVar7 != (char *)0x0) && (uVar4 = atoi(pcVar7), 0 < (int)uVar4)) {
      uVar14 = uVar4;
    }
  }
  if (uVar5 == 0) {
    lVar9 = FUN_140110550("SDL_AUDIO_FORMAT");
    uVar5 = 0x8010;
    if (lVar9 != 0) {
      iVar3 = FUN_1400fd200(lVar9,&DAT_14136dc64);
      if (iVar3 == 0) {
        uVar5 = 8;
      }
      else {
        iVar3 = FUN_1400fd200(lVar9,&DAT_14136dc7d);
        if (iVar3 == 0) {
          uVar5 = 0x8008;
        }
        else {
          iVar3 = FUN_1400fd200(lVar9,"S16LE");
          if (iVar3 != 0) {
            iVar3 = FUN_1400fd200(lVar9,"S16BE");
            if (iVar3 == 0) {
              uVar5 = 0x9010;
            }
            else {
              iVar3 = FUN_1400fd200(lVar9,&DAT_141371615);
              if (iVar3 != 0) {
                iVar3 = FUN_1400fd200(lVar9,"S32LE");
                uVar5 = 0x8020;
                if (iVar3 != 0) {
                  iVar3 = FUN_1400fd200(lVar9,"S32BE");
                  if (iVar3 == 0) {
                    uVar5 = 0x9020;
                  }
                  else {
                    iVar3 = FUN_1400fd200(lVar9,&DAT_141377550);
                    if (iVar3 != 0) {
                      iVar3 = FUN_1400fd200(lVar9,"F32LE");
                      if (iVar3 == 0) {
                        uVar5 = 0x8120;
                      }
                      else {
                        iVar3 = FUN_1400fd200(lVar9,"F32BE");
                        if (iVar3 == 0) {
                          uVar5 = 0x9120;
                        }
                        else {
                          iVar3 = FUN_1400fd200(lVar9,&DAT_14137755a);
                          uVar5 = 0x8010;
                          if (iVar3 == 0) {
                            uVar5 = 0x8120;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 0xf);
  if ((*(uint *)(param_1 + 0xf) & 0xff) < (uVar5 & 0xff)) {
    uVar4 = uVar5;
  }
  *(uint *)(param_1 + 0xc) = uVar4;
  if ((int)uVar12 < (int)*(uint *)(param_1 + 0x10)) {
    uVar12 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0xd) = uVar12;
  if ((int)uVar14 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    uVar14 = *(uint *)((longlong)param_1 + 0x7c);
  }
  *(uint *)((longlong)param_1 + 100) = uVar14;
  pcVar7 = (char *)FUN_140110550("SDL_AUDIO_DEVICE_SAMPLE_FRAMES");
  if ((((pcVar7 == (char *)0x0) || (iVar3 = atoi(pcVar7), iVar3 < 1)) &&
      (iVar3 = 0x200, 0x5622 < (int)uVar12)) && (iVar3 = 0x400, 48000 < uVar12)) {
    iVar3 = (uint)(96000 < uVar12) * 0x800 + 0x800;
  }
  *(int *)((longlong)param_1 + 0x84) = iVar3;
  *(uint *)(param_1 + 0x11) = (uint)(*(uint *)(param_1 + 0xc) == 8) << 7;
  iVar3 = iVar3 * *(int *)((longlong)param_1 + 100);
  iVar10 = (*(uint *)(param_1 + 0xc) >> 3 & 0x1f) * iVar3;
  *(int *)((longlong)param_1 + 0x6c) = iVar10;
  iVar3 = iVar3 * 4;
  if (iVar3 < iVar10) {
    iVar3 = iVar10;
  }
  *(int *)(param_1 + 0x16) = iVar3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  cVar2 = (*DAT_1415256b8)(param_1);
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x11) = (uint)(*(uint *)(param_1 + 0xc) == 8) << 7;
    iVar3 = *(int *)((longlong)param_1 + 0x84) * *(int *)((longlong)param_1 + 100);
    iVar10 = (*(uint *)(param_1 + 0xc) >> 3 & 0x1f) * iVar3;
    *(int *)((longlong)param_1 + 0x6c) = iVar10;
    iVar3 = iVar3 * 4;
    if (iVar3 < iVar10) {
      iVar3 = iVar10;
    }
    *(int *)(param_1 + 0x16) = iVar3;
    uVar8 = FUN_14015d020();
    lVar9 = FUN_14016e640(uVar8,(longlong)iVar3);
    param_1[0x13] = lVar9;
    if (lVar9 != 0) {
      if (*(int *)(param_1 + 0xc) != 0x8120) {
        iVar3 = *(int *)(param_1 + 0x16);
        uVar8 = FUN_14015d020();
        lVar9 = FUN_14016e640(uVar8,(longlong)iVar3);
        param_1[0x14] = lVar9;
        if (lVar9 == 0) goto LAB_140132279;
      }
      if (DAT_141525720 == '\0') {
        uVar8 = 0x50;
        if (*(char *)((longlong)param_1 + 0x94) != '\0') {
          uVar8 = 0x43;
        }
        local_88 = (code *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 10));
        FUN_1400fd420(local_78,0x40,"SDLAudio%c%d",uVar8);
        pcVar11 = FUN_140134100;
        if (*(char *)((longlong)param_1 + 0x94) != '\0') {
          pcVar11 = FUN_1401340b0;
        }
        local_88 = _endthreadex_exref;
        lVar9 = sdlthreadcreateentry_function(pcVar11,local_78,param_1,_beginthreadex_exref);
        param_1[0x17] = lVar9;
        if (lVar9 == 0) {
          FUN_140131be0(param_1);
          uVar5 = FUN_1400fbed0("Couldn\'t create audio thread");
          uVar13 = (ulonglong)uVar5;
        }
      }
      goto LAB_140132283;
    }
  }
LAB_140132279:
  FUN_140131be0(param_1);
  uVar13 = 0;
LAB_140132283:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_a8);
  }
  return uVar13 & 0xffffffff;
}

