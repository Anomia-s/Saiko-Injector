/**
 * Function: tracyd3d12_failed_to_map_readback_buffer
 * Address:  14022c940
 * Signature: undefined tracyd3d12_failed_to_map_readback_buffer(void)
 * Body size: 761 bytes
 */


char * tracyd3d12_failed_to_map_readback_buffer(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  char *local_58;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = FUN_1401a9cc0();
  local_49 = *(byte *)(lVar5 + 0x288);
  if ((local_49 & 1) == 0) {
    local_58 = (char *)0x0;
  }
  else {
    lVar5 = FUN_1401a9cc0();
    local_58 = *(char **)(lVar5 + 0x290);
    lVar6 = FUN_1401a9e60();
    uVar9 = *(ulonglong *)(lVar6 + 0x28);
    lVar5 = lVar6;
    if ((uVar9 & 0xffff) == 0) {
      lVar5 = FUN_1400637c0(lVar6,uVar9);
    }
    lVar2 = *(longlong *)(lVar6 + 0x48);
    uVar10 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
    *(undefined1 *)(lVar2 + uVar10) = 0xf;
    uVar11 = rdtsc();
    *(ulonglong *)(lVar2 + 1 + uVar10) =
         uVar11 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar11);
    *(undefined **)(lVar2 + 9 + uVar10) = &DAT_140df5700;
    *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
  }
  lVar5 = FUN_1401a9cc0();
  if ((*(byte *)(lVar5 + 0x288) & 1) == 0) {
    LOCK();
    uVar12 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = 0;
    pcVar8 = (char *)(ulonglong)uVar12;
    UNLOCK();
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))();
    local_68 = (lVar5 - (ulonglong)*(uint *)(param_1 + 0x34)) + *(longlong *)(param_1 + 0x60);
    pcVar8 = (char *)0x0;
    if (local_68 != 0) {
      local_88 = 0;
      local_80 = (ulonglong)*(uint *)(param_1 + 0x28) << 3;
      local_60 = 0;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                        (*(longlong **)(param_1 + 0x20),0,&local_88,&local_60);
      if (iVar4 < 0) {
        pcVar8 = (char *)FUN_1401a9cc0();
        if ((pcVar8[0x288] & 1U) != 0) {
          lVar6 = FUN_1401a9e60();
          uVar9 = *(ulonglong *)(lVar6 + 0x28);
          lVar5 = lVar6;
          if ((uVar9 & 0xffff) == 0) {
            lVar5 = FUN_1400637c0(lVar6,uVar9);
          }
          lVar2 = *(longlong *)(lVar6 + 0x48);
          uVar10 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
          *(undefined1 *)(lVar2 + uVar10) = 0x4f;
          uVar11 = rdtsc();
          *(ulonglong *)(lVar2 + 1 + uVar10) =
               uVar11 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar11);
          pcVar8 = "TracyD3D12: Failed to map readback buffer.";
          *(char **)(lVar2 + 0xc + uVar10) = "TracyD3D12: Failed to map readback buffer.";
          *(undefined2 *)(lVar2 + 9 + uVar10) = 0;
          *(undefined1 *)(lVar2 + 0xb + uVar10) = 0x8b;
          *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
        }
      }
      else {
        local_78 = local_60;
        uVar9 = 0;
        while (uVar9 < local_68) {
          uVar11 = (ulonglong)((uint)*(ulonglong *)(param_1 + 0x58) & 1);
          lVar5 = *(longlong *)
                   (*(longlong *)(param_1 + 0x48) +
                   (*(longlong *)(param_1 + 0x50) - 1U & *(ulonglong *)(param_1 + 0x58) >> 1) * 8);
          uVar12 = 0;
          local_70 = uVar9;
          if (*(int *)(lVar5 + 4 + uVar11 * 8) != 0) {
            do {
              uVar9 = (ulonglong)(*(int *)(lVar5 + uVar11 * 8) + uVar12) %
                      (ulonglong)*(uint *)(param_1 + 0x28);
              uVar3 = *(undefined8 *)(local_78 + uVar9 * 8);
              lVar6 = FUN_1401a9cc0();
              AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xd8));
              puVar7 = *(undefined1 **)(lVar6 + 0xb0);
              if (puVar7 == *(undefined1 **)(lVar6 + 0xb8)) {
                FUN_1401a4720(lVar6 + 0xa8);
                puVar7 = *(undefined1 **)(lVar6 + 0xb0);
              }
              *puVar7 = 0x32;
              *(undefined8 *)(puVar7 + 1) = uVar3;
              *(short *)(puVar7 + 9) = (short)uVar9;
              puVar7[0xb] = *(undefined1 *)(param_1 + 0x10);
              lVar6 = FUN_1401a9cc0();
              *(longlong *)(lVar6 + 0xb0) = *(longlong *)(lVar6 + 0xb0) + 0x20;
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xd8));
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(lVar5 + 4 + uVar11 * 8));
          }
          plVar1 = (longlong *)(param_1 + 0x60);
          *plVar1 = *plVar1 + -1;
          lVar5 = 0;
          if (*plVar1 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x58) + 1;
          }
          *(longlong *)(param_1 + 0x58) = lVar5;
          uVar9 = (ulonglong)((int)local_70 + 1);
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))(*(longlong **)(param_1 + 0x20),0,0);
        pcVar8 = (char *)tracyd3d12_failed_to_obtain_queue_clock_calib(param_1);
      }
    }
  }
  if ((local_49 & 1) != 0) {
    lVar5 = FUN_1401a9cc0();
    pcVar8 = *(char **)(lVar5 + 0x290);
    if (pcVar8 == local_58) {
      lVar6 = FUN_1401a9e60();
      uVar9 = *(ulonglong *)(lVar6 + 0x28);
      lVar5 = lVar6;
      if ((uVar9 & 0xffff) == 0) {
        lVar5 = FUN_1400637c0(lVar6,uVar9);
      }
      lVar2 = *(longlong *)(lVar6 + 0x48);
      uVar10 = (ulonglong)(uint)((int)(uVar9 & 0xffff) << 5);
      *(undefined1 *)(lVar2 + uVar10) = 0x11;
      uVar11 = rdtsc();
      pcVar8 = (char *)CONCAT44((int)((ulonglong)lVar5 >> 0x20),(int)uVar11);
      *(ulonglong *)(lVar2 + 1 + uVar10) = uVar11 & 0xffffffff00000000 | (ulonglong)pcVar8;
      *(ulonglong *)(lVar6 + 0x28) = uVar9 + 1;
    }
  }
  return pcVar8;
}

