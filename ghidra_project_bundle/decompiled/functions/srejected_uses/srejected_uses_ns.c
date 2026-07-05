/**
 * Function: srejected_uses_ns
 * Address:  140b9f7c0
 * Signature: undefined srejected_uses_ns(void)
 * Body size: 732 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void srejected_uses_ns(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  iVar2 = FUN_140be41d0(param_2);
  if (iVar2 != 0) {
    lVar3 = FUN_140be41e0(param_2);
    lVar4 = FUN_140be4200(param_2);
    if (lVar3 == 0) {
      FUN_140c078a0(param_1,"%*sNo Trusted Uses.\n",param_3,&DAT_1413a2ad6);
    }
    else {
      local_b0 = &DAT_1413a2ad6;
      bVar1 = true;
      local_b8 = param_3 + 2;
      FUN_140c078a0(param_1,"%*sTrusted Uses:\n%*s",param_3,&DAT_1413a2ad6);
      local_a8 = 0;
      iVar2 = FUN_140b77980(lVar3);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_140b73bf0(param_1,&DAT_1413a7198);
          }
          uVar5 = FUN_140b77990(lVar3,local_a8);
          FUN_140b96640(local_98,0x50,uVar5,0);
          FUN_140b73bf0(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_140b77980(lVar3);
        } while (local_a8 < iVar2);
      }
      FUN_140b73bf0(param_1,&DAT_1413a7288);
    }
    if (lVar4 == 0) {
      FUN_140c078a0(param_1,"%*sNo Rejected Uses.\n",param_3,&DAT_1413a2ad6);
    }
    else {
      local_b8 = param_3 + 2;
      local_b0 = &DAT_1413a2ad6;
      bVar1 = true;
      FUN_140c078a0(param_1,"%*sRejected Uses:\n%*s",param_3,&DAT_1413a2ad6);
      local_a8 = 0;
      iVar2 = FUN_140b77980(lVar4);
      if (local_a8 < iVar2) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            FUN_140b73bf0(param_1,&DAT_1413a7198);
          }
          uVar5 = FUN_140b77990(lVar4,local_a8);
          FUN_140b96640(local_98,0x50,uVar5,0);
          FUN_140b73bf0(param_1,local_98);
          local_a8 = local_a8 + 1;
          iVar2 = FUN_140b77980(lVar4);
        } while (local_a8 < iVar2);
      }
      FUN_140b73bf0(param_1,&DAT_1413a7288);
    }
    uVar5 = local_a0;
    puVar6 = (undefined1 *)FUN_140be4420(local_a0,&local_a8);
    if (puVar6 != (undefined1 *)0x0) {
      local_b8 = local_a8;
      local_b0 = puVar6;
      FUN_140c078a0(param_1,"%*sAlias: %.*s\n",param_3,&DAT_1413a2ad6);
    }
    lVar3 = FUN_140be4460(uVar5,&local_a4);
    if (lVar3 != 0) {
      FUN_140c078a0(param_1,"%*sKey Id: ",param_3,&DAT_1413a2ad6);
      local_a8 = 0;
      if (0 < local_a4) {
        do {
          pcVar7 = "";
          if (local_a8 != 0) {
            pcVar7 = ":";
          }
          FUN_140c078a0(param_1,"%s%02X",pcVar7,*(undefined1 *)(local_a8 + lVar3));
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_a4);
      }
      FUN_140b73860(param_1,&DAT_1413a7288,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

