/**
 * Function: peeking_past_end_of_incomplete_track
 * Address:  140454680
 * Signature: undefined peeking_past_end_of_incomplete_track(void)
 * Body size: 1527 bytes
 */


void * peeking_past_end_of_incomplete_track
                 (longlong *param_1,void *param_2,uint param_3,uint param_4,undefined8 param_5,
                 int param_6,int param_7,int param_8,void *param_9,float param_10)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int _Val;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  ulonglong uVar14;
  void *_Dst;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  void *pvVar18;
  ulonglong uVar19;
  longlong *plVar20;
  void *local_88;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 == (uint *)0x0) {
    return (void *)0x0;
  }
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  uVar12 = (ulonglong)((uVar1 >> 3 & 0x1f) * uVar2);
  uVar14 = (ulonglong)((param_3 >> 3 & 0x1f) * param_4);
  uVar19 = (longlong)param_8 * uVar12;
  uVar11 = uVar12 * (longlong)param_6;
  uVar12 = uVar12 * (longlong)param_7;
  bVar7 = uVar2 != param_4;
  bVar8 = uVar1 != param_3;
  bVar6 = param_10 != 1.0;
  local_88 = param_2;
  if (bVar6 || (bVar7 || bVar8)) {
    local_88 = param_9;
  }
  if (param_2 != (void *)0x0) {
    local_88 = param_2;
  }
  uVar4 = *(undefined8 *)(puVar3 + 4);
  uVar17 = *(ulonglong *)(puVar3 + 0x10);
  if (uVar17 < uVar11) {
    if (bVar6 || (bVar7 || bVar8)) {
      param_2 = param_9;
    }
    if (local_88 == (void *)0x0) {
      param_2 = param_9;
      local_88 = param_9;
    }
    uVar11 = uVar11 - uVar17;
    if ((ulonglong)param_1[3] < uVar11) {
      pvVar18 = (void *)0x0;
    }
    else {
      memcpy(param_2,(void *)((param_1[3] - uVar11) + param_1[2]),uVar11);
      memcpy((void *)(uVar11 + (longlong)param_2),*(void **)(puVar3 + 0xe),
             *(size_t *)(puVar3 + 0x10));
      pvVar18 = param_2;
    }
  }
  else {
    if (uVar19 + uVar12 <= *(longlong *)(puVar3 + 0x12) - uVar17) {
      pvVar18 = (void *)((uVar17 - uVar11) + *(longlong *)(puVar3 + 0xe));
      *(ulonglong *)(puVar3 + 0x10) = uVar12 + uVar17;
      if (local_88 == (void *)0x0) {
        return pvVar18;
      }
      FUN_1401384c0(param_7 + param_6 + param_8,pvVar18,uVar1,uVar2,uVar4,local_88,param_3,param_4,
                    param_5,param_9,param_10);
      return local_88;
    }
    if (bVar6 || (bVar7 || bVar8)) {
      param_2 = param_9;
    }
    if (local_88 == (void *)0x0) {
      param_2 = param_9;
      local_88 = param_9;
    }
    pvVar18 = local_88;
    if (uVar11 == 0) goto joined_r0x000140454a92;
    pvVar18 = (void *)((uVar17 - uVar11) + *(longlong *)(puVar3 + 0xe));
  }
  lVar15 = (longlong)param_6 * uVar14;
  FUN_1401384c0(param_6,pvVar18,uVar1,uVar2,uVar4,local_88,param_3,param_4,param_5,param_2,param_10)
  ;
  param_2 = (void *)((longlong)param_2 + lVar15);
  pvVar18 = (void *)((longlong)local_88 + lVar15);
