/**
 * Function: graphics_queue
 * Address:  14022c790
 * Signature: undefined8 __thiscall graphics_queue(void * this)
 * Body size: 123 bytes
 */


undefined8 __thiscall graphics_queue(void *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  FUN_1401b1e50();
  uVar3 = FUN_1401b81c0(0x70);
  tracyd3d12_failed_to_get_timestamp_frequency(uVar3,uVar1,uVar2);
  *(undefined8 *)((longlong)this + 0x248) = uVar3;
  FUN_14022c810(uVar3,"Graphics Queue",0xe);
  if (*(byte *)(DAT_14151e360 + 0x39) < 5) {
    FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140df5548);
  }
  return *(undefined8 *)((longlong)this + 0x248);
}

