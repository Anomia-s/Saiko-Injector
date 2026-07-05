/**
 * Function: Unwind@140555290
 * Address:  140555290
 * Signature: undefined Unwind@140555290(void)
 * Body size: 57 bytes
 */


void Unwind_140555290(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x7b);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x7a) = uVar1;
  return;
}

