// FUN_1400af5d0 @ 1400af5d0

void FUN_1400af5d0(uint *param_1,uint *param_2,uint *param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 5;
  uVar7 = *param_1;
  uVar3 = (ulonglong)uVar7;
  uVar5 = (ulonglong)param_1[lVar2];
  lVar6 = *(longlong *)(param_4 + 0x9460);
  fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
  if (fVar9 < *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) {
    *param_1 = param_1[lVar2];
    param_1[lVar2] = uVar7;
    uVar3 = (ulonglong)*param_1;
    lVar6 = *(longlong *)(param_4 + 0x9460);
    fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
    uVar5 = (ulonglong)uVar7;
    uVar7 = *param_1;
  }
  uVar4 = (uint)uVar5;
  uVar8 = param_1[lVar2 * 2];
  fVar1 = *(float *)(lVar6 + 0x30 + (ulonglong)uVar8 * 0x460);
  if (fVar1 <= fVar9) {
    if (*(float *)(lVar6 + 0x30 + uVar5 * 0x460) < fVar1) goto LAB_1400af69e;
  }
  else {
    *param_1 = uVar8;
    param_1[lVar2 * 2] = uVar7;
    uVar4 = param_1[lVar2];
    lVar6 = *(longlong *)(param_4 + 0x9460);
    uVar8 = uVar7;
    if (*(float *)(lVar6 + 0x30 + (ulonglong)uVar4 * 0x460) <
        *(float *)(lVar6 + 0x30 + uVar3 * 0x460)) {
LAB_1400af69e:
      param_1[lVar2] = uVar8;
      param_1[lVar2 * 2] = uVar4;
      lVar6 = *(longlong *)(param_4 + 0x9460);
    }
  }
  uVar7 = param_2[-lVar2];
  uVar5 = (ulonglong)uVar7;
  uVar3 = (ulonglong)*param_2;
  fVar9 = *(float *)(lVar6 + 0x30 + uVar5 * 0x460);
  if (fVar9 < *(float *)(lVar6 + 0x30 + uVar3 * 0x460)) {
    param_2[-lVar2] = *param_2;
    *param_2 = uVar7;
    uVar5 = (ulonglong)param_2[-lVar2];
    lVar6 = *(longlong *)(param_4 + 0x9460);
    fVar9 = *(float *)(lVar6 + 0x30 + uVar5 * 0x460);
    uVar3 = (ulonglong)uVar7;
    uVar7 = param_2[-lVar2];
  }
  uVar4 = (uint)uVar3;
  uVar8 = param_2[lVar2];
  fVar1 = *(float *)(lVar6 + 0x30 + (ulonglong)uVar8 * 0x460);
  if (fVar1 <= fVar9) {
    if (*(float *)(lVar6 + 0x30 + uVar3 * 0x460) < fVar1) goto LAB_1400af76e;
  }
  else {
    param_2[-lVar2] = uVar8;
    param_2[lVar2] = uVar7;
    uVar4 = *param_2;
    lVar6 = *(longlong *)(param_4 + 0x9460);
    uVar8 = uVar7;
    if (*(float *)(lVar6 + 0x30 + (ulonglong)uVar4 * 0x460) <
        *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) {
LAB_1400af76e:
      *param_2 = uVar8;
      param_2[lVar2] = uVar4;
      lVar6 = *(longlong *)(param_4 + 0x9460);
    }
  }
  uVar7 = param_3[lVar2 * -2];
  uVar3 = (ulonglong)uVar7;
  uVar5 = (ulonglong)param_3[-lVar2];
  fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
  if (fVar9 < *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) {
    param_3[lVar2 * -2] = param_3[-lVar2];
    param_3[-lVar2] = uVar7;
    uVar3 = (ulonglong)param_3[lVar2 * -2];
    lVar6 = *(longlong *)(param_4 + 0x9460);
    fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
    uVar5 = (ulonglong)uVar7;
    uVar7 = param_3[lVar2 * -2];
  }
  uVar4 = (uint)uVar5;
  uVar8 = *param_3;
  fVar1 = *(float *)(lVar6 + 0x30 + (ulonglong)uVar8 * 0x460);
  if (fVar1 <= fVar9) {
    if (fVar1 <= *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) goto LAB_1400af84a;
  }
  else {
    param_3[lVar2 * -2] = uVar8;
    *param_3 = uVar7;
    uVar4 = param_3[-lVar2];
    lVar6 = *(longlong *)(param_4 + 0x9460);
    uVar8 = uVar7;
    if (*(float *)(lVar6 + 0x30 + uVar3 * 0x460) <=
        *(float *)(lVar6 + 0x30 + (ulonglong)uVar4 * 0x460)) goto LAB_1400af84a;
  }
  param_3[-lVar2] = uVar8;
  *param_3 = uVar4;
  lVar6 = *(longlong *)(param_4 + 0x9460);
LAB_1400af84a:
  uVar7 = param_1[lVar2];
  uVar3 = (ulonglong)uVar7;
  uVar5 = (ulonglong)*param_2;
  fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
  if (fVar9 < *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) {
    param_1[lVar2] = *param_2;
    *param_2 = uVar7;
    uVar3 = (ulonglong)param_1[lVar2];
    lVar6 = *(longlong *)(param_4 + 0x9460);
    fVar9 = *(float *)(lVar6 + 0x30 + uVar3 * 0x460);
    uVar5 = (ulonglong)uVar7;
    uVar7 = param_1[lVar2];
  }
  uVar4 = (uint)uVar5;
  uVar8 = param_3[-lVar2];
  fVar1 = *(float *)(lVar6 + 0x30 + (ulonglong)uVar8 * 0x460);
  if (fVar1 <= fVar9) {
    if (fVar1 <= *(float *)(lVar6 + 0x30 + uVar5 * 0x460)) {
      return;
    }
  }
  else {
    param_1[lVar2] = uVar8;
    param_3[-lVar2] = uVar7;
    uVar4 = *param_2;
    uVar8 = uVar7;
    if (*(float *)(*(longlong *)(param_4 + 0x9460) + 0x30 + uVar3 * 0x460) <=
        *(float *)(*(longlong *)(param_4 + 0x9460) + 0x30 + (ulonglong)uVar4 * 0x460)) {
      return;
    }
  }
  *param_2 = uVar8;
  param_3[-lVar2] = uVar4;
  return;
}


