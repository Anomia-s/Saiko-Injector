/**
 * Function: unexpected_event_type_in_apply_runtime_metada
 * Address:  140029bd0
 * Signature: undefined unexpected_event_type_in_apply_runtime_metada(void)
 * Body size: 874 bytes
 */


void unexpected_event_type_in_apply_runtime_metada
               (undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *_Buf;
  longlong lVar8;
  void *_Buf_00;
  void *_Buf_01;
  QuillError local_130;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = *(char *)(*(longlong *)(param_3 + 8) + 0x25);
  if (cVar1 == '\a') {
    puVar6 = (undefined8 *)*param_2;
    _Buf = (void *)*puVar6;
    *param_2 = (longlong)(puVar6 + 1);
    _Buf_00 = (void *)puVar6[1];
    *param_2 = (longlong)(puVar6 + 2);
    _Buf_01 = (void *)puVar6[2];
    *param_2 = (longlong)(puVar6 + 3);
    pvVar4 = (void *)puVar6[3];
    puVar6 = puVar6 + 4;
    goto LAB_140029ddb;
  }
  if (cVar1 == '\x06') {
    _Buf = (void *)*param_2;
    if (_Buf == (void *)0x0) {
      lVar8 = 0;
    }
    else {
      pvVar4 = memchr(_Buf,0,0xffffffff);
      lVar8 = (longlong)pvVar4 - (longlong)_Buf;
      if (pvVar4 == (void *)0x0) {
        lVar8 = 0xffffffff;
      }
    }
    *param_2 = (longlong)_Buf + lVar8 + 1;
    _Buf_00 = *(void **)((longlong)_Buf + lVar8 + 1);
    *param_2 = (longlong)_Buf + lVar8 + 9;
    _Buf_01 = *(void **)((longlong)_Buf + lVar8 + 9);
    pvVar4 = (void *)((longlong)_Buf + lVar8 + 0x11);
    *param_2 = (longlong)pvVar4;
    pvVar5 = memchr(pvVar4,0,0xffffffff);
    lVar7 = (longlong)pvVar5 - (longlong)pvVar4;
    if (pvVar5 == (void *)0x0) {
      lVar7 = 0xffffffff;
    }
    puVar6 = (undefined8 *)((longlong)_Buf + lVar7 + lVar8 + 0x12);
    goto LAB_140029ddb;
  }
  if (cVar1 != '\x05') {
    quill::v11::QuillError::QuillError
              (&local_130,
               "Unexpected event type in _apply_runtime_metadata. This should never happen.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_130,(ThrowInfo *)&DAT_14140fa50);
  }
  _Buf = (void *)*param_2;
  if (_Buf == (void *)0x0) {
    _Buf_00 = (void *)0x1;
    *param_2 = 1;
LAB_140029c5d:
    pvVar4 = memchr(_Buf_00,0,0xffffffff);
    lVar8 = (longlong)pvVar4 - (longlong)_Buf_00;
    if (pvVar4 == (void *)0x0) {
      lVar8 = 0xffffffff;
    }
    _Buf_01 = (void *)((longlong)_Buf_00 + lVar8 + 1);
    *param_2 = (longlong)_Buf_01;
    if (_Buf_01 != (void *)0x0) goto LAB_140029c8f;
LAB_140029dc0:
    pvVar4 = (void *)((longlong)_Buf_01 + 1);
    *param_2 = (longlong)pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_140029dd2;
LAB_140029cc1:
    pvVar5 = memchr(pvVar4,0,0xffffffff);
    lVar8 = (longlong)pvVar5 - (longlong)pvVar4;
    if (pvVar5 == (void *)0x0) {
      lVar8 = 0xffffffff;
    }
  }
  else {
    pvVar4 = memchr(_Buf,0,0xffffffff);
    lVar8 = (longlong)pvVar4 - (longlong)_Buf;
    if (pvVar4 == (void *)0x0) {
      lVar8 = 0xffffffff;
    }
    _Buf_00 = (void *)((longlong)_Buf + lVar8 + 1);
    *param_2 = (longlong)_Buf_00;
    if (_Buf_00 != (void *)0x0) goto LAB_140029c5d;
    _Buf_01 = (void *)((longlong)_Buf + lVar8 + 2);
    *param_2 = (longlong)_Buf_01;
    if (_Buf_01 == (void *)0x0) goto LAB_140029dc0;
LAB_140029c8f:
    pvVar4 = memchr(_Buf_01,0,0xffffffff);
    lVar8 = (longlong)pvVar4 - (longlong)_Buf_01;
    if (pvVar4 == (void *)0x0) {
      lVar8 = 0xffffffff;
    }
    pvVar4 = (void *)((longlong)_Buf_01 + lVar8 + 1);
    *param_2 = (longlong)pvVar4;
    if (pvVar4 != (void *)0x0) goto LAB_140029cc1;
LAB_140029dd2:
    lVar8 = 0;
  }
  puVar6 = (undefined8 *)((longlong)pvVar4 + lVar8 + 1);
LAB_140029ddb:
  *param_2 = (longlong)puVar6;
  uVar3 = *(undefined4 *)puVar6;
  *param_2 = (longlong)((longlong)puVar6 + 4);
  uVar2 = *(undefined1 *)((longlong)puVar6 + 4);
  *param_2 = (longlong)puVar6 + 5;
  FUN_14002c1b0(&local_130.exception_data.offset_0x30,_Buf_00,uVar3,_Buf_01,pvVar4,_Buf,uVar2);
  puVar6 = *(undefined8 **)(param_3 + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_140b65d30(200);
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[0x18] = 0;
    puVar6[6] = 0xf;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0xf;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0xf;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0xf;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0;
    *(undefined1 *)((longlong)puVar6 + 0xbc) = 10;
    *(undefined8 **)(param_3 + 0x20) = puVar6;
  }
  FUN_14002c680(puVar6 + 3,&local_130.exception_data.offset_0x30);
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 0x20) + 0x98;
  FUN_140029580(&local_130.exception_data.offset_0x30);
  return;
}

