/**
 * Function: dependent_variable_of_s_is_not_written
 * Address:  14038fcf0
 * Signature: undefined dependent_variable_of_s_is_not_written(void)
 * Body size: 349 bytes
 */


undefined8
dependent_variable_of_s_is_not_written
          (longlong param_1,undefined1 param_2,byte *param_3,undefined4 param_4,longlong param_5,
          undefined1 param_6,byte *param_7)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = FUN_14039b9a0(param_2,param_4);
  bVar4 = 1;
  if ((uVar5 & 2) == 0) goto LAB_14038fddf;
  bVar4 = *param_3;
  uVar5 = (ulonglong)bVar4;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if ((*(char *)(lVar1 + uVar5 * 0x18) == '\0') &&
     (cVar2 = FUN_14039b9b0(uVar5,*(undefined8 *)(param_5 + 8)), cVar2 == '\0')) {
    lVar1 = lVar1 + uVar5 * 0x18;
    cVar2 = *(char *)(lVar1 + 3);
    if ((cVar2 == -1) || (cVar3 = FUN_14039b9b0(cVar2,*(undefined8 *)(param_5 + 8)), cVar3 == '\0'))
    {
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (cVar2 = FUN_14039b9b0(*(undefined1 *)(lVar1 + 4),*(undefined8 *)(param_5 + 8)),
         cVar2 == '\0')) {
        uVar8 = *(undefined8 *)(lVar1 + 8);
        uVar7 = 0x235;
LAB_14038fe41:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/compiler/compiler_term.c"
                      ,uVar7,"dependent variable of \'$%s\' is not written",uVar8);
        return 0xffffffff;
      }
      goto LAB_14038fdcd;
    }
    if (*(longlong *)(lVar1 + 0x10) == 0) {
LAB_14038fd9c:
      FUN_14038e2e0(cVar2,bVar4,param_5,param_6);
      bVar6 = 1;
    }
    else {
      cVar3 = FUN_14039b9b0(cVar2,*(undefined8 *)(param_5 + 8));
      if (cVar3 == '\0') {
        uVar8 = *(undefined8 *)(lVar1 + 8);
        uVar7 = 0x224;
        goto LAB_14038fe41;
      }
      cVar3 = FUN_14039b9b0(*(undefined1 *)(lVar1 + 4),*(undefined8 *)(param_5 + 8));
      bVar6 = 1;
      if (cVar3 == '\0') {
        bVar4 = *(byte *)(lVar1 + 4);
        goto LAB_14038fd9c;
      }
    }
  }
  else {
LAB_14038fdcd:
    bVar6 = 0;
  }
  bVar4 = FUN_14039b9b0(uVar5,*(undefined8 *)(param_5 + 8));
  bVar4 = bVar4 | bVar6;
LAB_14038fddf:
  if (param_7 != (byte *)0x0) {
    *param_7 = bVar4;
  }
  return 0;
}

