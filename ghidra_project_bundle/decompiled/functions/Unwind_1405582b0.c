/**
 * Function: Unwind@1405582b0
 * Address:  1405582b0
 * Signature: undefined Unwind@1405582b0(void)
 * Body size: 57 bytes
 */


void Unwind_1405582b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x51);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x50) = uVar1;
  return;
}

