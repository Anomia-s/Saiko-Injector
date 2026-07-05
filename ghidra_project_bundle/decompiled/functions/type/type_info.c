/**
 * Function: type_info
 * Address:  1408403a0
 * Signature: undefined type_info(void)
 * Body size: 421 bytes
 */


void type_info(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1405fc4e0(param_3,"type_info",9);
  FUN_1405fc360(param_3);
  iVar1 = *(int *)(param_2 + 0x28);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x20) + lVar5 * 4);
      uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + lVar4 * 8);
      if (((((*(byte *)(lVar2 + 0x3a) & 0x20) != 0) ||
           ((*(longlong *)(param_2 + 0x90) != 0 &&
            (*(short *)(*(longlong *)(param_2 + 0x90) + lVar4 * 2) != -1)))) &&
          (((param_4 != 0 && (*(char *)(param_4 + 2) != '\0')) ||
           ((((uVar3 & 0xf000000000000000) != 0x8000000000000000 &&
             ((uVar3 & 0xf000000000000000) != 0x9000000000000000)) ||
            ((((uint)(uVar3 >> 0x20) & 0xfffffff) != 0x126 && (uVar3 != 0x8000000200000129))))))))
         && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0)) {
        thunk_FUN_1403b8d70(param_3);
        FUN_1403b7a10(param_3,&DAT_14139efde,1);
        FUN_1405fc830(param_3,param_1,uVar3,*(undefined1 *)(param_4 + 4));
        FUN_1403b7a10(param_3,&DAT_14136c70f,2);
        FUN_1405fb690(param_1,*(undefined8 *)(lVar2 + 0xb0),param_3);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 10;
    } while (iVar1 != lVar4);
  }
  FUN_1405fc380(param_3);
  return;
}

