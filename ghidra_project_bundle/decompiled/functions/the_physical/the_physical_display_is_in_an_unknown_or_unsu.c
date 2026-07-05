/**
 * Function: the_physical_display_is_in_an_unknown_or_unsu
 * Address:  140422810
 * Signature: undefined the_physical_display_is_in_an_unknown_or_unsu(void)
 * Body size: 328 bytes
 */


undefined8
the_physical_display_is_in_an_unknown_or_unsu
          (longlong param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x422c8) != 0) {
switchD_140422894_caseD_1:
    iVar4 = *param_2;
    *param_3 = iVar4;
    iVar3 = param_2[2] + iVar4;
    param_3[2] = iVar3;
    iVar1 = param_2[1];
    param_3[1] = iVar1;
    iVar2 = param_2[3];
    param_3[3] = iVar2 + iVar1;
    if (param_4 != 0) {
      *param_3 = iVar4 + *(int *)(param_1 + 0x422fc);
      iVar3 = iVar3 + *(int *)(param_1 + 0x422fc);
      param_3[2] = iVar3;
      param_3[1] = iVar1 + *(int *)(param_1 + 0x42300);
      param_3[3] = iVar2 + iVar1 + *(int *)(param_1 + 0x42300);
    }
    return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
  }
  switch(*(undefined4 *)(param_1 + 0x422c0)) {
  case 1:
    goto switchD_140422894_caseD_1;
  case 2:
    *param_3 = *(int *)(param_1 + 0x42308) - (param_2[1] + param_2[3]);
    param_3[2] = *(int *)(param_1 + 0x42308) - param_2[1];
    iVar4 = *param_2;
    param_3[1] = iVar4;
    iVar4 = iVar4 + param_2[3];
    param_3[3] = iVar4;
    return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  case 3:
    *param_3 = *(int *)(param_1 + 0x42304) - (*param_2 + param_2[2]);
    param_3[2] = *(int *)(param_1 + 0x42304) - *param_2;
    param_3[1] = *(int *)(param_1 + 0x42308) - (param_2[1] + param_2[3]);
    iVar4 = *(int *)(param_1 + 0x42308) - param_2[1];
    param_3[3] = iVar4;
    return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  case 4:
    iVar4 = param_2[1];
    *param_3 = iVar4;
    param_3[2] = iVar4 + param_2[3];
    param_3[1] = *(int *)(param_1 + 0x42304) - (*param_2 + param_2[2]);
    iVar4 = *(int *)(param_1 + 0x42304) - *param_2;
    param_3[3] = iVar4;
    return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  default:
    uVar5 = FUN_1400fbed0("The physical display is in an unknown or unsupported rotation");
    return uVar5;
  }
}

