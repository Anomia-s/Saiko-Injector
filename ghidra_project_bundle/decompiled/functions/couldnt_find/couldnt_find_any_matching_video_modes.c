/**
 * Function: couldnt_find_any_matching_video_modes
 * Address:  140146300
 * Signature: undefined couldnt_find_any_matching_video_modes(void)
 * Body size: 728 bytes
 */


undefined8
couldnt_find_any_matching_video_modes
          (int param_1,int param_2,int param_3,float param_4,char param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar14 = DAT_1415259c8;
  if (param_6 == (undefined8 *)0x0) {
    uVar9 = FUN_1400fbed0("Parameter \'%s\' is invalid","closest");
    return uVar9;
  }
  if (DAT_1415259c8 == 0) {
    pcVar11 = "Video subsystem has not been initialized";
  }
  else {
    pcVar11 = "Invalid display";
    if (0 < (longlong)*(int *)(DAT_1415259c8 + 800)) {
      lVar10 = 0;
      do {
        if (param_1 == **(int **)(*(longlong *)(DAT_1415259c8 + 0x328) + lVar10 * 8)) {
          lVar10 = *(longlong *)(*(longlong *)(DAT_1415259c8 + 0x328) + lVar10 * 8);
          param_6[2] = 0;
          param_6[3] = 0;
          *param_6 = 0;
          param_6[1] = 0;
          param_6[4] = 0;
          if (lVar10 == 0) {
            return 0;
          }
          if (param_3 < 1) {
            fVar18 = 1.0;
          }
          else {
            fVar18 = (float)param_2 / (float)param_3;
          }
          if ((param_4 == 0.0) && (!NAN(param_4))) {
            param_4 = *(float *)(lVar10 + 0x34);
          }
          iVar8 = *(int *)(lVar10 + 0x14);
          if (iVar8 == 0) {
            pcVar3 = *(code **)(lVar14 + 0x38);
            if (pcVar3 == (code *)0x0) goto LAB_1401465cc;
            (*pcVar3)(lVar14,lVar10);
            iVar8 = *(int *)(lVar10 + 0x14);
          }
          if (iVar8 < 1) goto LAB_1401465cc;
          lVar14 = 0;
          lVar15 = 0;
          puVar13 = (undefined8 *)0x0;
          goto LAB_14014649a;
        }
        lVar10 = lVar10 + 1;
      } while (*(int *)(DAT_1415259c8 + 800) != lVar10);
    }
  }
  FUN_1400fbed0(pcVar11);
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  param_6[4] = 0;
  return 0;
  while( true ) {
    iVar2 = *(int *)(lVar4 + 0xc + lVar14);
    puVar12 = puVar13;
    if ((param_3 <= iVar2) &&
       (((param_5 != '\0' || (*(float *)(lVar4 + 0x10 + lVar14) <= 1.0)) &&
        (puVar1 = (undefined8 *)(lVar14 + lVar4), puVar12 = puVar1, puVar13 != (undefined8 *)0x0))))
    {
      fVar16 = (float)FUN_14016e270(fVar18 - (float)(int)puVar13[1] /
                                             (float)(int)((ulonglong)puVar13[1] >> 0x20));
      fVar17 = (float)FUN_14016e270(fVar18 - (float)iVar8 / (float)iVar2);
      puVar12 = puVar13;
      if (((fVar17 <= fVar16) && (puVar12 = puVar1, *(int *)(puVar1 + 1) == *(int *)(puVar13 + 1)))
         && (*(int *)(lVar4 + 0xc + lVar14) == *(int *)((longlong)puVar13 + 0xc))) {
        fVar16 = (float)FUN_14016e270(*(float *)((longlong)puVar13 + 0x14) - param_4);
        fVar17 = (float)FUN_14016e270(*(float *)(lVar4 + 0x14 + lVar14) - param_4);
        puVar12 = puVar13;
        if (fVar17 <= fVar16) {
          puVar12 = puVar1;
        }
      }
    }
    lVar15 = lVar15 + 1;
    lVar14 = lVar14 + 0x28;
    puVar13 = puVar12;
    if (*(int *)(lVar10 + 0x14) <= lVar15) break;
LAB_14014649a:
    lVar4 = *(longlong *)(lVar10 + 0x18);
    iVar8 = *(int *)(lVar4 + 8 + lVar14);
    if (iVar8 < param_2) break;
  }
  if (puVar13 == (undefined8 *)0x0) {
LAB_1401465cc:
    uVar9 = FUN_1400fbed0("Couldn\'t find any matching video modes");
  }
  else {
    uVar9 = puVar13[4];
    param_6[4] = uVar9;
    uVar5 = *puVar13;
    uVar6 = puVar13[1];
    uVar7 = puVar13[3];
    param_6[2] = puVar13[2];
    param_6[3] = uVar7;
    *param_6 = uVar5;
    param_6[1] = uVar6;
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  return uVar9;
}

