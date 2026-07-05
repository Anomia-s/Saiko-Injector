/**
 * Function: Unwind@140555730
 * Address:  140555730
 * Signature: undefined Unwind@140555730(void)
 * Body size: 57 bytes
 */


void Unwind_140555730(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x77);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x76) = uVar1;
  return;
}

