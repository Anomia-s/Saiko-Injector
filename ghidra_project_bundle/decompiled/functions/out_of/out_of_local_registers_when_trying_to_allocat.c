/**
 * Function: out_of_local_registers_when_trying_to_allocat
 * Address:  1406c7fc0
 * Signature: undefined out_of_local_registers_when_trying_to_allocat(void)
 * Body size: 228 bytes
 */


void out_of_local_registers_when_trying_to_allocat
               (undefined8 *param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)param_1[0xa4];
  local_30 = param_2;
  if (0x638 < (ulonglong)((longlong)puVar1 - param_1[0xa3])) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              (param_2 + 1,"Out of local registers when trying to allocate %s: exceeded limit %d",
               *param_2,200);
  }
  if (puVar1 == (undefined8 *)param_1[0xa5]) {
    FUN_140029790(param_1 + 0xa3,puVar1,&local_30);
  }
  else {
    *puVar1 = param_2;
    param_1[0xa4] = param_1[0xa4] + 8;
  }
  puVar3 = (undefined1 *)FUN_1406c8ca0(param_1 + 0x11,&local_30);
  *puVar3 = param_3;
  puVar3[1] = 1;
  iVar2 = FUN_1407ab870(*param_1);
  *(int *)(puVar3 + 4) = iVar2;
  if (param_4 == -1) {
    param_4 = iVar2;
  }
  *(int *)(puVar3 + 8) = param_4;
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_58);
}

