/**
 * Function: out_of_upvalue_registers_when_trying_to_alloc
 * Address:  1406cfc50
 * Signature: undefined out_of_upvalue_registers_when_trying_to_alloc(void)
 * Body size: 403 bytes
 */


ulonglong out_of_upvalue_registers_when_trying_to_alloc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  puVar4 = *(undefined8 **)(param_1 + 0x538);
  lVar5 = (longlong)puVar4 - *(longlong *)(param_1 + 0x530);
  local_28 = param_2;
  if (lVar5 != 0) {
    uVar6 = lVar5 >> 3;
    uVar3 = 0;
    do {
      if (*(undefined8 **)(*(longlong *)(param_1 + 0x530) + uVar3 * 8) == param_2)
      goto LAB_1406cfd9e;
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    if (199 < uVar6) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                (param_2 + 1,
                 "Out of upvalue registers when trying to allocate %s: exceeded limit %d",*param_2,
                 200);
    }
  }
  if ((*(longlong *)(param_1 + 0xe8) != 0) && (param_2 != *(undefined8 **)(param_1 + 0xf0))) {
    uVar6 = *(longlong *)(param_1 + 0xe0) - 1;
    uVar7 = (ulonglong)param_2 >> 9 ^ (ulonglong)param_2 >> 4;
    uVar3 = 0;
    do {
      uVar7 = uVar7 & uVar6;
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd8) + uVar7 * 0x18);
      if (puVar1 == param_2) {
        if (*(char *)(*(longlong *)(param_1 + 0xd8) + uVar7 * 0x18 + 0x10) == '\x01') {
          lVar5 = FUN_1406c8ca0(param_1 + 0x88,&local_28);
          *(undefined1 *)(lVar5 + 2) = 1;
          puVar4 = *(undefined8 **)(param_1 + 0x538);
        }
        break;
      }
      if (puVar1 == *(undefined8 **)(param_1 + 0xf0)) break;
      uVar7 = uVar7 + uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar6);
  }
  if (puVar4 == *(undefined8 **)(param_1 + 0x540)) {
    FUN_140029790((int *)(param_1 + 0x530),puVar4,&local_28);
    lVar5 = *(longlong *)(param_1 + 0x538);
  }
  else {
    *puVar4 = local_28;
    lVar5 = *(longlong *)(param_1 + 0x538) + 8;
    *(longlong *)(param_1 + 0x538) = lVar5;
  }
  uVar2 = (int)lVar5 - *(int *)(param_1 + 0x530);
  uVar3 = (ulonglong)CONCAT31((uint3)(uVar2 >> 0xb),(char)(uVar2 >> 3) + -1);
LAB_1406cfd9e:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar3;
}

