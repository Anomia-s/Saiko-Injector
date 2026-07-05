/**
 * Function: Unwind@140087e30
 * Address:  140087e30
 * Signature: undefined Unwind@140087e30(void)
 * Body size: 69 bytes
 */


void Unwind_140087e30(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x268);
  QString::~QString((QString *)(param_2 + 0x80));
  *(longlong *)(param_2 + 0x1a8) = param_2 + 0x238;
  *(undefined1 *)(param_2 + 0x277) = uVar1;
  return;
}