joined_r0x000140454a92:
  if (uVar12 != 0) {
    lVar9 = (longlong)param_7 * uVar14;
    plVar20 = (longlong *)*param_1;
    lVar15 = plVar20[8];
    uVar11 = plVar20[9] - lVar15;
    if (uVar11 < uVar12) {
      memcpy(param_2,(void *)(lVar15 + plVar20[7]),uVar11);
      plVar20[8] = plVar20[8] + uVar11;
      do {
        if ((char)plVar20[3] == '\x01') {
          pcVar10 = "Reading past end of flushed track";
LAB_140454aca:
          FUN_1400fbed0(pcVar10);
          pvVar13 = (void *)0x0;
          break;
        }
        plVar5 = (longlong *)plVar20[4];
        if (plVar5 == (longlong *)0x0) {
          pcVar10 = "Reading past end of incomplete track";
          goto LAB_140454aca;
        }
        uVar14 = plVar20[9];
        pvVar13 = (void *)plVar20[7];
        _Dst = (void *)param_1[2];
        uVar17 = param_1[3];
        if (uVar14 < uVar17) {
          memmove(_Dst,(void *)((longlong)_Dst + uVar14),uVar17 - uVar14);
          _Dst = (void *)((uVar17 - uVar14) + (longlong)_Dst);
          uVar17 = uVar14;
        }
        else {
          pvVar13 = (void *)((longlong)pvVar13 + (uVar14 - uVar17));
        }
        memcpy(_Dst,pvVar13,uVar17);
        *param_1 = (longlong)plVar5;
        (*(code *)plVar20[6])(plVar20[5],plVar20[7],(int)plVar20[10]);
        if ((ulonglong)param_1[7] < (ulonglong)param_1[8]) {
          *plVar20 = param_1[5];
          param_1[5] = (longlong)plVar20;
          param_1[7] = param_1[7] + 1;
        }
        else {
          FUN_140160cf0(plVar20);
        }
        uVar14 = plVar5[9] - plVar5[8];
        if (uVar12 - uVar11 < uVar14) {
          uVar14 = uVar12 - uVar11;
        }
        memcpy((void *)((longlong)param_2 + uVar11),(void *)(plVar5[8] + plVar5[7]),uVar14);
        plVar5[8] = plVar5[8] + uVar14;
        uVar11 = uVar11 + uVar14;
        pvVar13 = param_2;
        plVar20 = plVar5;
      } while (uVar11 != uVar12);
    }
    else {
      plVar20[8] = uVar12 + lVar15;
      pvVar13 = (void *)(plVar20[7] + lVar15);
    }
    FUN_1401384c0(param_7,pvVar13,uVar1,uVar2,uVar4,pvVar18,param_3,param_4,param_5,param_2,param_10
                 );
    pvVar18 = (void *)((longlong)pvVar18 + lVar9);
    param_2 = (void *)((longlong)param_2 + lVar9);
  }
  if (uVar19 != 0) {
    puVar16 = (undefined4 *)*param_1;
    if ((ulonglong)(*(longlong *)(puVar16 + 0x12) - *(longlong *)(puVar16 + 0x10)) < uVar19) {
      lVar15 = 0;
      do {
        uVar12 = *(longlong *)(puVar16 + 0x12) - *(longlong *)(puVar16 + 0x10);
        if (uVar19 - lVar15 < uVar12) {
          uVar12 = uVar19 - lVar15;
        }
        memcpy((void *)(lVar15 + (longlong)param_2),
               (void *)(*(longlong *)(puVar16 + 0x10) + *(longlong *)(puVar16 + 0xe)),uVar12);
        lVar15 = uVar12 + lVar15;
        pvVar13 = param_2;
        if (uVar19 - lVar15 == 0) goto LAB_140454c1c;
        if (*(char *)(puVar16 + 6) == '\x01') {
          _Val = FUN_140131d50(*puVar16);
          memset((void *)(lVar15 + (longlong)param_2),_Val,uVar19 - lVar15);
          goto LAB_140454c1c;
        }
        puVar16 = *(undefined4 **)(puVar16 + 8);
      } while (puVar16 != (undefined4 *)0x0);
      FUN_1400fbed0("Peeking past end of incomplete track");
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = (void *)(*(longlong *)(puVar16 + 0x10) + *(longlong *)(puVar16 + 0xe));
    }
LAB_140454c1c:
    FUN_1401384c0(param_8,pvVar13,uVar1,uVar2,uVar4,pvVar18,param_3,param_4,param_5,param_2,param_10
                 );
  }
  return local_88;
}

