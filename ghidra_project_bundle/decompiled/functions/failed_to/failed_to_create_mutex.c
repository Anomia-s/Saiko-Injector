/**
 * Function: failed_to_create_mutex
 * Address:  140011780
 * Signature: undefined failed_to_create_mutex(void)
 * Body size: 492 bytes
 */


undefined8 * failed_to_create_mutex(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  ulonglong uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  QuillError local_e8;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  _Size = param_2[2];
  if (0x7ffffffffffffff0 < (longlong)_Size) {
                    /* WARNING: Subroutine does not return */
    string_too_long();
  }
  puVar4 = (undefined8 *)*param_2;
  uVar1 = param_2[3];
  local_e8.exception_data.offset_0x78 = 0;
  uStack_60 = 0;
  uVar6 = _Size + 0xf;
  puVar7 = &local_e8.exception_data.offset_0x78;
  uVar9 = 0xf;
  puVar8 = puVar7;
  if (0xf < uVar6) {
    local_e8.exception_data.offset_0x68 = param_2;
    local_e8.exception_data.offset_0x70 = (ulonglong)puVar4;
    if ((longlong)_Size < -0xf) {
      uVar9 = 0x7fffffffffffffff;
    }
    else {
      uVar3 = uVar6 | 0xf;
      uVar9 = 0x16;
      if (0x16 < uVar3) {
        uVar9 = uVar3;
      }
      if (uVar3 < 0xfff) {
        puVar8 = (ulonglong *)FUN_140b65d30(uVar9 + 1);
        puVar4 = (undefined8 *)local_e8.exception_data.offset_0x70;
        param_2 = local_e8.exception_data.offset_0x68;
        local_e8.exception_data.offset_0x78 = (ulonglong)puVar8;
        goto LAB_14001184f;
      }
    }
    uVar3 = FUN_140b65d30(uVar9 + 0x28);
    puVar8 = (ulonglong *)(uVar3 + 0x27 & 0xffffffffffffffe0);
    puVar8[-1] = uVar3;
    puVar4 = (undefined8 *)local_e8.exception_data.offset_0x70;
    param_2 = local_e8.exception_data.offset_0x68;
    local_e8.exception_data.offset_0x78 = (ulonglong)puVar8;
  }
LAB_14001184f:
  if (0xf < uVar1) {
    param_2 = puVar4;
  }
  local_58 = uVar6;
  local_50 = uVar9;
  *(undefined8 *)((longlong)puVar8 + 7) = 0x6b636f4c6c6c6975;
  *puVar8 = 0x75515c6c61636f4c;
  memcpy((void *)((longlong)puVar8 + 0xf),param_2,_Size);
  *(undefined1 *)((longlong)puVar8 + _Size + 0xf) = 0;
  if (0xf < local_50) {
    puVar7 = (ulonglong *)local_e8.exception_data.offset_0x78;
  }
  pvVar5 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,(LPCSTR)puVar7);
  *param_1 = pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    quill::v11::QuillError::QuillError(&local_e8,"Failed to create mutex");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_e8,(ThrowInfo *)&DAT_14140fa50);
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    quill::v11::QuillError::QuillError
              ((QuillError *)&local_e8.exception_data.offset_0x30,
               "Duplicate backend worker thread detected. This indicates that the logging library has been compiled into multiple binary modules (for instance, one module using a static build and another using a shared build), resulting in separate instances of the backend worker. Please build and link the logging library uniformly as a shared library with exported symbols to ensure a single backend instance."
              );
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_e8.exception_data.offset_0x30,(ThrowInfo *)&DAT_14140fa50);
  }
  if (0xf < local_50) {
    uVar6 = local_50 + 1;
    puVar7 = (ulonglong *)local_e8.exception_data.offset_0x78;
    if (0xfff < uVar6) {
      puVar7 = *(ulonglong **)(local_e8.exception_data.offset_0x78 + -8);
      if (0x1f < local_e8.exception_data.offset_0x78 + (-8 - (longlong)puVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(puVar7,uVar6);
  }
  return param_1;
}

