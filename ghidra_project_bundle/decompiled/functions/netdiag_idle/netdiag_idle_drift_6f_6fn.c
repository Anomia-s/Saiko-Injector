/**
 * Function: netdiag_idle_drift_6f_6fn
 * Address:  1400652c0
 * Signature: undefined netdiag_idle_drift_6f_6fn(void)
 * Body size: 2403 bytes
 */


void netdiag_idle_drift_6f_6fn(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  undefined8 *local_210;
  undefined4 local_208;
  undefined1 local_1f8 [20];
  int local_1e4;
  longlong local_1e0;
  ulonglong local_90;
  
  local_90 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  if (*(char *)(param_1 + 0x86c1) == '\x06') goto LAB_140065bcf;
  fVar25 = (float)param_2;
  if (param_1[0x65] != 0) {
    connection_closed(param_1);
    FUN_1401831f0(param_1);
    FUN_140183080(param_1);
  }
  FUN_140064660(param_1);
  FUN_1401f8980(*param_1);
  FUN_1400442a0(param_1[0x62],*param_1);
  FUN_140044c20(param_1[0x62],*param_1);
  puVar2 = param_1 + 0x49;
  puVar1 = param_1 + 1;
  FUN_140191c30(puVar2,*param_1,puVar1);
  this_unreachable_code_is_here_only_to_suppres(puVar2,*param_1);
  FUN_1400cc6a0(*param_1,param_2);
  if (param_1[0x65] == 0) {
    fVar20 = 1.0;
  }
  else {
    fVar19 = (2.0 - *(float *)(param_1 + 0x86b9)) * 0.02;
    fVar20 = -0.15;
    if (-0.15 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar20 = (float)(-(uint)(0.05 < fVar19) & 0x3f866666 |
                    ~-(uint)(0.05 < fVar19) & (uint)(fVar20 + 1.0));
  }
  dVar21 = (double)(fVar20 * fVar25) + (double)param_1[0x60];
  param_1[0x60] = dVar21;
  if (0.01666666753590107 <= dVar21) {
    do {
      FUN_140065c30(param_1);
      this_unreachable_code_is_here_only_to_suppres(puVar2,*param_1,0x3c888889);
      FUN_140045680(param_1[0x62],*param_1,0x3c888889);
      FUN_140046560(param_1[0x62],*param_1,0x3c888889,0);
      FUN_14020ecf0(*param_1);
      FUN_14020fe20(*param_1);
      FUN_14020f450(*param_1,0xf0);
      FUN_1400bf090(param_1[0x62],*param_1);
      FUN_1400452f0(param_1[0x62],*param_1);
      if (param_1[0x65] != 0) {
        local_218 = *(undefined2 *)(param_1 + 0x8078);
        FUN_140212420(*param_1,param_1[0x59],(longlong)param_1 + 0x403c4);
        FUN_1401829c0(param_1);
      }
      dVar21 = (double)param_1[0x60];
      param_1[0x60] = dVar21 + -0.01666666753590107;
    } while (0.01666666753590107 <= dVar21 + -0.01666666753590107);
  }
  lVar12 = param_1[0x59];
  if (((lVar12 != 0) && (cVar6 = FUN_1400b8670(*param_1,lVar12), cVar6 != '\0')) &&
     (puVar9 = (undefined8 *)FUN_1400ba4f0(*param_1,lVar12,DAT_14151f5d8),
     puVar9 != (undefined8 *)0x0)) {
    puVar3 = param_1 + 0x3f;
    cVar6 = FUN_140190250(puVar3,0);
    bVar7 = 1;
    if (((cVar6 == '\0') && (cVar6 = FUN_140190250(puVar3,1), cVar6 == '\0')) &&
       (cVar6 = FUN_140190250(puVar3,2), cVar6 == '\0')) {
      bVar7 = FUN_140190250(puVar3,3);
    }
    pfVar10 = (float *)FUN_1400ba4f0(*param_1,lVar12,DAT_14151f608);
    uVar5 = *(undefined4 *)(puVar9 + 1);
    param_1[0x86d8] = *puVar9;
    *(undefined4 *)(param_1 + 0x86d9) = uVar5;
    *(undefined2 *)(param_1 + 0x86db) = *(undefined2 *)(param_1 + 0x8078);
    *(undefined2 *)((longlong)param_1 + 0x436da) = *(undefined2 *)((longlong)param_1 + 0x435c4);
    if (pfVar10 == (float *)0x0) {
      fVar26 = 0.0;
      fVar20 = 0.0;
      fVar19 = 0.0;
    }
    else {
      fVar20 = pfVar10[2];
      fVar19 = *pfVar10;
      fVar26 = pfVar10[1];
    }
    if ((~bVar7 & fVar20 * fVar20 + fVar19 * fVar19 + fVar26 * fVar26 <= 0.01) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x436ec) = 0;
      *(undefined1 *)(param_1 + 0x86de) = 0;
      fVar20 = 0.0;
    }
    else {
      fVar20 = *(float *)(puVar9 + 1);
      uVar11 = *puVar9;
      iVar8 = *(int *)((longlong)param_1 + 0x436ec) + 1;
      *(int *)((longlong)param_1 + 0x436ec) = iVar8;
      fVar19 = (float)((ulonglong)uVar11 >> 0x20);
      if (iVar8 == 0x3c) {
        param_1[0x86dc] = uVar11;
        *(float *)(param_1 + 0x86dd) = fVar20;
        *(undefined1 *)(param_1 + 0x86de) = 1;
        *(undefined4 *)((longlong)param_1 + 0x436f4) = 0;
        fVar24 = 0.0;
        fVar23 = fVar20;
        fVar26 = (float)uVar11;
        fVar22 = fVar19;
      }
      else {
        if (*(char *)(param_1 + 0x86de) != '\x01') goto LAB_1400656ff;
        fVar26 = *(float *)(param_1 + 0x86dc);
        fVar22 = *(float *)((longlong)param_1 + 0x436e4);
        fVar23 = *(float *)(param_1 + 0x86dd);
        fVar24 = *(float *)((longlong)param_1 + 0x436f4);
      }
      fVar26 = (float)uVar11 - fVar26;
      fVar19 = fVar19 - fVar22;
      fVar20 = SQRT((fVar20 - fVar23) * (fVar20 - fVar23) + fVar26 * fVar26 + fVar19 * fVar19);
      if (fVar20 <= fVar24) goto LAB_1400656ff;
    }
    *(float *)((longlong)param_1 + 0x436f4) = fVar20;
  }
LAB_1400656ff:
  param_1[0x86d6] = param_1[0x86d6] + 1;
  if ((*(char *)(param_1 + 0x86de) == '\x01') &&
     (fVar20 = *(float *)((longlong)param_1 + 0x436f4), 0.001 <= fVar20)) {
    uVar11 = __acrt_iob_func(2);
    FUN_14002b100(uVar11,"NETDIAG: idle drift %.6f >= %.6f\n",SUB84((double)fVar20,0),
                  0x3f50624de0000000);
  }
  *(undefined4 *)(param_1 + 0x86d3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4369c) = 0;
  fVar20 = expf(fVar25 * -18.0);
  fVar19 = fVar20 * (float)*(undefined8 *)((longlong)param_1 + 0x435ec);
  fVar26 = fVar20 * (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x435ec) >> 0x20);
  uVar11 = CONCAT44(fVar26,fVar19);
  *(undefined8 *)((longlong)param_1 + 0x435ec) = uVar11;
  fVar20 = fVar20 * *(float *)((longlong)param_1 + 0x435f4);
  *(float *)((longlong)param_1 + 0x435f4) = fVar20;
  if (fVar20 * fVar20 + fVar19 * fVar19 + fVar26 * fVar26 < 1e-06) {
    *(undefined4 *)((longlong)param_1 + 0x435f4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x435ec) = 0;
    uVar11 = 0;
    fVar20 = 0.0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2f4) = uVar11;
  *(float *)((longlong)param_1 + 0x2fc) = fVar20;
  local_208 = *(undefined4 *)((longlong)param_1 + 0x244);
  local_218 = CONCAT11(local_218._1_1_,*(undefined1 *)((longlong)param_1 + 0x229));
  local_210 = param_1 + 0x36;
  FUN_1401945f0(puVar2,puVar1,*(float *)(param_1 + 0x61) * *(float *)((longlong)param_1 + 0x23c),
                *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x61));
  FUN_140194da0(puVar2,puVar1,fVar25);
  FUN_140190900(param_1 + 0x36,param_2);
  if ((param_1[0x65] != 0) && (param_1[100] != 0)) {
    FUN_1400bd7b0(local_1f8,*param_1);
    cVar6 = FUN_1400bcfa0(local_1f8);
    while (cVar6 != '\0') {
      lVar12 = FUN_1400c4580(local_1f8,0x40,0);
      lVar13 = FUN_1400c4580(local_1f8,0xc,1);
      lVar14 = FUN_1400c4580(local_1f8,0x10);
      if (0 < local_1e4) {
        pfVar10 = (float *)(lVar13 + 8);
        lVar13 = 0;
        lVar18 = 0;
        do {
          fVar19 = fVar25 / *(float *)(lVar12 + 0x3c + lVar13 * 8) +
                   *(float *)(lVar12 + 0x38 + lVar13 * 8);
          fVar20 = 1.0;
          if (fVar19 <= 1.0) {
            fVar20 = fVar19;
          }
          *(float *)(lVar12 + 0x38 + lVar13 * 8) = fVar20;
          fVar19 = *(float *)(lVar12 + lVar13 * 8);
          pfVar10[-2] = (*(float *)(lVar12 + 0x1c + lVar13 * 8) - fVar19) * fVar20 + fVar19;
          fVar19 = *(float *)(lVar12 + 4 + lVar13 * 8);
          pfVar10[-1] = (*(float *)(lVar12 + 0x20 + lVar13 * 8) - fVar19) * fVar20 + fVar19;
          fVar19 = *(float *)(lVar12 + 8 + lVar13 * 8);
          *pfVar10 = (*(float *)(lVar12 + 0x24 + lVar13 * 8) - fVar19) * fVar20 + fVar19;
          pfVar4 = (float *)(lVar12 + 0xc + lVar13 * 8);
          fVar26 = *pfVar4;
          fVar22 = pfVar4[1];
          fVar23 = pfVar4[2];
          fVar24 = pfVar4[3];
          pfVar4 = (float *)(lVar12 + 0x28 + lVar13 * 8);
          fVar19 = *(float *)(&DAT_140dd26b0 +
                             (ulonglong)
                             (fVar24 * pfVar4[3] +
                              fVar23 * pfVar4[2] + fVar26 * *pfVar4 + fVar22 * pfVar4[1] < 0.0) * 4)
          ;
          fVar26 = fVar20 * (fVar19 * *pfVar4 - fVar26) + fVar26;
          fVar22 = fVar20 * (fVar19 * pfVar4[1] - fVar22) + fVar22;
          fVar23 = fVar20 * (fVar19 * pfVar4[2] - fVar23) + fVar23;
          fVar24 = fVar20 * (fVar19 * pfVar4[3] - fVar24) + fVar24;
          fVar20 = 1.0 / SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar26 * fVar26 + fVar22 * fVar22)
          ;
          pfVar4 = (float *)(lVar14 + lVar13 * 2);
          *pfVar4 = fVar20 * fVar26;
          pfVar4[1] = fVar20 * fVar22;
          pfVar4[2] = fVar20 * fVar23;
          pfVar4[3] = fVar20 * fVar24;
          pfVar4 = (float *)(lVar12 + 0x38 + lVar13 * 8);
          if (*pfVar4 <= 1.0 && *pfVar4 != 1.0) {
            uVar11 = *(undefined8 *)(local_1e0 + lVar13);
            FUN_1400ba7b0(*param_1,uVar11,DAT_14151f5d8);
            FUN_1400ba7b0(*param_1,uVar11,DAT_14151f5e0);
            cVar6 = FUN_1400b9b40(*param_1,uVar11);
            if (cVar6 != '\0') {
              thunk_FUN_1400b7e20(*param_1,uVar11);
            }
          }
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 8;
          pfVar10 = pfVar10 + 3;
        } while (lVar18 < local_1e4);
      }
      cVar6 = FUN_1400bcfa0(local_1f8);
    }
  }
  FUN_1400cb710(*param_1);
  if (param_1[0x86c0] != 0) {
    FUN_140066360(param_1);
    param_1[0x86c0] = 0;
  }
  uVar15 = _Query_perf_frequency();
  uVar16 = _Query_perf_counter();
  if (uVar15 == 24000000) {
    lVar12 = (((longlong)uVar16 % 24000000) * 1000000000) / 24000000 +
             ((longlong)uVar16 / 24000000) * 1000000000;
  }
  else if (uVar15 == 10000000) {
    lVar12 = uVar16 * 100;
  }
  else {
    if ((uVar16 | uVar15) >> 0x20 == 0) {
      uVar17 = (uVar16 & 0xffffffff) / (uVar15 & 0xffffffff);
      uVar16 = (uVar16 & 0xffffffff) % (uVar15 & 0xffffffff);
    }
    else {
      uVar17 = (longlong)uVar16 / (longlong)uVar15;
      uVar16 = (longlong)uVar16 % (longlong)uVar15;
    }
    uVar16 = uVar16 * 1000000000;
    if ((uVar15 | uVar16) >> 0x20 == 0) {
      uVar16 = (uVar16 & 0xffffffff) / (uVar15 & 0xffffffff);
    }
    else {
      uVar16 = (longlong)uVar16 / (longlong)uVar15;
    }
    lVar12 = uVar16 + uVar17 * 1000000000;
  }
  param_1[0x86bf] = lVar12;
  FUN_140190180(param_1 + 0x3f);
LAB_140065bcf:
  if (DAT_1414ef3c0 == (local_90 ^ (ulonglong)auStack_238)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_90 ^ (ulonglong)auStack_238);
}

