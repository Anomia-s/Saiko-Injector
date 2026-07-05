/**
 * Function: gl_runcommandqueue
 * Address:  140429710
 * Signature: undefined gl_runcommandqueue(void)
 * Body size: 2338 bytes
 */


undefined8 gl_runcommandqueue(longlong param_1,int *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  longlong lVar17;
  int *piVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  int *local_c0;
  int *local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  local_a8 = param_3;
  cVar7 = FUN_14042a660();
  if (cVar7 == '\0') {
    uVar9 = 0;
    goto LAB_140429fab;
  }
  lVar17 = *(longlong *)(param_1 + 0x1e0);
  *(longlong *)(lVar2 + 0x220) = lVar17;
  local_a0 = param_1;
  if ((lVar17 == 0) &&
     ((video_subsystem_has_not_been_initialized
                 (*(undefined8 *)(param_1 + 0x100),&local_94,&local_98),
      local_94 != *(int *)(lVar2 + 0x228) || (local_98 != *(int *)(lVar2 + 0x22c))))) {
    *(undefined1 *)(lVar2 + 0x200) = 1;
    *(undefined1 *)(lVar2 + 0x242) = 1;
    *(int *)(lVar2 + 0x228) = local_94;
    *(int *)(lVar2 + 0x22c) = local_98;
  }
  if (param_2 != (int *)0x0) {
    piVar18 = (int *)(lVar2 + 0x244);
    piVar13 = (int *)(lVar2 + 0x204);
    local_c0 = piVar18;
    local_b8 = piVar13;
    do {
      iVar8 = *param_2;
      piVar11 = param_2;
      switch(iVar8) {
      case 1:
        iVar8 = FUN_1400fc560(piVar13,param_2 + 4,0x10);
        if (iVar8 != 0) {
          iVar8 = param_2[5];
          iVar5 = param_2[6];
          iVar6 = param_2[7];
          *piVar13 = param_2[4];
          piVar13[1] = iVar8;
          piVar13[2] = iVar5;
          piVar13[3] = iVar6;
          *(undefined1 *)(lVar2 + 0x200) = 1;
          *(undefined1 *)(lVar2 + 0x242) = 1;
        }
        break;
      case 2:
        if (*(char *)(lVar2 + 0x241) != (char)param_2[2]) {
          *(char *)(lVar2 + 0x241) = (char)param_2[2];
          *(undefined1 *)(lVar2 + 0x240) = 1;
        }
        iVar8 = FUN_1400fc560(piVar18,param_2 + 3,0x10);
        if (iVar8 != 0) {
          iVar8 = param_2[4];
          iVar5 = param_2[5];
          iVar6 = param_2[6];
          *piVar18 = param_2[3];
          piVar18[1] = iVar8;
          piVar18[2] = iVar5;
          piVar18[3] = iVar6;
          *(undefined1 *)(lVar2 + 0x242) = 1;
        }
        break;
      case 3:
        fVar19 = (float)param_2[4];
        fVar1 = (float)param_2[8];
        fVar20 = (float)param_2[5] * fVar19;
        fVar21 = (float)param_2[6] * fVar19;
        fVar19 = fVar19 * (float)param_2[7];
        if ((((*(char *)(lVar2 + 0x259) != '\0') || (fVar20 != *(float *)(lVar2 + 0x25c))) ||
            (NAN(fVar20) || NAN(*(float *)(lVar2 + 0x25c)))) ||
           ((((fVar21 != *(float *)(lVar2 + 0x260) ||
              (NAN(fVar21) || NAN(*(float *)(lVar2 + 0x260)))) ||
             ((fVar19 != *(float *)(lVar2 + 0x264) ||
              ((NAN(fVar19) || NAN(*(float *)(lVar2 + 0x264)) ||
               (fVar1 != *(float *)(lVar2 + 0x268))))))) ||
            (NAN(fVar1) || NAN(*(float *)(lVar2 + 0x268)))))) {
          (**(code **)(lVar2 + 0x70))(fVar20,fVar21,fVar19,fVar1);
          *(float *)(lVar2 + 0x25c) = fVar20;
          *(float *)(lVar2 + 0x260) = fVar21;
          *(float *)(lVar2 + 0x264) = fVar19;
          *(float *)(lVar2 + 0x268) = fVar1;
          *(undefined1 *)(lVar2 + 0x259) = 0;
        }
        break;
      case 4:
        fVar19 = (float)param_2[4];
        fVar1 = (float)param_2[8];
        fVar20 = (float)param_2[5] * fVar19;
        fVar21 = (float)param_2[6] * fVar19;
        fVar19 = fVar19 * (float)param_2[7];
        if (((((*(char *)(lVar2 + 0x26c) != '\0') || (fVar20 != *(float *)(lVar2 + 0x270))) ||
             (NAN(fVar20) || NAN(*(float *)(lVar2 + 0x270)))) ||
            ((fVar21 != *(float *)(lVar2 + 0x274) || (NAN(fVar21) || NAN(*(float *)(lVar2 + 0x274)))
             ))) || ((fVar19 != *(float *)(lVar2 + 0x278) ||
                     (NAN(fVar19) || NAN(*(float *)(lVar2 + 0x278)))))) {
LAB_140429b49:
          (**(code **)(lVar2 + 0x60))(fVar20,fVar21,fVar19,fVar1);
          *(float *)(lVar2 + 0x270) = fVar20;
          *(float *)(lVar2 + 0x274) = fVar21;
          *(float *)(lVar2 + 0x278) = fVar19;
          *(float *)(lVar2 + 0x27c) = fVar1;
          *(undefined1 *)(lVar2 + 0x26c) = 0;
        }
        else if ((fVar1 != *(float *)(lVar2 + 0x27c)) ||
                (NAN(fVar1) || NAN(*(float *)(lVar2 + 0x27c)))) goto LAB_140429b49;
        if ((*(char *)(lVar2 + 0x241) != '\0') || (*(char *)(lVar2 + 0x240) == '\x01')) {
          (**(code **)(lVar2 + 0x98))(0xc11);
          *(undefined1 *)(lVar2 + 0x240) = *(undefined1 *)(lVar2 + 0x241);
        }
        (**(code **)(lVar2 + 0x58))(0x4000);
        break;
      case 5:
      case 10:
        lVar17 = *(longlong *)(param_2 + 0xc);
        lVar14 = *(longlong *)(param_2 + 4);
        uVar12 = (undefined4)lVar14;
        piVar18 = *(int **)(param_2 + 0x10);
        if ((piVar18 == (int *)0x0) || (*piVar18 != iVar8)) {
          if (lVar17 != 0) goto LAB_1404298c9;
LAB_140429952:
          FUN_14042a950(lVar2,param_2,1,0);
          if (iVar8 != 5) {
            (**(code **)(lVar2 + 0x1a8))(2,0x1406,0x18,*(longlong *)(param_2 + 2) + local_a8);
            (**(code **)(lVar2 + 0x80))(4,0x1406,0x18);
LAB_140429ea6:
            piVar18 = local_c0;
            (**(code **)(lVar2 + 0xa8))(4,0,uVar12);
            (**(code **)(lVar2 + 0x70))
                      (*(undefined4 *)(lVar2 + 0x25c),*(undefined4 *)(lVar2 + 0x260),
                       *(undefined4 *)(lVar2 + 0x264),*(undefined4 *)(lVar2 + 0x268));
            piVar13 = local_b8;
            break;
          }
        }
        else {
          while ((piVar13 = piVar18, uVar12 = (undefined4)lVar14,
                 *(longlong *)(piVar13 + 0xc) == lVar17 && (piVar13[0xb] == param_2[0xb]))) {
            lVar14 = lVar14 + *(longlong *)(piVar13 + 4);
            uVar12 = (undefined4)lVar14;
            piVar18 = *(int **)(piVar13 + 0x10);
            piVar11 = piVar13;
            if ((piVar18 == (int *)0x0) || (*piVar18 != iVar8)) break;
          }
          if (lVar17 == 0) goto LAB_140429952;
LAB_1404298c9:
          puVar3 = *(undefined4 **)(lVar17 + 0xf0);
          FUN_14042a950(lVar2,param_2,puVar3[6],*(undefined8 *)(puVar3 + 8));
          if (lVar17 != *(longlong *)(lVar2 + 0x218)) {
            uVar16 = *(undefined4 *)(lVar2 + 0x28);
            if (*(char *)(puVar3 + 0x11) == '\x01') {
              if (*(char *)(lVar2 + 0x1b8) == '\x01') {
                (**(code **)(lVar2 + 0x1c0))(0x84c2);
              }
              (**(code **)(lVar2 + 0x40))(uVar16,puVar3[0x14]);
              local_ac = uVar16;
              if (param_2[0xe] == 1) {
                local_c4 = 0x812f;
LAB_140429c7f:
                (**(code **)(lVar2 + 0x188))(uVar16,0x2802,local_c4);
                (**(code **)(lVar2 + 0x188))(uVar16,0x2803,local_c4);
              }
              else {
                if (param_2[0xe] == 2) {
                  local_c4 = 0x2901;
                  goto LAB_140429c7f;
                }
                cVar7 = FUN_1400fbed0("Unknown texture address mode: %d");
                piVar13 = local_b8;
                piVar18 = local_c0;
                if (cVar7 == '\0') break;
              }
              if (*(char *)(lVar2 + 0x1b8) == '\x01') {
                (**(code **)(lVar2 + 0x1c0))(0x84c1);
              }
              uVar16 = local_ac;
              (**(code **)(lVar2 + 0x40))(local_ac,puVar3[0x12]);
              if (param_2[0xe] == 1) {
                local_c4 = 0x812f;
              }
              else {
                if (param_2[0xe] != 2) {
                  cVar7 = FUN_1400fbed0("Unknown texture address mode: %d");
                  piVar13 = local_b8;
                  piVar18 = local_c0;
                  if (cVar7 == '\0') break;
                  goto LAB_140429d2b;
                }
                local_c4 = 0x2901;
              }
              (**(code **)(lVar2 + 0x188))(uVar16,0x2802,local_c4);
              (**(code **)(lVar2 + 0x188))(uVar16,0x2803,local_c4);
            }
LAB_140429d2b:
            if (*(char *)((longlong)puVar3 + 0x45) == '\x01') {
              if (*(char *)(lVar2 + 0x1b8) == '\x01') {
                (**(code **)(lVar2 + 0x1c0))(0x84c1);
              }
              (**(code **)(lVar2 + 0x40))(uVar16,puVar3[0x12]);
              if (param_2[0xe] == 1) {
                local_c4 = 0x812f;
              }
              else {
                if (param_2[0xe] != 2) {
                  cVar7 = FUN_1400fbed0("Unknown texture address mode: %d");
                  piVar13 = local_b8;
                  piVar18 = local_c0;
                  if (cVar7 == '\0') break;
                  goto LAB_140429d98;
                }
                local_c4 = 0x2901;
              }
              (**(code **)(lVar2 + 0x188))(uVar16,0x2802,local_c4);
              (**(code **)(lVar2 + 0x188))(uVar16,0x2803,local_c4);
            }
LAB_140429d98:
            if (*(char *)(lVar2 + 0x1b8) == '\x01') {
              (**(code **)(lVar2 + 0x1c0))(0x84c0);
            }
            (**(code **)(lVar2 + 0x40))(uVar16,*puVar3);
            if (param_2[0xe] == 1) {
              uVar9 = 0x812f;
LAB_140429ddc:
              (**(code **)(lVar2 + 0x188))(uVar16,0x2802,uVar9);
              (**(code **)(lVar2 + 0x188))(uVar16,0x2803,uVar9);
            }
            else {
              if (param_2[0xe] == 2) {
                uVar9 = 0x2901;
                goto LAB_140429ddc;
              }
              cVar7 = FUN_1400fbed0("Unknown texture address mode: %d");
              piVar13 = local_b8;
              piVar18 = local_c0;
              if (cVar7 == '\0') break;
            }
            *(longlong *)(lVar2 + 0x218) = lVar17;
          }
          lVar17 = *(longlong *)(param_2 + 2) + local_a8;
          if (iVar8 != 5) {
            (**(code **)(lVar2 + 0x1a8))(2,0x1406,0x20,lVar17);
            (**(code **)(lVar2 + 0x80))(4,0x1406,0x20,lVar17 + 8);
            (**(code **)(lVar2 + 0x170))(2,0x1406,0x20);
            goto LAB_140429ea6;
          }
        }
        piVar18 = local_c0;
        (**(code **)(lVar2 + 0x1a8))(2,0x1406,8);
        (**(code **)(lVar2 + 0xa8))(0,0,uVar12);
        piVar13 = local_b8;
        break;
      case 6:
        FUN_14042a950(lVar2,param_2,1,0);
        uVar15 = *(ulonglong *)(param_2 + 4);
        (**(code **)(lVar2 + 0x1a8))(2,0x1406,8);
        if (uVar15 < 3) {
          piVar4 = *(int **)(param_2 + 0x10);
          if ((piVar4 != (int *)0x0) && (*piVar4 == 6)) {
            while ((piVar10 = piVar4, *(longlong *)(piVar10 + 4) == 2 &&
                   (piVar10[0xb] == param_2[0xb]))) {
              piVar4 = *(int **)(piVar10 + 0x10);
              uVar15 = uVar15 + 2;
              piVar11 = piVar10;
              if ((piVar4 == (int *)0x0) || (*piVar4 != 6)) break;
            }
          }
          (**(code **)(lVar2 + 0xa8))(1,0,uVar15 & 0xffffffff);
        }
        else {
          (**(code **)(lVar2 + 0xa8))(3,0,uVar15 & 0xffffffff);
        }
      }
      param_2 = *(int **)(piVar11 + 0x10);
    } while (param_2 != (int *)0x0);
  }
  if (*(char *)(lVar2 + 0x256) == '\x01') {
    (**(code **)(lVar2 + 0xa0))(0x8074);
    *(undefined1 *)(lVar2 + 0x256) = 0;
    if (*(char *)(lVar2 + 599) == '\x01') goto LAB_14042a001;
LAB_140429f74:
    cVar7 = *(char *)(lVar2 + 600);
    lVar17 = local_a0;
  }
  else {
    if (*(char *)(lVar2 + 599) != '\x01') goto LAB_140429f74;
LAB_14042a001:
    lVar17 = local_a0;
    (**(code **)(lVar2 + 0xa0))(0x8076);
    *(undefined1 *)(lVar2 + 599) = 0;
    cVar7 = *(char *)(lVar2 + 600);
  }
  if (cVar7 == '\x01') {
    (**(code **)(lVar2 + 0xa0))(0x8078);
    *(undefined1 *)(lVar2 + 600) = 0;
  }
  uVar9 = gl_out_of_memory(&DAT_1413a2ad6,lVar17,0x5b3,"GL_RunCommandQueue");
LAB_140429fab:
  if (DAT_1414ef3c0 != (local_90 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_90 ^ (ulonglong)auStack_e8);
  }
  return uVar9;
}

