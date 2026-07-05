/**
 * Function: gles2_updatetexturenv
 * Address:  14042d9f0
 * Signature: undefined gles2_updatetexturenv(void)
 * Body size: 1241 bytes
 */


ulonglong gles2_updatetexturenv
                    (longlong param_1,longlong param_2,int *param_3,void *param_4,int param_5,
                    void *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  ulonglong uVar11;
  void *pvVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  size_t sVar19;
  longlong lVar20;
  size_t sVar21;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 uVar24;
  undefined4 uVar25;
  
  plVar5 = *(longlong **)(param_1 + 0x2c0);
  puVar6 = *(undefined4 **)(param_2 + 0xf0);
  lVar20 = param_1;
  lVar9 = video_subsystem_has_not_been_initialized();
  if (lVar9 != *plVar5) {
    plVar5[0x53] = 0;
    lVar20 = *(longlong *)(param_1 + 0x100);
    cVar7 = video_subsystem_has_not_been_initialized(lVar20);
    if (cVar7 == '\0') goto LAB_14042da5a;
  }
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  if (*(char *)(lVar9 + 8) == '\x01') {
    do {
      iVar8 = (**(code **)(lVar9 + 200))();
    } while (iVar8 != 0);
  }
LAB_14042da5a:
  uVar11 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
  if ((0 < param_3[2]) && (0 < param_3[3])) {
    plVar5[0x4a] = 0;
    (*(code *)plVar5[5])(puVar6[2],puVar6[0xc]);
    uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    iVar8 = param_3[3];
    iVar1 = param_3[2];
    if (2 < iVar8 + 2U && 2 < iVar1 + 2U) {
      uVar14 = (iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1;
      iVar18 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar1 = *param_3;
      iVar2 = param_3[1];
      uVar3 = puVar6[2];
      sVar21 = (longlong)iVar18 * 2;
      sVar19 = (size_t)param_7;
      if (sVar21 == sVar19) {
        uVar24 = CONCAT44(uVar25,uVar14);
        uVar22 = CONCAT44(uVar23,iVar18);
        (*(code *)plVar5[0x27])(uVar3,0,iVar1 / 2,iVar2 / 2,uVar22,uVar24,0x190a,0x1401,param_6);
        uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
        uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
      }
      else {
        pvVar12 = (void *)FUN_140160c40((longlong)(int)uVar14 * sVar21);
        uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
        uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
        if (pvVar12 != (void *)0x0) {
          if (0 < iVar8) {
            uVar16 = uVar14 & 3;
            pvVar10 = pvVar12;
            if (2 < uVar14 - 1) {
              uVar15 = uVar14 & 0x3ffffffc;
              do {
                memcpy(pvVar10,param_6,sVar21);
                memcpy((void *)((longlong)pvVar10 + sVar21),(void *)((longlong)param_6 + sVar19),
                       sVar21);
                pvVar10 = (void *)((longlong)((longlong)pvVar10 + sVar21) + sVar21);
                param_6 = (void *)((longlong)((longlong)param_6 + sVar19) + sVar19);
                memcpy(pvVar10,param_6,sVar21);
                pvVar10 = (void *)((longlong)pvVar10 + sVar21);
                param_6 = (void *)((longlong)param_6 + sVar19);
                memcpy(pvVar10,param_6,sVar21);
                pvVar10 = (void *)((longlong)pvVar10 + sVar21);
                param_6 = (void *)((longlong)param_6 + sVar19);
                uVar15 = uVar15 - 4;
              } while (uVar15 != 0);
            }
            while( true ) {
              uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
              uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
              if (uVar16 == 0) break;
              memcpy(pvVar10,param_6,sVar21);
              param_6 = (void *)((longlong)param_6 + sVar19);
              uVar16 = uVar16 - 1;
              pvVar10 = (void *)((longlong)pvVar10 + sVar21);
            }
          }
          uVar24 = CONCAT44(uVar25,uVar14);
          uVar22 = CONCAT44(uVar23,iVar18);
          (*(code *)plVar5[0x27])(uVar3,0,iVar1 / 2,iVar2 / 2,uVar22,uVar24,0x190a,0x1401,pvVar12);
          uVar23 = (undefined4)((ulonglong)uVar22 >> 0x20);
          uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
          FUN_140160cf0(pvVar12);
        }
      }
    }
    uVar11 = (ulonglong)(uint)puVar6[2];
    (*(code *)plVar5[5])(uVar11,*puVar6);
    uVar14 = param_3[3];
    iVar8 = param_3[2];
    sVar21 = (size_t)iVar8;
    pvVar12 = (void *)(uVar11 & 0xffffffffffffff00);
    if (sVar21 != 0 && (longlong)(int)uVar14 != 0) {
      uVar3 = puVar6[4];
      uVar16 = puVar6[2];
      pvVar12 = (void *)(ulonglong)uVar16;
      uVar4 = puVar6[3];
      iVar1 = *param_3;
      iVar2 = param_3[1];
      if (iVar8 == param_5) {
        (*(code *)plVar5[0x27])
                  (pvVar12,0,iVar1,iVar2,CONCAT44(uVar23,param_5),CONCAT44(uVar25,uVar14),uVar4,
                   uVar3,param_4);
      }
      else {
        pvVar12 = (void *)(sVar21 * (longlong)(int)uVar14);
        pvVar10 = (void *)FUN_140160c40(pvVar12);
        if (pvVar10 != (void *)0x0) {
          if (0 < (int)uVar14) {
            lVar20 = (longlong)param_5;
            uVar15 = uVar14 & 3;
            pvVar12 = pvVar10;
            if (3 < uVar14) {
              uVar17 = uVar14 & 0x7ffffffc;
              do {
                memcpy(pvVar12,param_4,sVar21);
                memcpy((void *)((longlong)pvVar12 + sVar21),(void *)((longlong)param_4 + lVar20),
                       sVar21);
                pvVar12 = (void *)((longlong)((longlong)pvVar12 + sVar21) + sVar21);
                param_4 = (void *)((longlong)param_4 + lVar20 + lVar20);
                memcpy(pvVar12,param_4,sVar21);
                pvVar12 = (void *)((longlong)pvVar12 + sVar21);
                param_4 = (void *)((longlong)param_4 + lVar20);
                memcpy(pvVar12,param_4,sVar21);
                pvVar12 = (void *)((longlong)pvVar12 + sVar21);
                param_4 = (void *)((longlong)param_4 + lVar20);
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
            }
            for (; uVar15 != 0; uVar15 = uVar15 - 1) {
              memcpy(pvVar12,param_4,sVar21);
              param_4 = (void *)((longlong)param_4 + lVar20);
              pvVar12 = (void *)((longlong)pvVar12 + sVar21);
            }
          }
          (*(code *)plVar5[0x27])(uVar16,0,iVar1,iVar2,iVar8,uVar14,uVar4,uVar3,pvVar10);
          FUN_140160cf0(pvVar10);
          pvVar12 = pvVar10;
        }
      }
    }
    lVar20 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar20 + 8) == '\x01') {
      iVar8 = (**(code **)(lVar20 + 200))();
      uVar11 = CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
      if (iVar8 != 0) {
        do {
          pcVar13 = "UNKNOWN";
          if (iVar8 - 0x500U < 6) {
            pcVar13 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar8 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexSubImage2D()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x750,"GLES2_UpdateTextureNV",pcVar13,iVar8);
          iVar8 = (**(code **)(lVar20 + 200))();
        } while (iVar8 != 0);
        uVar11 = 0;
      }
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
    }
  }
  return uVar11 & 0xffffffff;
}

