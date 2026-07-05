/**
 * Function: Unwind@1405577d0
 * Address:  1405577d0
 * Signature: undefined Unwind@1405577d0(void)
 * Body size: 57 bytes
 */


void Unwind_1405577d0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x5b);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  return;
}

