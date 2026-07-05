/**
 * Function: tracyd3d12_failed_to_obtain_queue_clock_calib
 * Address:  14022d780
 * Signature: undefined tracyd3d12_failed_to_obtain_queue_clock_calib(void)
 * Body size: 551 bytes
 */


void tracyd3d12_failed_to_obtain_queue_clock_calib(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 local_40;
  ulonglong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                    (*(longlong **)(param_1 + 8),&local_40,local_38);
  if (iVar7 < 0) {
    lVar11 = FUN_1401a9cc0();
    if ((*(byte *)(lVar11 + 0x288) & 1) != 0) {
      lVar8 = FUN_1401a9e60();
      uVar10 = *(ulonglong *)(lVar8 + 0x28);
      lVar11 = lVar8;
      if ((uVar10 & 0xffff) == 0) {
        lVar11 = FUN_1400637c0(lVar8,uVar10);
      }
      lVar1 = *(longlong *)(lVar8 + 0x48);
      uVar12 = (ulonglong)(uint)((int)(uVar10 & 0xffff) << 5);
      *(undefined1 *)(lVar1 + uVar12) = 0x4f;
      uVar3 = rdtsc();
      *(ulonglong *)(lVar1 + 1 + uVar12) =
           uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar11 >> 0x20),(int)uVar3);
      *(char **)(lVar1 + 0xc + uVar12) =
           "TracyD3D12: failed to obtain queue clock calibration counters.";
      *(undefined2 *)(lVar1 + 9 + uVar12) = 0;
      *(undefined1 *)(lVar1 + 0xb + uVar12) = 0x8b;
      *(ulonglong *)(lVar8 + 0x28) = uVar10 + 1;
    }
  }
  else {
    lVar11 = local_38[0] - *(longlong *)(param_1 + 0x68);
    if (0 < lVar11) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x140) < DAT_1416b8500) {
        FUN_140b6864c(&DAT_1416b8500);
        if (DAT_1416b8500 == -1) {
          uVar10 = FUN_140160d50();
          if (uVar10 >> 0x20 == 0) {
            DAT_1416b84f8 = 1000000000 / (uVar10 & 0xffffffff);
            uVar10 = 1000000000 % (uVar10 & 0xffffffff);
          }
          else {
            auVar2 = ZEXT816(0) << 0x40 | ZEXT816(1000000000);
            DAT_1416b84f8 = SUB168(auVar2 / SEXT816((longlong)uVar10),0);
            uVar10 = SUB168(auVar2 % SEXT816((longlong)uVar10),0);
          }
          _Init_thread_footer(&DAT_1416b8500,uVar10);
        }
      }
      lVar11 = lVar11 * DAT_1416b84f8;
      *(ulonglong *)(param_1 + 0x68) = local_38[0];
      uVar10 = rdtsc();
      local_38[0] = uVar10 & 0xffffffff00000000 | CONCAT44((int)(local_38[0] >> 0x20),(int)uVar10);
      lVar8 = FUN_1401a9cc0();
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0xd8));
      puVar13 = *(undefined8 **)(lVar8 + 0xb0);
      if (puVar13 == *(undefined8 **)(lVar8 + 0xb8)) {
        FUN_1401a4720(lVar8 + 0xa8);
        puVar13 = *(undefined8 **)(lVar8 + 0xb0);
      }
      *(undefined1 *)puVar13 = 0x3f;
      *(undefined8 *)((longlong)puVar13 + 1) = local_40;
      *(ulonglong *)((longlong)puVar13 + 9) = local_38[0];
      *(longlong *)((longlong)puVar13 + 0x11) = lVar11;
      *(undefined1 *)((longlong)puVar13 + 0x19) = *(undefined1 *)(param_1 + 0x10);
      lVar11 = FUN_1401a9cc0();
      AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x2a0));
      puVar9 = *(undefined8 **)(lVar11 + 0x2b0);
      if (puVar9 == *(undefined8 **)(lVar11 + 0x2b8)) {
        FUN_1401a4720(lVar11 + 0x2a8);
        puVar9 = *(undefined8 **)(lVar11 + 0x2b0);
      }
      *(undefined8 **)(lVar11 + 0x2b0) = puVar9 + 4;
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      uVar6 = puVar13[3];
      puVar9[2] = puVar13[2];
      puVar9[3] = uVar6;
      *puVar9 = uVar4;
      puVar9[1] = uVar5;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x2a0));
      lVar11 = FUN_1401a9cc0();
      *(longlong *)(lVar11 + 0xb0) = *(longlong *)(lVar11 + 0xb0) + 0x20;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0xd8));
    }
  }
  return;
}

