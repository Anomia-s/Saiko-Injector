/**
 * Function: tracyd3d12_submitted_too_many_gpu_queries_con
 * Address:  1401a4ad0
 * Signature: undefined tracyd3d12_submitted_too_many_gpu_queries_con(void)
 * Body size: 704 bytes
 */


void tracyd3d12_submitted_too_many_gpu_queries_con
               (byte *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
               size_t *param_5,undefined8 *param_6,size_t *param_7,undefined8 *param_8,
               size_t *param_9,undefined8 *param_10,char *param_11)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  size_t _Size;
  void *_Src;
  size_t _Size_00;
  size_t _Size_01;
  void *_Src_00;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined1 *puVar16;
  
  if (*param_11 == '\0') {
    *param_1 = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else {
    uVar3 = *param_10;
    _Size = *param_9;
    _Src = (void *)*param_8;
    _Size_00 = *param_7;
    pvVar15 = (void *)*param_6;
    _Size_01 = *param_5;
    _Src_00 = (void *)*param_4;
    uVar8 = *param_3;
    lVar12 = *param_2;
    lVar9 = FUN_1401a9cc0();
    bVar6 = *(byte *)(lVar9 + 0x288) & 1;
    *param_1 = bVar6;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    bVar7 = 0;
    if (bVar6 != 0) {
      *(longlong *)(param_1 + 8) = lVar12;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      LOCK();
      puVar1 = (uint *)(lVar12 + 0x2c);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 2;
      UNLOCK();
      if (*(uint *)(lVar12 + 0x28) <= uVar2) {
        lVar9 = FUN_1401a9cc0();
        if ((*(byte *)(lVar9 + 0x288) & 1) != 0) {
          lVar10 = FUN_1401a9e60();
          uVar14 = *(ulonglong *)(lVar10 + 0x28);
          lVar9 = lVar10;
          if ((uVar14 & 0xffff) == 0) {
            lVar9 = FUN_1400637c0(lVar10,uVar14);
          }
          lVar4 = *(longlong *)(lVar10 + 0x48);
          uVar13 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
          *(undefined1 *)(lVar4 + uVar13) = 0x4f;
          uVar5 = rdtsc();
          *(ulonglong *)(lVar4 + 1 + uVar13) =
               uVar5 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar5);
          *(char **)(lVar4 + 0xc + uVar13) =
               "TracyD3D12: Submitted too many GPU queries! Consider increasing MaxQueries.";
          *(undefined2 *)(lVar4 + 9 + uVar13) = 0;
          *(undefined1 *)(lVar4 + 0xb + uVar13) = 0x8b;
          *(ulonglong *)(lVar10 + 0x28) = uVar14 + 1;
        }
      }
      uVar14 = (ulonglong)(uVar2 + *(int *)(lVar12 + 0x30)) % (ulonglong)*(uint *)(lVar12 + 0x28);
      *(int *)(param_1 + 0x18) = (int)uVar14;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1a8))
                (*(longlong **)(param_1 + 0x10),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),2
                 ,uVar14);
      bVar7 = *param_1;
    }
    if (bVar7 != 0) {
      FUN_1401b1e50();
      uVar14 = _Size + _Size_00 + _Size_01 + 0xc;
      puVar11 = (undefined2 *)FUN_1401b81c0(uVar14 & 0xffff);
      *puVar11 = (short)uVar14;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)(puVar11 + 3) = uVar8;
      memcpy(puVar11 + 5,pvVar15,_Size_00);
      *(undefined1 *)((longlong)puVar11 + _Size_00 + 10) = 0;
      pvVar15 = (void *)((longlong)puVar11 + _Size_00 + 0xb);
      memcpy(pvVar15,_Src_00,_Size_01);
      *(undefined1 *)((longlong)puVar11 + _Size_00 + _Size_01 + 0xb) = 0;
      if (_Size != 0) {
        memcpy((void *)((longlong)pvVar15 + _Size_01 + 1),_Src,_Size);
      }
      lVar12 = FUN_1401a9cc0();
      AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0xd8));
      puVar16 = *(undefined1 **)(lVar12 + 0xb0);
      uVar8 = extraout_var;
      if (puVar16 == *(undefined1 **)(lVar12 + 0xb8)) {
        FUN_1401a4720(lVar12 + 0xa8);
        puVar16 = *(undefined1 **)(lVar12 + 0xb0);
        uVar8 = extraout_var_00;
      }
      *puVar16 = 0x2a;
      uVar14 = rdtsc();
      *(ulonglong *)(puVar16 + 1) = uVar14 & 0xffffffff00000000 | CONCAT44(uVar8,(int)uVar14);
      *(undefined2 **)(puVar16 + 0x10) = puVar11;
      uVar8 = FUN_1401ab560();
      *(undefined4 *)(puVar16 + 9) = uVar8;
      *(undefined2 *)(puVar16 + 0xd) = *(undefined2 *)(param_1 + 0x18);
      puVar16[0xf] = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x10);
      lVar12 = FUN_1401a9cc0();
      *(longlong *)(lVar12 + 0xb0) = *(longlong *)(lVar12 + 0xb0) + 0x20;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0xd8));
      return;
    }
  }
  return;
}

