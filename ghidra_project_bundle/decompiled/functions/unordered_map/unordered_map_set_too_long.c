/**
 * Function: unordered_map_set_too_long
 * Address:  1407ca330
 * Signature: undefined unordered_map_set_too_long(void)
 * Body size: 760 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001407ca5ea) */
/* WARNING: Removing unreachable block (ram,0x0001407ca5f3) */
/* WARNING: Removing unreachable block (ram,0x0001407ca5fd) */

longlong * unordered_map_set_too_long(float *param_1,longlong *param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  uVar9 = ((ulonglong)param_3[7] ^
          ((ulonglong)param_3[6] ^
          ((ulonglong)param_3[5] ^
          ((ulonglong)param_3[4] ^
          ((ulonglong)param_3[3] ^
          ((ulonglong)param_3[2] ^
          ((ulonglong)param_3[1] ^ ((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3;
  lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar2 != *(undefined8 **)(param_1 + 2)) {
    if (*(longlong *)param_3 != puVar2[2]) {
      do {
        puVar8 = puVar2;
        if (puVar2 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1407ca41e;
        puVar2 = (undefined8 *)puVar2[1];
      } while (*(longlong *)param_3 != puVar2[2]);
    }
    *param_2 = (longlong)puVar2;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1407ca41e:
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  puVar2 = (undefined8 *)FUN_140b65d30(0x20);
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  puVar2[2] = *(undefined8 *)param_3;
  puVar2[3] = uVar1;
  uVar3 = *(longlong *)(param_1 + 4) + 1;
  if ((longlong)uVar3 < 0) {
    fVar11 = (float)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if ((longlong)uVar3 < 0) goto LAB_1407ca479;
LAB_1407ca4c7:
    if (fVar12 < fVar11 / (float)(longlong)uVar3) {
LAB_1407ca4dc:
      fVar12 = ceilf(fVar11 / fVar12);
      uVar7 = (longlong)(fVar12 - 9.223372e+18) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
      uVar4 = 8;
      if (8 < uVar7) {
        uVar4 = uVar7;
      }
      uVar7 = uVar3;
      if (uVar3 < uVar4) {
        uVar7 = uVar3 * 8;
        if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
          uVar7 = uVar4;
        }
        if (0x1ff < uVar3) {
          uVar7 = uVar4;
        }
      }
      invalid_hash_bucket_count(param_1,uVar7);
      lVar6 = (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10;
      puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 6) + 8 + lVar6);
      puVar8 = *(undefined8 **)(param_1 + 2);
      if (puVar5 != *(undefined8 **)(param_1 + 2)) {
        if (puVar2[2] != puVar5[2]) {
          do {
            puVar8 = puVar5;
            if (puVar5 == *(undefined8 **)(*(longlong *)(param_1 + 6) + lVar6)) goto LAB_1407ca587;
            puVar5 = (undefined8 *)puVar5[1];
          } while (puVar2[2] != puVar5[2]);
        }
        puVar8 = (undefined8 *)*puVar5;
      }
    }
  }
  else {
    fVar11 = (float)(longlong)uVar3;
    fVar12 = *param_1;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (-1 < (longlong)uVar3) goto LAB_1407ca4c7;
LAB_1407ca479:
    if (fVar12 < fVar11 / (float)uVar3) goto LAB_1407ca4dc;
  }
LAB_1407ca587:
  puVar5 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar2 = puVar8;
  puVar2[1] = puVar5;
  *puVar5 = puVar2;
  puVar8[1] = puVar2;
  lVar6 = *(longlong *)(param_1 + 6);
  lVar10 = (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10;
  if (*(undefined8 **)(lVar6 + lVar10) == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + lVar10) = puVar2;
  }
  else {
    if (*(undefined8 **)(lVar6 + lVar10) == puVar8) {
      *(undefined8 **)(lVar6 + lVar10) = puVar2;
      goto LAB_1407ca5da;
    }
    if (*(undefined8 **)(lVar6 + 8 + lVar10) != puVar5) goto LAB_1407ca5da;
  }
  *(undefined8 **)(lVar6 + 8 + lVar10) = puVar2;
LAB_1407ca5da:
  *param_2 = (longlong)puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

