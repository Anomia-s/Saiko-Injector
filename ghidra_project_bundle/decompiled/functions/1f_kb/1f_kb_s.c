/**
 * Function: 1f_kb_s
 * Address:  14018b940
 * Signature: undefined 1f_kb_s(void)
 * Body size: 387 bytes
 */


void _f_kb_s(longlong param_1,float param_2,float param_3)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  FUN_1400a3c00(local_58,0x14,"%.1f KB/s",(double)param_2);
  uVar1 = *(undefined2 *)(param_1 + 0x274);
  cVar2 = FUN_14005c380(param_1,uVar1);
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_14005c560(param_1,uVar1);
    if (puVar3 != (undefined8 *)0x0) {
      sVar4 = strlen(local_58);
      if ((ulonglong)puVar3[3] < sVar4) {
        FUN_1400069b0(puVar3,sVar4);
      }
      else {
        puVar5 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar5 = (undefined8 *)*puVar3;
        }
        puVar3[2] = sVar4;
        memmove(puVar5,local_58,sVar4);
        *(undefined1 *)((longlong)puVar5 + sVar4) = 0;
      }
      *(undefined1 *)((longlong)puVar3 + 0x4b) = 1;
    }
  }
  FUN_1400a3c00(local_58,0x14,"%.1f KB/s",(double)param_3);
  uVar1 = *(undefined2 *)(param_1 + 0x276);
  cVar2 = FUN_14005c380(param_1,uVar1);
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_14005c560(param_1,uVar1);
    if (puVar3 != (undefined8 *)0x0) {
      sVar4 = strlen(local_58);
      if ((ulonglong)puVar3[3] < sVar4) {
        FUN_1400069b0(puVar3,sVar4);
      }
      else {
        puVar5 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar5 = (undefined8 *)*puVar3;
        }
        puVar3[2] = sVar4;
        memmove(puVar5,local_58,sVar4);
        *(undefined1 *)((longlong)puVar5 + sVar4) = 0;
      }
      *(undefined1 *)((longlong)puVar3 + 0x4b) = 1;
    }
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
}

