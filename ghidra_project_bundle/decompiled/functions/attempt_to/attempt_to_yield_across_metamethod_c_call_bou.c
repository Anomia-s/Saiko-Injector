/**
 * Function: attempt_to_yield_across_metamethod_c_call_bou
 * Address:  1406b9dd0
 * Signature: undefined attempt_to_yield_across_metamethod_c_call_bou(void)
 * Body size: 58 bytes
 */


undefined8 attempt_to_yield_across_metamethod_c_call_bou(longlong param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + (longlong)param_2 * -0x10;
    *(undefined1 *)(param_1 + 3) = 1;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"attempt to yield across metamethod/C-call boundary");
}

