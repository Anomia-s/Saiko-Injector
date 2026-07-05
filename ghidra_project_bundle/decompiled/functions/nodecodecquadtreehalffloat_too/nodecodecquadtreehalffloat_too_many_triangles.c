/**
 * Function: nodecodecquadtreehalffloat_too_many_triangles
 * Address:  14030a010
 * Signature: undefined nodecodecquadtreehalffloat_too_many_triangles(void)
 * Body size: 1078 bytes
 */


ulonglong nodecodecquadtreehalffloat_too_many_triangles
                    (undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                    ulonglong *param_5,undefined8 *param_6,undefined8 *param_7,ulonglong *param_8,
                    undefined8 *param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined2 *puVar5;
  undefined1 auVar6 [16];
  
  uVar2 = *param_8;
  if ((*(int *)(param_2 + 0x28) == -1) && (*(int *)(param_2 + 0x2c) == -1)) {
    return uVar2;
  }
  uVar1 = uVar2 + 0x40;
  if (param_8[1] < uVar1) {
    _Dst = (void *)(*DAT_14151f540)(uVar1,0x40);
    if ((void *)param_8[2] != (void *)0x0) {
      memmove(_Dst,(void *)param_8[2],*param_8);
      (*DAT_14151f548)(param_8[2]);
    }
    param_8[2] = (ulonglong)_Dst;
    param_8[1] = uVar1;
    *param_8 = uVar1;
    puVar5 = (undefined2 *)((longlong)_Dst + uVar2);
    if (*param_5 != 0) goto LAB_14030a0a9;
LAB_14030a30f:
    *(undefined4 *)(puVar5 + 0x18) = 0xf0000000;
    *puVar5 = 0x7bff;
    puVar5[4] = 0x7bff;
    puVar5[8] = 0x7bff;
    puVar5[0xc] = 0x7bff;
    puVar5[0x10] = 0x7bff;
    puVar5[0x14] = 0x7bff;
    if (*param_5 < 2) goto LAB_14030a343;
LAB_14030a137:
    puVar3 = *(uint **)(param_5[2] + 8);
    auVar6 = vcvtps2ph_f16c(ZEXT416(*puVar3),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[1]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[2]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[4]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[5]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[6]),2);
    vpextrw_avx(auVar6,0);
    *(uint *)(puVar5 + 0x1a) = puVar3[9] << 0x1c;
    if (0xe < puVar3[9]) goto LAB_14030a2dd;
    if (2 < *param_5) goto LAB_14030a1c7;
LAB_14030a378:
    *(undefined4 *)(puVar5 + 0x1c) = 0xf0000000;
    puVar5[2] = 0x7bff;
    puVar5[6] = 0x7bff;
    puVar5[10] = 0x7bff;
    puVar5[0xe] = 0x7bff;
    puVar5[0x12] = 0x7bff;
    puVar5[0x16] = 0x7bff;
    uVar1 = *param_5;
  }
  else {
    *param_8 = uVar1;
    puVar5 = (undefined2 *)(param_8[2] + uVar2);
    if (*param_5 == 0) goto LAB_14030a30f;
LAB_14030a0a9:
    puVar3 = *(uint **)param_5[2];
    auVar6 = vcvtps2ph_f16c(ZEXT416(*puVar3),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[1]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[2]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[4]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[5]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[6]),2);
    vpextrw_avx(auVar6,0);
    *(uint *)(puVar5 + 0x18) = puVar3[9] << 0x1c;
    if (0xe < puVar3[9]) goto LAB_14030a2dd;
    if (1 < *param_5) goto LAB_14030a137;
LAB_14030a343:
    *(undefined4 *)(puVar5 + 0x1a) = 0xf0000000;
    puVar5[1] = 0x7bff;
    puVar5[5] = 0x7bff;
    puVar5[9] = 0x7bff;
    puVar5[0xd] = 0x7bff;
    puVar5[0x11] = 0x7bff;
    puVar5[0x15] = 0x7bff;
    if (*param_5 < 3) goto LAB_14030a378;
LAB_14030a1c7:
    puVar3 = *(uint **)(param_5[2] + 0x10);
    auVar6 = vcvtps2ph_f16c(ZEXT416(*puVar3),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[1]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[2]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[4]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[5]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[6]),2);
    vpextrw_avx(auVar6,0);
    *(uint *)(puVar5 + 0x1c) = puVar3[9] << 0x1c;
    if (0xe < puVar3[9]) goto LAB_14030a2dd;
    uVar1 = *param_5;
  }
  if (uVar1 < 4) {
    *(undefined4 *)(puVar5 + 0x1e) = 0xf0000000;
    puVar5[3] = 0x7bff;
    puVar5[7] = 0x7bff;
    puVar5[0xb] = 0x7bff;
    puVar5[0xf] = 0x7bff;
    puVar5[0x13] = 0x7bff;
    puVar5[0x17] = 0x7bff;
  }
  else {
    puVar3 = *(uint **)(param_5[2] + 0x18);
    auVar6 = vcvtps2ph_f16c(ZEXT416(*puVar3),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[1]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[2]),1);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[4]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[5]),2);
    vpextrw_avx(auVar6,0);
    auVar6 = vcvtps2ph_f16c(ZEXT416(puVar3[6]),2);
    vpextrw_avx(auVar6,0);
    *(uint *)(puVar5 + 0x1e) = puVar3[9] << 0x1c;
    if (0xe < puVar3[9]) {
LAB_14030a2dd:
      *param_9 = "NodeCodecQuadTreeHalfFloat: Too many triangles";
      return 0xffffffffffffffff;
    }
  }
  uVar4 = param_3[1];
  *param_6 = *param_3;
  param_6[1] = uVar4;
  uVar4 = param_4[1];
  *param_7 = *param_4;
  param_7[1] = uVar4;
  uVar4 = param_3[1];
  param_6[2] = *param_3;
  param_6[3] = uVar4;
  uVar4 = param_4[1];
  param_7[2] = *param_4;
  param_7[3] = uVar4;
  uVar4 = param_3[1];
  param_6[4] = *param_3;
  param_6[5] = uVar4;
  uVar4 = param_4[1];
  param_7[4] = *param_4;
  param_7[5] = uVar4;
  uVar4 = param_3[1];
  param_6[6] = *param_3;
  param_6[7] = uVar4;
  uVar4 = param_4[1];
  param_7[6] = *param_4;
  param_7[7] = uVar4;
  return uVar2;
}

