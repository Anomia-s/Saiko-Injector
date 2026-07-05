// FUN_14005f570 @ 14005f570

void FUN_14005f570(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (0x3c3c3c3c3c3c3c3 < param_2) {
                    /* WARNING: Subroutine does not return */
    vector_too_long();
  }
  uVar4 = (param_1[2] - *param_1 >> 2) * -0xf0f0f0f0f0f0f0f;
  uVar5 = 0x3c3c3c3c3c3c3c3 - (uVar4 >> 1);
  uVar2 = (uVar4 >> 1) + uVar4;
  if (uVar2 <= param_2) {
    uVar2 = param_2;
  }
  if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
    uVar2 = 0x3c3c3c3c3c3c3c3;
  }
  if (uVar2 < 0x3c3c3c3c3c3c3c4) {
    lVar7 = param_1[1] - *param_1;
    lVar6 = (lVar7 >> 2) * 0xf0f0f0f0f0f0f0f;
    lVar1 = uVar2 * 0x44;
    if (uVar2 == 0) {
      _Dst = (void *)0x0;
    }
    else if (uVar2 < 0x3d) {
      _Dst = (void *)FUN_140b65d30(lVar1);
    }
    else {
      lVar3 = FUN_140b65d30(lVar1 + 0x27);
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst + -8) = lVar3;
    }
    if (lVar6 + param_2 != 0) {
      uVar4 = lVar6 + param_2;
      puVar8 = (undefined8 *)(lVar7 + (longlong)_Dst);
      uVar2 = uVar4;
      if ((uVar4 & 1) != 0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        *(undefined4 *)(puVar8 + 8) = 0;
        *(undefined4 *)((longlong)puVar8 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x14) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x34) = 0xffffffff;
        *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
        puVar8 = (undefined8 *)((longlong)puVar8 + 0x44);
        uVar2 = uVar4 - 1;
      }
      if (uVar4 != 1) {
        do {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          *(undefined4 *)(puVar8 + 8) = 0;
          *(undefined4 *)((longlong)puVar8 + 4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x34) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + 0x44) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x4c) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x54) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x5c) = 0;
          *(undefined8 *)((longlong)puVar8 + 100) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x6c) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x74) = 0;
          *(undefined8 *)((longlong)puVar8 + 0x7c) = 0;
          *(undefined4 *)((longlong)puVar8 + 0x84) = 0;
          *(undefined4 *)(puVar8 + 9) = 0xffffffff;
          *(undefined4 *)(puVar8 + 10) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0xb) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0xc) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0xd) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0xe) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0xf) = 0xffffffff;
          *(undefined4 *)(puVar8 + 0x10) = 0xffffffff;
          puVar8 = puVar8 + 0x11;
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
    }
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    lVar6 = *param_1;
    if (lVar6 != 0) {
      uVar2 = param_1[2] - lVar6;
      lVar7 = lVar6;
      if (0xfff < uVar2) {
        lVar7 = *(longlong *)(lVar6 + -8);
        if (0x1f < (ulonglong)((lVar6 + -8) - lVar7)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar2 = uVar2 + 0x27;
      }
      thunk_FUN_140b68ba8(lVar7,uVar2);
    }
    *param_1 = (longlong)_Dst;
    param_1[1] = (longlong)(param_2 * 0x44 + (longlong)_Dst);
    param_1[2] = (longlong)(lVar1 + (longlong)_Dst);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::bad_array_new_length::bad_array_new_length();
}


