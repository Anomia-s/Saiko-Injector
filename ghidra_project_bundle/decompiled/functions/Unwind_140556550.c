/**
 * Function: Unwind@140556550
 * Address:  140556550
 * Signature: undefined Unwind@140556550(void)
 * Body size: 57 bytes
 */


void Unwind_140556550(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6b);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x6a) = uVar1;
  return;
}

