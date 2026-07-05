// FUN_14003df50 @ 14003df50

undefined8 * FUN_14003df50(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t _Size;
  ulonglong uVar6;
  void *_Src;
  void *pvVar7;
  ulonglong uVar8;
  
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  pvVar7 = (void *)((longlong)param_1 + *plVar1 * 2);
  pvVar3 = (void *)FUN_140005250(param_1,pvVar7);
  sVar2 = 0;
  do {
    _Src = pvVar7;
    _Size = sVar2;
    if ((_Src == pvVar3) || (*(short *)((longlong)_Src + -2) == 0x5c)) break;
    sVar2 = _Size + 2;
    pvVar7 = (void *)((longlong)_Src + -2);
  } while (*(short *)((longlong)_Src + -2) != 0x2f);
  uVar8 = (longlong)_Size >> 1;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (uVar8 < 0x7fffffffffffffff) {
    if (uVar8 < 8) {
      param_2[2] = uVar8;
      param_2[3] = 7;
      memcpy(param_2,_Src,_Size);
      *(undefined2 *)((longlong)param_2 + uVar8 * 2) = 0;
    }
    else {
      uVar4 = uVar8 | 7;
      uVar6 = 10;
      if (10 < uVar4) {
        uVar6 = uVar4;
      }
      if (uVar4 < 0x7ff) {
        pvVar7 = (void *)FUN_140b65d30(uVar6 * 2 + 2);
      }
      else {
        lVar5 = FUN_140b65d30(uVar6 * 2 + 0x29);
        pvVar7 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)pvVar7 - 8) = lVar5;
      }
      *param_2 = pvVar7;
      param_2[2] = uVar8;
      param_2[3] = uVar6;
      memcpy(pvVar7,_Src,_Size);
      *(undefined2 *)((longlong)pvVar7 + _Size) = 0;
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  string_too_long();
}


