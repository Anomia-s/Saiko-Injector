/**
 * Function: sdltexturecreateopengles2texture_uv
 * Address:  14042bbc0
 * Signature: undefined sdltexturecreateopengles2texture_uv(void)
 * Body size: 3273 bytes
 */


ulonglong sdltexturecreateopengles2texture_uv(longlong param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  uint *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar22;
  char *in_stack_ffffffffffffff50;
  
  plVar6 = *(longlong **)(param_1 + 0x2c0);
  lVar12 = video_subsystem_has_not_been_initialized();
  if (lVar12 == *plVar6) {
LAB_14042bc15:
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
    lVar12 = *(longlong *)(param_1 + 0x2c0);
    if (*(char *)(lVar12 + 8) == '\x01') {
      do {
        iVar8 = (**(code **)(lVar12 + 200))();
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      } while (iVar8 != 0);
    }
  }
  else {
    plVar6[0x53] = 0;
    cVar7 = video_subsystem_has_not_been_initialized(*(undefined8 *)(param_1 + 0x100));
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
    if (cVar7 != '\0') goto LAB_14042bc15;
  }
  plVar6[0x4a] = 0;
  uVar2 = *param_2;
  uVar17 = 0x1401;
  if ((int)uVar2 < 0x2053454f) {
    uVar11 = 0x1908;
    uVar21 = 0x1401;
    uVar20 = 0x1908;
    if ((int)uVar2 < 0x16561804) {
      if ((uVar2 != 0x16161804) && (uVar2 != 0x16362004)) {
LAB_14042bfc6:
        uVar14 = FUN_1400fbed0("Texture format not supported");
        return uVar14;
      }
    }
    else if ((uVar2 != 0x16561804) && (uVar2 != 0x16762004)) goto LAB_14042bfc6;
  }
  else {
    if ((int)uVar2 < 0x3231564e) {
      if (uVar2 == 0x2053454f) {
        if (param_2[7] != 0) {
          uVar14 = FUN_1400fbed0("Unsupported texture access for SDL_PIXELFORMAT_EXTERNAL_OES");
          return uVar14;
        }
        uVar11 = 0;
        uVar21 = 0;
        uVar17 = 0;
        uVar20 = 0;
        goto LAB_14042bcd3;
      }
      if (uVar2 != 0x3132564e) goto LAB_14042bfc6;
    }
    else if (((uVar2 != 0x3231564e) && (uVar2 != 0x56555949)) && (uVar2 != 0x32315659))
    goto LAB_14042bfc6;
    uVar11 = 0x1909;
    uVar21 = 0x1401;
    uVar20 = 0x1909;
  }
LAB_14042bcd3:
  piVar13 = (int *)FUN_140160c70(1,0x40);
  if (piVar13 != (int *)0x0) {
    *piVar13 = 0;
    iVar8 = 0xde1;
    if (*param_2 == 0x2053454f) {
      iVar8 = 0x8d65;
    }
    piVar13[2] = iVar8;
    *(ulonglong *)(piVar13 + 3) = CONCAT44(uVar21,uVar11);
    uVar2 = *param_2;
    *(bool *)(piVar13 + 9) = uVar2 == 0x32315659 || uVar2 == 0x56555949;
    uVar3 = *param_2;
    *(bool *)((longlong)piVar13 + 0x25) = uVar3 == 0x3132564e || uVar3 == 0x3231564e;
    piVar13[0xc] = 0;
    piVar13[10] = 0;
    iVar8 = 0x2601 - (uint)(param_2[9] == 0);
    if (param_2[7] == 1) {
      uVar4 = param_2[1];
      uVar5 = *param_2;
      if ((uVar5 & 0xf0000000) == 0x10000000 || uVar5 == 0) {
        uVar18 = uVar5 & 0xff;
      }
      else {
        uVar18 = 2;
        if (((uVar5 != 0x32595559) && (uVar5 != 0x55595659)) && (uVar5 != 0x59565955)) {
          uVar18 = (uVar5 == 0x30313050) + 1;
        }
      }
      iVar9 = (int)((ulonglong)uVar18 * (longlong)(int)uVar4);
      piVar13[8] = iVar9;
      uVar5 = param_2[2];
      lVar12 = (longlong)(int)uVar5 * (ulonglong)uVar18 * (longlong)(int)uVar4;
      if (((uVar2 == 0x56555949) || (uVar2 == 0x32315659)) ||
         ((uVar3 == 0x3231564e || (uVar3 == 0x3132564e)))) {
        lVar12 = lVar12 + (int)(((iVar9 - (iVar9 + 1 >> 0x1f)) + 1U >> 1) *
                                ((uVar5 - ((int)(uVar5 + 1) >> 0x1f)) + 1 >> 1) * 2);
      }
      lVar12 = FUN_140160c70(1,lVar12);
      *(longlong *)(piVar13 + 6) = lVar12;
      if (lVar12 == 0) {
        FUN_140160cf0(piVar13);
        goto LAB_14042bfdc;
      }
    }
    lVar12 = *(longlong *)(param_1 + 0x2c0);
    if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0)) {
      pcVar19 = "";
      do {
        if (*pcVar19 == '\0') {
          pcVar19 = "generic";
        }
        in_stack_ffffffffffffff50 = "UNKNOWN";
        if (iVar9 - 0x500U < 6) {
          in_stack_ffffffffffffff50 =
               (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
        }
        uVar10 = 1;
        FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)",pcVar19,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                      ,0x623,"GLES2_CreateTexture",in_stack_ffffffffffffff50,iVar9);
        iVar9 = (**(code **)(lVar12 + 200))();
      } while (iVar9 != 0);
    }
    piVar1 = piVar13 + 0xc;
    if ((char)piVar13[9] == '\x01') {
      iVar9 = FUN_140150150(param_3,"SDL.texture.create.opengles2.texture_v",0);
      piVar13[10] = iVar9;
      if (iVar9 == 0) {
        (*(code *)plVar6[0x17])(1,piVar13 + 10);
        lVar12 = *(longlong *)(param_1 + 0x2c0);
        if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0)
           ) {
          do {
            pcVar19 = "UNKNOWN";
            if (iVar9 - 0x500U < 6) {
              pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
            }
            FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glGenTexures()",
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                          ,0x62c,"GLES2_CreateTexture",pcVar19,iVar9);
            iVar9 = (**(code **)(lVar12 + 200))();
          } while (iVar9 != 0);
          goto LAB_14042bfdc;
        }
      }
      else {
        piVar13[0xb] = 1;
      }
      (*(code *)plVar6[2])(0x84c2);
      (*(code *)plVar6[5])(piVar13[2],piVar13[10]);
      (*(code *)plVar6[0x26])(piVar13[2],0x2801,iVar8);
      (*(code *)plVar6[0x26])(piVar13[2],0x2800,iVar8);
      uVar22 = CONCAT44(uVar10,(int)((param_2[2] - ((int)(param_2[2] + 1) >> 0x1f)) + 1) >> 1);
      uVar14 = (ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000;
      (*(code *)plVar6[0x25])
                (piVar13[2],0,uVar20,(int)((param_2[1] - ((int)(param_2[1] + 1) >> 0x1f)) + 1) >> 1,
                 uVar22,uVar14,uVar20,uVar17,0);
      uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
      iVar9 = piVar13[10];
      uVar10 = parameter_s_is_invalid(param_2);
      FUN_14014fc70(uVar10,"SDL.texture.opengles2.texture_v",iVar9);
      iVar9 = FUN_140150150(param_3,"SDL.texture.create.opengles2.texture_u",0);
      piVar13[0xc] = iVar9;
      if (iVar9 == 0) {
        (*(code *)plVar6[0x17])(1,piVar1);
        lVar12 = *(longlong *)(param_1 + 0x2c0);
        if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0)
           ) {
          do {
            pcVar19 = "UNKNOWN";
            if (iVar9 - 0x500U < 6) {
              pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
            }
            FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glGenTexures()",
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                          ,0x63c,"GLES2_CreateTexture",pcVar19,iVar9);
            iVar9 = (**(code **)(lVar12 + 200))();
            uVar14 = 0;
          } while (iVar9 != 0);
          goto LAB_14042bfde;
        }
      }
      else {
        piVar13[0xd] = 1;
      }
      (*(code *)plVar6[2])(0x84c1);
      (*(code *)plVar6[5])(piVar13[2],piVar13[0xc]);
      (*(code *)plVar6[0x26])(piVar13[2],0x2801,iVar8);
      (*(code *)plVar6[0x26])(piVar13[2],0x2800,iVar8);
      uVar22 = CONCAT44(uVar11,(int)((param_2[2] - ((int)(param_2[2] + 1) >> 0x1f)) + 1) >> 1);
      in_stack_ffffffffffffff50 = (char *)(uVar14 & 0xffffffff00000000);
      (*(code *)plVar6[0x25])
                (piVar13[2],0,uVar20,(int)((param_2[1] - ((int)(param_2[1] + 1) >> 0x1f)) + 1) >> 1,
                 uVar22,in_stack_ffffffffffffff50,uVar20,uVar17,0);
      uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
      lVar12 = *(longlong *)(param_1 + 0x2c0);
      if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0))
      {
        do {
          pcVar19 = "UNKNOWN";
          if (iVar9 - 0x500U < 6) {
            pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexImage2D()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x645,"GLES2_CreateTexture",pcVar19,iVar9);
          iVar9 = (**(code **)(lVar12 + 200))();
        } while (iVar9 != 0);
        goto LAB_14042bfdc;
      }
      iVar9 = *piVar1;
      uVar11 = parameter_s_is_invalid(param_2);
      pcVar19 = "SDL.texture.opengles2.texture_u";
