/**
 * Function: Unwind@1405560b0
 * Address:  1405560b0
 * Signature: undefined Unwind@1405560b0(void)
 * Body size: 57 bytes
 */


void Unwind_1405560b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6f);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x6e) = uVar1;
  return;
}

