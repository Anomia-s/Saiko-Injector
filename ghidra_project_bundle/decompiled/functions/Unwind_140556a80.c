/**
 * Function: Unwind@140556a80
 * Address:  140556a80
 * Signature: undefined Unwind@140556a80(void)
 * Body size: 57 bytes
 */


void Unwind_140556a80(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x65);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 100) = uVar1;
  return;
}

