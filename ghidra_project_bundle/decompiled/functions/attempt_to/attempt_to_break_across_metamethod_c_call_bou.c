/**
 * Function: attempt_to_break_across_metamethod_c_call_bou
 * Address:  1406b9e10
 * Signature: undefined attempt_to_break_across_metamethod_c_call_bou(void)
 * Body size: 40 bytes
 */


undefined8 attempt_to_break_across_metamethod_c_call_bou(longlong param_1)

{
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)(param_1 + 0x52)) {
    *(undefined1 *)(param_1 + 3) = 6;
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1406c1000(param_1,"attempt to break across metamethod/C-call boundary");
}

