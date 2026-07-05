/**
 * Function: tracyd3d12_failed_to_get_timestamp_frequency
 * Address:  14022d010
 * Signature: undefined tracyd3d12_failed_to_get_timestamp_frequency(void)
 * Body size: 1426 bytes
 */


undefined8 *
tracyd3d12_failed_to_get_timestamp_frequency
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68 [5];
  
  local_68[1] = 0xfffffffffffffffe;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0xff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  plVar8 = (longlong *)FUN_140b65d30(0x10);
  plVar8[1] = 0;
  param_1[8] = plVar8;
  *plVar8 = (longlong)(param_1 + 8);
  param_1[0xd] = 0;
  local_c0 = param_1 + 8;
  (**(code **)(*param_3 + 0x90))(param_3,&local_b8);
  if ((int)local_b8 == 3) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = local_a8 & 0xffffffff00000000;
    iVar7 = (**(code **)(*param_2 + 0x68))(param_2,0x15,&local_b8,0x14);
    if ((iVar7 < 0) || ((int)local_b8 == 0)) {
      lVar9 = FUN_1401a9cc0();
      if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
        return param_1;
      }
      lVar10 = FUN_1401a9e60();
      uVar14 = *(ulonglong *)(lVar10 + 0x28);
      lVar9 = lVar10;
      if ((uVar14 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar10,uVar14);
      }
      lVar13 = *(longlong *)(lVar10 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
      *(undefined1 *)(lVar13 + uVar15) = 0x4f;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar13 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      pcVar11 = "TracyD3D12: Platform does not support profiling of copy queues.";
      goto LAB_14022d3e7;
    }
  }
  *(undefined4 *)(param_1 + 5) = 0x10000;
  local_70 = 0;
  local_78 = 0;
  (**(code **)(*param_3 + 0x90))(param_3,&local_b8);
  local_c8 = param_1 + 7;
  local_78 = CONCAT44(*(undefined4 *)(param_1 + 5),(uint)((int)local_b8 == 3) * 4 + 1);
  local_70 = 0;
  while (iVar7 = (**(code **)(*param_2 + 0x138))(param_2,&local_78,&DAT_140df56b0,param_1 + 3),
        iVar7 < 0) {
    uVar2 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar2 >> 1;
    local_78 = CONCAT44(uVar2 >> 1,(undefined4)local_78);
  }
  uStack_b0 = 0;
  uStack_90 = 0;
  uStack_84 = 0;
  local_b8 = 1;
  local_a8 = (ulonglong)*(uint *)(param_1 + 5) << 3;
  uStack_a0 = 0x1000100000001;
  uStack_8c = 1;
  uStack_88 = 0;
  local_98 = 0x100000000;
  local_e4 = 3;
  local_e0 = 0;
  uStack_d8 = 0;
  iVar7 = (**(code **)(*param_2 + 0xd8))
                    (param_2,&local_e4,0,&local_b8,0x400,0,&DAT_140df56c0,param_1 + 4);
  if (iVar7 < 0) {
    lVar9 = FUN_1401a9cc0();
    if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
      return param_1;
    }
    lVar10 = FUN_1401a9e60();
    uVar14 = *(ulonglong *)(lVar10 + 0x28);
    lVar9 = lVar10;
    if ((uVar14 & 0xffff) == 0) {
      lVar9 = FUN_1400637c0(lVar10,uVar14);
    }
    lVar13 = *(longlong *)(lVar10 + 0x48);
    uVar15 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
    *(undefined1 *)(lVar13 + uVar15) = 0x4f;
    uVar3 = rdtsc();
    *(ulonglong *)(lVar13 + 1 + uVar15) =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
    pcVar11 = "TracyD3D12: Failed to create query readback buffer.";
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x120))(param_2,0,0,&DAT_140df56d0,local_c8);
    if (iVar7 < 0) {
      lVar9 = FUN_1401a9cc0();
      if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
        return param_1;
      }
      lVar10 = FUN_1401a9e60();
      uVar14 = *(ulonglong *)(lVar10 + 0x28);
      lVar9 = lVar10;
      if ((uVar14 & 0xffff) == 0) {
        lVar9 = FUN_1400637c0(lVar10,uVar14);
      }
      lVar13 = *(longlong *)(lVar10 + 0x48);
      uVar15 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
      *(undefined1 *)(lVar13 + uVar15) = 0x4f;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar13 + 1 + uVar15) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
      pcVar11 = "TracyD3D12: Failed to create payload fence.";
    }
    else {
      iVar7 = (**(code **)(*param_3 + 0x80))(param_3,local_68);
      fVar17 = 0.0;
      if (-1 < iVar7) {
        fVar17 = (float)(1000000000.0 /
                        (((double)CONCAT44(0x45300000,(int)(local_68[0] >> 0x20)) -
                         1.9342813113834067e+25) +
                        ((double)CONCAT44(0x43300000,(int)local_68[0]) - 4503599627370496.0)));
      }
      if ((fVar17 != 0.0) || (NAN(fVar17))) {
        iVar7 = (**(code **)(*param_3 + 0x88))(param_3,&local_d0,local_68);
        if (-1 < iVar7) {
          param_1[0xd] = local_68[0];
          uVar14 = rdtsc();
          local_68[0] = uVar14 & 0xffffffff00000000 |
                        CONCAT44((int)(local_68[0] >> 0x20),(int)uVar14);
          pcVar11 = (char *)FUN_1401ab550();
          LOCK();
          cVar1 = *pcVar11;
          *pcVar11 = *pcVar11 + '\x01';
          UNLOCK();
          *(char *)(param_1 + 2) = cVar1;
          lVar9 = FUN_1401a9cc0();
          AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0xd8));
          puVar16 = *(undefined8 **)(lVar9 + 0xb0);
          if (puVar16 == *(undefined8 **)(lVar9 + 0xb8)) {
            FUN_1401a4720(lVar9 + 0xa8);
            puVar16 = *(undefined8 **)(lVar9 + 0xb0);
          }
          *(undefined1 *)puVar16 = 0x52;
          *(ulonglong *)((longlong)puVar16 + 1) = local_68[0];
          *(undefined8 *)((longlong)puVar16 + 9) = local_d0;
          *(undefined4 *)((longlong)puVar16 + 0x11) = 0;
          *(float *)((longlong)puVar16 + 0x15) = fVar17;
          *(undefined1 *)((longlong)puVar16 + 0x19) = *(undefined1 *)(param_1 + 2);
          *(undefined2 *)((longlong)puVar16 + 0x1a) = 0x401;
          lVar9 = FUN_1401a9cc0();
          AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x2a0));
          puVar12 = *(undefined8 **)(lVar9 + 0x2b0);
          if (puVar12 == *(undefined8 **)(lVar9 + 0x2b8)) {
            FUN_1401a4720(lVar9 + 0x2a8);
            puVar12 = *(undefined8 **)(lVar9 + 0x2b0);
          }
          *(undefined8 **)(lVar9 + 0x2b0) = puVar12 + 4;
          uVar4 = *puVar16;
          uVar5 = puVar16[1];
          uVar6 = puVar16[3];
          puVar12[2] = puVar16[2];
          puVar12[3] = uVar6;
          *puVar12 = uVar4;
          puVar12[1] = uVar5;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x2a0));
          lVar9 = FUN_1401a9cc0();
          *(longlong *)(lVar9 + 0xb0) = *(longlong *)(lVar9 + 0xb0) + 0x20;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0xd8));
          return param_1;
        }
        lVar9 = FUN_1401a9cc0();
        if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
          return param_1;
        }
        lVar10 = FUN_1401a9e60();
        uVar14 = *(ulonglong *)(lVar10 + 0x28);
        lVar9 = lVar10;
        if ((uVar14 & 0xffff) == 0) {
          lVar9 = FUN_1400637c0(lVar10,uVar14);
        }
        lVar13 = *(longlong *)(lVar10 + 0x48);
        uVar15 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
        *(undefined1 *)(lVar13 + uVar15) = 0x4f;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar13 + 1 + uVar15) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
        pcVar11 = "TracyD3D12: Failed to get queue clock calibration.";
      }
      else {
        lVar9 = FUN_1401a9cc0();
        if ((*(byte *)(lVar9 + 0x288) & 1) == 0) {
          return param_1;
        }
        lVar10 = FUN_1401a9e60();
        uVar14 = *(ulonglong *)(lVar10 + 0x28);
        lVar9 = lVar10;
        if ((uVar14 & 0xffff) == 0) {
          lVar9 = FUN_1400637c0(lVar10,uVar14);
        }
        lVar13 = *(longlong *)(lVar10 + 0x48);
        uVar15 = (ulonglong)(uint)((int)(uVar14 & 0xffff) << 5);
        *(undefined1 *)(lVar13 + uVar15) = 0x4f;
        uVar3 = rdtsc();
        *(ulonglong *)(lVar13 + 1 + uVar15) =
             uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar9 >> 0x20),(int)uVar3);
        pcVar11 = "TracyD3D12: Failed to get timestamp frequency.";
      }
    }
  }
LAB_14022d3e7:
  *(char **)(lVar13 + 0xc + uVar15) = pcVar11;
  *(undefined2 *)(lVar13 + 9 + uVar15) = 0;
  *(undefined1 *)(lVar13 + 0xb + uVar15) = 0x8b;
  *(ulonglong *)(lVar10 + 0x28) = uVar14 + 1;
  return param_1;
}

