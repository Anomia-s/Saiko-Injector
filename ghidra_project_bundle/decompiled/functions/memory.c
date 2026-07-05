/**
 * Function: memory
 * Address:  1403ce990
 * Signature: undefined memory(void)
 * Body size: 786 bytes
 */


void memory(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  param_2 = param_2 + 8;
  FUN_1403b8a80(param_2,&DAT_141360dfd,&DAT_1413944a3);
  local_c0 = param_1 + 0x808;
  local_c4 = FUN_1403b5840();
  if (0 < local_c4) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)FUN_1403b56f0(local_c0,0xa0,iVar6);
      FUN_1403b8d70(param_2);
      FUN_1403b7a10(param_2,"\n",1);
      FUN_1403b8a80(param_2,"{",&DAT_1413944a3);
      FUN_1403b9160(param_2,"\"id\":",5);
      FUN_1403b7b70(param_2,*puVar3);
      FUN_1403b9160(param_2,"\"type\":",7);
      FUN_1403b8a80(param_2,&DAT_141360dfd,&DAT_1413944a3);
      iVar2 = puVar3[10];
      if (0 < (longlong)iVar2) {
        lVar1 = *(longlong *)(puVar3 + 8);
        lVar5 = 0;
        do {
          FUN_1403b8d70(param_2);
          uVar4 = FUN_1403b36e0(param_1,*(undefined8 *)(lVar1 + lVar5 * 8));
          FUN_1405fc3c0(param_2,uVar4);
          (*DAT_1415033b0)(uVar4);
          lVar5 = lVar5 + 1;
        } while (iVar2 != lVar5);
      }
      FUN_1403b8c10(param_2,"]");
      FUN_1403b9160(param_2,"\"count\":",8);
      iVar2 = FUN_1403a04c0(puVar3);
      FUN_1403b7b70(param_2,(longlong)iVar2);
      FUN_1403b9160(param_2,"\"size\":",7);
      iVar2 = FUN_1403a2a80(puVar3);
      FUN_1403b7b70(param_2,(longlong)iVar2);
      if ((DAT_1416fde48 != 0) && (DAT_1416fde30 != 0)) {
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        local_7c = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN_1405fd080(puVar3,&local_98);
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        FUN_1405fcfc0(puVar3,&local_b8);
        FUN_1403b9160(param_2,"\"memory\":",9);
        FUN_1403b8a80(param_2,"{",&DAT_1413944a3);
        FUN_1403b9160(param_2,"\"table\":",8);
        FUN_1405fb600(param_1,DAT_1416fde48,&local_98,param_2);
        FUN_1403b9160(param_2,"\"components\":",0xd);
        FUN_1405fb600(param_1,DAT_1416fde30,&local_b8,param_2);
        FUN_1403b8c10(param_2,"}");
      }
      FUN_1403b8c10(param_2,"}");
      iVar6 = iVar6 + 1;
    } while (iVar6 != local_c4);
  }
  FUN_1403b8c10(param_2,"]");
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_e8);
}

