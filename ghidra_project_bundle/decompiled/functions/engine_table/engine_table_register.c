/**
 * Function: engine_table_register
 * Address:  140c5bb80
 * Signature: undefined engine_table_register(void)
 * Body size: 590 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
engine_table_register
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x140c5bb99;
  uVar6 = 0;
  uVar2 = FUN_140b8b770(DAT_1417001c0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*param_1 == 0) {
    uVar2 = FUN_140b91110(FUN_140b78ee0,&LAB_140bc6030);
    lVar3 = FUN_140b91210(uVar2,FUN_140b6c6b0,FUN_140b6c6d0,FUN_140b6c6b0,FUN_140b6c6d0);
    if (lVar3 == 0) goto LAB_140c5bd3e;
    *param_1 = lVar3;
    iVar1 = FUN_140c103a0(param_2);
    if (iVar1 == 0) {
      FUN_140b91240(*param_1);
      *param_1 = 0;
      goto LAB_140c5bd3e;
    }
  }
  while (param_5 != 0) {
    local_38[0] = *param_4;
    param_5 = param_5 + -1;
    puVar4 = (undefined4 *)FUN_140b91690(*param_1,local_38);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_140b8d8d0(0x20,"crypto\\engine\\eng_table.c",0x6a);
      if (puVar4 == (undefined4 *)0x0) goto LAB_140c5bd3e;
      puVar4[6] = 1;
      *puVar4 = *param_4;
      lVar3 = FUN_140b77ab0();
      *(longlong *)(puVar4 + 2) = lVar3;
      if (lVar3 == 0) {
        FUN_140b8d990(puVar4,"crypto\\engine\\eng_table.c",0x71);
        uVar6 = 0;
        goto LAB_140c5bd3e;
      }
      *(undefined8 *)(puVar4 + 4) = 0;
      FUN_140b913d0(*param_1,puVar4);
      puVar5 = (undefined4 *)FUN_140b91690(*param_1,local_38);
      if (puVar5 != puVar4) {
        FUN_140b77c10(*(undefined8 *)(puVar4 + 2));
        FUN_140b8d990(puVar4,"crypto\\engine\\eng_table.c",0x78);
        uVar6 = 0;
        goto LAB_140c5bd3e;
      }
    }
    FUN_140b77fb0(*(undefined8 *)(puVar4 + 2),param_3);
    iVar1 = FUN_140b78340(*(undefined8 *)(puVar4 + 2),param_3);
    if (iVar1 == 0) goto LAB_140c5bd3e;
    puVar4[6] = 0;
    if (param_6 != 0) {
      iVar1 = FUN_140bd2050(param_3);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\engine\\eng_table.c",0x87,"engine_table_register");
        FUN_140b91cc0(0x26,0x6d,0);
        goto LAB_140c5bd3e;
      }
      if (*(longlong *)(puVar4 + 4) != 0) {
        engine_unlocked_finish(*(longlong *)(puVar4 + 4),0);
      }
      *(undefined8 *)(puVar4 + 4) = param_3;
      puVar4[6] = 1;
    }
    param_4 = param_4 + 1;
  }
  uVar6 = 1;
LAB_140c5bd3e:
  FUN_140b8b7a0(DAT_1417001c0);
  return uVar6;
}