LAB_14042c54a:
      FUN_14014fc70(uVar11,pcVar19,iVar9);
      lVar12 = FUN_140156650(param_2[4],param_2[1],param_2[2],8);
      if (lVar12 == 0) {
        uVar14 = FUN_1400fbed0("Unsupported YUV colorspace");
        return uVar14;
      }
    }
    else if (*(char *)((longlong)piVar13 + 0x25) == '\x01') {
      iVar9 = FUN_140150150(param_3,"SDL.texture.create.opengles2.texture_uv",0);
      *piVar1 = iVar9;
      if (iVar9 == 0) {
        (*(code *)plVar6[0x17])(1,piVar1);
        lVar12 = *(longlong *)(param_1 + 0x2c0);
        if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0)
           ) {
          do {
            pcVar19 = "UNKNOWN";
            if (iVar9 - 0x500U < 6) {
              pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
            }
            FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glGenTexures()",
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                          ,0x653,"GLES2_CreateTexture",pcVar19,iVar9);
            iVar9 = (**(code **)(lVar12 + 200))();
            uVar14 = 0;
          } while (iVar9 != 0);
          goto LAB_14042bfde;
        }
      }
      else {
        piVar13[0xd] = 1;
      }
      (*(code *)plVar6[2])(0x84c1);
      (*(code *)plVar6[5])(piVar13[2],piVar13[0xc]);
      (*(code *)plVar6[0x26])(piVar13[2],0x2801,iVar8);
      (*(code *)plVar6[0x26])(piVar13[2],0x2800,iVar8);
      uVar22 = CONCAT44(uVar10,(int)((param_2[2] - ((int)(param_2[2] + 1) >> 0x1f)) + 1) >> 1);
      in_stack_ffffffffffffff50 =
           (char *)((ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000);
      (*(code *)plVar6[0x25])
                (piVar13[2],0,0x190a,(int)((param_2[1] - ((int)(param_2[1] + 1) >> 0x1f)) + 1) >> 1,
                 uVar22,in_stack_ffffffffffffff50,0x190a,0x1401,0);
      uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
      lVar12 = *(longlong *)(param_1 + 0x2c0);
      if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0))
      {
        do {
          pcVar19 = "UNKNOWN";
          if (iVar9 - 0x500U < 6) {
            pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexImage2D()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x65c,"GLES2_CreateTexture",pcVar19,iVar9);
          iVar9 = (**(code **)(lVar12 + 200))();
        } while (iVar9 != 0);
        goto LAB_14042bfdc;
      }
      iVar9 = *piVar1;
      uVar11 = parameter_s_is_invalid(param_2);
      pcVar19 = "SDL.texture.opengles2.texture_uv";
      goto LAB_14042c54a;
    }
    iVar9 = FUN_140150150(param_3,"SDL.texture.create.opengles2.texture",0);
    *piVar13 = iVar9;
    if (iVar9 == 0) {
      (*(code *)plVar6[0x17])(1,piVar13);
      lVar12 = *(longlong *)(param_1 + 0x2c0);
      if ((*(char *)(lVar12 + 8) == '\x01') && (iVar9 = (**(code **)(lVar12 + 200))(), iVar9 != 0))
      {
        do {
          pcVar19 = "UNKNOWN";
          if (iVar9 - 0x500U < 6) {
            pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar9 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glGenTexures()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x66c,"GLES2_CreateTexture",pcVar19,iVar9);
          iVar9 = (**(code **)(lVar12 + 200))();
        } while (iVar9 != 0);
        goto LAB_14042bfdc;
      }
    }
    else {
      *(undefined1 *)(piVar13 + 1) = 1;
    }
    *(int **)(param_2 + 0x3c) = piVar13;
    (*(code *)plVar6[2])(0x84c0);
    (*(code *)plVar6[5])(piVar13[2],*piVar13);
    (*(code *)plVar6[0x26])(piVar13[2],0x2801,iVar8);
    (*(code *)plVar6[0x26])(piVar13[2],0x2800,iVar8);
    if (*param_2 != 0x2053454f) {
      (*(code *)plVar6[0x25])
                (piVar13[2],0,uVar20,param_2[1],CONCAT44(uVar10,param_2[2]),
                 (ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000,uVar20,uVar17,0);
      lVar12 = *(longlong *)(param_1 + 0x2c0);
      if ((*(char *)(lVar12 + 8) == '\x01') && (iVar8 = (**(code **)(lVar12 + 200))(), iVar8 != 0))
      {
        do {
          pcVar19 = "UNKNOWN";
          if (iVar8 - 0x500U < 6) {
            pcVar19 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar8 - 0x500U];
          }
          FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)","glTexImage2D()",
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                        ,0x677,"GLES2_CreateTexture",pcVar19,iVar8);
          iVar8 = (**(code **)(lVar12 + 200))();
        } while (iVar8 != 0);
        goto LAB_14042bfdc;
      }
    }
    iVar8 = *piVar13;
    uVar10 = parameter_s_is_invalid(param_2);
    FUN_14014fc70(uVar10,"SDL.texture.opengles2.texture",iVar8);
    iVar8 = piVar13[2];
    uVar10 = parameter_s_is_invalid(param_2);
    FUN_14014fc70(uVar10,"SDL.texture.opengles2.target",iVar8);
    if (param_2[7] == 2) {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      param_2 = *(uint **)(param_1 + 0x2c0);
      for (puVar15 = *(uint **)(param_2 + 0x76); puVar15 != (uint *)0x0;
          puVar15 = *(uint **)(puVar15 + 4)) {
        if ((*puVar15 == uVar2) && (puVar15[1] == uVar3)) goto LAB_14042c801;
      }
      puVar15 = (uint *)FUN_140160c40(0x18);
      *puVar15 = uVar2;
      puVar15[1] = uVar3;
      (**(code **)(param_2 + 0x2c))(1,puVar15 + 2);
      *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(param_2 + 0x76);
      *(uint **)(param_2 + 0x76) = puVar15;
    }
    else {
      puVar15 = (uint *)0x0;
    }
LAB_14042c801:
    *(uint **)(piVar13 + 0xe) = puVar15;
    lVar12 = *(longlong *)(param_1 + 0x2c0);
    uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if ((*(char *)(lVar12 + 8) != '\x01') || (iVar8 = (**(code **)(lVar12 + 200))(), iVar8 == 0))
    goto LAB_14042bfde;
    pcVar19 = "";
    do {
      if (*pcVar19 == '\0') {
        pcVar19 = "generic";
      }
      pcVar16 = "UNKNOWN";
      if (iVar8 - 0x500U < 6) {
        pcVar16 = (&PTR_s_GL_INVALID_ENUM_1413676ac_0xe_140e159e0)[iVar8 - 0x500U];
      }
      FUN_1400fbed0("%s: %s (%d): %s %s (0x%X)",pcVar19,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengles2/SDL_render_gles2.c"
                    ,0x684,"GLES2_CreateTexture",pcVar16,iVar8);
      iVar8 = (**(code **)(lVar12 + 200))();
    } while (iVar8 != 0);
  }
LAB_14042bfdc:
  uVar14 = 0;
LAB_14042bfde:
  return uVar14 & 0xffffffff;
}

