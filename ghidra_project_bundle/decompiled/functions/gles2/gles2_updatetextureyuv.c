/**
 * Function: gles2_updatetextureyuv
 * Address:  14042d320
 * Signature: undefined gles2_updatetextureyuv(void)
 * Body size: 1737 bytes
 */


ulonglong gles2_updatetextureyuv
                    (longlong param_1,longlong param_2,int *param_3,void *param_4,int param_5,
                    void *param_6,int param_7,void *param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  ulonglong uVar11;
  void *pvVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  size_t sVar18;
  uint uVar19;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined4 uVar22;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar24;
  undefined8 uVar23;
  undefined4 uVar25;
  
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  puVar5 = *(undefined4 **)(param_2 + 0xf0);
  lVar16 = param_1;
  lVar9 = video_subsystem_has_not_been_initialized();
  if (lVar9 != *plVar4) {
    plVar4[0x53] = 0;
    lVar16 = *(longlong *)(param_1 + 0x100);
    cVar6 = video_subsystem_has_not_been_initialized(lVar16);
    if (cVar6 == '\0') goto LAB_14042d39a;
  }
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  if (*(char *)(lVar9 + 8) == '\x01') {
    do {
      iVar7 = (**(code **)(lVar9 + 200))();
    } while (iVar7 != 0);
  }
LAB_14042d39a:
  uVar11 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
  if ((0 < param_3[2]) && (0 < param_3[3])) {
    plVar4[0x4a] = 0;
    (*(code *)plVar4[5])(puVar5[2],puVar5[10]);
    iVar7 = param_3[3];
    iVar1 = param_3[2];
    if (2 < iVar7 + 2U && 2 < iVar1 + 2U) {
      uVar22 = puVar5[4];
      uVar25 = puVar5[2];
      uVar2 = puVar5[3];
      uVar15 = (iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1;
      iVar8 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar1 = *param_3;
      iVar3 = param_3[1];
      if (iVar8 == param_9) {
        in_stack_ffffffffffffff60 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffff60 >> 0x20),uVar15);
        in_stack_ffffffffffffff58 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),param_9);
        (*(code *)plVar4[0x27])
                  (uVar25,0,iVar1 / 2,iVar3 / 2,in_stack_ffffffffffffff58,in_stack_ffffffffffffff60,
                   uVar2,uVar22,param_8);
      }
      else {
        sVar18 = (size_t)iVar8;
        pvVar12 = (void *)FUN_140160c40((longlong)(int)uVar15 * sVar18);
        uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
        uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
        if (pvVar12 != (void *)0x0) {
          if (0 < iVar7) {
            lVar16 = (longlong)param_9;
            uVar17 = uVar15 & 3;
            pvVar10 = pvVar12;
            if (2 < uVar15 - 1) {
              uVar14 = uVar15 & 0x3ffffffc;
              do {
                memcpy(pvVar10,param_8,sVar18);
                memcpy((void *)((longlong)pvVar10 + sVar18),(void *)((longlong)param_8 + lVar16),
                       sVar18);
                pvVar10 = (void *)((longlong)((longlong)pvVar10 + sVar18) + sVar18);
                param_8 = (void *)((longlong)param_8 + lVar16 + lVar16);
                memcpy(pvVar10,param_8,sVar18);
                pvVar10 = (void *)((longlong)pvVar10 + sVar18);
                param_8 = (void *)((longlong)param_8 + lVar16);
                memcpy(pvVar10,param_8,sVar18);
                pvVar10 = (void *)((longlong)pvVar10 + sVar18);
                param_8 = (void *)((longlong)param_8 + lVar16);
                uVar14 = uVar14 - 4;
              } while (uVar14 != 0);
            }
            while( true ) {
              uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
              uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
              if (uVar17 == 0) break;
              memcpy(pvVar10,param_8,sVar18);
              param_8 = (void *)((longlong)param_8 + lVar16);
              uVar17 = uVar17 - 1;
              pvVar10 = (void *)((longlong)pvVar10 + sVar18);
            }
          }
          in_stack_ffffffffffffff60 = CONCAT44(uVar24,uVar15);
          in_stack_ffffffffffffff58 = CONCAT44(uVar21,iVar8);
          (*(code *)plVar4[0x27])
                    (uVar25,0,iVar1 / 2,iVar3 / 2,in_stack_ffffffffffffff58,
                     in_stack_ffffffffffffff60,uVar2,uVar22,pvVar12);
          FUN_140160cf0(pvVar12);
        }
      }
    }
    (*(code *)plVar4[5])(puVar5[2],puVar5[0xc]);
    uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    iVar7 = param_3[3];
    iVar1 = param_3[2];
    if (2 < iVar7 + 2U && 2 < iVar1 + 2U) {
      uVar2 = puVar5[4];
      uVar21 = puVar5[2];
      uVar24 = puVar5[3];
      uVar15 = (iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1;
      iVar8 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar1 = *param_3;
      iVar3 = param_3[1];
      if (iVar8 == param_7) {
        uVar23 = CONCAT44(uVar25,uVar15);
        uVar20 = CONCAT44(uVar22,param_7);
        (*(code *)plVar4[0x27])(uVar21,0,iVar1 / 2,iVar3 / 2,uVar20,uVar23,uVar24,uVar2,param_6);
        uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
        uVar25 = (undefined4)((ulonglong)uVar23 >> 0x20);
      }
      else {
        sVar18 = (size_t)iVar8;
        pvVar12 = (void *)FUN_140160c40((longlong)(int)uVar15 * sVar18);
        uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
        uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
        if (pvVar12 != (void *)0x0) {
          if (0 < iVar7) {
            lVar16 = (longlong)param_7;
            uVar17 = uVar15 & 3;
            pvVar10 = pvVar12;
            if (2 < uVar15 - 1) {
              uVar14 = uVar15 & 0x3ffffffc;
              do {
                memcpy(pvVar10,param_6,sVar18);
                memcpy((void *)((longlong)pvVar10 + sVar18),(void *)((longlong)param_6 + lVar16),
                       sVar18);
                pvVar10 = (void *)((longlong)((longlong)pvVar10 + sVar18) + sVar18);
                param_6 = (void *)((longlong)param_6 + lVar16 + lVar16);
                memcpy(pvVar10,param_6,sVar18);
                pvVar10 = (void *)((longlong)pvVar10 + sVar18);
                param_6 = (void *)((longlong)param_6 + lVar16);
                memcpy(pvVar10,param_6,sVar18);
                pvVar10 = (void *)((longlong)pvVar10 + sVar18);
                param_6 = (void *)((longlong)param_6 + lVar16);
                uVar14 = uVar14 - 4;
              } while (uVar14 != 0);
            }
            while( true ) {
              uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
              uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
              if (uVar17 == 0) break;
              memcpy(pvVar10,param_6,sVar18);
              param_6 = (void *)((longlong)param_6 + lVar16);
              uVar17 = uVar17 - 1;
              pvVar10 = (void *)((longlong)pvVar10 + sVar18);
            }
          }
          uVar23 = CONCAT44(uVar25,uVar15);
          uVar20 = CONCAT44(uVar22,iVar8);
          (*(code *)plVar4[0x27])(uVar21,0,iVar1 / 2,iVar3 / 2,uVar20,uVar23,uVar24,uVar2,pvVar12);
          uVar22 = (undefined4)((ulonglong)uVar20 >> 0x20);
          uVar25 = (undefined4)((ulonglong)uVar23 >> 0x20);
          FUN_140160cf0(pvVar12);
        }
      }
    }
    uVar11 = (ulonglong)(uint)puVar5[2];
    (*(code *)plVar4[5])(uVar11,*puVar5);
    uVar15 = param_3[3];
    iVar7 = param_3[2];
    sVar18 = (size_t)iVar7;
    pvVar12 = (void *)(uVar11 & 0xffffffffffffff00);
    if (sVar18 != 0 && (longlong)(int)uVar15 != 0) {
      uVar2 = puVar5[4];
      uVar17 = puVar5[2];
      uVar21 = puVar5[3];
      iVar1 = *param_3;
      iVar3 = param_3[1];
      if (iVar7 == param_5) {
        pvVar12 = (void *)(ulonglong)uVar17;
        (*(code *)plVar4[0x27])
                  (pvVar12,0,iVar1,iVar3,CONCAT44(uVar22,param_5),CONCAT44(uVar25,uVar15),uVar21,
                   uVar2,param_4);
      }
      else {
        pvVar12 = (void *)(sVar18 * (longlong)(int)uVar15);
        pvVar10 = (void *)FUN_140160c40(pvVar12);
        if (pvVar10 != (void *)0x0) {
          if (0 < (int)uVar15) {
            lVar16 = (longlong)param_5;
            uVar14 = uVar15 & 3;
            pvVar12 = pvVar10;
            if (3 < uVar15) {
              uVar19 = uVar15 & 0x7ffffffc;
              do {
                memcpy(pvVar12,param_4,sVar18);
                memcpy((void *)((longlong)pvVar12 + sVar18),(void *)((longlong)param_4 + lVar16),
                       sVar18);
                pvVar12 = (void *)((longlong)((longlong)pvVar12 + sVar18) + sVar18);
                param_4 = (void *)((longlong)param_4 + lVar16 + lVar16);
                memcpy(pvVar12,param_4,sVar18);
                pvVar12 = (void *)((longlong)pvVar12 + sVar18);
                param_4 = (void *)((longlong)param_4 + lVar16);
                memcpy(pvVar12,param_4,sVar18);
                pvVar12 = (void *)((longlong)pvVar12 + sVar18);
                param_4 = (void *)((longlong)param_4 + lVar16);
                uVar19 = uVar19 - 4;
              } while (uVar19 != 0);
            }
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              memcpy(pvVar12,param_4,sVar18);
              param_4 = (void *)((longlong)param_4 + lVar16);
              pvVar12 = (void *)((longlong)pvVar12 + sVar18);
            }
          }
          (*(code *)plVar4[0x27])(uVar17,0,iVar1,iVar3,iVar7,uVar15,uVar21,uVar2,pvVar10);
          FUN_140160cf0(pvVar10);
          pvVar12 = pvVar10;
        }
      }
    }
    lVar16 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar16 + 8) == '\x01') {
      iVar7 = (**(code **)(lVar16 + 200))();
      uVar11 = CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
      if (iVar7 != 0) {
        do {
          pcVar13 = "UNKNOWN";
          if (iVar7 - 0x500U < 6) {
            pcVar13 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar7 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexSubImage2D()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x728,"GLES2_UpdateTextureYUV",pcVar13,iVar7);
          iVar7 = (**(code **)(lVar16 + 200))();
        } while (iVar7 != 0);
        uVar11 = 0;
      }
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
    }
  }
  return uVar11 & 0xffffffff;
}

