/**
 * Function: error_id
 * Address:  140785ba0
 * Signature: undefined error_id(void)
 * Body size: 1967 bytes
 */


undefined2 *
error_id(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined2 *param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  void *_Dst;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  void *pvVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined2 *puVar23;
  size_t _Size;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined2 *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 *local_60;
  undefined2 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  *param_1 = *param_6;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_6 + 0x28) == '\x01') {
    local_60 = (undefined8 *)(param_1 + 4);
    FUN_1406d92f0(local_60,param_6 + 4);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  param_1[0x2c] = param_6[0x2c];
  local_90 = param_1 + 0x30;
  if (*(char *)(param_6 + 0x28) == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_6 + 0x24);
  }
  local_58 = param_1;
  FUN_1407a0bf0(local_90,param_2,param_3,param_4,uVar17);
  *(undefined8 *)(local_58 + 0x6c) = param_5;
  *(undefined8 *)(local_58 + 0x70) = 0;
  *(undefined8 *)(local_58 + 0x74) = 0;
  *(undefined8 *)(local_58 + 0x78) = 0;
  *(undefined8 *)(local_58 + 0x7c) = 0;
  *(undefined8 *)(local_58 + 0x80) = 0;
  *(undefined8 *)(local_58 + 0x84) = 0;
  *(undefined1 *)(local_58 + 0x88) = 1;
  *(undefined8 *)(local_58 + 0x8a) = 0;
  *(undefined8 *)(local_58 + 0x8e) = 0;
  *(undefined8 *)(local_58 + 0x92) = 0;
  *(undefined8 *)(local_58 + 0x96) = 0;
  *(undefined4 *)(local_58 + 0x9a) = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14079fd90(&local_80,&local_a8,0);
  puVar16 = local_58;
  *(undefined4 *)(local_58 + 0x9c) = local_80;
  *(ulonglong *)(local_58 + 0x9e) = CONCAT44(uStack_78,uStack_7c);
  puVar23 = local_58 + 0xa4;
  local_88 = (longlong *)(local_58 + 0xb4);
  local_60 = (undefined8 *)(local_58 + 200);
  local_98 = (undefined8 *)(local_58 + 0xe0);
  puVar1 = local_58 + 0xf8;
  puVar2 = local_58 + 0x11c;
  *(undefined8 *)(local_58 + 0xbc) = 0;
  *(undefined8 *)(local_58 + 0xc0) = 0;
  *(undefined8 *)(local_58 + 0xb4) = 0;
  *(undefined8 *)(local_58 + 0xb8) = 0;
  *(undefined8 *)(local_58 + 0xac) = 0;
  *(undefined8 *)(local_58 + 0xb0) = 0;
  *(undefined8 *)(local_58 + 0xa4) = 0;
  *(undefined8 *)(local_58 + 0xa8) = 0;
  puVar3 = local_58 + 0x14c;
  puVar4 = local_58 + 0x158;
  memset(local_60,0,0x288);
  *(undefined8 *)(puVar16 + 0x20c) = 0xf;
  *(undefined8 *)(puVar16 + 0x210) = 0;
  *(undefined8 *)(puVar16 + 0x214) = 0;
  *(undefined8 *)(puVar16 + 0x218) = 0;
  *(undefined8 *)(puVar16 + 0x21c) = 0;
  uVar18 = (ulonglong)local_a8 >> 8;
  local_a8 = CONCAT71((uint7)uVar18 & 0xffffff,1);
  local_80 = 8;
  uStack_7c = 0;
  FUN_14002bb90(puVar23,&local_80);
  puVar8 = *(undefined8 **)(local_58 + 0xa8);
  if (puVar8 == *(undefined8 **)(local_58 + 0xac)) {
    FUN_140029790(puVar23,puVar8,&local_a8);
  }
  else {
    *puVar8 = local_a8;
    *(longlong *)(local_58 + 0xa8) = *(longlong *)(local_58 + 0xa8) + 8;
  }
  FUN_1407a0a50(param_4,&local_80,&DAT_1413491d6);
  *(ulonglong *)(local_58 + 0x8c) = CONCAT44(uStack_7c,local_80);
  FUN_1407a0a50(param_4,&local_80,"number");
  *(ulonglong *)(local_58 + 0x90) = CONCAT44(uStack_7c,local_80);
  FUN_1407a0a50(param_4,&local_80,"%error-id%");
  *(ulonglong *)(local_58 + 0x94) = CONCAT44(uStack_7c,local_80);
  FUN_1407a0a50(param_4,&local_80,"nil");
  puVar23 = local_58;
  *(ulonglong *)(local_58 + 0x98) = CONCAT44(uStack_7c,local_80);
  pvVar9 = *(void **)(local_58 + 0xe0);
  if ((ulonglong)(*(longlong *)(local_58 + 0xe8) - (longlong)pvVar9) < 0x4e0) {
    FUN_1401d8bf0(local_98);
    pvVar9 = (void *)*local_98;
    memset(pvVar9,0,0x4e0);
    lVar20 = (longlong)pvVar9 + 0x4e0;
    puVar23 = local_58;
  }
  else {
    uVar18 = *(longlong *)(local_58 + 0xe4) - (longlong)pvVar9 >> 2;
    if (uVar18 < 0x138) {
      memset(pvVar9,0,*(longlong *)(local_58 + 0xe4) - (longlong)pvVar9);
      pvVar9 = *(void **)(puVar23 + 0xe4);
      uVar18 = (ulonglong)(uint)((0x138 - (int)uVar18) * 4);
      memset(pvVar9,0,uVar18);
      lVar20 = (longlong)pvVar9 + uVar18;
    }
    else {
      lVar20 = (longlong)pvVar9 + 0x4e0;
      memset(pvVar9,0,0x4e0);
    }
  }
  *(longlong *)(puVar23 + 0xe4) = lVar20;
  **(undefined4 **)(puVar23 + 0xe0) = 1;
  FUN_1407a0c50(local_90,1);
  FUN_140787100(local_58);
  *(undefined1 *)(local_58 + 0x88) = 0;
  local_80 = 0x10;
  uStack_7c = 0;
  if ((ulonglong)(*(longlong *)(local_58 + 0xd0) - *(longlong *)(local_58 + 200)) < 0x80) {
    FUN_14002bb90(local_60,&local_80);
  }
  local_80 = 0x10;
  uStack_7c = 0;
  if ((ulonglong)(*(longlong *)(local_58 + 0x100) - *(longlong *)(local_58 + 0xf8)) < 0x80) {
    FUN_14002bb90(puVar1,&local_80);
  }
  local_80 = 0x10;
  uStack_7c = 0;
  if ((ulonglong)(*(longlong *)(local_58 + 0x124) - *(longlong *)(local_58 + 0x11c)) < 0x80) {
    FUN_14002bb90(puVar2,&local_80);
  }
  local_80 = 0x10;
  uStack_7c = 0;
  if ((ulonglong)(*(longlong *)(local_58 + 0x160) - *(longlong *)(local_58 + 0x158)) < 0x80) {
    FUN_14002bb90(puVar4,&local_80);
  }
  local_80 = 0x10;
  uStack_7c = 0;
  if ((ulonglong)
      ((*(longlong *)(local_58 + 0x154) - *(longlong *)(local_58 + 0x14c) >> 3) *
      -0x3333333333333333) < 0x10) {
    FUN_14079dc20(puVar3,&local_80);
  }
  puVar23 = local_58;
  if (*(char *)(param_6 + 0x28) == '\x01') {
    if (local_88 != (longlong *)(param_6 + 4)) {
      uVar17 = *(undefined8 *)(param_6 + 0xc);
      uVar14 = *(undefined8 *)(param_6 + 0x10);
      if (*(longlong *)(param_6 + 8) == 0) {
        uVar18 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = FUN_140b65d30();
        uVar18 = *(ulonglong *)(param_6 + 8);
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          lVar10 = *(longlong *)(param_6 + 4);
          if (uVar18 == 1) {
            uVar21 = 0;
          }
          else {
            lVar22 = 0x10;
            uVar21 = 0;
            do {
              puVar8 = (undefined8 *)(lVar10 + -0x10 + lVar22);
              uVar15 = puVar8[1];
              puVar7 = (undefined8 *)(lVar20 + -0x10 + lVar22);
              *puVar7 = *puVar8;
              puVar7[1] = uVar15;
              puVar5 = (undefined4 *)(lVar10 + lVar22);
              uVar11 = puVar5[1];
              uVar12 = puVar5[2];
              uVar13 = puVar5[3];
              puVar6 = (undefined4 *)(lVar20 + lVar22);
              *puVar6 = *puVar5;
              puVar6[1] = uVar11;
              puVar6[2] = uVar12;
              puVar6[3] = uVar13;
              uVar21 = uVar21 + 2;
              lVar22 = lVar22 + 0x20;
            } while ((uVar18 & 0xfffffffffffffffe) != uVar21);
          }
          if ((uVar18 & 1) != 0) {
            puVar5 = (undefined4 *)(lVar10 + uVar21 * 0x10);
            uVar11 = puVar5[1];
            uVar12 = puVar5[2];
            uVar13 = puVar5[3];
            puVar6 = (undefined4 *)(lVar20 + uVar21 * 0x10);
            *puVar6 = *puVar5;
            puVar6[1] = uVar11;
            puVar6[2] = uVar12;
            puVar6[3] = uVar13;
          }
        }
      }
      puVar23 = local_58;
      if (*local_88 != 0) {
        FUN_140b68ba8();
      }
      *(longlong *)(puVar23 + 0xb4) = lVar20;
      *(ulonglong *)(puVar23 + 0xb8) = uVar18;
      *(undefined8 *)(puVar23 + 0xbc) = uVar17;
      *(undefined8 *)(puVar23 + 0xc0) = uVar14;
    }
    if (local_60 != (undefined8 *)(param_6 + 0x18)) {
      pvVar9 = *(void **)(param_6 + 0x18);
      uVar21 = *(longlong *)(param_6 + 0x1c) - (longlong)pvVar9;
      uVar18 = (longlong)uVar21 >> 3;
      _Dst = *(void **)(puVar23 + 200);
      if ((ulonglong)(*(longlong *)(puVar23 + 0xd0) - (longlong)_Dst) < uVar21) {
        FUN_140094620(local_60,uVar18);
        pvVar19 = (void *)*local_60;
        memmove(pvVar19,pvVar9,uVar21);
        pvVar19 = (void *)((longlong)pvVar19 + uVar21);
        puVar23 = local_58;
      }
      else {
        _Size = *(longlong *)(puVar23 + 0xcc) - (longlong)_Dst;
        lVar20 = uVar18 - ((longlong)_Size >> 3);
        if (uVar18 < (ulonglong)((longlong)_Size >> 3) || lVar20 == 0) {
          pvVar19 = (void *)((longlong)_Dst + uVar21);
          memmove(_Dst,pvVar9,uVar21);
        }
        else {
          memmove(_Dst,pvVar9,_Size);
          pvVar19 = *(void **)(puVar23 + 0xcc);
          memmove(pvVar19,(void *)((longlong)pvVar9 + _Size),lVar20 * 8);
          pvVar19 = (void *)((longlong)pvVar19 + lVar20 * 8);
        }
      }
      *(void **)(puVar23 + 0xcc) = pvVar19;
    }
  }
  return puVar23;
}

