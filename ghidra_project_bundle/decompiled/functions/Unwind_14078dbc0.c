/**
 * Function: Unwind@14078dbc0
 * Address:  14078dbc0
 * Signature: undefined Unwind@14078dbc0(void)
 * Body size: 99 bytes
 */


void Unwind_14078dbc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1e8) + *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x328);
  if (lVar1 != *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x330)) {
    *(longlong *)(*(longlong *)(param_2 + 0x210) + 0x330) = lVar1;
  }
  return;
}

