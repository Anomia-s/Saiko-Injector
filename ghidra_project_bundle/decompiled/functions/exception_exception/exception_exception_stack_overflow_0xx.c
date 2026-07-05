/**
 * Function: exception_exception_stack_overflow_0xx
 * Address:  1401a98a0
 * Signature: undefined exception_exception_stack_overflow_0xx(void)
 * Body size: 1038 bytes
 */


undefined8 exception_exception_stack_overflow_0xx(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  HANDLE hObject;
  HANDLE hThread;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  DWORD local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if ((DAT_141526f08 & 1) == 0) goto switchD_1401a98f1_caseD_c000008d;
  iVar6 = *(int *)*param_1;
  if (iVar6 < -0x3fffffe3) {
    if (iVar6 == -0x7ffffffe) {
      pcVar11 = "Exception EXCEPTION_DATATYPE_MISALIGNMENT (0x%x). ";
      uVar12 = 0x80000002;
      goto LAB_1401a9a33;
    }
    if (iVar6 != -0x3ffffffb) {
      if (iVar6 != -0x3ffffffa) goto switchD_1401a98f1_caseD_c000008d;
      pcVar11 = "Exception EXCEPTION_IN_PAGE_ERROR (0x%x). ";
      uVar12 = 0xc0000006;
      goto LAB_1401a9a33;
    }
    iVar6 = FUN_1401a5af0(&DAT_141526820,"Exception EXCEPTION_ACCESS_VIOLATION (0x%x). ",0xc0000005)
    ;
    puVar10 = &DAT_141526820 + iVar6;
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (lVar2 == 8) {
      uVar14 = FUN_1401a5af0(puVar10,"DEP violation at address 0x%llx.",
                             *(undefined8 *)(lVar1 + 0x28));
    }
    else if (lVar2 == 1) {
      uVar14 = FUN_1401a5af0(puVar10,"Write violation at address 0x%llx.",
                             *(undefined8 *)(lVar1 + 0x28));
    }
    else {
      uVar14 = extraout_XMM0_Da;
      if (lVar2 == 0) {
        uVar14 = FUN_1401a5af0(puVar10,"Read violation at address 0x%llx.",
                               *(undefined8 *)(lVar1 + 0x28));
      }
    }
  }
  else {
    switch(iVar6) {
    case -0x3fffff74:
      pcVar11 = "Exception EXCEPTION_ARRAY_BOUNDS_EXCEEDED (0x%x). ";
      uVar12 = 0xc000008c;
      break;
    case -0x3fffff73:
    case -0x3fffff71:
    case -0x3fffff70:
    case -0x3fffff6f:
    case -0x3fffff6e:
    case -0x3fffff6d:
    case -0x3fffff6b:
      goto switchD_1401a98f1_caseD_c000008d;
    case -0x3fffff72:
      pcVar11 = "Exception EXCEPTION_FLT_DIVIDE_BY_ZERO (0x%x). ";
      uVar12 = 0xc000008e;
      break;
    case -0x3fffff6c:
      pcVar11 = "Exception EXCEPTION_INT_DIVIDE_BY_ZERO (0x%x). ";
      uVar12 = 0xc0000094;
      break;
    case -0x3fffff6a:
      pcVar11 = "Exception EXCEPTION_PRIV_INSTRUCTION (0x%x). ";
      uVar12 = 0xc0000096;
      break;
    default:
      if (iVar6 == -0x3fffffe3) {
        pcVar11 = "Exception EXCEPTION_ILLEGAL_INSTRUCTION (0x%x). ";
        uVar12 = 0xc000001d;
      }
      else {
        if (iVar6 != -0x3fffff03) goto switchD_1401a98f1_caseD_c000008d;
        pcVar11 = "Exception EXCEPTION_STACK_OVERFLOW (0x%x). ";
        uVar12 = 0xc00000fd;
      }
    }
LAB_1401a9a33:
    uVar14 = FUN_1401a5af0(&DAT_141526820,pcVar11,uVar12);
  }
  FUN_1401a9cd0(uVar14,0x3c,"KiUserExceptionDispatcher");
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar9 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
  lVar2 = *(longlong *)(lVar1 + 0x180);
  uVar3 = *(ulonglong *)(lVar2 + 0x28);
  if ((uVar3 & 0xffff) == 0) {
    uVar9 = FUN_1400637c0(lVar2,uVar3);
  }
  lVar4 = *(longlong *)(lVar2 + 0x48);
  uVar13 = (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5);
  *(undefined1 *)(lVar4 + uVar13) = 0x42;
  uVar5 = rdtsc();
  *(ulonglong *)(lVar4 + 1 + uVar13) =
       uVar5 & 0xffffffff00000000 | CONCAT44((int)(uVar9 >> 0x20),(int)uVar5);
  *(undefined **)(lVar4 + 9 + uVar13) = &DAT_141526820;
  *(ulonglong *)(lVar2 + 0x28) = uVar3 + 1;
  hObject = (HANDLE)CreateToolhelp32Snapshot(4,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    uStack_54 = 0;
    local_68 = 0x1c;
    uStack_64 = 0;
    local_60 = 0;
    local_5c = 0;
    iVar6 = Thread32First(hObject,&local_68);
    if (iVar6 == 0) {
      CloseHandle(hObject);
    }
    else {
      local_78 = (longlong *)(lVar1 + 0x180);
      DVar7 = GetCurrentProcessId();
      DVar8 = GetCurrentThreadId();
      do {
        if (((((DWORD)local_5c == DVar7) && (local_60 != DVar8)) && (local_60 != DAT_141526c20)) &&
           ((local_60 != DAT_141526c24 &&
            (hThread = OpenThread(2,0,local_60), hThread != (HANDLE)0xffffffffffffffff)))) {
          SuspendThread(hThread);
          CloseHandle(hThread);
        }
        iVar6 = Thread32Next(hObject);
      } while (iVar6 != 0);
      CloseHandle(hObject);
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x169) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *local_78;
      uVar3 = *(ulonglong *)(lVar1 + 0x28);
      if ((uVar3 & 0xffff) == 0) {
        FUN_1400637c0(lVar1,uVar3);
      }
      *(undefined1 *)(*(longlong *)(lVar1 + 0x48) + (ulonglong)(uint)((int)(uVar3 & 0xffff) << 5)) =
           0x41;
      *(ulonglong *)(lVar1 + 0x28) = uVar3 + 1;
      local_70 = 500;
      FUN_140041730(&local_70);
      DAT_141526cb0 = 1;
      DAT_141526cb1 = 1;
      if ((DAT_141526cb2 & 1) == 0) {
        do {
          local_70 = 10;
          FUN_140041730(&local_70);
        } while ((DAT_141526cb2 & 1) == 0);
      }
    }
  }
switchD_1401a98f1_caseD_c000008d:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
  }
  return 0;
}

