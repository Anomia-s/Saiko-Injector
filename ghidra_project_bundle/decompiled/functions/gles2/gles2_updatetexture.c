/**
 * Function: gles2_updatetexture
 * Address:  14042c8c0
 * Signature: undefined gles2_updatetexture(void)
 * Body size: 2644 bytes
 */


ulonglong gles2_updatetexture(longlong param_1,uint *param_2,int *param_3,void *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void *_Dst;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  size_t sVar19;
  int iVar20;
  longlong lVar21;
  size_t sVar22;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar24;
  undefined8 uVar23;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar26;
  undefined8 uVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  puVar4 = *(undefined4 **)(param_2 + 0x3c);
  lVar21 = param_1;
  lVar7 = video_subsystem_has_not_been_initialized();
  if (lVar7 == *plVar3) {
LAB_14042c915:
    lVar7 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar7 + 8) == '\x01') {
      do {
        iVar6 = (**(code **)(lVar7 + 200))();
      } while (iVar6 != 0);
    }
  }
  else {
    plVar3[0x53] = 0;
    lVar21 = *(longlong *)(param_1 + 0x100);
    cVar5 = video_subsystem_has_not_been_initialized(lVar21);
    if (cVar5 != '\0') goto LAB_14042c915;
  }
  uVar9 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
  if ((param_3[2] < 1) || (param_3[3] < 1)) goto LAB_14042d309;
  plVar3[0x4a] = 0;
  (*(code *)plVar3[5])(puVar4[2],*puVar4);
  uVar18 = *param_2;
  pvVar10 = (void *)(ulonglong)uVar18;
  if ((uVar18 & 0xf0000000) == 0x10000000 || uVar18 == 0) {
    uVar17 = uVar18 & 0xff;
  }
  else {
    uVar17 = 2;
    if (((uVar18 != 0x32595559) && (uVar18 != 0x55595659)) && (uVar18 != 0x59565955)) {
      uVar17 = (uVar18 == 0x30313050) + 1;
    }
  }
  lVar21 = (longlong)param_5;
  if (((uVar17 != 0) && (uVar18 = param_3[3], uVar18 != 0)) && (iVar6 = param_3[2], iVar6 != 0)) {
    uVar28 = puVar4[4];
    uVar15 = puVar4[2];
    pvVar10 = (void *)(ulonglong)uVar15;
    uVar27 = puVar4[3];
    iVar1 = *param_3;
    iVar20 = param_3[1];
    sVar19 = (ulonglong)uVar17 * (longlong)iVar6;
    if (sVar19 - lVar21 == 0) {
      in_stack_ffffffffffffff30 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffff30 >> 0x20),uVar18);
      in_stack_ffffffffffffff28 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffff28 >> 0x20),iVar6);
      (*(code *)plVar3[0x27])
                (pvVar10,0,iVar1,iVar20,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,uVar27,
                 uVar28,param_4);
    }
    else {
      pvVar10 = (void *)((longlong)(int)uVar18 * sVar19);
      pvVar8 = (void *)FUN_140160c40(pvVar10);
      uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
      uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
      if (pvVar8 != (void *)0x0) {
        if (0 < (int)uVar18) {
          uVar17 = uVar18 & 3;
          pvVar10 = param_4;
          pvVar16 = pvVar8;
          if (3 < uVar18) {
            uVar13 = uVar18 & 0x7ffffffc;
            _Dst = pvVar8;
            do {
              memcpy(_Dst,pvVar10,sVar19);
              memcpy((void *)(sVar19 + (longlong)_Dst),(void *)((longlong)pvVar10 + lVar21),sVar19);
              pvVar16 = (void *)((longlong)(sVar19 + (longlong)_Dst) + sVar19 * 3);
              pvVar10 = (void *)((longlong)pvVar10 + lVar21 + lVar21);
              memcpy((void *)(sVar19 * 2 + (longlong)_Dst),pvVar10,sVar19);
              pvVar10 = (void *)((longlong)pvVar10 + lVar21);
              memcpy((void *)((longlong)_Dst + sVar19 * 3),pvVar10,sVar19);
              pvVar10 = (void *)((longlong)pvVar10 + lVar21);
              uVar13 = uVar13 - 4;
              _Dst = pvVar16;
            } while (uVar13 != 0);
          }
          uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
          uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            memcpy(pvVar16,pvVar10,sVar19);
            uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
            uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
            pvVar16 = (void *)((longlong)pvVar16 + sVar19);
            pvVar10 = (void *)((longlong)pvVar10 + lVar21);
          }
        }
        in_stack_ffffffffffffff30 = CONCAT44(uVar26,uVar18);
        in_stack_ffffffffffffff28 = CONCAT44(uVar24,iVar6);
        (*(code *)plVar3[0x27])
                  (uVar15,0,iVar1,iVar20,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30,uVar27,
                   uVar28,pvVar8);
        FUN_140160cf0(pvVar8);
        pvVar10 = pvVar8;
      }
    }
  }
  uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  if (*(char *)(puVar4 + 9) == '\x01') {
    param_4 = (void *)((longlong)param_4 + param_3[3] * lVar21);
    (*(code *)plVar3[5])(puVar4[2],puVar4[(ulonglong)(*param_2 != 0x32315659) * 2 + 10]);
    uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
    iVar12 = (param_5 - (param_5 + 1 >> 0x1f)) + 1 >> 1;
    iVar6 = param_3[3];
    iVar1 = param_3[2];
    lVar21 = (longlong)iVar12;
    if (2 < iVar6 + 2U && 2 < iVar1 + 2U) {
      uVar28 = puVar4[4];
      uVar27 = puVar4[2];
      uVar2 = puVar4[3];
      uVar18 = (iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1;
      iVar14 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar1 = *param_3;
      iVar20 = param_3[1];
      if (iVar14 == iVar12) {
        uVar25 = CONCAT44(uVar26,uVar18);
        uVar23 = CONCAT44(uVar24,iVar12);
        (*(code *)plVar3[0x27])(uVar27,0,iVar1 / 2,iVar20 / 2,uVar23,uVar25,uVar2,uVar28,param_4);
        uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
      }
      else {
        sVar19 = (size_t)iVar14;
        pvVar10 = (void *)FUN_140160c40((longlong)(int)uVar18 * sVar19);
        uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
        uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
        if (pvVar10 != (void *)0x0) {
          if (0 < iVar6) {
            uVar17 = uVar18 & 3;
            pvVar8 = pvVar10;
            pvVar16 = param_4;
            if (2 < uVar18 - 1) {
              uVar15 = uVar18 & 0x3ffffffc;
              do {
                memcpy(pvVar8,pvVar16,sVar19);
                memcpy((void *)((longlong)pvVar8 + sVar19),(void *)((longlong)pvVar16 + lVar21),
                       sVar19);
                pvVar8 = (void *)((longlong)((longlong)pvVar8 + sVar19) + sVar19);
                pvVar16 = (void *)((longlong)pvVar16 + lVar21 + lVar21);
                memcpy(pvVar8,pvVar16,sVar19);
                pvVar8 = (void *)((longlong)pvVar8 + sVar19);
                pvVar16 = (void *)((longlong)pvVar16 + lVar21);
                memcpy(pvVar8,pvVar16,sVar19);
                pvVar8 = (void *)((longlong)pvVar8 + sVar19);
                pvVar16 = (void *)((longlong)pvVar16 + lVar21);
                uVar15 = uVar15 - 4;
              } while (uVar15 != 0);
            }
            uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
            uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              memcpy(pvVar8,pvVar16,sVar19);
              uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
              uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
              pvVar8 = (void *)((longlong)pvVar8 + sVar19);
              pvVar16 = (void *)((longlong)pvVar16 + lVar21);
            }
          }
          uVar25 = CONCAT44(uVar26,uVar18);
          uVar23 = CONCAT44(uVar24,iVar14);
          (*(code *)plVar3[0x27])(uVar27,0,iVar1 / 2,iVar20 / 2,uVar23,uVar25,uVar2,uVar28,pvVar10);
          uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
          uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
          FUN_140160cf0(pvVar10);
        }
      }
    }
    iVar6 = param_3[3];
    (*(code *)plVar3[5])(puVar4[2],puVar4[(ulonglong)(*param_2 == 0x32315659) * 2 + 10]);
    iVar1 = param_3[3];
    iVar20 = param_3[2];
    uVar18 = iVar20 + 2;
    pvVar10 = (void *)(ulonglong)CONCAT31((int3)(uVar18 >> 8),uVar18 < 3);
    if (2 < iVar1 + 2U && uVar18 >= 3) {
      param_4 = (void *)((longlong)param_4 +
                        (longlong)(((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) * iVar12));
      uVar28 = puVar4[4];
      uVar18 = puVar4[2];
      uVar27 = puVar4[3];
      uVar17 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar14 = (iVar20 - (iVar20 + 1 >> 0x1f)) + 1 >> 1;
      iVar20 = param_3[1] / 2;
      iVar6 = *param_3 / 2;
      if (iVar14 == iVar12) {
        uVar25 = CONCAT44(uVar26,uVar17);
        uVar23 = CONCAT44(uVar24,iVar12);
LAB_14042d010:
        pvVar10 = (void *)(ulonglong)uVar18;
        (*(code *)plVar3[0x27])(pvVar10,0,iVar6,iVar20,uVar23,uVar25,uVar27,uVar28,param_4);
      }
      else {
        sVar19 = (size_t)iVar14;
        pvVar10 = (void *)((longlong)(int)uVar17 * sVar19);
        pvVar8 = (void *)FUN_140160c40(pvVar10);
        if (pvVar8 != (void *)0x0) {
          pvVar10 = pvVar8;
          if (0 < iVar1) {
            uVar15 = uVar17 & 3;
            if (2 < uVar17 - 1) {
              uVar13 = uVar17 & 0x3ffffffc;
              do {
                memcpy(pvVar8,param_4,sVar19);
                memcpy((void *)((longlong)pvVar8 + sVar19),(void *)((longlong)param_4 + lVar21),
                       sVar19);
                pvVar8 = (void *)((longlong)((longlong)pvVar8 + sVar19) + sVar19);
                param_4 = (void *)((longlong)param_4 + lVar21 + lVar21);
                memcpy(pvVar8,param_4,sVar19);
                pvVar8 = (void *)((longlong)pvVar8 + sVar19);
                param_4 = (void *)((longlong)param_4 + lVar21);
                memcpy(pvVar8,param_4,sVar19);
                pvVar8 = (void *)((longlong)pvVar8 + sVar19);
                param_4 = (void *)((longlong)param_4 + lVar21);
                uVar13 = uVar13 - 4;
              } while (uVar13 != 0);
            }
            for (; uVar15 != 0; uVar15 = uVar15 - 1) {
              memcpy(pvVar8,param_4,sVar19);
              param_4 = (void *)((longlong)param_4 + lVar21);
              pvVar8 = (void *)((longlong)pvVar8 + sVar19);
            }
          }
LAB_14042d248:
          (*(code *)plVar3[0x27])(uVar18,0,iVar6,iVar20,iVar14,uVar17,uVar27,uVar28,pvVar10);
          FUN_140160cf0(pvVar10);
        }
      }
    }
  }
  else if (*(char *)((longlong)puVar4 + 0x25) == '\x01') {
    iVar6 = param_3[3];
    (*(code *)plVar3[5])(puVar4[2],puVar4[0xc]);
    iVar1 = param_3[3];
    iVar20 = param_3[2];
    uVar18 = iVar20 + 2;
    pvVar10 = (void *)(ulonglong)CONCAT31((int3)(uVar18 >> 8),uVar18 < 3);
    if (2 < iVar1 + 2U && uVar18 >= 3) {
      param_4 = (void *)((longlong)param_4 + iVar6 * lVar21);
      uVar17 = (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
      iVar14 = (iVar20 - (iVar20 + 1 >> 0x1f)) + 1 >> 1;
      iVar20 = param_3[1] / 2;
      iVar6 = *param_3 / 2;
      uVar18 = puVar4[2];
      sVar19 = (longlong)iVar14 * 2;
      sVar22 = (size_t)(int)((param_5 - (param_5 + 1 >> 0x1f)) + 1U & 0xfffffffe);
      if (sVar19 == sVar22) {
        uVar25 = CONCAT44(uVar27,uVar17);
        uVar23 = CONCAT44(uVar28,iVar14);
        uVar28 = 0x1401;
        uVar27 = 0x190a;
        goto LAB_14042d010;
      }
      pvVar10 = (void *)((longlong)(int)uVar17 * sVar19);
      pvVar8 = (void *)FUN_140160c40(pvVar10);
      if (pvVar8 != (void *)0x0) {
        if (0 < iVar1) {
          uVar15 = uVar17 & 3;
          pvVar10 = pvVar8;
          if (2 < uVar17 - 1) {
            uVar13 = uVar17 & 0x3ffffffc;
            do {
              memcpy(pvVar10,param_4,sVar19);
              memcpy((void *)((longlong)pvVar10 + sVar19),(void *)((longlong)param_4 + sVar22),
                     sVar19);
              pvVar10 = (void *)((longlong)((longlong)pvVar10 + sVar19) + sVar19);
              param_4 = (void *)((longlong)((longlong)param_4 + sVar22) + sVar22);
              memcpy(pvVar10,param_4,sVar19);
              pvVar10 = (void *)((longlong)pvVar10 + sVar19);
              param_4 = (void *)((longlong)param_4 + sVar22);
              memcpy(pvVar10,param_4,sVar19);
              pvVar10 = (void *)((longlong)pvVar10 + sVar19);
              param_4 = (void *)((longlong)param_4 + sVar22);
              uVar13 = uVar13 - 4;
            } while (uVar13 != 0);
          }
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            memcpy(pvVar10,param_4,sVar19);
            param_4 = (void *)((longlong)param_4 + sVar22);
            pvVar10 = (void *)((longlong)pvVar10 + sVar19);
          }
        }
        uVar28 = 0x1401;
        uVar27 = 0x190a;
        pvVar10 = pvVar8;
        goto LAB_14042d248;
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x2c0);
  if (*(char *)(lVar21 + 8) == '\x01') {
    iVar6 = (**(code **)(lVar21 + 200))();
    uVar9 = CONCAT71((int7)((ulonglong)pvVar10 >> 8),1);
    if (iVar6 != 0) {
      do {
        pcVar11 = "UNKNOWN";
        if (iVar6 - 0x500U < 6) {
          pcVar11 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar6 - 0x500U];
        }
        FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexSubImage2D()",
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                      ,0x6f4,"GLES2_UpdateTexture",pcVar11,iVar6);
        iVar6 = (**(code **)(lVar21 + 200))();
      } while (iVar6 != 0);
      uVar9 = 0;
    }
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)pvVar10 >> 8),1);
  }
LAB_14042d309:
  return uVar9 & 0xffffffff;
}

