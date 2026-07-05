/**
 * Function: cant_add_task_were_shutting_down
 * Address:  14044b760
 * Signature: undefined cant_add_task_were_shutting_down(void)
 * Body size: 342 bytes
 */


ulonglong cant_add_task_were_shutting_down(code *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  if (param_3 != (undefined1 *)0x0) {
    lVar3 = FUN_14015d2e0();
    lVar4 = FUN_1401381d0(DAT_1416f19b0);
    if (lVar3 == lVar4) {
      uVar1 = (*param_1)(param_2);
      *param_3 = uVar1;
      uVar5 = CONCAT71(uVar7,1);
      goto LAB_14044b8aa;
    }
  }
  iVar2 = FUN_140106170(&DAT_1416f19b8);
  if (iVar2 != 0) {
    uVar5 = FUN_1400fbed0("Can\'t add task, we\'re shutting down");
    return uVar5;
  }
  puVar6 = (undefined8 *)FUN_140160c70(1,0x30);
  if (puVar6 == (undefined8 *)0x0) {
LAB_14044b8a8:
    uVar5 = 0;
  }
  else {
    *puVar6 = param_1;
    puVar6[1] = param_2;
    if (param_3 != (undefined1 *)0x0) {
      lVar3 = uapi_ms_win_core_synch_l1_2_0dll(0);
      puVar6[3] = lVar3;
      if (lVar3 == 0) {
        FUN_140160cf0(puVar6);
        goto LAB_14044b8a8;
      }
    }
    puVar6[5] = 0;
    FUN_1401552a0(DAT_1416f19c0);
    lVar3 = FUN_140106180(&DAT_1416f19c8);
    if (lVar3 == 0) {
      FUN_140106150(&DAT_1416f19c8,puVar6);
    }
    else {
      do {
        lVar4 = lVar3;
        lVar3 = *(longlong *)(lVar4 + 0x28);
      } while (lVar3 != 0);
      *(undefined8 **)(lVar4 + 0x28) = puVar6;
    }
    FUN_140134300(DAT_1416f19d0);
    FUN_1401552c0(DAT_1416f19c0);
    uVar5 = CONCAT71(uVar7,1);
    if (param_3 != (undefined1 *)0x0) {
      FUN_140138360(puVar6[3]);
      FUN_140158210(puVar6[3]);
      *param_3 = *(undefined1 *)(puVar6 + 2);
      if (puVar6[4] != 0) {
        FUN_1400fbed0(&DAT_141339891);
        FUN_140160cf0(puVar6[4]);
      }
      FUN_140160cf0(puVar6);
    }
  }
LAB_14044b8aa:
  return uVar5 & 0xffffffff;
}

