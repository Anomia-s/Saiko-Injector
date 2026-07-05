/**
 * Function: playtest_failed_to_load_snapshot
 * Address:  1400993c0
 * Signature: undefined playtest_failed_to_load_snapshot(void)
 * Body size: 445 bytes
 */


undefined8 playtest_failed_to_load_snapshot(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  char cVar4;
  char *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar2 = (undefined1 *)*param_1;
  puVar1 = (undefined8 *)(puVar2 + 8);
  FUN_140064f50(puVar1,0,0x3f800000);
  if ((puVar2[0x43b68] & 1) == 0) {
    cVar4 = FUN_1402c5430(*(undefined8 *)(puVar2 + 8),*(longlong *)(puVar2 + 0x43ac0),
                          *(longlong *)(puVar2 + 0x43ac8) - *(longlong *)(puVar2 + 0x43ac0),0,0,0);
    if (cVar4 == '\0') {
      plVar3 = *(longlong **)(puVar2 + 0x43b10);
      if (plVar3 != (longlong *)0x0) {
        local_30 = "Playtest: failed to load snapshot.";
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_30);
      }
      FUN_140066930(puVar1);
      *puVar2 = 0;
      plVar3 = *(longlong **)(puVar2 + 0x43b50);
      if (plVar3 != (longlong *)0x0) {
        local_30 = (char *)((ulonglong)local_30 & 0xffffffffffffff00);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_30);
      }
    }
    else {
      if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140de0e30);
      }
      if (*(char *)(param_1 + 1) == '\x01') {
        FUN_1400bb430(*puVar1,DAT_14151f7b8,DAT_14151f7b8,0x20,(longlong)param_1 + 0xc);
      }
      FUN_1400442a0(*(undefined8 *)(puVar2 + 0x318),*(undefined8 *)(puVar2 + 8));
      FUN_140044c20(*(undefined8 *)(puVar2 + 0x318),*(undefined8 *)(puVar2 + 8));
      FUN_1400675a0(puVar1);
      if ((puVar2[0x43b68] & 1) == 0) {
        FUN_140067470(puVar1);
        *puVar2 = 2;
        if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
          FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140de0e58);
        }
        plVar3 = *(longlong **)(puVar2 + 0x43b10);
        if (plVar3 != (longlong *)0x0) {
          local_30 = "Playtest started.";
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_30);
        }
        plVar3 = *(longlong **)(puVar2 + 0x43b50);
        if (plVar3 != (longlong *)0x0) {
          local_30 = (char *)CONCAT71(local_30._1_7_,1);
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_30);
        }
      }
      else {
        FUN_140066930(puVar1);
        *puVar2 = 0;
      }
    }
  }
  else {
    FUN_140066930(puVar1);
  }
  _Cnd_do_broadcast_at_thread_exit();
  thunk_FUN_140b68ba8(param_1,0x30);
  return 0;
}

