/**
 * Function: Unwind@1401c1c80
 * Address:  1401c1c80
 * Signature: undefined Unwind@1401c1c80(void)
 * Body size: 133 bytes
 */


void Unwind_1401c1c80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb0);
  if (*(int *)(lVar1 + 0x88) == 0) {
    plVar2 = (longlong *)**(longlong **)(param_2 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x70));
      **(undefined8 **)(param_2 + 0xa8) = 0;
    }
    FUN_140003680(*(undefined8 *)(param_2 + 0x90));
    FUN_140004b30(lVar1);
    FUN_140004b30(*(undefined8 *)(param_2 + 0xa0));
    FUN_140003680(*(undefined8 *)(param_2 + 0x98));
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}

