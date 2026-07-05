/**
 * Function: values_of_indices_out_of_bounds
 * Address:  1401231e0
 * Signature: undefined values_of_indices_out_of_bounds(void)
 * Body size: 917 bytes
 */


undefined8
values_of_indices_out_of_bounds
          (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5,
          undefined4 param_6,longlong param_7,int param_8,uint param_9,longlong param_10,
          uint param_11,uint param_12)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  float *pfVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar3 = param_9;
  if (param_10 != 0) {
    uVar3 = param_11;
  }
  cVar2 = FUN_1403d8fa0(param_1,2);
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
      return 0;
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar4 = FUN_1400fbed0("That operation is not supported");
      return uVar4;
    }
    if (param_2 != 0) {
      cVar2 = FUN_1403d8fa0(param_2,3);
      if (cVar2 == '\0') {
        pcVar6 = "texture";
        goto LAB_140123250;
      }
      if (param_1 != *(longlong *)(param_2 + 0xa8)) {
        uVar4 = FUN_1400fbed0("Texture was not created with this renderer");
        return uVar4;
      }
    }
    if (param_3 == 0) {
      uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid",&DAT_14132457c);
      return uVar4;
    }
    if (param_5 == 0) {
      uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid","color");
      return uVar4;
    }
    if (param_7 == 0 && param_2 != 0) {
      uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid","uv");
      return uVar4;
    }
    uVar3 = uVar3 * -0x55555555 + 0x2aaaaaaa;
    uVar10 = (ulonglong)uVar3;
    if (0x55555554 < uVar3) {
      pcVar6 = "num_vertices";
      if (param_10 != 0) {
        pcVar6 = "num_indices";
      }
      uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar6);
      return uVar4;
    }
    if (param_10 == 0) {
      param_12 = 0;
    }
    else if ((4 < param_12) || (uVar10 = 0, (0x16U >> (param_12 & 0x1f) & 1) == 0)) {
      uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid","size_indices");
      return uVar4;
    }
    if ((int)param_9 < 3) {
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
    if (param_2 == 0) {
      iVar8 = *(int *)(param_1 + 0x218);
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0xb0);
      if (*(longlong *)(param_2 + 0xb0) == 0) {
        lVar7 = param_2;
      }
      iVar8 = *(int *)(param_1 + 0x218);
      if (iVar8 == 0) {
        uVar10 = (ulonglong)param_9;
        pfVar5 = (float *)(param_7 + 4);
        iVar8 = 2;
        do {
          if ((((1.0 < pfVar5[-1]) || (pfVar5[-1] < 0.0)) || (*pfVar5 < 0.0)) || (1.0 < *pfVar5))
          goto LAB_140123431;
          pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_8);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        iVar8 = 1;
      }
    }
LAB_140123431:
    if (0 < (int)param_11 && param_10 != 0) {
      uVar9 = (ulonglong)param_11;
      uVar10 = 0;
      if (param_12 == 4) {
        do {
          if (param_9 <= *(uint *)(param_10 + uVar10 * 4)) goto LAB_140123502;
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      else if (param_12 == 2) {
        do {
          if (param_9 <= *(ushort *)(param_10 + uVar10 * 2)) {
LAB_140123502:
            uVar4 = FUN_1400fbed0("Values of \'indices\' out of bounds");
            return uVar4;
          }
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      else {
        do {
          if (param_9 <= *(byte *)(param_10 + uVar10)) goto LAB_140123502;
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
    }
    if (param_2 != 0) {
      *(undefined4 *)(lVar7 + 0xe8) = *(undefined4 *)(param_1 + 0x238);
    }
    if ((iVar8 == 1 & *(byte *)(param_1 + 0xfc)) != 1) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x68);
      uVar4 = FUN_14011fca0(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 100),uVar1,iVar8);
      return uVar4;
    }
    uVar4 = parameter_s_is_invalid
                      (param_1,lVar7,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12);
    return uVar4;
  }
  pcVar6 = "renderer";
LAB_140123250:
  FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar6);
  return 0;
}

