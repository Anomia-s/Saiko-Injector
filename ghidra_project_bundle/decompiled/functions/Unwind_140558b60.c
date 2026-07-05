/**
 * Function: Unwind@140558b60
 * Address:  140558b60
 * Signature: undefined Unwind@140558b60(void)
 * Body size: 57 bytes
 */


void Unwind_140558b60(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x49);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x48) = uVar1;
  return;
}

