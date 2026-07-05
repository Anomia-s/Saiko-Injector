/**
 * Function: failed_to_create_id3d12commandallocator
 * Address:  1403fdbe0
 * Signature: undefined failed_to_create_id3d12commandallocator(void)
 * Body size: 985 bytes
 */


longlong failed_to_create_id3d12commandallocator(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  FUN_1401552a0(*(undefined8 *)(param_1 + 0x1d8));
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    lVar2 = FUN_140160c70(1,0x7b0);
    if (lVar2 == 0) {
LAB_1403fdf29:
      if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,&DAT_141339891,"Failed to create ID3D12CommandList. Out of Memory");
      }
      FUN_1400fbed0(&DAT_141339891,"Failed to create ID3D12CommandList. Out of Memory");
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
                        (*(longlong **)(param_1 + 0x50),0,&DAT_140e14da0,&local_28);
      if (iVar1 < 0) {
        pcVar5 = "Failed to create ID3D12CommandAllocator";
      }
      else {
        *(undefined8 *)(lVar2 + 0x58) = local_28;
        local_38 = &local_30;
        local_40 = &DAT_140e14db0;
        local_48 = 0;
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))
                          (*(longlong **)(param_1 + 0x50),0,0);
        if (-1 < iVar1) {
          *(undefined8 *)(lVar2 + 0x60) = local_30;
          *(longlong *)(lVar2 + 0x50) = param_1;
          *(undefined8 *)(lVar2 + 0x68) = 0;
          *(undefined8 *)(lVar2 + 0x80) = 0x100000000;
          uVar3 = FUN_140160c70(1,0x10);
          *(undefined8 *)(lVar2 + 0x78) = uVar3;
          *(undefined8 *)(lVar2 + 0x758) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0x750) = uVar3;
          *(undefined8 *)(lVar2 + 0x768) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0x760) = uVar3;
          *(undefined8 *)(lVar2 + 0x778) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0x770) = uVar3;
          *(undefined8 *)(lVar2 + 0x788) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0x780) = uVar3;
          *(undefined8 *)(lVar2 + 0x798) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0x790) = uVar3;
          *(undefined8 *)(lVar2 + 0xf8) = 0x400000000;
          uVar3 = FUN_140160c70(4,8);
          *(undefined8 *)(lVar2 + 0xf0) = uVar3;
          *(undefined8 *)(lVar2 + 0x7a8) = 0x400000000;
          lVar4 = FUN_140160c70(4,8);
          *(longlong *)(lVar2 + 0x7a0) = lVar4;
          if (((((*(longlong *)(lVar2 + 0x78) != 0) && (*(longlong *)(lVar2 + 0x750) != 0)) &&
               (*(longlong *)(lVar2 + 0x760) != 0)) &&
              ((*(longlong *)(lVar2 + 0x770) != 0 && (*(longlong *)(lVar2 + 0x780) != 0)))) &&
             ((*(longlong *)(lVar2 + 0x790) != 0 &&
              ((lVar4 != 0 && (*(longlong *)(lVar2 + 0xf0) != 0)))))) {
            lVar4 = FUN_140160cc0(*(undefined8 *)(param_1 + 0xe8),
                                  (ulonglong)(*(int *)(param_1 + 0xf4) + 1) << 3);
            if (lVar4 != 0) {
              *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
              *(longlong *)(param_1 + 0xe8) = lVar4;
              *(longlong *)(lVar4 + (ulonglong)*(uint *)(param_1 + 0xf0) * 8) = lVar2;
              iVar1 = *(int *)(param_1 + 0xf0) + 1;
              *(int *)(param_1 + 0xf0) = iVar1;
              goto LAB_1403fdc13;
            }
          }
          FUN_1403fed60(lVar2);
          goto LAB_1403fdf29;
        }
        pcVar5 = "Failed to create ID3D12CommandList";
      }
      s_error_code_s_0x08lx(param_1,pcVar5,iVar1);
      FUN_1403fed60(lVar2);
    }
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1d8));
  }
  else {
LAB_1403fdc13:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)(iVar1 - 1U) * 8);
    *(uint *)(param_1 + 0xf0) = iVar1 - 1U;
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1d8));
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x718) = 0;
      *(undefined8 *)(lVar2 + 0x720) = 0;
      *(undefined8 *)(lVar2 + 0x708) = 0;
      *(undefined8 *)(lVar2 + 0x710) = 0;
      *(undefined8 *)(lVar2 + 0x6f8) = 0;
      *(undefined8 *)(lVar2 + 0x700) = 0;
      *(undefined8 *)(lVar2 + 0x6e8) = 0;
      *(undefined8 *)(lVar2 + 0x6f0) = 0;
      *(undefined8 *)(lVar2 + 0x730) = 0;
      *(undefined8 *)(lVar2 + 0x738) = 0;
      *(undefined8 *)(lVar2 + 0x740) = 0;
      *(undefined8 *)(lVar2 + 0x748) = 0;
      *(undefined8 *)(lVar2 + 0x88) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 200) = 0;
      *(undefined8 *)(lVar2 + 0xd0) = 0;
      *(undefined8 *)(lVar2 + 0x118) = 0;
      *(undefined8 *)(lVar2 + 0x120) = 0;
      *(undefined8 *)(lVar2 + 0x128) = 0;
      *(undefined8 *)(lVar2 + 0x130) = 0;
      *(undefined8 *)(lVar2 + 0x138) = 0;
      *(undefined8 *)(lVar2 + 0x140) = 0;
      *(undefined8 *)(lVar2 + 0x148) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x170) = 0;
      *(undefined8 *)(lVar2 + 0x178) = 0;
      *(undefined8 *)(lVar2 + 0x180) = 0;
      *(undefined8 *)(lVar2 + 0x188) = 0;
      *(undefined8 *)(lVar2 + 400) = 0;
      *(undefined8 *)(lVar2 + 0x198) = 0;
      *(undefined8 *)(lVar2 + 0x1a0) = 0;
      *(undefined8 *)(lVar2 + 0x1a8) = 0;
      *(undefined8 *)(lVar2 + 0x1b0) = 0;
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
      *(undefined8 *)(lVar2 + 0x1c0) = 0;
      *(undefined8 *)(lVar2 + 0x1c8) = 0;
      *(undefined8 *)(lVar2 + 0x1d0) = 0;
      *(undefined4 *)(lVar2 + 0x1d8) = 0;
      memset((void *)(lVar2 + 0x1e0),0,0x500);
      *(undefined1 *)(lVar2 + 0x70) = 1;
      goto LAB_1403fdf8d;
    }
  }
  lVar2 = 0;
LAB_1403fdf8d:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}

