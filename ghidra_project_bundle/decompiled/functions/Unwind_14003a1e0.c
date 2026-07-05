/**
 * Function: Unwind@14003a1e0
 * Address:  14003a1e0
 * Signature: undefined Unwind@14003a1e0(void)
 * Body size: 88 bytes
 */


void Unwind_14003a1e0(undefined8 param_1,longlong param_2)

{
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x48));
  FUN_1400017d0(*(undefined8 *)(param_2 + 0x40));
  FUN_1400019f0(*(undefined8 *)(param_2 + 0x38));
  FUN_14003ab30(*(undefined8 *)(param_2 + 0x30));
  if (*(int *)(*(longlong *)(param_2 + 0x60) + 0x458) == 0) {
    FUN_14000ec60(*(undefined8 *)(param_2 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}

