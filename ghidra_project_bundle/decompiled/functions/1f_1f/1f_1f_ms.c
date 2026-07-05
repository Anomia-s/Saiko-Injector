/**
 * Function: 1f_1f_ms
 * Address:  1401894e0
 * Signature: undefined 1f_1f_ms(void)
 * Body size: 602 bytes
 */


void _f_1f_ms(longlong param_1)

{
  float fVar1;
  undefined2 uVar2;
  uint uVar3;
  double dVar4;
  char cVar5;
  undefined8 *puVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  double local_88;
  char local_78 [40];
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  uVar3 = *(uint *)(param_1 + 0x4d0);
  if (uVar3 != 0) {
    fVar10 = 0.0;
    if ((int)uVar3 < 1) {
      dVar4 = 0.0;
      fVar14 = 0.0 / (float)(int)uVar3;
    }
    else {
      if (uVar3 == 1) {
        fVar14 = 0.0;
        uVar8 = 0;
        fVar11 = 0.0;
      }
      else {
        fVar14 = 0.0;
        uVar8 = 0;
        fVar11 = 0.0;
        do {
          fVar12 = *(float *)(param_1 + 0x2f0 + uVar8 * 4);
          fVar1 = *(float *)(param_1 + 0x2f4 + uVar8 * 4);
          fVar13 = fVar12;
          if (fVar12 <= fVar11) {
            fVar13 = fVar11;
          }
          fVar14 = fVar14 + fVar12 + fVar1;
          fVar11 = fVar1;
          if (fVar1 <= fVar13) {
            fVar11 = fVar13;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar3 & 0x7ffffffe) != uVar8);
      }
      fVar12 = fVar11;
      if ((uVar3 & 1) != 0) {
        fVar12 = *(float *)(param_1 + 0x2f0 + uVar8 * 4);
        fVar14 = fVar14 + fVar12;
        if (fVar12 <= fVar11) {
          fVar12 = fVar11;
        }
      }
      dVar4 = (double)fVar12;
      fVar14 = fVar14 / (float)(int)uVar3;
    }
    if (0.0 < fVar14) {
      fVar10 = 1000.0 / fVar14;
    }
    FUN_1400a3c00(local_78,0x20,&DAT_141349503,(double)fVar10);
    uVar2 = *(undefined2 *)(param_1 + 0x26a);
    cVar5 = FUN_14005c380(param_1,uVar2);
    if ((cVar5 != '\0') &&
       (puVar6 = (undefined8 *)FUN_14005c560(param_1,uVar2), puVar6 != (undefined8 *)0x0)) {
      sVar7 = strlen(local_78);
      if ((ulonglong)puVar6[3] < sVar7) {
        FUN_1400069b0(puVar6,sVar7);
      }
      else {
        puVar9 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar9 = (undefined8 *)*puVar6;
        }
        puVar6[2] = sVar7;
        memmove(puVar9,local_78,sVar7);
        *(undefined1 *)((longlong)puVar9 + sVar7) = 0;
      }
      *(undefined1 *)((longlong)puVar6 + 0x4b) = 1;
    }
    local_88 = dVar4;
    FUN_1400a3c00(local_78,0x20,"%.1f / %.1f ms",(double)fVar14);
    uVar2 = *(undefined2 *)(param_1 + 0x26c);
    cVar5 = FUN_14005c380(param_1,uVar2);
    if ((cVar5 != '\0') &&
       (puVar6 = (undefined8 *)FUN_14005c560(param_1,uVar2), puVar6 != (undefined8 *)0x0)) {
      sVar7 = strlen(local_78);
      if ((ulonglong)puVar6[3] < sVar7) {
        FUN_1400069b0(puVar6,sVar7);
      }
      else {
        puVar9 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar9 = (undefined8 *)*puVar6;
        }
        puVar6[2] = sVar7;
        memmove(puVar9,local_78,sVar7);
        *(undefined1 *)((longlong)puVar9 + sVar7) = 0;
      }
      *(undefined1 *)((longlong)puVar6 + 0x4b) = 1;
    }
  }
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_a8);
}

