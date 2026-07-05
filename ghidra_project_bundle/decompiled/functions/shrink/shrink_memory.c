/**
 * Function: shrink_memory
 * Address:  1403cf1f0
 * Signature: undefined shrink_memory(void)
 * Body size: 126 bytes
 */


void shrink_memory(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strcmp((char *)(param_2 + 7),"shrink_memory");
  if (iVar1 != 0) {
    error(param_3,"unknown action \'%s\'",(char *)(param_2 + 7));
    *param_3 = 400;
    return;
  }
  uVar2 = FUN_1400bea00(param_1);
  if ((uVar2 & 0x100) == 0) {
    FUN_1400bea30(param_1);
    return;
  }
  FUN_1400be2f0(param_1,&LAB_1403d1070,0);
  return;
}

