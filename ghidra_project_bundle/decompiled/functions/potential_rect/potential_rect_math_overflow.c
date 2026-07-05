/**
 * Function: potential_rect_math_overflow
 * Address:  140162950
 * Signature: undefined potential_rect_math_overflow(void)
 * Body size: 1603 bytes
 */


undefined8
potential_rect_math_overflow
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_1 == (float *)0x0) {
    pcVar3 = "rect";
LAB_140162add:
    FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar3);
    return 0;
  }
  fVar1 = *param_1;
  if ((((1.0737418e+09 <= ABS(fVar1)) || (fVar2 = param_1[1], 1.0737418e+09 <= ABS(fVar2))) ||
      (fVar6 = param_1[2], 1.0737418e+09 <= fVar6)) || (fVar7 = param_1[3], 1.0737418e+09 <= fVar7))
  {
    FUN_1400fbed0("Potential rect math overflow");
    return 0;
  }
  if (param_2 == (float *)0x0) {
    pcVar3 = "X1";
    goto LAB_140162add;
  }
  if (param_3 == (float *)0x0) {
    pcVar3 = "Y1";
    goto LAB_140162add;
  }
  if (param_4 == (float *)0x0) {
    pcVar3 = "X2";
    goto LAB_140162add;
  }
  if (param_5 == (float *)0x0) {
    pcVar3 = "Y2";
    goto LAB_140162add;
  }
  if (fVar6 < 0.0) {
    return 0;
  }
  if (fVar7 < 0.0) {
    return 0;
  }
  fVar10 = *param_2;
  fVar11 = *param_3;
  fVar8 = *param_4;
  fVar9 = *param_5;
  fVar6 = fVar6 + fVar1;
  fVar7 = fVar7 + fVar2;
  if (((((fVar1 <= fVar10) && (fVar10 <= fVar6)) &&
       ((fVar1 <= fVar8 && ((fVar8 <= fVar6 && (fVar2 <= fVar11)))))) && (fVar11 <= fVar7)) &&
     ((fVar2 <= fVar9 && (fVar9 <= fVar7)))) {
    return 1;
  }
  if ((fVar10 < fVar1) && (fVar8 < fVar1)) {
    return 0;
  }
  if ((fVar6 < fVar10) && (fVar6 < fVar8)) {
    return 0;
  }
  if ((fVar11 < fVar2) && (fVar9 < fVar2)) {
    return 0;
  }
  if ((fVar7 < fVar11) && (fVar7 < fVar9)) {
    return 0;
  }
  if ((fVar11 == fVar9) && (!NAN(fVar11) && !NAN(fVar9))) {
    if ((fVar10 < fVar1) || (fVar6 < fVar10)) {
      *param_2 = (float)(~-(uint)(fVar10 < fVar1) & (uint)fVar6 |
                        -(uint)(fVar10 < fVar1) & (uint)fVar1);
    }
    if (fVar1 <= fVar8) {
      if (fVar6 < fVar8) {
        *param_4 = fVar6;
        return 1;
      }
      return 1;
    }
    *param_4 = fVar1;
    return 1;
  }
  if ((fVar10 == fVar8) && (!NAN(fVar10) && !NAN(fVar8))) {
    if ((fVar11 < fVar2) || (fVar7 < fVar11)) {
      *param_3 = (float)(~-(uint)(fVar11 < fVar2) & (uint)fVar7 |
                        -(uint)(fVar11 < fVar2) & (uint)fVar2);
    }
    if (fVar2 <= fVar9) {
      if (fVar7 < fVar9) {
        *param_5 = fVar7;
        return 1;
      }
      return 1;
    }
    *param_5 = fVar2;
    return 1;
  }
  bVar5 = 2;
  if (fVar2 <= fVar11) {
    bVar5 = fVar7 < fVar11;
  }
  if (fVar1 <= fVar10) {
    if (fVar6 < fVar10) {
      bVar5 = bVar5 | 8;
    }
  }
  else {
    bVar5 = bVar5 | 4;
  }
  bVar4 = 2;
  if (fVar2 <= fVar9) {
    bVar4 = fVar7 < fVar9;
  }
  if ((fVar8 < fVar1) || (fVar6 < fVar8)) {
    bVar4 = bVar4 + (fVar1 <= fVar8) * '\x04' + 4;
  }
  else if (((bVar5 == 0) && (fVar2 <= fVar9)) && (fVar9 <= fVar7)) goto LAB_140162bf8;
  fVar13 = 0.0;
  fVar12 = 0.0;
  do {
    if ((bVar4 & bVar5) != 0) {
      return 0;
    }
    if (bVar5 == 0) {
      if ((bVar4 & 2) == 0) {
        if ((bVar4 & 1) == 0) {
          if ((bVar4 & 4) == 0) {
            if (bVar4 != 0) {
              fVar12 = ((fVar6 - fVar10) * (fVar9 - fVar11)) / (fVar8 - fVar10) + fVar11;
              fVar13 = fVar6;
            }
          }
          else {
            fVar12 = ((fVar1 - fVar10) * (fVar9 - fVar11)) / (fVar8 - fVar10) + fVar11;
            fVar13 = fVar1;
          }
        }
        else {
          fVar13 = ((fVar7 - fVar11) * (fVar8 - fVar10)) / (fVar9 - fVar11) + fVar10;
          fVar12 = fVar7;
        }
        bVar4 = 2;
        if (fVar2 <= fVar12) goto LAB_140162f67;
      }
      else {
        fVar13 = ((fVar2 - fVar11) * (fVar8 - fVar10)) / (fVar9 - fVar11) + fVar10;
        fVar12 = fVar2;
LAB_140162f67:
        bVar4 = 0;
        if (fVar7 < fVar12) {
          bVar4 = 1;
        }
      }
      if (fVar13 < fVar1) {
        bVar4 = bVar4 | 4;
      }
      else if (fVar6 < fVar13) {
        bVar4 = bVar4 | 8;
      }
      bVar5 = 0;
      fVar9 = fVar12;
      fVar8 = fVar13;
    }
    else {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 1) == 0) {
          if ((bVar5 & 4) == 0) {
            if ((bVar5 & 8) != 0) {
              fVar12 = ((fVar6 - fVar10) * (fVar9 - fVar11)) / (fVar8 - fVar10) + fVar11;
              fVar13 = fVar6;
            }
          }
          else {
            fVar12 = ((fVar1 - fVar10) * (fVar9 - fVar11)) / (fVar8 - fVar10) + fVar11;
            fVar13 = fVar1;
          }
        }
        else {
          fVar13 = ((fVar7 - fVar11) * (fVar8 - fVar10)) / (fVar9 - fVar11) + fVar10;
          fVar12 = fVar7;
        }
        bVar5 = 2;
        if (fVar2 <= fVar12) goto LAB_140162ee1;
      }
      else {
        fVar13 = ((fVar2 - fVar11) * (fVar8 - fVar10)) / (fVar9 - fVar11) + fVar10;
        fVar12 = fVar2;
LAB_140162ee1:
        bVar5 = 0;
        if (fVar7 < fVar12) {
          bVar5 = 1;
        }
      }
      fVar10 = fVar13;
      fVar11 = fVar12;
      if (fVar1 <= fVar13) {
        if (fVar6 < fVar13) {
          bVar5 = bVar5 | 8;
        }
      }
      else {
        bVar5 = bVar5 | 4;
      }
    }
  } while (bVar5 != 0 || bVar4 != 0);
LAB_140162bf8:
  *param_2 = fVar10;
  *param_3 = fVar11;
  *param_4 = fVar8;
  *param_5 = fVar9;
  return 1;
}

