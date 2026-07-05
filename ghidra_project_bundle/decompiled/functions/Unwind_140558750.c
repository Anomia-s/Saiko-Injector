/**
 * Function: Unwind@140558750
 * Address:  140558750
 * Signature: undefined Unwind@140558750(void)
 * Body size: 57 bytes
 */


void Unwind_140558750(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4b);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x4a) = uVar1;
  return;
}

