// Unwind@140009f50 @ 140009f50

void Unwind_140009f50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  FUN_14000a440(lVar1 + 0x437f8);
  if (*(int *)(lVar1 + 0x43700) == 0) {
    FUN_14000a4b0(*(undefined8 *)(param_2 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


